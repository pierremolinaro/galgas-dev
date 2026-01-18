#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("previousChar ()") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_result = GGS_string ("::scanner_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 133)).add_operation (GGS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 133)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6101 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_6101.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6101.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 135)) ;
    enumerator_6101.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 137)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateDefaultSendCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_result = GGS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 154)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 154)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalErrorByDefaultAST temp_0 = this ;
  result_result = GGS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 162)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 162)).add_operation (temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 162)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 162)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalImplicitRuleAST::getter_generateLexicalRuleCode (const GGS_string constinArgument_inScannerClassName,
                                                                        const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_tokenSortedlist var_tokenSortedList_8992 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_8984 ; // Joker input parameter
  GGS_bool joker_9008 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_8984, var_tokenSortedList_8992, joker_9008, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 197)) ;
  result_result = GGS_string::makeEmptyString () ;
  DownEnumerator_tokenSortedlist enumerator_9043 (var_tokenSortedList_8992) ;
  while (enumerator_9043.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 200)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 200)) ;
    result_result.plusAssignOperation(enumerator_9043.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 201)) ;
    result_result.plusAssignOperation(GGS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)) ;
    result_result.plusAssignOperation(GGS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_9043.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)) ;
    result_result.plusAssignOperation(GGS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)) ;
    result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 205)) ;
    enumerator_9043.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalImplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalExplicitRuleAST::getter_generateLexicalRuleCode (const GGS_string constinArgument_inScannerClassName,
                                                                        const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("if (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 222)) ;
  result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 223)) ;
  {
  result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 224)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_10192 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_10192.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10192.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 226)) ;
    enumerator_10192.gotoNextObject () ;
  }
  {
  result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 228)) ;
  }
  result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 229)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalExplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_10604 (temp_0.readProperty_mInstructionList ()) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas", 236)).isValidAndTrue () ;
  if (enumerator_10604.hasCurrentObject () && bool_1) {
    while (enumerator_10604.hasCurrentObject () && bool_1) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_10604.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 237)) ;
      enumerator_10604.gotoNextObject () ;
      if (enumerator_10604.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas", 236)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 106)) ;
  result_result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 107)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 108)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  result_outGeneratedCode = GGS_string ("self.testForInputFromChar (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 118)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 118)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 119)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 120)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 120)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 121)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.testForInputString (").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 129)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", advance: true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 130)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("self.notTestForInputString (") ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 139)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", error: &scanningOk)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 140)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("self.testForInputChar (") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 149)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 149)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 150)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.testForChar_").add_operation (temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 160)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 160)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 218)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 225)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 225)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 231)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("self.previousChar") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 245)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 245)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_11555 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_11555.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_11555.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 247)) ;
    enumerator_11555.gotoNextObject () ;
    if (enumerator_11555.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 248)) ;
    }
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 250)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 288)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 288)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 288)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 288)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalImplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  GGS_tokenSortedlist var_tokenSortedList_17528 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_17520 ; // Joker input parameter
  GGS_bool joker_17544 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_17520, var_tokenSortedList_17528, joker_17544, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 373)) ;
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  DownEnumerator_tokenSortedlist enumerator_17589 (var_tokenSortedList_17528) ;
  while (enumerator_17589.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if scanningOk && self.testForInputString ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 376)) ;
    result_outGeneratedCode.plusAssignOperation(enumerator_17589.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 377)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string (", advance: true) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("  tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)).add_operation (enumerator_17589.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 380)) ;
    enumerator_17589.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalExplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("if scanningOk && (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 391)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 392)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_18472 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_18472.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_18472.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 395)) ;
    enumerator_18472.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)) ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 398)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::method_checkLexicalDefaultAction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  GGS_lexicalSentValueList joker_8232 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mDefaultSentTerminal (), joker_8232, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 200)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalErrorByDefaultAST checkLexicalDefaultAction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::method_checkLexicalDefaultAction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalErrorByDefaultAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 208)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalOrExpressionAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 222)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 223)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCharacterMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCharacterSetMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_lexicalCharacterSetMatchAST temp_1 = this ;
    test_0 = ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ().getter_hasKey (temp_1.readProperty_mCharacterSetName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 237)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas", 237)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterSetMatchAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      appendFixItActions (fixItArray3, EnumFixItKind::fixItReplace, ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ()) ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCharacterSetName ().readProperty_location (), GGS_string ("undefined test function"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 238)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCharacterIntervalMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterIntervalMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalStringMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStringMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 252)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalStringNotMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 259)) ;
  {
  const GGS_lexicalStringNotMatchAST temp_1 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 260)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_11869 ;
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_11869, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_11869.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_11869, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 283)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 284)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 285)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 286)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 283)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                     const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 297)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GGS_string ("type error, a literal character has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 298)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 299)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 300)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 298)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 311)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GGS_string ("type error, a literal character has @uint").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 312)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 313)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 312)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                            const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 325)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("type error, current character value has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 327)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 328)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_14528 ;
  GGS_lexicalTypeEnum var_returnedLexicalFormalType_14559 ;
  GGS_string var_replacementFunctionName_14594 ;
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GGS_bool joker_14622 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_14528, var_returnedLexicalFormalType_14559, var_replacementFunctionName_14594, joker_14622, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 339)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_replacementFunctionName_14594.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFunctionInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GGS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_14594, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 348)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 348)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 348)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_14559.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalFunctionInputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GGS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_14559, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 352)).add_operation (GGS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 353)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 354)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 355)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 352)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_14528.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 359)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 359)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GGS_lexicalFunctionInputArgumentAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 361)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 360)).add_operation (GGS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 361)).add_operation (var_lexicalFormalTypeList_14528.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 363)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 363)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 360)) ;
    }
  }
  const GGS_lexicalFunctionInputArgumentAST temp_12 = this ;
  UpEnumerator_lexicalFunctionFormalArgumentList enumerator_15615 (var_lexicalFormalTypeList_14528) ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_15645 (temp_12.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_15615.hasCurrentObject () && enumerator_15645.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_15645.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_15615.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 367)) ;
    enumerator_15615.gotoNextObject () ;
    enumerator_15645.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_16746 ;
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_16746, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 388)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_16746.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_16746, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 394)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 395)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 396)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 397)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 394)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 408)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GGS_string ("type error, a literal character has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 409)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 410)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 411)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 409)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                   const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 422)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GGS_string ("type error, a literal unsigned value has @uint").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 423)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 424)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 425)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 423)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                           const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 436)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("type error, current character value has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 438)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 439)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                   const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_19408 ;
  GGS_lexicalTypeEnum var_returnedLexicalFormalType_19439 ;
  GGS_string var_replacementFunctionName_19474 ;
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GGS_bool joker_19502 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_19408, var_returnedLexicalFormalType_19439, var_replacementFunctionName_19474, joker_19502, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 450)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_replacementFunctionName_19474.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFunctionInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GGS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_19474, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 459)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 459)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 459)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_19439.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalFunctionInputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GGS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_19439, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 463)).add_operation (GGS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 465)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 466)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 463)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_19408.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 470)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 470)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GGS_lexicalFunctionInputArgumentAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 472)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 471)).add_operation (GGS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 472)).add_operation (var_lexicalFormalTypeList_19408.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 474)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 473)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 474)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 471)) ;
    }
  }
  const GGS_lexicalFunctionInputArgumentAST temp_12 = this ;
  UpEnumerator_lexicalFunctionFormalArgumentList enumerator_20495 (var_lexicalFormalTypeList_19408) ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_20525 (temp_12.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_20495.hasCurrentObject () && enumerator_20525.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_20525.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_20495.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 478)) ;
    enumerator_20495.gotoNextObject () ;
    enumerator_20525.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::method_checkLexicalRule (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_21792 ; // Joker input parameter
  GGS_tokenSortedlist joker_21795 ; // Joker input parameter
  GGS_bool joker_21798 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_21792, joker_21795, joker_21798, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 504)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::method_checkLexicalRule (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 511)) ;
  GGS_lexicalTagMap var_tagMap_22122 = GGS_lexicalTagMap::init (inCompiler COMMA_HERE) ;
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_22142 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_22142.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_22142.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_22122, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 514)) ;
    enumerator_22142.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_4556 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_4556.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GGS_bool (true), enumerator_4556.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 112)) ;
    }
    GGS_lexicalTypeEnum joker_4796 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_4556.current_mAttributeName (HERE), joker_4796, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 113)) ;
    enumerator_4556.gotoNextObject () ;
  }
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  callExtensionMethod_checkLexicalDefaultAction ((cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 115)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                               const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_6309 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_6309.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if (tokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 146)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("  tokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (enumerator_6309.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)).add_operation (GGS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)).add_operation (enumerator_6309.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 149)) ;
    enumerator_6309.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("if tokenCode == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 151)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateSwiftCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 152)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 153)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalStructuredSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                            const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_7518 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_7518.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 172)) ;
    result_result.plusAssignOperation(GGS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_7518.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)).add_operation (GGS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)).add_operation (enumerator_7518.current_mAttributeName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)) ;
    result_result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 174)) ;
    enumerator_7518.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 176)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 177)) ;
  result_result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 178)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 179)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  GGS_lexicalSentValueList joker_3097 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mTerminalName (), joker_3097, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 68)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalDropInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                     const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 88)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 88)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 88)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 88)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalDropInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalDropInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                  const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  result_result = GGS_string ("enterDroppedTerminal (kToken_").add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 106)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 106)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalErrorInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 69)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                      const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalErrorInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                   const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalErrorInstructionAST temp_0 = this ;
  result_result = GGS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)).add_operation (temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalLogInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                    const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) */\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalLogInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalLogInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                 const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                 Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_3922 (temp_0.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_3922.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_3922.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 101)) ;
    GGS_lexicalTagMap var_tagMap_4061 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 102)) ;
    UpEnumerator_lexicalInstructionListAST enumerator_4126 (enumerator_3922.current_mWhileInstructionList (HERE)) ;
    while (enumerator_4126.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4126.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4061, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 104)) ;
      enumerator_4126.gotoNextObject () ;
    }
    enumerator_3922.gotoNextObject () ;
  }
  GGS_lexicalTagMap var_tagMap_4269 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 107)) ;
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_4332 (temp_1.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_4332.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4332.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4269, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 109)) ;
    enumerator_4332.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRepeatInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("while (loop && scanningOk) {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 158)) ;
  }
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_6756 (temp_0.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_6756.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6756.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 161)) ;
    enumerator_6756.gotoNextObject () ;
  }
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_6961 (temp_1.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_6961.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 166)) ;
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_6961.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 167)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 168)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 169)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_7251 (enumerator_6961.current_mWhileInstructionList (HERE)) ;
    while (enumerator_7251.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7251.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 171)) ;
      enumerator_7251.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 173)) ;
    }
    enumerator_6961.gotoNextObject () ;
    if (enumerator_6961.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 175)) ;
    }
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}else{\n  loop = false\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 177)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 180)) ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}\nloop = true\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 181)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRepeatInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRepeatInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                    const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("do {\n") ;
  {
  result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 200)) ;
  }
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_8435 (temp_0.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_8435.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8435.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 203)) ;
    enumerator_8435.gotoNextObject () ;
  }
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_8627 (temp_1.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_8627.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 208)) ;
    result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_8627.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 209)) ;
    result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 210)) ;
    {
    result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 211)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_8861 (enumerator_8627.current_mWhileInstructionList (HERE)) ;
    while (enumerator_8861.hasCurrentObject ()) {
      result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8861.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 213)) ;
      enumerator_8861.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 215)) ;
    }
    enumerator_8627.gotoNextObject () ;
    if (enumerator_8627.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 217)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string ("}else{\n  loop = false ;\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 219)) ;
  {
  result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 222)) ;
  }
  result_result.plusAssignOperation(GGS_string ("}while (loop) ;\nloop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 223)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.method_searchKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 73)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  GGS_lexicalSentValueList joker_3285 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_1.readProperty_mTerminalName (), joker_3285, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 74)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRewindInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                       const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.restoreScanningPoint (locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRewindInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRewindInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                    const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  result_result = GGS_string ("mCurrentLocation = currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 113)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 113)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("mTokenEndLocation = endLocationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 114)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 114)) ;
  const GGS_lexicalRewindInstructionAST temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("mCurrentChar = currentCharForTag_").add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 115)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 115)) ;
  const GGS_lexicalRewindInstructionAST temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("token.mTokenCode = kToken_").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 116)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 116)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 117)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("&self.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 192)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFormalInputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 200)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                          const GGS_lexicalArgumentModeAST constinArgument_inLexicalRoutineFormalArgumentMode,
                                                                                          const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_9021 ;
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_9021, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 217)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_9021.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_9021, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 223)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 224)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 225)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 226)), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 223)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 230)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalAttributeInputOutputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualPassingModeLocation (), GGS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 231)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 const GGS_lexicalArgumentModeAST constinArgument_inLexicalRoutineFormalArgumentMode,
                                                                                 const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 242)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 247)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFormalInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualPassingModeLocation (), GGS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 248)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalRoutineCallInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineCallInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                            GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_10751 ;
  GGS_stringlist var_routineErrorMessageList_10793 ;
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  GGS_bool joker_10821 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalRoutineMessageMap ().method_searchKey (temp_0.readProperty_mRoutineName (), var_lexicalRoutineFormalArgumentList_10751, var_routineErrorMessageList_10793, joker_10821, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 257)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalRoutineCallInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, var_lexicalRoutineFormalArgumentList_10751.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 264)).objectCompare (temp_2.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 264)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalRoutineCallInstructionAST temp_3 = this ;
      const GGS_lexicalRoutineCallInstructionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this lexical routine call names ").add_operation (temp_4.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 266)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 265)).add_operation (GGS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 266)).add_operation (var_lexicalRoutineFormalArgumentList_10751.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 268)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 267)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 268)), fixItArray5  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 265)) ;
    }
  }
  const GGS_lexicalRoutineCallInstructionAST temp_6 = this ;
  UpEnumerator_lexicalRoutineFormalArgumentList enumerator_11327 (var_lexicalRoutineFormalArgumentList_10751) ;
  UpEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_11368 (temp_6.readProperty_mActualArgumentList ()) ;
  while (enumerator_11327.hasCurrentObject () && enumerator_11368.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_11368.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_11327.current_mLexicalFormalArgumentMode (HERE), enumerator_11327.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 272)) ;
    enumerator_11327.gotoNextObject () ;
    enumerator_11368.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalRoutineCallInstructionAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_routineErrorMessageList_10793.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 279)).objectCompare (temp_8.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 279)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalRoutineCallInstructionAST temp_9 = this ;
      const GGS_lexicalRoutineCallInstructionAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this lexical routine call names ").add_operation (temp_10.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 281)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 280)).add_operation (GGS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 281)).add_operation (var_routineErrorMessageList_10793.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 283)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 282)).add_operation (GGS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 283)), fixItArray11  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 280)) ;
    }
  }
  const GGS_lexicalRoutineCallInstructionAST temp_12 = this ;
  UpEnumerator_lstringlist enumerator_12029 (temp_12.readProperty_mErrorMessageList ()) ;
  while (enumerator_12029.hasCurrentObject ()) {
    GGS_lexicalMessageMap_2E_element var_entry_12074 = ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalMessageMap ().readSubscript__3F_searchKey (enumerator_12029.current_mValue (HERE), inCompiler COMMA_HERE) ;
    var_entry_12074.mProperty_mMessageIsUsed = GGS_bool (true) ;
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_replaceKey (var_entry_12074, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 289)) ;
    }
    enumerator_12029.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                            const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 317)).add_operation (GGS_string (" (&scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 317)) ;
  const GGS_lexicalRoutineCallInstructionAST temp_1 = this ;
  UpEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_13571 (temp_1.readProperty_mActualArgumentList ()) ;
  while (enumerator_13571.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateSwiftCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_13571.current_mLexicalRoutineActualArgument (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 319)) ;
    enumerator_13571.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 321)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_result = GGS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 335)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFormalInputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_result = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 342)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRoutineCallInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                         const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_result = GGS_string ("::scanner_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 357)).add_operation (GGS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 357)) ;
  const GGS_lexicalRoutineCallInstructionAST temp_1 = this ;
  UpEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_15268 (temp_1.readProperty_mActualArgumentList ()) ;
  while (enumerator_15268.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_15268.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 359)) ;
    enumerator_15268.gotoNextObject () ;
  }
  const GGS_lexicalRoutineCallInstructionAST temp_2 = this ;
  UpEnumerator_lstringlist enumerator_15420 (temp_2.readProperty_mErrorMessageList ()) ;
  while (enumerator_15420.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (", gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 362)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 362)).add_operation (enumerator_15420.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 362)) ;
    enumerator_15420.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 364)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_4351 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_4351.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_4351.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 114)) ;
    GGS_lexicalTagMap var_tagMap_4493 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 115)) ;
    UpEnumerator_lexicalInstructionListAST enumerator_4558 (enumerator_4351.current_mSelectInstructionList (HERE)) ;
    while (enumerator_4558.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4558.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4493, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 117)) ;
      enumerator_4558.gotoNextObject () ;
    }
    enumerator_4351.gotoNextObject () ;
  }
  GGS_lexicalTagMap var_tagMap_4702 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 120)) ;
  const GGS_lexicalSelectInstructionAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_4765 (temp_1.readProperty_mDefaultInstructionList ()) ;
  while (enumerator_4765.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4765.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4702, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 122)) ;
    enumerator_4765.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSelectInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_6772 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_6772.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 171)) ;
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_6772.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 172)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 173)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 174)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_7065 (enumerator_6772.current_mSelectInstructionList (HERE)) ;
    while (enumerator_7065.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7065.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 176)) ;
      enumerator_7065.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 178)) ;
    }
    enumerator_6772.gotoNextObject () ;
    if (enumerator_6772.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 180)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 183)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_outGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 184)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 185)) ;
      }
      const GGS_lexicalSelectInstructionAST temp_3 = this ;
      UpEnumerator_lexicalInstructionListAST enumerator_7488 (temp_3.readProperty_mDefaultInstructionList ()) ;
      while (enumerator_7488.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7488.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 187)) ;
        enumerator_7488.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 189)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 191)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalSelectInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_8095 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 200)).isValidAndTrue () ;
  if (enumerator_8095.hasCurrentObject () && bool_1) {
    while (enumerator_8095.hasCurrentObject () && bool_1) {
      UpEnumerator_lexicalInstructionListAST enumerator_8180 (enumerator_8095.current_mSelectInstructionList (HERE)) ;
      bool bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 201)).isValidAndTrue () ;
      if (enumerator_8180.hasCurrentObject () && bool_2) {
        while (enumerator_8180.hasCurrentObject () && bool_2) {
          result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_8180.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 202)) ;
          enumerator_8180.gotoNextObject () ;
          if (enumerator_8180.hasCurrentObject ()) {
            bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 201)).isValidAndTrue () ;
          }
        }
      }
      enumerator_8095.gotoNextObject () ;
      if (enumerator_8095.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 200)).isValidAndTrue () ;
      }
    }
  }
  const GGS_lexicalSelectInstructionAST temp_3 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_8328 (temp_3.readProperty_mDefaultInstructionList ()) ;
  bool bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 205)).isValidAndTrue () ;
  if (enumerator_8328.hasCurrentObject () && bool_4) {
    while (enumerator_8328.hasCurrentObject () && bool_4) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_8328.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 206)) ;
      enumerator_8328.gotoNextObject () ;
      if (enumerator_8328.hasCurrentObject ()) {
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

GGS_string cPtr_lexicalSelectInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                    const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_8796 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_8796.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 220)) ;
    result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_8796.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 221)) ;
    result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 222)) ;
    {
    result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 223)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_9033 (enumerator_8796.current_mSelectInstructionList (HERE)) ;
    while (enumerator_9033.hasCurrentObject ()) {
      result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_9033.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 225)) ;
      enumerator_9033.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 227)) ;
    }
    enumerator_8796.gotoNextObject () ;
    if (enumerator_8796.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 229)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 232)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_result.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 233)) ;
      {
      result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 234)) ;
      }
      const GGS_lexicalSelectInstructionAST temp_3 = this ;
      UpEnumerator_lexicalInstructionListAST enumerator_9403 (temp_3.readProperty_mDefaultInstructionList ()) ;
      while (enumerator_9403.hasCurrentObject ()) {
        result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_9403.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 236)) ;
        enumerator_9403.gotoNextObject () ;
      }
      {
      result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 238)) ;
      }
    }
  }
  result_result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 240)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  GGS_lexicalSentValueList joker_3100 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mSentTerminal (), joker_3100, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 66)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                           const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalSimpleSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                        const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_result = GGS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 104)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 104)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 105)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalTagInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalTagInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.setter_insertKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 68)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalTagInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                    const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalTagInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("let locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 89)).add_operation (GGS_string (" = self.savedScanningPoint ()\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 89)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalTagInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalTagInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                 const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTagInstructionAST temp_0 = this ;
  const GGS_lexicalTagInstructionAST temp_1 = this ;
  const GGS_lexicalTagInstructionAST temp_2 = this ;
  result_result = GGS_string ("const LocationInSource currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (GGS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (GGS_string ("const LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 107)).add_operation (GGS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 107)).add_operation (GGS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 107)).add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 108)).add_operation (GGS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 108)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalWarningInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                        GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalWarningInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 68)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalWarningInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                        const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalWarningInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalWarningInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                     const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalWarningInstructionAST temp_0 = this ;
  result_result = GGS_string ("lexicalWarning (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)).add_operation (temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas", 187)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                   const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionMap var_boolOptionMap_7641 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_commandLineOptionMap var_uintOptionMap_7691 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_commandLineOptionMap var_stringOptionMap_7741 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_commandLineOptionMap var_stringListOptionMap_7793 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_optionNameSet_7827 = GGS_stringset::class_func_emptySet (SOURCE_FILE ("optionCompilation.galgas", 205)) ;
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  UpEnumerator_commandLineOptionListAST enumerator_7888 (temp_0.readProperty_mOptions ()) ;
  while (enumerator_7888.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_optionNameSet_7827.getter_hasKey (enumerator_7888.current (HERE).readProperty_mOptionInternalName ().readProperty_string () COMMA_SOURCE_FILE ("optionCompilation.galgas", 207)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7888.current (HERE).readProperty_mOptionInternalName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_7888.current (HERE).readProperty_mOptionInternalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 209)).add_operation (GGS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 209)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas", 208)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, enumerator_7888.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          var_boolOptionMap_7641.setter_insertKey (enumerator_7888.current (HERE).readProperty_mOptionInternalName (), enumerator_7888.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7888.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7888.current (HERE).readProperty_mOptionComment ().readProperty_string (), GGS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 212)) ;
          }
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_7888.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 219)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_7888.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas", 220)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::equal, enumerator_7888.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            {
            GGS_string temp_7 ;
            const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, enumerator_7888.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              temp_7 = GGS_string ("0") ;
            }else if (GalgasBool::boolFalse == test_8) {
              temp_7 = enumerator_7888.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string () ;
            }
            var_uintOptionMap_7691.setter_insertKey (enumerator_7888.current (HERE).readProperty_mOptionInternalName (), enumerator_7888.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7888.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7888.current (HERE).readProperty_mOptionComment ().readProperty_string (), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 224)) ;
            }
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::equal, enumerator_7888.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 231)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_7888.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas", 232)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_7888.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              {
              var_stringOptionMap_7741.setter_insertKey (enumerator_7888.current (HERE).readProperty_mOptionInternalName (), enumerator_7888.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7888.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7888.current (HERE).readProperty_mOptionComment ().readProperty_string (), enumerator_7888.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 236)) ;
              }
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::equal, enumerator_7888.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 243)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_7888.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas", 244)) ;
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              test_14 = GGS_bool (ComparisonKind::equal, enumerator_7888.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("stringlist"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                {
                var_stringListOptionMap_7793.setter_insertKey (enumerator_7888.current (HERE).readProperty_mOptionInternalName (), enumerator_7888.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7888.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7888.current (HERE).readProperty_mOptionComment ().readProperty_string (), enumerator_7888.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 248)) ;
                }
                GalgasBool test_15 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_15) {
                  test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_7888.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 255)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_15) {
                    GenericArray <FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (enumerator_7888.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @stringlist option cannot accept default value"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas", 256)) ;
                  }
                }
              }
            }
            if (GalgasBool::boolFalse == test_14) {
              GenericArray <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_7888.current (HERE).readProperty_mOptionTypeName ().readProperty_location (), GGS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray17  COMMA_SOURCE_FILE ("optionCompilation.galgas", 260)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_7827.plusPlusAssignOperation (enumerator_7888.current (HERE).readProperty_mOptionInternalName ().readProperty_string ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 263)) ;
    enumerator_7888.gotoNextObject () ;
  }
  {
  const GGS_optionComponentDeclarationAST temp_18 = this ;
  const GGS_optionComponentDeclarationAST temp_19 = this ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_18.readProperty_mOptionComponentName (), temp_19.readProperty_isPredefined (), var_boolOptionMap_7641, var_uintOptionMap_7691, var_stringOptionMap_7741, var_stringListOptionMap_7793, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 266)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string /* constinArgument_inProductDirectory */,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_11421 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 288)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11421, var_nameForUsefulness_11421, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 289)) ;
  }
  GGS_bool var_optionIsPredefined_11709 ;
  GGS_commandLineOptionMap var_boolOptionMap_11761 ;
  GGS_commandLineOptionMap var_uintOptionMap_11808 ;
  GGS_commandLineOptionMap var_stringOptionMap_11855 ;
  GGS_commandLineOptionMap var_stringListOptionMap_11904 ;
  const GGS_optionComponentDeclarationAST temp_1 = this ;
  constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionIsPredefined_11709, var_boolOptionMap_11761, var_uintOptionMap_11808, var_stringOptionMap_11855, var_stringListOptionMap_11904, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 291)) ;
  GGS_commandLineOptionSortedList var_boolOptionSortedList_11988 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12035 (var_boolOptionMap_11761) ;
  while (enumerator_12035.hasCurrentObject ()) {
    var_boolOptionSortedList_11988.addAssignOperation (enumerator_12035.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12035.current (HERE).readProperty_mOptionChar (), enumerator_12035.current (HERE).readProperty_mOptionString (), enumerator_12035.current (HERE).readProperty_mComment (), enumerator_12035.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 302)) ;
    enumerator_12035.gotoNextObject () ;
  }
  GGS_commandLineOptionSortedList var_uintOptionSortedList_12278 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12325 (var_uintOptionMap_11808) ;
  while (enumerator_12325.hasCurrentObject ()) {
    var_uintOptionSortedList_12278.addAssignOperation (enumerator_12325.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12325.current (HERE).readProperty_mOptionChar (), enumerator_12325.current (HERE).readProperty_mOptionString (), enumerator_12325.current (HERE).readProperty_mComment (), enumerator_12325.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 311)) ;
    enumerator_12325.gotoNextObject () ;
  }
  GGS_commandLineOptionSortedList var_stringOptionSortedList_12568 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12617 (var_stringOptionMap_11855) ;
  while (enumerator_12617.hasCurrentObject ()) {
    var_stringOptionSortedList_12568.addAssignOperation (enumerator_12617.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12617.current (HERE).readProperty_mOptionChar (), enumerator_12617.current (HERE).readProperty_mOptionString (), enumerator_12617.current (HERE).readProperty_mComment (), enumerator_12617.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 320)) ;
    enumerator_12617.gotoNextObject () ;
  }
  GGS_commandLineOptionSortedList var_stringListOptionSortedList_12864 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12917 (var_stringListOptionMap_11904) ;
  while (enumerator_12917.hasCurrentObject ()) {
    var_stringListOptionSortedList_12864.addAssignOperation (enumerator_12917.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12917.current (HERE).readProperty_mOptionChar (), enumerator_12917.current (HERE).readProperty_mOptionString (), enumerator_12917.current (HERE).readProperty_mComment (), enumerator_12917.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 329)) ;
    enumerator_12917.gotoNextObject () ;
  }
  const GGS_optionComponentDeclarationAST temp_2 = this ;
  const GGS_optionComponentDeclarationAST temp_3 = this ;
  const GGS_optionComponentDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("option ").add_operation (temp_2.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 338)), GGS_optionComponentForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 341)), var_optionIsPredefined_11709, temp_4.readProperty_mOptionComponentName ().readProperty_string (), var_boolOptionSortedList_11988, var_uintOptionSortedList_12278, var_stringOptionSortedList_12568, var_stringListOptionSortedList_12864, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 337)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_optionComponentForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_optionComponentForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mIsPredefined () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_optionComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  const GGS_optionComponentForGeneration temp_0 = this ;
  GGS_headerKind temp_1 ;
  const GalgasBool test_2 = temp_0.readProperty_mIsPredefined ().boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("optionCompilation.galgas", 376)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 376)) ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outHeader = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_optionComponentForGeneration temp_2 = this ;
    const GGS_optionComponentForGeneration temp_3 = this ;
    const GGS_optionComponentForGeneration temp_4 = this ;
    const GGS_optionComponentForGeneration temp_5 = this ;
    const GGS_optionComponentForGeneration temp_6 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.readProperty_mOptionComponentName (), temp_3.readProperty_mBoolOptionSortedList (), temp_4.readProperty_mUIntOptionSortedList (), temp_5.readProperty_mStringOptionSortedList (), temp_6.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 386))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outImplementation = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_optionComponentForGeneration temp_2 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 406))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 406)) ;
    const GGS_optionComponentForGeneration temp_3 = this ;
    const GGS_optionComponentForGeneration temp_4 = this ;
    const GGS_optionComponentForGeneration temp_5 = this ;
    const GGS_optionComponentForGeneration temp_6 = this ;
    const GGS_optionComponentForGeneration temp_7 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.readProperty_mOptionComponentName (), temp_4.readProperty_mBoolOptionSortedList (), temp_5.readProperty_mUIntOptionSortedList (), temp_6.readProperty_mStringOptionSortedList (), temp_7.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 407))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                    GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                    GGS_stringlist & ioArgument_ioSwiftAppProductFileList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_bool test_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("optionCompilation.galgas", 426)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_1.boolEnum ()) {
      const GGS_optionComponentForGeneration temp_2 = this ;
      test_1 = temp_2.readProperty_mIsPredefined ().operator_not (SOURCE_FILE ("optionCompilation.galgas", 426)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionComponentForGeneration temp_3 = this ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 465)).add_operation (GGS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 465))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 465)) ;
      const GGS_optionComponentForGeneration temp_4 = this ;
      ioArgument_ioSwiftAppProductFileList.addAssignOperation (GGS_string ("option-").add_operation (temp_4.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 466)).add_operation (GGS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 466))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 466)) ;
      {
      const GGS_optionComponentForGeneration temp_5 = this ;
      const GGS_optionComponentForGeneration temp_6 = this ;
      const GGS_optionComponentForGeneration temp_7 = this ;
      const GGS_optionComponentForGeneration temp_8 = this ;
      const GGS_optionComponentForGeneration temp_9 = this ;
      const GGS_optionComponentForGeneration temp_10 = this ;
      const GGS_optionComponentForGeneration temp_11 = this ;
      GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("option-").add_operation (temp_5.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 469)).add_operation (GGS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 469)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), GGS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (inCompiler, GGS_string ("option-").add_operation (temp_6.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 474)).add_operation (GGS_string ("-swift-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 474)), temp_7.readProperty_mOptionComponentName (), temp_8.readProperty_mBoolOptionSortedList (), temp_9.readProperty_mUIntOptionSortedList (), temp_10.readProperty_mStringOptionSortedList (), temp_11.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 473))), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 467)) ;
      }
      const GGS_optionComponentForGeneration temp_12 = this ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_12.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 486)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 486))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 486)) ;
      {
      const GGS_optionComponentForGeneration temp_13 = this ;
      const GGS_optionComponentForGeneration temp_14 = this ;
      const GGS_optionComponentForGeneration temp_15 = this ;
      const GGS_optionComponentForGeneration temp_16 = this ;
      const GGS_optionComponentForGeneration temp_17 = this ;
      const GGS_optionComponentForGeneration temp_18 = this ;
      const GGS_optionComponentForGeneration temp_19 = this ;
      GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("option-").add_operation (temp_13.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 490)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 490)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), GGS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftUI (inCompiler, GGS_string ("option-").add_operation (temp_14.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 495)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 495)), temp_15.readProperty_mOptionComponentName (), temp_16.readProperty_mBoolOptionSortedList (), temp_17.readProperty_mUIntOptionSortedList (), temp_18.readProperty_mStringOptionSortedList (), temp_19.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 494))), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 488)) ;
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

GGS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (Compiler * /* inCompiler */,
                                                                               const GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                               const GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_409_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_409 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_409.hasCurrentObject ()) {
      result.appendString ("extern BoolCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_409.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_409.gotoNextObject () ;
      index_409_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_972_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_972 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_972.hasCurrentObject ()) {
      result.appendString ("extern UIntCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_972.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_972.gotoNextObject () ;
      index_972_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1537_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1537 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_1537.hasCurrentObject ()) {
      result.appendString ("extern StringCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1537.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_1537.gotoNextObject () ;
      index_1537_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_2109_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2109 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2109.hasCurrentObject ()) {
      result.appendString ("extern StringListCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2109.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_2109.gotoNextObject () ;
      index_2109_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (Compiler * /* inCompiler */,
                                                                                         const GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                         const GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_408_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_408 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
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
      enumerator_408.gotoNextObject () ;
      index_408_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1389_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1389 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
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
      enumerator_1389.gotoNextObject () ;
      index_1389_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_2437_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2437 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
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
      enumerator_2437.gotoNextObject () ;
      index_2437_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_3533_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_3533 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
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
      enumerator_3533.gotoNextObject () ;
      index_3533_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftCocoa'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (Compiler * inCompiler,
                                                                                         const GGS_string & /* in_OPTION_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                         const GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                         const GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nimport Foundation\n\n//--------------------------------------------------------------------------------------------------\n\nfunc enterOptionsFor_") ;
  result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" () -> [SWIFT_CommandLineOption] {\n  var array = [SWIFT_CommandLineOption] ()\n") ;
  GGS_uint index_475_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_475 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_475.hasCurrentObject ()) {
      result.appendString ("  array.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (",\n    type: .bool,\n    identifier: ") ;
      result.appendString (enumerator_475.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_475.current_mOptionChar (HERE).objectCompare (GGS_char (utf32 (0)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString (GGS_string ("\"\"").stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (GGS_string ("\"").add_operation (enumerator_475.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 15)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 15)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 15)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_475.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_475.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 17)).stringValue ()) ;
      result.appendString ("\n  ))\n") ;
      enumerator_475.gotoNextObject () ;
      index_475_.increment () ;
    }
  }
  GGS_uint index_1101_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1101 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_1101.hasCurrentObject ()) {
      result.appendString ("  array.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (",\n    type: .uint,\n    identifier: ") ;
      result.appendString (enumerator_1101.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_1101.current_mOptionChar (HERE).objectCompare (GGS_char (utf32 (0)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString (GGS_string ("\"\"").stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (GGS_string ("\"").add_operation (enumerator_1101.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 25)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 25)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 25)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_1101.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_1101.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 27)).stringValue ()) ;
      result.appendString ("\n  ))\n") ;
      enumerator_1101.gotoNextObject () ;
      index_1101_.increment () ;
    }
  }
  GGS_uint index_1729_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1729 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_1729.hasCurrentObject ()) {
      result.appendString ("  array.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 32)).stringValue ()) ;
      result.appendString (",\n    type: .string,\n    identifier: ") ;
      result.appendString (enumerator_1729.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 34)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1729.current_mOptionChar (HERE).objectCompare (GGS_char (utf32 (0)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString (GGS_string ("\"\"").stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (GGS_string ("\"").add_operation (enumerator_1729.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 35)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 35)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_1729.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_1729.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 37)).stringValue ()) ;
      result.appendString ("\n  ))\n") ;
      enumerator_1729.gotoNextObject () ;
      index_1729_.increment () ;
    }
  }
  GGS_uint index_2364_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2364 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2364.hasCurrentObject ()) {
      result.appendString ("  array.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 42)).stringValue ()) ;
      result.appendString (",\n    type: .stringList,\n    identifier: ") ;
      result.appendString (enumerator_2364.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_2364.current_mOptionChar (HERE).objectCompare (GGS_char (utf32 (0)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString (GGS_string ("\"\"").stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (GGS_string ("\"").add_operation (enumerator_2364.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 45)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 45)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 45)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_2364.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_2364.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 47)).stringValue ()) ;
      result.appendString ("\n  ))\n") ;
      enumerator_2364.gotoNextObject () ;
      index_2364_.increment () ;
    }
  }
  result.appendString ("  array.append (SWIFT_CommandLineOption (\n    domainName: \"galgas_cli_options\",\n    type: .bool,\n    identifier: \"quiet_output\",\n    commandChar: \"q\",\n    commandString: \"quiet\",\n    comment: \"Quiet output\"\n  ))\n  return array\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftUI'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftUI (Compiler * inCompiler,
                                                                                      const GGS_string & /* in_OPTION_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                      const GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                      const GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nimport SwiftUI\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let SELECTED_COMPILER_TOOL_INDEX_PREFKEY = \"selected.compiler.tool.index\"\n") ;
  GGS_uint index_367_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_367 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_367.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_367.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 10)).add_operation (enumerator_367.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 10)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 10)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_367.gotoNextObject () ;
      index_367_.increment () ;
    }
  }
  GGS_uint index_578_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_578 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_578.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_578.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 13)).add_operation (enumerator_578.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 13)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 13)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_578.gotoNextObject () ;
      index_578_.increment () ;
    }
  }
  GGS_uint index_791_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_791 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_791.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_791.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 16)).add_operation (enumerator_791.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 16)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 16)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_791.gotoNextObject () ;
      index_791_.increment () ;
    }
  }
  GGS_uint index_1009_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1009 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_1009.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_1009.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 19)).add_operation (enumerator_1009.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 19)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 19)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_1009.gotoNextObject () ;
      index_1009_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//   Options View\n//--------------------------------------------------------------------------------------------------\n\nstruct OptionView : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mCompilerTools : [CompilerTool] = compilerTools ()\n  @AppStorage(SELECTED_COMPILER_TOOL_INDEX_PREFKEY) private var mSelectedCompilerIndex = 0\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @AppStorage(\"prefix.by.time.utility\") private var mPrefixByTimeUtility = false\n  @State private var mCommandLine = compilerCommandExplained ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Bool options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_2240_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2240 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2240.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_2240.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_2240.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : Bool = ") ;
      result.appendString (enumerator_2240.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2240.gotoNextObject () ;
      index_2240_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // UInt options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_2679_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2679 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2679.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_2679.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_2679.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : UInt = ") ;
      result.appendString (enumerator_2679.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2679.gotoNextObject () ;
      index_2679_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // String options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3122_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_3122 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_3122.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_3122.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_3122.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : String = ") ;
      result.appendString (enumerator_3122.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_3122.gotoNextObject () ;
      index_3122_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // String list options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3618_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_3618 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_3618.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_3618.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_3618.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : [String] = ") ;
      result.appendString (enumerator_3618.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 63)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_3618.gotoNextObject () ;
      index_3618_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Body\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @ViewBuilder var body : some View {\n    VStack {\n      HStack {\n        Picker(\"Compiler\", selection: self.$mSelectedCompilerIndex) {\n          ForEach (self.mCompilerTools, id: \\.id) { tool in\n            Text (tool.url.lastPathComponent).tag (tool.id)\n          }\n        }.pickerStyle (.automatic)\n        Toggle (\"Prefix by 'time' utility\", isOn: self.$mPrefixByTimeUtility)\n        Spacer ()\n      }\n      ScrollView {\n        VStack (alignment: .leading) {\n") ;
  GGS_uint index_4559_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_4559 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_4559.hasCurrentObject ()) {
      result.appendString ("          Toggle (") ;
      result.appendString (enumerator_4559.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 83)).stringValue ()) ;
      result.appendString (", isOn: self.$") ;
      result.appendString (enumerator_4559.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_4559.gotoNextObject () ;
      index_4559_.increment () ;
    }
  }
  GGS_uint index_4778_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_4778 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_4778.hasCurrentObject ()) {
      result.appendString ("          HStack { Text (") ;
      result.appendString (enumerator_4778.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 86)).stringValue ()) ;
      result.appendString (") ; TextField (\"\", value: self.$") ;
      result.appendString (enumerator_4778.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (", format: .number.precision (.fractionLength (0)))\n") ;
      enumerator_4778.gotoNextObject () ;
      index_4778_.increment () ;
    }
  }
  GGS_uint index_5073_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_5073 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_5073.hasCurrentObject ()) {
      result.appendString ("          HStack { Text (") ;
      result.appendString (enumerator_5073.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (") ; TextField (\"\", text: self.$") ;
      result.appendString (enumerator_5073.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (") }\n") ;
      enumerator_5073.gotoNextObject () ;
      index_5073_.increment () ;
    }
  }
  GGS_uint index_5325_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_5325 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_5325.hasCurrentObject ()) {
      result.appendString ("          HStack { Text (") ;
      result.appendString (enumerator_5325.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 92)).stringValue ()) ;
      result.appendString (") ; TextField (\"\", text: self.$") ;
      result.appendString (enumerator_5325.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_5325.gotoNextObject () ;
      index_5325_.increment () ;
    }
  }
  result.appendString ("        }.padding ()\n      }.background (.white)\n      HStack { Text (\"Build Command\") ; Spacer () }\n      TextEditor (text: .constant (self.mCommandLine))\n      .font (.system (size: 12).monospaced())\n      .frame (height: 64)\n    }.padding ()\n    .onReceive (NotificationCenter.default.publisher (for: UserDefaults.didChangeNotification)) { _ in\n      self.mCommandLine = compilerCommandExplained ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\nprivate func compilerCommandExplained () -> String {\n  let command : CommandLineToolInvocation = commandLineToolInvocation ()\n  var result = command.tool.lastPathComponent\n  for arg in command.arguments {\n    result += \" \" + arg\n  }\n  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstruct CommandLineToolInvocation {\n  let tool : URL\n  let arguments : [String]\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc commandLineToolInvocation () -> CommandLineToolInvocation {\n  let ud = UserDefaults.standard\n  let compilerTools : [CompilerTool] = compilerTools ()\n  let selectedCompilerIndex : Int = ud.integer (forKey: SELECTED_COMPILER_TOOL_INDEX_PREFKEY)\n  let tool = compilerTools [selectedCompilerIndex].url\n  var arguments = [String] ()\n") ;
  GGS_uint index_7044_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_7044 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_7044.hasCurrentObject ()) {
      result.appendString ("  if ud.bool (forKey: ") ;
      result.appendString (enumerator_7044.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) {\n    arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_7044.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 138)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (")\n  }\n") ;
      enumerator_7044.gotoNextObject () ;
      index_7044_.increment () ;
    }
  }
  GGS_uint index_7304_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_7304 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_7304.hasCurrentObject ()) {
      result.appendString ("  do{\n    let v : Int = ud.integer (forKey: ") ;
      result.appendString (enumerator_7304.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY)\n    if v != ") ;
      result.appendString (enumerator_7304.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString (" {\n      arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_7304.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 145)).add_operation (GGS_string ("="), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 145)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 145)).stringValue ()) ;
      result.appendString (" + String (v))\n    }\n  }\n") ;
      enumerator_7304.gotoNextObject () ;
      index_7304_.increment () ;
    }
  }
  GGS_uint index_7668_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_7668 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_7668.hasCurrentObject ()) {
      result.appendString ("  do{\n    let v : String = ud.string (forKey: ") ;
      result.appendString (enumerator_7668.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) \?\? \"\"\n    if v != ") ;
      result.appendString (enumerator_7668.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 152)).stringValue ()) ;
      result.appendString (" {\n      arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_7668.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 153)).add_operation (GGS_string ("="), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 153)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 153)).stringValue ()) ;
      result.appendString (" + v)\n    }\n  }\n") ;
      enumerator_7668.gotoNextObject () ;
      index_7668_.increment () ;
    }
  }
  GGS_uint index_8077_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_8077 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_8077.hasCurrentObject ()) {
      result.appendString ("  do{\n    let v : String = ud.string (forKey: ") ;
      result.appendString (enumerator_8077.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) \?\? \"\"\n    if v != ") ;
      result.appendString (enumerator_8077.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 160)).stringValue ()) ;
      result.appendString (" {\n      arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_8077.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 161)).add_operation (GGS_string ("="), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 161)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 161)).stringValue ()) ;
      result.appendString (" + v)\n    }\n  }\n") ;
      enumerator_8077.gotoNextObject () ;
      index_8077_.increment () ;
    }
  }
  result.appendString ("  return CommandLineToolInvocation (tool: tool, arguments: arguments)\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const GGS_galgasGUIComponentListAST constinArgument_inGuiComponentListAST,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GGS_optionComponentMapForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_galgasGUIComponentListAST enumerator_13880 (constinArgument_inGuiComponentListAST) ;
  while (enumerator_13880.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis_3F__3F__26_ (enumerator_13880.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 416)) ;
    }
    enumerator_13880.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const GGS_galgasGUIComponentListAST_2E_element constinArgument_inGUIComponentAST,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_string ().objectCompare (GGS_string ("cocoa"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_location (), GGS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 430)) ;
    }
  }
  GGS_guiAnalysisContext var_context_14618 = GGS_guiAnalysisContext::init (inCompiler COMMA_HERE) ;
  var_context_14618.mProperty_mProjectIndexingDescriptorList = constinArgument_inGUIComponentAST.readProperty_mProjectIndexingDescriptorList () ;
  UpEnumerator_lstringlist enumerator_14771 (constinArgument_inGUIComponentAST.readProperty_mImportedOptionList ()) ;
  while (enumerator_14771.hasCurrentObject ()) {
    GGS_bool joker_14915_5 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14915_4 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14915_3 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14915_2 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14915_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (enumerator_14771.current_mValue (HERE), joker_14915_5, joker_14915_4, joker_14915_3, joker_14915_2, joker_14915_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 437)) ;
    var_context_14618.mProperty_mImportedOptionComponentList.addAssignOperation (enumerator_14771.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 441)) ;
    enumerator_14771.gotoNextObject () ;
  }
  GGS_bool var_runOptionDefined_15023 = GGS_bool (false) ;
  UpEnumerator_guiSimpleAttributeListAST enumerator_15060 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList ()) ;
  while (enumerator_15060.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_15060.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("run"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_runOptionDefined_15023.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_15060.current_mKey (HERE).readProperty_location (), GGS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 448)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = GGS_bool (ComparisonKind::equal, enumerator_15060.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_15060.current_mValue (HERE).readProperty_location (), GGS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 450)) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            var_context_14618.mProperty_mBuildRunOption = enumerator_15060.current_mValue (HERE).readProperty_string () ;
            var_runOptionDefined_15023 = GGS_bool (true) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, enumerator_15060.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("nibAndMainClass"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          UpEnumerator_stringlist enumerator_15548 (enumerator_15060.current_mValue (HERE).readProperty_string ().getter_componentsSeparatedByString (GGS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 456))) ;
          while (enumerator_15548.hasCurrentObject ()) {
            var_context_14618.mProperty_mNibAndClassList.addAssignOperation (enumerator_15548.current (HERE).readProperty_mValue ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 457)) ;
            enumerator_15548.gotoNextObject () ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_15060.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_15060.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)).add_operation (GGS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)) ;
      }
    }
    enumerator_15060.gotoNextObject () ;
  }
  UpEnumerator_withLexiqueListAST enumerator_15800 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList ()) ;
  GGS_uint index_15755 (uint32_t (0)) ;
  while (enumerator_15800.hasCurrentObject ()) {
    GGS_terminalMap var_terminalMap_16018 ;
    GGS_lexicalStyleListAST var_lexicalStyleListAST_16051 ;
    GGS_bool joker_15991 ; // Joker input parameter
    GGS_indexingListAST joker_16036_3 ; // Joker input parameter
    GGS_terminalDeclarationListAST joker_16036_2 ; // Joker input parameter
    GGS_lexicalAttributeListAST joker_16036_1 ; // Joker input parameter
    GGS_lexicalListDeclarationListAST joker_16077 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_15800.current_mLexiqueFileName (HERE), joker_15991, var_terminalMap_16018, joker_16036_3, joker_16036_2, joker_16036_1, var_lexicalStyleListAST_16051, joker_16077, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 466)) ;
    GGS_stringset var_terminalSymbolSet_16128 = var_terminalMap_16018.getter_keySet (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 475)) ;
    UpEnumerator_guiLabelListAST enumerator_16215 (enumerator_15800.current_mLabels (HERE)) ;
    while (enumerator_16215.hasCurrentObject ()) {
      UpEnumerator_terminalLabelListAST enumerator_16252 (enumerator_16215.current_mTerminalList (HERE)) ;
      while (enumerator_16252.hasCurrentObject ()) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = var_terminalSymbolSet_16128.getter_hasKey (enumerator_16252.current_mTerminal (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 479)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 479)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_16252.current_mTerminal (HERE).readProperty_location (), GGS_string ("the '$").add_operation (enumerator_16252.current_mTerminal (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 480)).add_operation (GGS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 481)).add_operation (enumerator_15800.current_mLexiqueFileName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 482)).add_operation (GGS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 483)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 480)) ;
          }
        }
        enumerator_16252.gotoNextObject () ;
      }
      enumerator_16215.gotoNextObject () ;
    }
    GGS_textMacroList var_textMacroList_16597 = GGS_textMacroList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_guiCompoundAttributeListAST enumerator_16646 (enumerator_15800.current_mCompoundAttributes (HERE)) ;
    while (enumerator_16646.hasCurrentObject ()) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_16646.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("textMacro"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_16646.current_mKey (HERE).readProperty_location (), GGS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 492)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        var_textMacroList_16597.addAssignOperation (enumerator_16646.current_mAttributeName (HERE).readProperty_string (), enumerator_16646.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 494)) ;
      }
      enumerator_16646.gotoNextObject () ;
    }
    GGS_bool var_hasAssociatedExtension_16934 = GGS_bool (false) ;
    GGS_bool var_hasTabViewTitle_16979 = GGS_bool (false) ;
    GGS_bool var_hasBlockComment_17017 = GGS_bool (false) ;
    GGS_string var_tabViewTitle_17057 = GGS_string::makeEmptyString () ;
    GGS_string var_blockComment_17091 = GGS_string::makeEmptyString () ;
    UpEnumerator_guiSimpleAttributeListAST enumerator_17123 (enumerator_15800.current_mSimpleAttributes (HERE)) ;
    while (enumerator_17123.hasCurrentObject ()) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::equal, enumerator_17123.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("fileExtension"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          {
          var_context_14618.mProperty_mExtensionMap.setter_insertKey (enumerator_17123.current_mValue (HERE), enumerator_15800.current_mLexiqueFileName (HERE).readProperty_string (), index_15755, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 505)) ;
          }
          var_hasAssociatedExtension_16934 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_13) {
        GalgasBool test_14 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_14) {
          test_14 = GGS_bool (ComparisonKind::equal, enumerator_17123.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("title"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              test_15 = var_hasTabViewTitle_16979.boolEnum () ;
              if (GalgasBool::boolTrue == test_15) {
                GenericArray <FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_17123.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_17123.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)).add_operation (GGS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)) ;
              }
            }
            var_hasTabViewTitle_16979 = GGS_bool (true) ;
            var_tabViewTitle_17057 = enumerator_17123.current_mValue (HERE).readProperty_string () ;
          }
        }
        if (GalgasBool::boolFalse == test_14) {
          GalgasBool test_17 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_17) {
            test_17 = GGS_bool (ComparisonKind::equal, enumerator_17123.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("blockComment"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              GalgasBool test_18 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_18) {
                test_18 = var_hasBlockComment_17017.boolEnum () ;
                if (GalgasBool::boolTrue == test_18) {
                  GenericArray <FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_17123.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_17123.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)).add_operation (GGS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)) ;
                }
              }
              var_hasBlockComment_17017 = GGS_bool (true) ;
              var_blockComment_17091 = enumerator_17123.current_mValue (HERE).readProperty_string () ;
            }
          }
          if (GalgasBool::boolFalse == test_17) {
            GenericArray <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_17123.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_17123.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)).add_operation (GGS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)) ;
          }
        }
      }
      enumerator_17123.gotoNextObject () ;
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_16934.operator_not (SOURCE_FILE ("guiCompilation.galgas", 524)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15800.current_mLexiqueFileName (HERE).readProperty_location (), GGS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 525)) ;
      }
    }
    GalgasBool test_23 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_23) {
      test_23 = var_hasTabViewTitle_16979.operator_not (SOURCE_FILE ("guiCompilation.galgas", 528)).boolEnum () ;
      if (GalgasBool::boolTrue == test_23) {
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_15800.current_mLexiqueFileName (HERE).readProperty_location (), GGS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 529)) ;
      }
    }
    var_context_14618.mProperty_mWithLexiqueList.addAssignOperation (enumerator_15800.current_mLexiqueFileName (HERE).readProperty_string (), index_15755, var_blockComment_17091, var_tabViewTitle_17057, var_textMacroList_16597, enumerator_15800.current_mLabels (HERE), var_lexicalStyleListAST_16051  COMMA_SOURCE_FILE ("guiCompilation.galgas", 532)) ;
    enumerator_15800.gotoNextObject () ;
    index_15755.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 464)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_14618, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 542)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3???&swift'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__3F__26_swift (const GGS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                                      const GGS_string constinArgument_inOutputDirectory,
                                                                      const GGS_bool constinArgument_inQuietOutputByDefault,
                                                                      GGS_stringlist & ioArgument_ioSwiftAllProductFileList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_optionComponentMapForGeneration enumerator_19228 (constinArgument_inOptionComponentMapForGeneration) ;
  while (enumerator_19228.hasCurrentObject ()) {
    GGS_string var_swiftFileName_19297 = GGS_string ("gui-").add_operation (enumerator_19228.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 558)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 558)) ;
    ioArgument_ioSwiftAllProductFileList.addAssignOperation (var_swiftFileName_19297  COMMA_SOURCE_FILE ("guiCompilation.galgas", 559)) ;
    GGS_string var_swift_5F_string_19402 = GGS_string (filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (inCompiler, enumerator_19228.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 560))) ;
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_swiftFileName_19297, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_swift_5F_string_19402, GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 564)) ;
    }
    GGS_string var_swiftuiFileName_19916 = GGS_string ("gui-swiftui-").add_operation (enumerator_19228.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 575)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 575)) ;
    ioArgument_ioSwiftAllProductFileList.addAssignOperation (var_swiftuiFileName_19916  COMMA_SOURCE_FILE ("guiCompilation.galgas", 576)) ;
    GGS_string var_swiftui_5F_string_20033 = GGS_string (filewrapperTemplate_guiGenerationTemplates_swiftui_5F_gui_5F_implementation (inCompiler, enumerator_19228.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 577))) ;
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_swiftuiFileName_19916, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_swiftui_5F_string_20033, GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 581)) ;
    }
    enumerator_19228.gotoNextObject () ;
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
//Filewrapper template 'guiGenerationTemplates swift_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (Compiler * inCompiler,
                                                                                      const GGS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                      const GGS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    Project file extensions\n//--------------------------------------------------------------------------------------------------\n\nfunc indexingDescriptorDictionary () -> [String : String] {\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 9)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (" return [:]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("  return [") ;
    GGS_uint index_499_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().isValid ()) {
      UpEnumerator_projectIndexingDescriptorList enumerator_499 (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ()) ;
      while (enumerator_499.hasCurrentObject ()) {
        result.appendString ("  \"") ;
        result.appendString (enumerator_499.current_mProjectFileExtension (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\" : \"") ;
        result.appendString (enumerator_499.current_indexingPathSuffix (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\",") ;
        enumerator_499.gotoNextObject () ;
        index_499_.increment () ;
      }
    }
    result.appendString ("]\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n//                       Command Line Options                                                    \n//--------------------------------------------------------------------------------------------------\n\nfunc enterOptions () -> [SWIFT_CommandLineOption] {\n  var array = [SWIFT_CommandLineOption] ()\n") ;
  GGS_uint index_1050_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    UpEnumerator_stringlist enumerator_1050 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ()) ;
    while (enumerator_1050.hasCurrentObject ()) {
      result.appendString ("  array += enterOptionsFor_") ;
      result.appendString (enumerator_1050.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" ()\n") ;
      enumerator_1050.gotoNextObject () ;
      index_1050_.increment () ;
    }
  }
  const GalgasBool test_1 = in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("  array.append (\n    SWIFT_CommandLineOption (\n      domainName: \"galgas_cli_options\",\n      type: .bool,\n      identifier: \"verbose_output\",\n      commandChar: \"v\",\n      commandString: \"verbose\",\n      comment: \"Verbose output\"\n    )\n  )\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("  array.append (\n    SWIFT_CommandLineOption (\n      domainName: \"galgas_cli_options\",\n      type: .bool,\n      identifier: \"quiet_output\",\n      commandChar: \"q\",\n      commandString: \"quiet\",\n      comment: \"Quiet output\"\n    )\n  )\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  return array\n}\n\n") ;
  GGS_uint index_1871_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_1871 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_1871.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//                     P O P    U P    L I S T    D A T A\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gPopUpData_") ;
      result.appendString (enumerator_1871.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 63)).stringValue ()) ;
      result.appendString (" : [[UInt16]] = [\n") ;
      GGS_uint index_2301_ (0) ;
      if (enumerator_1871.current_mLabels (HERE).isValid ()) {
        UpEnumerator_guiLabelListAST enumerator_2301 (enumerator_1871.current_mLabels (HERE)) ;
        while (enumerator_2301.hasCurrentObject ()) {
          result.appendString ("  [") ;
          result.appendString (enumerator_2301.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 65)).stringValue ()) ;
          result.appendString (", // Leading character count to strip\n") ;
          GGS_uint index_2450_ (0) ;
          if (enumerator_2301.current_mTerminalList (HERE).isValid ()) {
            UpEnumerator_terminalLabelListAST enumerator_2450 (enumerator_2301.current_mTerminalList (HERE)) ;
            while (enumerator_2450.hasCurrentObject ()) {
              result.appendString ("    ") ;
              result.appendString (enumerator_1871.current_mLexiqueClassName (HERE).stringValue ()) ;
              result.appendString ("_1_") ;
              result.appendString (enumerator_2450.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 67)).stringValue ()) ;
              result.appendString (", ") ;
              result.appendString (enumerator_2450.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 67)).stringValue ()) ;
              enumerator_2450.gotoNextObject () ;
              if (enumerator_2450.hasCurrentObject ()) {
                result.appendString (",\n") ;
              }
              index_2450_.increment () ;
            }
          }
          result.appendString ("\n  ]") ;
          enumerator_2301.gotoNextObject () ;
          if (enumerator_2301.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_2301_.increment () ;
        }
      }
      result.appendString ("\n]\n\n//--------------------------------------------------------------------------------------------------\n//                            Lexique interface\n//--------------------------------------------------------------------------------------------------\n  \nclass SWIFT_Tokenizer_") ;
      result.appendString (enumerator_1871.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 80)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1871.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" : SWIFT_Lexique_") ;
      result.appendString (enumerator_1871.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (", SWIFT_Tokenizer_Protocol {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func popupListData () -> [[UInt16]] {\n    return gPopUpData_") ;
      result.appendString (enumerator_1871.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 85)).stringValue ()) ;
      result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func tabItemTitle () -> String {\n    return ") ;
      result.appendString (enumerator_1871.current_mTitle (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 91)).stringValue ()) ;
      result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  \n  func blockComment () -> String {\n    return ") ;
      result.appendString (enumerator_1871.current_mBlockComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 97)).stringValue ()) ;
      result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func attributes (fromStyleIndex inStyleIndex : UInt8) -> [NSAttributedString.Key : Any] {\n    let fontManager = NSFontManager.shared\n    var font = fontManager.convert (\n      self.font.propval,\n      toHaveTrait: self.bold (forStyle: inStyleIndex).propval \? .boldFontMask : .unboldFontMask\n    )\n    font = fontManager.convert (\n      font,\n      toHaveTrait: self.italic (forStyle: inStyleIndex).propval \? .italicFontMask : .unitalicFontMask\n    )\n    let result : [NSAttributedString.Key : Any] = [\n      .foregroundColor : self.color (forStyle: inStyleIndex).propval,\n      .font : font\n    ]\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n/* @implementation OC_Tokenizer_") ;
      result.appendString (enumerator_1871.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 124)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1871.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) textMacroCount {\n  return ") ;
      result.appendString (enumerator_1871.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 127)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 127)).stringValue ()) ;
      result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroTitle [") ;
      result.appendString (enumerator_1871.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 132)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 132)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 132)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GGS_uint index_5276_ (0) ;
      if (enumerator_1871.current_mTextMacroList (HERE).isValid ()) {
        UpEnumerator_textMacroList enumerator_5276 (enumerator_1871.current_mTextMacroList (HERE)) ;
        while (enumerator_5276.hasCurrentObject ()) {
          result.appendString ("    @") ;
          result.appendString (enumerator_5276.current_mKey (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 134)).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_5276.gotoNextObject () ;
          index_5276_.increment () ;
        }
      }
      result.appendString ("    nullptr\n  } ;\n  return kTextMacroTitle [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroContent [") ;
      result.appendString (enumerator_1871.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 142)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 142)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 142)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GGS_uint index_5739_ (0) ;
      if (enumerator_1871.current_mTextMacroList (HERE).isValid ()) {
        UpEnumerator_textMacroList enumerator_5739 (enumerator_1871.current_mTextMacroList (HERE)) ;
        while (enumerator_5739.hasCurrentObject ()) {
          result.appendString ("    @") ;
          result.appendString (enumerator_5739.current_mContents (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 144)).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_5739.gotoNextObject () ;
          index_5739_.increment () ;
        }
      }
      result.appendString ("    nullptr\n  } ;\n  return kTextMacroContent [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end */\n\n") ;
      enumerator_1871.gotoNextObject () ;
      index_1871_.increment () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//   Global functions\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func tokenizerFor (extension inExtension : String) -> (any SWIFT_Tokenizer_Protocol)\? {\n  var result : (any SWIFT_Tokenizer_Protocol)\? = nil\n") ;
  GGS_uint index_6491_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_6491 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    const bool nonEmpty_enumerator_6491 = enumerator_6491.hasCurrentObject () ;
    if (nonEmpty_enumerator_6491) {
      result.appendString ("  if") ;
    }
    while (enumerator_6491.hasCurrentObject ()) {
      result.appendString (" inExtension == ") ;
      result.appendString (enumerator_6491.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 163)).stringValue ()) ;
      result.appendString (" {\n    result = SWIFT_Tokenizer_") ;
      result.appendString (enumerator_6491.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 164)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_6491.current_mLexiqueName (HERE).stringValue ()) ;
      result.appendString (" ()\n") ;
      enumerator_6491.gotoNextObject () ;
      if (enumerator_6491.hasCurrentObject ()) {
        result.appendString ("  }else if") ;
      }
      index_6491_.increment () ;
    }
    if (nonEmpty_enumerator_6491) {
      result.appendString ("  }\n") ;
    }
  }
  result.appendString ("  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func tokenizers () -> [any SWIFT_Tokenizer_Protocol] {") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 174)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n  return []\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("\n  return [\n") ;
    GGS_uint index_7023_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
      UpEnumerator_importedLexiqueList enumerator_7023 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
      while (enumerator_7023.hasCurrentObject ()) {
        result.appendString ("    SWIFT_Tokenizer_") ;
        result.appendString (enumerator_7023.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 179)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_7023.current_mLexiqueClassName (HERE).stringValue ()) ;
        result.appendString (" ()") ;
        enumerator_7023.gotoNextObject () ;
        if (enumerator_7023.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_7023_.increment () ;
      }
    }
    result.appendString ("\n  ]\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc buildRunOption () -> String {\n  return \"") ;
  result.appendString (in_GUI_5F_CONTEXT.readProperty_mBuildRunOption ().stringValue ()) ;
  result.appendString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swiftui_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_guiGenerationTemplates_swiftui_5F_gui_5F_implementation (Compiler * /* inCompiler */,
                                                                                        const GGS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                        const GGS_bool & /* in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport SwiftUI\n\n//--------------------------------------------------------------------------------------------------\n//    Project file extensions\n//--------------------------------------------------------------------------------------------------\n\nlet projectFileExtensions = Set ([") ;
  GGS_uint index_331_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_331 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    while (enumerator_331.hasCurrentObject ()) {
      result.appendString (enumerator_331.current_lkey (HERE).readProperty_string ().getter_lowercaseString (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 10)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 10)).stringValue ()) ;
      enumerator_331.gotoNextObject () ;
      if (enumerator_331.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_331_.increment () ;
    }
  }
  result.appendString ("])\n\n//--------------------------------------------------------------------------------------------------\n//    Indexing dictionary\n//--------------------------------------------------------------------------------------------------\n\nfunc indexingDescriptorDictionary () -> [String : String] {\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().getter_count (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 20)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (" return [:]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("  return [\n") ;
    GGS_uint index_906_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().isValid ()) {
      UpEnumerator_projectIndexingDescriptorList enumerator_906 (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ()) ;
      while (enumerator_906.hasCurrentObject ()) {
        result.appendString ("    \"") ;
        result.appendString (enumerator_906.current_mProjectFileExtension (HERE).readProperty_string ().getter_lowercaseString (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 26)).stringValue ()) ;
        result.appendString ("\" : \"") ;
        result.appendString (enumerator_906.current_indexingPathSuffix (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\"") ;
        enumerator_906.gotoNextObject () ;
        if (enumerator_906.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_906_.increment () ;
      }
    }
    result.appendString ("\n  ]\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n//   Scanner for a given extension\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func scannerFor (extension inExtension : String) -> AbstractScanner\? {\n  var result : AbstractScanner\? = nil\n  let fileExtension = inExtension.lowercased ()\n") ;
  GGS_uint index_1519_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_1519 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    const bool nonEmpty_enumerator_1519 = enumerator_1519.hasCurrentObject () ;
    if (nonEmpty_enumerator_1519) {
      result.appendString ("  if") ;
    }
    while (enumerator_1519.hasCurrentObject ()) {
      result.appendString (" fileExtension == ") ;
      result.appendString (enumerator_1519.current_lkey (HERE).readProperty_string ().getter_lowercaseString (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 42)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 42)).stringValue ()) ;
      result.appendString (" {\n    result = ScannerFor_") ;
      result.appendString (enumerator_1519.current_mLexiqueName (HERE).stringValue ()) ;
      result.appendString (" ()\n") ;
      enumerator_1519.gotoNextObject () ;
      if (enumerator_1519.hasCurrentObject ()) {
        result.appendString ("  }else if") ;
      }
      index_1519_.increment () ;
    }
    if (nonEmpty_enumerator_1519) {
      result.appendString ("  }\n") ;
    }
  }
  result.appendString ("  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n// Setting View\n//--------------------------------------------------------------------------------------------------\n\nstruct SettingsView : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  enum SidebarItem {\n    case commandLineOptions\n") ;
  GGS_uint index_2198_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_2198 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_2198.hasCurrentObject ()) {
      result.appendString ("    case ") ;
      result.appendString (enumerator_2198.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2198.gotoNextObject () ;
      index_2198_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @State private var mSelection : SidebarItem = .commandLineOptions\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @ViewBuilder var body : some View {\n    NavigationSplitView {\n      List(selection: self.$mSelection) {\n        Text (\"Options\").tag (SidebarItem.commandLineOptions)\n\n") ;
  GGS_uint index_2757_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_2757 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_2757.hasCurrentObject ()) {
      result.appendString ("        Text (\"") ;
      result.appendString (enumerator_2757.current_mTitle (HERE).stringValue ()) ;
      result.appendString ("\").tag (SidebarItem.") ;
      result.appendString (enumerator_2757.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_2757.gotoNextObject () ;
      index_2757_.increment () ;
    }
  }
  result.appendString ("      }\n      .toolbar (removing: .sidebarToggle)\n    } detail: {\n      switch self.mSelection {\n        case .commandLineOptions : OptionView ()\n") ;
  GGS_uint index_3049_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_3049 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_3049.hasCurrentObject ()) {
      result.appendString ("        case .") ;
      result.appendString (enumerator_3049.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" : SettingViewFor_") ;
      result.appendString (enumerator_3049.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" ()\n") ;
      enumerator_3049.gotoNextObject () ;
      index_3049_.increment () ;
    }
  }
  result.appendString ("      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n\n") ;
  GGS_uint index_3386_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_3386 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_3386.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Popup list data for '") ;
      result.appendString (enumerator_3386.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("' lexique\n//--------------------------------------------------------------------------------------------------\n\nlet gPopUpData_") ;
      result.appendString (enumerator_3386.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" : [[UInt16]] = [\n") ;
      GGS_uint index_3774_ (0) ;
      if (enumerator_3386.current_mLabels (HERE).isValid ()) {
        UpEnumerator_guiLabelListAST enumerator_3774 (enumerator_3386.current_mLabels (HERE)) ;
        while (enumerator_3774.hasCurrentObject ()) {
          result.appendString ("  [") ;
          result.appendString (enumerator_3774.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 102)).stringValue ()) ;
          result.appendString (", // Leading character count to strip\n") ;
          GGS_uint index_3923_ (0) ;
          if (enumerator_3774.current_mTerminalList (HERE).isValid ()) {
            UpEnumerator_terminalLabelListAST enumerator_3923 (enumerator_3774.current_mTerminalList (HERE)) ;
            while (enumerator_3923.hasCurrentObject ()) {
              result.appendString ("    ") ;
              result.appendString (enumerator_3386.current_mLexiqueClassName (HERE).stringValue ()) ;
              result.appendString ("_1_") ;
              result.appendString (enumerator_3923.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 104)).stringValue ()) ;
              result.appendString (", ") ;
              result.appendString (enumerator_3923.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 104)).stringValue ()) ;
              enumerator_3923.gotoNextObject () ;
              if (enumerator_3923.hasCurrentObject ()) {
                result.appendString (",\n") ;
              }
              index_3923_.increment () ;
            }
          }
          result.appendString ("\n  ]") ;
          enumerator_3774.gotoNextObject () ;
          if (enumerator_3774.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_3774_.increment () ;
        }
      }
      result.appendString ("\n]\n\n") ;
      enumerator_3386.gotoNextObject () ;
      index_3386_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@predefinedTypeAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                             GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                             GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_predefinedTypeAST temp_0 = this ;
  GGS_lstring var_key_2894 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 58)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 58)), inCompiler COMMA_HERE) ;
  {
  const GGS_predefinedTypeAST temp_1 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2894, temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@predefinedTypeAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                       const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classFunctionMap var_constructorMap_3748 ;
  const GGS_predefinedTypeAST temp_0 = this ;
  callExtensionMethod_getClassFunctionMap ((cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioTypeMap, var_constructorMap_3748, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 72)) ;
  GGS_getterMap var_getterMap_3815 ;
  const GGS_predefinedTypeAST temp_1 = this ;
  callExtensionMethod_getGetterMap ((cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioTypeMap, var_getterMap_3815, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 73)) ;
  GGS_setterMap var_setterMap_3877 ;
  const GGS_predefinedTypeAST temp_2 = this ;
  callExtensionMethod_getSetterMap ((cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioTypeMap, var_setterMap_3877, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 74)) ;
  GGS_instanceMethodMap var_instanceMethodMap_3955 ;
  const GGS_predefinedTypeAST temp_3 = this ;
  callExtensionMethod_getInstanceMethodMap ((cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioTypeMap, var_instanceMethodMap_3955, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 75)) ;
  GGS_classMethodMap var_classMethodMap_4035 ;
  const GGS_predefinedTypeAST temp_4 = this ;
  callExtensionMethod_getClassMethodMap ((cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioTypeMap, var_classMethodMap_4035, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 76)) ;
  GGS_functionSignature var_addAssignArgumentList_4122 ;
  const GGS_predefinedTypeAST temp_5 = this ;
  callExtensionMethod_getAddAssignArgumentList ((cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioTypeMap, var_addAssignArgumentList_4122, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 77)) ;
  GGS_enumerationDescriptorList var_enumerationList_4230 ;
  GGS_string var_enumeratedTypeName_4265 ;
  const GGS_predefinedTypeAST temp_6 = this ;
  callExtensionMethod_getEnumerationList ((cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioTypeMap, var_enumerationList_4230, var_enumeratedTypeName_4265, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 78)) ;
  {
  const GGS_predefinedTypeAST temp_7 = this ;
  GGS_unifiedTypeMapEntry joker_4353 ; // Joker input parameter
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_7.readProperty_mPredefinedTypeName (), joker_4353, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 83)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedTypeEntry_4406 ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::equal, var_enumeratedTypeName_4265.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_enumeratedTypeEntry_4406 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type.galgas", 87)) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    {
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, var_enumeratedTypeName_4265, var_enumeratedTypeEntry_4406, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 89)) ;
    }
  }
  GGS_initializerMap var_initializerMap_4662 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GGS_predefinedTypeAST temp_9 = this ;
  UpEnumerator__5B_formalInputParameterListAST_5D_ enumerator_4724 (callExtensionGetter_initializers ((const cPtr_predefinedTypeAST *) temp_9.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 93))) ;
  while (enumerator_4724.hasCurrentObject ()) {
    GGS_functionSignature var_formalParameterList_4758 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalInputParameterListAST enumerator_4857 (enumerator_4724.current (HERE)) ;
    while (enumerator_4857.hasCurrentObject ()) {
      var_formalParameterList_4758.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_4857.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_4857.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 98)), enumerator_4857.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_4857.current_mIsConstant (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 96)) ;
      enumerator_4857.gotoNextObject () ;
    }
    {
    var_initializerMap_4662.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_4724.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 103)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 103)), inCompiler COMMA_HERE), var_formalParameterList_4758, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 103)) ;
    }
    enumerator_4724.gotoNextObject () ;
  }
  {
  const GGS_predefinedTypeAST temp_10 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (temp_10.readProperty_mPredefinedTypeName (), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 112)), inCompiler COMMA_HERE), GGS_bool (false), var_initializerMap_4662, var_getterMap_3815, var_setterMap_3877, var_instanceMethodMap_3955, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 105)) ;
  }
  const GGS_predefinedTypeAST temp_11 = this ;
  const GGS_predefinedTypeAST temp_12 = this ;
  const GGS_predefinedTypeAST temp_13 = this ;
  const GGS_predefinedTypeAST temp_14 = this ;
  const GGS_predefinedTypeAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_5680 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (GGS_lstring::init_21__21_ (temp_11.readProperty_mPredefinedTypeName (), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 122)), inCompiler COMMA_HERE), temp_12.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type.galgas", 126)), callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_13.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 127)), callExtensionGetter_supportsCollectionValue ((const cPtr_predefinedTypeAST *) temp_14.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 128)), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_4662, var_constructorMap_3748, var_getterMap_3815, var_setterMap_3877, var_instanceMethodMap_3955, var_classMethodMap_4035, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type.galgas", 138)), GGS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationList_4230, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_15.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 141)), var_addAssignArgumentList_4122, GGS_bool (false), var_enumeratedTypeEntry_4406, GGS_string ("predefined-types"), GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("declaration-predefined-type.galgas", 146)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_5680.readProperty_typeName (), var_typeDefinition_5680, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 148)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@predefinedTypeAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GGS_string /* constinArgument_inProductDirectory */,
                                                      const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                      GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_predefinedTypeAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7336 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (temp_0.readProperty_mPredefinedTypeName (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 161)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 161)) ;
  const GGS_predefinedTypeAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_7454 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (temp_1.readProperty_mPredefinedTypeName (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 163)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 163)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7454, var_nameForUsefulness_7454, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 164)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_7454  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 165)) ;
  UpEnumerator_initializerMap enumerator_7781 (extensionGetter_definition (var_selfType_7336, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 167)).readProperty_initializerMap ()) ;
  while (enumerator_7781.hasCurrentObject ()) {
    const GGS_predefinedTypeAST temp_2 = this ;
    GGS_lstring var_initializerNameForUsefulness_7809 = function_initializerNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (temp_2.readProperty_mPredefinedTypeName (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 169)), inCompiler COMMA_HERE), extensionGetter_initializerSignature (enumerator_7781.current (HERE).readProperty_mArgumentTypeList (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 168)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_7809, var_initializerNameForUsefulness_7809, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 172)) ;
    }
    ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_7809  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 173)) ;
    enumerator_7781.gotoNextObject () ;
  }
  const GGS_predefinedTypeAST temp_3 = this ;
  const GGS_predefinedTypeAST temp_4 = this ;
  const GGS_predefinedTypeAST temp_5 = this ;
  const GGS_predefinedTypeAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("Predefined type ").add_operation (temp_3.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 177)), GGS_primitiveTypeForGeneration::init_21__21__21__21_isPackage (var_selfType_7336, temp_4.readProperty_mPredefinedTypeName (), callExtensionGetter_cppDeclarationString ((const cPtr_predefinedTypeAST *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 181)), GGS_bool (ComparisonKind::equal, callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_6.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 182)).objectCompare (GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type.galgas", 182)))), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 176)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedListTypeAST&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedListTypeAST_26__3F__26_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                      const GGS_string constinArgument_inElementTypeName,
                                                      GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_attributeList_11411 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_11411.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas", 260)), GGS_lstring::init_21__21_ (constinArgument_inElementTypeName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 261)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("mValue"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 262)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 263)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 265))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 259)) ;
  ioArgument_ioDeclarationListASTs.addAssignOperation (GGS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GGS_bool (true), GGS_lstring::init_21__21_ (constinArgument_inElementTypeName.add_operation (GGS_string ("list"), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 268)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 268)), inCompiler COMMA_HERE), var_attributeList_11411, GGS_bool (true), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 266)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, constinArgument_inElementTypeName.add_operation (GGS_string ("list"), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 273)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2StringListTypeAST&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_StringListTypeAST_26__26_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                            GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_attributeList_12252 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_12252.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas", 282)), GGS_lstring::init_21__21_ (GGS_string ("string"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 283)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("mValue0"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 284)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 285)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 287))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 281)) ;
  var_attributeList_12252.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas", 289)), GGS_lstring::init_21__21_ (GGS_string ("string"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 290)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("mValue1"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 291)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 292)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 294))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 288)) ;
  ioArgument_ioDeclarationListASTs.addAssignOperation (GGS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GGS_bool (true), GGS_lstring::init_21__21_ (GGS_string ("2stringlist"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 298)), inCompiler COMMA_HERE), var_attributeList_12252, GGS_bool (true), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 296)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GGS_string ("2stringlist"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 303)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation_26__3F__26_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                             const GGS_string constinArgument_inElementTypeName,
                                                             GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_attributeList_13375 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_13375.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas", 313)), GGS_lstring::init_21__21_ (constinArgument_inElementTypeName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 314)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (constinArgument_inElementTypeName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 315)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 316)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 318))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 312)) ;
  var_attributeList_13375.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas", 320)), GGS_lstring::init_21__21_ (GGS_string ("location"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 321)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("location"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 322)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 323)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 325))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 319)) ;
  GGS_structDeclarationAST var_type_13865 = GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (true), GGS_lstring::init_21__21_ (GGS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 328)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 328)), inCompiler COMMA_HERE), var_attributeList_13375, GGS_string::makeEmptyString (), GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-predefined-type.galgas", 331)), GGS_bool (true), inCompiler COMMA_HERE) ;
  ioArgument_ioDeclarationListASTs.addAssignOperation (var_type_13865  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 334)) ;
  GGS_lstring var_typeUsefulnessName_14254 = function_typeNameForUsefulEntitiesGraph (var_type_13865.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 337)) ;
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_typeUsefulnessName_14254  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 338)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType_26__26_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                  GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_attributeList_15031 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_15031.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas", 355)), GGS_lstring::init_21__21_ (GGS_string ("uint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 356)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("start"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 357)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 358)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 360))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 354)) ;
  var_attributeList_15031.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas", 362)), GGS_lstring::init_21__21_ (GGS_string ("uint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 363)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("length"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 364)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 365)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 367))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 361)) ;
  ioArgument_ioDeclarationListASTs.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (true), GGS_lstring::init_21__21_ (GGS_string ("range"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 370)), inCompiler COMMA_HERE), var_attributeList_15031, GGS_string ("uint"), GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-predefined-type.galgas", 373)), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 368)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'insertInUsefulnessEntities&?'
//
//--------------------------------------------------------------------------------------------------

void routine_insertInUsefulnessEntities_26__3F_ (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                 const GGS_string constinArgument_inTypeName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_typeUsefulnessName_15946 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (constinArgument_inTypeName, GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 383)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 383)) ;
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_typeUsefulnessName_15946  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 384)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'insertPredefinedType&&?'
//
//--------------------------------------------------------------------------------------------------

void routine_insertPredefinedType_26__26__3F_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                               GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                               const GGS_predefinedTypeAST constinArgument_inPredefinedTypeAST,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationListASTs.addAssignOperation (constinArgument_inPredefinedTypeAST  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 394)) ;
  GGS_lstring var_typeUsefulnessName_16454 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (constinArgument_inPredefinedTypeAST.readProperty_mPredefinedTypeName (), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 396)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 395)) ;
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_typeUsefulnessName_16454  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 399)) ;
  UpEnumerator__5B_formalInputParameterListAST_5D_ enumerator_16726 (callExtensionGetter_initializers ((const cPtr_predefinedTypeAST *) constinArgument_inPredefinedTypeAST.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 401))) ;
  while (enumerator_16726.hasCurrentObject ()) {
    GGS_lstring var_initializerNameForUsefulness_16750 = function_initializerNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (constinArgument_inPredefinedTypeAST.readProperty_mPredefinedTypeName (), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 403)), inCompiler COMMA_HERE), extensionGetter_initializerSignature (enumerator_16726.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 402)) ;
    ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_16750  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 406)) ;
    enumerator_16726.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26__26_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_applicationPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("application"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 414)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_bigintPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("bigint"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 419)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_binarysetPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("binaryset"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 424)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_boolPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("bool"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 429)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_charPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("char"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 434)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_dataPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("data"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 439)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_doublePredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("double"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 444)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_filewrapperPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("filewrapper"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 449)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_functionPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("function"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 454)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_locationPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("location"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 459)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_objectPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("object"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 464)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_sintPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("sint"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 469)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_sint_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("sint64"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 474)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_stringPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("string"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 479)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_stringsetPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("stringset"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 484)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_timerPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("timer"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 489)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_typePredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("type"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 494)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_uintPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("uint"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 499)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_uint_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("uint64"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 504)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("function"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 510)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("luint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 511)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("lstring"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 512)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("object"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 513)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 514)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("type"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 515)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 516)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 517)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 518)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("lbigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 519)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("bool"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 521)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 522)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("char"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 523)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("double"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 524)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("sint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 525)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("sint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 526)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 527)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 528)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 529)) ;
  }
  {
  routine_appendPredefined_32_StringListTypeAST_26__26_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 531)) ;
  }
  {
  routine_appendStructASTForRangeType_26__26_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 533)) ;
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

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n#include \"cCollectionElement.h\"\n#include \"Compiler.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement::cMapElement (const GGS_lstring & inLKey\n                          COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmProperty_lkey (inLKey) {\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"AC_GALGAS_root.h\"\n#include \"GALGAS_TypeDescriptor.h\"\n#include \"ComparisonResult.h\"\n#include \"ComparisonKind.h\"\n#include \"EnumerationOrder.h\"\n#include \"cGenericAbstractEnumerator.h\"\n#include \"Enumerator_range.h\"\n#include \"String-class.h\"\n#include \"Timer.h\"\n#include \"AC_GALGAS_reference_class.h\"\n#include \"AC_GALGAS_value_class.h\"\n#include \"AC_GALGAS_enumAssociatedValues.h\"\n#include \"AC_GALGAS_graph.h\"\n#include \"acStrongPtr_class.h\"\n#include \"cPtr_weakReference_proxy.h\"\n#include \"AC_GALGAS_weak_reference.h\"\n#include \"BoolCommandLineOption.h\"\n#include \"UIntCommandLineOption.h\"\n#include \"StringCommandLineOption.h\"\n#include \"StringListCommandLineOption.h\"\n#include \"PrologueEpilogue.h\"\n#include \"BigSigned.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass Compiler ;\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#include \"cCollectionElement.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement : public cCollectionElement {\n//--- Attribut\n  public: GGS_lstring mProperty_lkey ;\n\n//--- Default constructor\n  public: cMapElement (const GGS_lstring & inLKey\n                       COMMA_LOCATION_ARGS) ;\n\n//--- No copy\n  private: cMapElement (const cMapElement &) ;\n  private: cMapElement & operator = (const cMapElement &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"C_galgas_function_descriptor.h\"\n#include \"cObjectArray.h\"\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @sint type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_sint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int32_t mSIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int32_t intValue (void) const { return mSIntValue ; }\n\n//--------------------------------- Default constructor\n  public: GGS_sint (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_sint (const int32_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @sint64 type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_sint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int64_t mSInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int64_t int64Value (void) const { return mSInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GGS_sint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_sint_36__34_ (const int64_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @object type\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_object ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_object : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: cPtr_object * mSharedObject ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedObject != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GGS_object (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GGS_object (AC_GALGAS_root * inObjectPointer\n                      COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GGS_object (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_object (const GGS_object & inSource) ;\n  public: GGS_object & operator = (const GGS_object & inSource) ;\n\n//--------------------------------- Embedded Object\n  public: const AC_GALGAS_root * embeddedObject (void) const ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @uint type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_uint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint32_t mUIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n  public: inline void increment (void) { mUIntValue += 1 ; }\n\n//--------------------------------- Default constructor\n  public: GGS_uint (void) ;\n\n//--------------------------------- Native constructors\n  public: GGS_uint (const uint32_t inValue) ;\n  public: GGS_uint (const bool inValid, const uint32_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  @uint64 type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_uint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint64_t mUInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GGS_uint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_uint_36__34_ (const uint64_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  @bool type\n//--------------------------------------------------------------------------------------------------\n\nenum class GalgasBool {boolNotValid, boolFalse, boolTrue} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_bool : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: bool mBoolValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n  public: inline bool boolValue (void) const { return mBoolValue ; }\n  public: GalgasBool boolEnum (void) const ;\n\n//--------------------------------- Drop\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GGS_bool (void) ;\n\n//--------------------------------- Native constructors\n  public: GGS_bool (const bool inValue) ; // Is built\n  public: GGS_bool (const bool inBuilt, const bool inValue) ;\n\n//--------------------------------- Constructor for comparison result\n  public: GGS_bool (const ComparisonKind inComparisonKind,\n                    const ComparisonResult inComparisonResult) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// @binaryset type\n//--------------------------------------------------------------------------------------------------\n\n#include \"BinaryDecisionDiagram.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_binaryset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: BinaryDecisionDiagram mBDD ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline BinaryDecisionDiagram bddValue (void) const { return mBDD ; }\n\n//--------------------------------- Default constructor\n  public: GGS_binaryset (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_binaryset (const BinaryDecisionDiagram & inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @function type\n//--------------------------------------------------------------------------------------------------\n\nclass C_galgas_function_descriptor ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_function : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: const C_galgas_function_descriptor * mFunctionDescriptor ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mFunctionDescriptor ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mFunctionDescriptor = nullptr ; }\n  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GGS_function (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GGS_function (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_function (const GGS_function & inSource) ;\n  public: GGS_function & operator = (const GGS_function & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GGS_function (const C_galgas_function_descriptor * inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @type type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_type : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const GALGAS_TypeDescriptor * mTypeDescriptor ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return nullptr != mTypeDescriptor ; }\n  public: inline void drop (void) override { mTypeDescriptor = nullptr ; }\n  public: inline const GALGAS_TypeDescriptor * typeValue (void) const { return mTypeDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GGS_type (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GGS_type (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_type (const GGS_type & inSource) ;\n  public: GGS_type & operator = (const GGS_type & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GGS_type (const GALGAS_TypeDescriptor * inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @location type\n//--------------------------------------------------------------------------------------------------\n\n#include \"LocationInSource.h\"\n#include \"SourceTextInString.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_location : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: class InternalLocation * mInternalLocation ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: LocationInSource startLocation (void) const ;\n  public: LocationInSource endLocation (void) const ;\n  public: SourceTextInString sourceText (void) const ;\n\n//--------------------------------- Default constructor\n  public: GGS_location (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_location (const GGS_location & inSource) ;\n  public: GGS_location & operator = (const GGS_location & inSource) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GGS_location (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_location (const LocationInSource & inStartLocationInSource,\n                        const LocationInSource & inEndLocationInSource,\n                        const SourceTextInString & inSourceText) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Phase 1: @data enumerator\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_data final {\n  public: UpEnumerator_data (const class GGS_data & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }\n\n  public: void gotoNextObject (void) { mIndex += 1 ; }\n\n//--- Current element access\n  public: class GGS_uint current_data (LOCATION_ARGS) const ;\n  public: class GGS_uint current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: U8Data mArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_data (const UpEnumerator_data &) = delete ;\n  private: UpEnumerator_data & operator = (const UpEnumerator_data &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_data final {\n\n  public: DownEnumerator_data (const class GGS_data & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: void gotoNextObject (void) { mIndex -= 1 ; }\n\n//--- Current element access\n  public: class GGS_uint current_data (LOCATION_ARGS) const ;\n  public: class GGS_uint current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: U8Data mArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_data (const DownEnumerator_data &) = delete ;\n  private: DownEnumerator_data & operator = (const DownEnumerator_data &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//   @data type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_data : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: U8Data mData ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline U8Data dataValue (void) const { return mData ; }\n\n//--------------------------------- Default constructor\n  public: GGS_data (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_data (const U8Data & inData) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @char type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_char : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: utf32 mCharValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline utf32 charValue (void) const { return mCharValue ; }\n\n//--------------------------------- Default constructor\n  public: GGS_char (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_char (const utf32 inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  @double type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_double : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: double mDoubleValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline double doubleValue (void) const { return mDoubleValue ; }\n\n//--------------------------------- Default constructor\n  public: GGS_double (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_double (const double inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @string type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_string : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: String mString ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: inline String stringValue (void) const { return mString ; }\n\n//--------------------------------- Default constructor\n  public: GGS_string (void) ;\n\n//--------------------------------- Constructor for making an empty string\n  public: static GGS_string makeEmptyString (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_string (const String & inValue) ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const override ;\n  #endif\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// Phase 1: @stringset\n//--------------------------------------------------------------------------------------------------\n\n//--------------------------------------------------------------------------------------------------\n//  SharedStringMapNode\n//--------------------------------------------------------------------------------------------------\n\nclass SharedStringMapNode final : public SharedObject {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private: OptionalSharedRef <SharedStringMapNode> mInfPtr ;\n  private: OptionalSharedRef <SharedStringMapNode> mSupPtr ;\n  private: int32_t mBalance ;\n  public: const String mKey ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  public: SharedStringMapNode (const String & inKey\n                               COMMA_LOCATION_ARGS) ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  public: virtual ~SharedStringMapNode (void) = default ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  public: SharedStringMapNode (const OptionalSharedRef <SharedStringMapNode> & inNodePtr\n                               COMMA_LOCATION_ARGS) ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // No copy\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private: SharedStringMapNode (const SharedStringMapNode &) = delete ;\n  private: SharedStringMapNode & operator = (const SharedStringMapNode &) = delete ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private: static void populateStringArray (const OptionalSharedRef <SharedStringMapNode> & inNode,\n                                            GenericArray <String> & ioStringArray) ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  friend class SharedStringMapRoot ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//  SharedStringMap\n//--------------------------------------------------------------------------------------------------\n\nclass SharedStringMapRoot ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass SharedStringMap final {\n//--------------------------------- Private data members\n  private: OptionalSharedRef <SharedStringMapRoot> mSharedRoot ;\n\n//--------------------------------- Build\n  public: static SharedStringMap build (LOCATION_ARGS) ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const { return mSharedRoot.isNotNil () ; }\n\n//--------------------------------- Drop\n  public: void drop (void) ;\n\n//--------------------------------- Default constructor\n  public: SharedStringMap () ;\n\n//--------------------------------- Destructor\n  public: ~ SharedStringMap (void) ;\n\n//--------------------------------- Insulate\n  private: void insulate (LOCATION_ARGS) ;\n\n//--------------------------------- Handle copy\n  public: SharedStringMap (const SharedStringMap & inSource) ;\n  public: SharedStringMap & operator = (const SharedStringMap & inSource) ;\n\n//--------------------------------- Insert\n  public: void insert (OptionalSharedRef <SharedStringMapNode> & ioObject\n                       COMMA_LOCATION_ARGS) ;\n\n  public: void removeAndReturnRemovedNode (const String & inKey,\n                           OptionalSharedRef <SharedStringMapNode> & outRemovedNode\n                           COMMA_LOCATION_ARGS) ;\n\n  public: bool hasKey (const String & inKey) const ;\n\n  public: int32_t count (void) const ;\n\n  public: String rootNodeKey (void) const ;\n\n  public: GenericArray <String> sortedKeyArray (void) const ;\n\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_stringset final {\n  public: UpEnumerator_stringset (const class GGS_stringset & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex < mStringArray.count () ; }\n\n  public: void gotoNextObject (void) { mIndex += 1 ; }\n\n//--- Current element access\n  public: class GGS_string current_key (LOCATION_ARGS) const ;\n  public: class GGS_string current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: const GenericArray <String> mStringArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_stringset (const UpEnumerator_stringset &) = delete ;\n  private: UpEnumerator_stringset & operator = (const UpEnumerator_stringset &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_stringset final {\n\n  public: DownEnumerator_stringset (const class GGS_stringset & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: void gotoNextObject (void) { mIndex -= 1 ; }\n\n//--- Current element access\n  public: class GGS_string current_key (LOCATION_ARGS) const ;\n  public: class GGS_string current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: const GenericArray <String> mStringArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_stringset (const DownEnumerator_stringset &) = delete ;\n  private: DownEnumerator_stringset & operator = (const DownEnumerator_stringset &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//   @stringset type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_stringset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: SharedStringMap mSharedMap ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedMap.isValid () ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mSharedMap.drop () ; }\n\n//--------------------------------- Default constructor\n  public: GGS_stringset (void) ;\n\n//--------------------------------- Virtual constructor\n  public: virtual ~ GGS_stringset (void) = default ;\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @filewrapper type\n//--------------------------------------------------------------------------------------------------\n\nclass cRegularFileWrapper {\n  public: const char * mName ;\n  public: const char * mExtension ;\n  public: const bool mIsTextFile ; // True: text file, false: binary file\n  public: const uint32_t mFileLength ;\n  public: const char * mContents ;\n\n//--- Constructor\n  public: cRegularFileWrapper (const char * inName,\n                                const char * inExtension,\n                                const bool inIsTextFile,\n                                const uint32_t inFileLength,\n                                const char * inContents) ;\n\n//--- No copy\n  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cDirectoryWrapper {\n  public: const char * mDirectoryName ;\n  public: const uint32_t mFileCount ;\n  public: const cRegularFileWrapper * * const mFiles ;\n  public: const uint32_t mDirectoryCount ;\n  public: const cDirectoryWrapper * * mDirectories ;\n\n//--- Constructor\n  public: cDirectoryWrapper (const char * inDirectoryName,\n                              const uint32_t inFileCount,\n                              const cRegularFileWrapper * * const inFiles,\n                              const uint32_t inDirectoryCount,\n                              const cDirectoryWrapper * * inDirectories) ;\n\n//--- No copy\n  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_filewrapper : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n  private: String mCurrentDirectory ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mRootDirectoryPtr ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mRootDirectoryPtr = nullptr ; }\n\n//--------------------------------- Default constructor\n  public: GGS_filewrapper (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n\n//--------------------------------- Handle copy\n  public: GGS_filewrapper (const GGS_filewrapper & inSource) ;\n  public: GGS_filewrapper & operator = (const GGS_filewrapper & inSource) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("@application package").stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_application final {\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @bigint type\n//--------------------------------------------------------------------------------------------------\n \nclass GGS_bigint : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: BigSigned mValue ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: inline BigSigned bigintValue (void) const { return mValue ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GGS_bigint (void) ;\n\n//--------------------------------- Constructor\n  public: GGS_bigint (const BigSigned & inValue) ;\n  public: GGS_bigint (const char * inDecimalString, Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GGS_bigint (void) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @timer type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_timer : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: Timer mTimer ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GGS_timer (void) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum cPtr_applicationPredefinedTypeAST::getter_typeKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeKindEnum result_result ; // Returned variable
  result_result = GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type-application.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_applicationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_applicationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-application.galgas", 42)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@applicationPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GGS_classFunctionMap & outArgument_outMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("system"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("verboseOutput"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 57)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("projectVersionString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 64)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("galgasVersionString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 71)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("commandLineArgumentCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 78)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("commandLineArgumentAtIndex"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 85)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionNameList"), GGS_string ("2stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 95)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionInvocationCharacter"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 102)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionInvocationString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 113)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionCommentString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 124)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionValue"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 135)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionNameList"), GGS_string ("2stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 147)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionInvocationCharacter"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 154)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionInvocationString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 165)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionCommentString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 176)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionValue"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 187)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionNameList"), GGS_string ("2stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 199)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionInvocationCharacter"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 206)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionInvocationString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 217)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionCommentString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 228)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionValue"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 239)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("keywordIdentifierSet"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 251)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("keywordListForIdentifier"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 258)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@applicationPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("exit"), GGS_string ("uint"), GGS_string ("inErrorCode"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 274)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setBoolOptionValue"), GGS_string ("string"), GGS_string ("inDomain"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("bool"), GGS_string ("inValue"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 282)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setUIntOptionValue"), GGS_string ("string"), GGS_string ("inDomain"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("uint"), GGS_string ("inValue"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 294)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setStringOptionValue"), GGS_string ("string"), GGS_string ("inDomain"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("string"), GGS_string ("inValue"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 306)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@bigintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_bigintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 30))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bigintPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("zero"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 39)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bigintPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_bigIntType_2420 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), var_bigIntType_2420, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 55)) ;
  }
  GGS_formalParameterSignature var_argList_2466 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2466.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 57)), var_bigIntType_2420, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 57)), GGS_string ("inDivisor")  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 57)) ;
  var_argList_2466.addAssignOperation (GGS_string ("quotient").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 58)), var_bigIntType_2420, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 58)), GGS_string ("outQuotient")  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 58)) ;
  var_argList_2466.addAssignOperation (GGS_string ("remainder").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 59)), var_bigIntType_2420, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 59)), GGS_string ("outRemainder")  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 59)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("divideBy"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 61)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 62)), var_argList_2466, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 64)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 66)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 60)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bigintPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), GGS_string ("inBit"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("setBitAtIndex"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 78)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("complementBitAtIndex"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 88)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bigintPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInUInt"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInSInt"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInUInt64"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInSInt64"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("spacedString"), GGS_string ("uint"), GGS_string ("inSeparation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 144)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 152)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 160)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 171)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitCountForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitCountForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 187)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 195)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 203)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 211)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 219)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("abs"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 227)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitAtIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 235)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isZero"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 243)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sign"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 251)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract8ForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 259)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract8ForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 267)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract32ForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 275)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract32ForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 283)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract64ForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint64list"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 291)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract64ForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint64list"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 299)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@bigintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_bigintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 314)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 314)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 314)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 314)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 317)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 317)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 317)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 318)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 317)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 318)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 318)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_binarysetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 30)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 30)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_binarysetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 37)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 37)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 38)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_binarysetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 44))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@binarysetPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithBit"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptyBinarySet"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 61)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fullBinarySet"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 68)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithPredicateString"), GGS_string ("string"), GGS_string ("inPredicateString"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 75)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithNotEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 84)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 97)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictLowerComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 110)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictGreaterComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 123)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithLowerOrEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 136)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithGreaterOrEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 149)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 162)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithNotEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 175)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictLowerThanConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 188)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictGreaterThanConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 201)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithLowerOrEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 214)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithGreaterOrEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 227)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@binarysetPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 246)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isFull"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 247)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nodeCount"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 255)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isEmpty"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 263)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantVariableCount"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 271)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("ITE"), GGS_string ("binaryset"), GGS_string ("inTHENoperand"), GGS_string ("binaryset"), GGS_string ("inELSEoperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 279)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("print"), GGS_string ("stringlist"), GGS_string ("inVariableList"), GGS_string ("uintlist"), GGS_string ("inBDDCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 288)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("graphvizDump"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 297)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("graphviz"), GGS_string ("stringlist"), GGS_string ("inBitNameList"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 305)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transformedBy"), GGS_string ("uintlist"), GGS_string ("inTransformationArray"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 313)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("forAllOnBitIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 321)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("forAllOnBitIndexAndBeyond"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 329)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existOnBitIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 336)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existOnBitIndexAndBeyond"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 343)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("valueCount"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 350)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigValueCount"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("bigint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 359)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compressedValueCount"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 368)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64ValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64list"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 376)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 383)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringValueListWithNameList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("stringlist"), GGS_string ("inNameList"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 390)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("predicateStringValue"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 397)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compressedStringValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 405)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap10"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 412)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap021"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 419)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap102"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 426)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap120"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 433)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap201"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 440)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap210"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 447)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transposedBy"), GGS_string ("uintlist"), GGS_string ("inTransposeVector"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 454)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transitiveClosure"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 461)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("accessibleStates"), GGS_string ("binaryset"), GGS_string ("inInitialStateSet"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 468)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("implies"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 475)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("equalTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 482)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("notEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 489)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lowerOrEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 496)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("greaterOrEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 503)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("strictGreaterThan"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 510)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("strictLowerThan"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 517)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetByTranslatingFromIndex"), GGS_string ("uint"), GGS_string ("inFirstIndexToTranslate"), GGS_string ("uint"), GGS_string ("inTranslation"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 524)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsValue"), GGS_string ("uint64"), GGS_string ("inValue"), GGS_string ("uint"), GGS_string ("inFirstBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 531)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existsOnBitRange"), GGS_string ("uint"), GGS_string ("inFirstBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 538)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@binarysetPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setNodeTableSize"), GGS_string ("uint"), GGS_string ("inTableSize"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 552)) ;
  }
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setAndTableSize"), GGS_string ("uint"), GGS_string ("inTableSize"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 560)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_boolPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)).operator_or (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 31)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 31)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_boolPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 37))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 51)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 52)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("ocString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 68)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 76)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 84)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 92)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 100)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@charPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_charPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-char.galgas", 30)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-char.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-char.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@charPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 37)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 38)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Length"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf32CharConstantRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 54)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 62)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isalnum"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 70)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isalpha"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 78)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("iscntrl"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 86)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isdigit"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("islower"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isupper"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 110)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isxdigit"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 118)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeLetter"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeMark"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 134)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeNumber"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 142)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeSeparator"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 150)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeCommand"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 158)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodePunctuation"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 166)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeSymbol"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 174)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeName"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 182)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeToLower"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 190)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeToUpper"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 198)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@charPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("replacementCharacter"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 213)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeCharacterWithUnsigned"), GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 220)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeCharacterFromRawKeyboard"), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 229)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@charPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_charPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 241))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_dataPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 30)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 30)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dataPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptyData"), GGS_string ("data"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 38)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("dataWithContentsOfFile"), GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("data"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 45)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_dataPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-data.galgas", 59)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-data.galgas", 59)) COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 59)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dataPredefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                            GGS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                            GGS_string & outArgument_outEnumeratedType,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_uintTypeIndex_2935 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), var_uintTypeIndex_2935, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 67)) ;
  }
  outArgument_outEnumerationList = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.addAssignOperation (var_uintTypeIndex_2935, GGS_string ("data")  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 69)) ;
  outArgument_outEnumeratedType = GGS_string ("uint") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dataPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 78)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 86)) ;
  }
  GGS_formalParameterSignature var_argList_3829 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3919 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_t_3919, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 95)) ;
  }
  var_argList_3829.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas", 96)), var_t_3919, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-data.galgas", 96)), GGS_string ("inFilePath")  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 96)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_t_3919, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 97)) ;
  }
  var_argList_3829.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas", 98)), var_t_3919, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-data.galgas", 98)), GGS_string ("outFileModified")  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 98)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 100)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-data.galgas", 101)), var_argList_3829, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 103)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-data.galgas", 105)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 99)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dataPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 114)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("length"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cStringRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 123)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dataPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_setterMap & outArgument_outSetterMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendByte"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 138)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendShortBE"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 146)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendShortLE"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 154)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendUIntBE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 162)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendUIntLE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 170)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inValue"), GGS_string ("appendUTF8String"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 178)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("data"), GGS_string ("inValue"), GGS_string ("appendData"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 186)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_dataPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 199))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@doublePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_doublePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 33)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 33)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 34)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@doublePredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 41)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 42)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 50)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 58)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 74)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cos"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 82)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sin"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 90)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("tan"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 98)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("log10"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 106)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("log2"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 114)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("logn"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("exp"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 130)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cosDegree"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 138)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sinDegree"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 146)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("tanDegree"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 154)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sqrt"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 162)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("power"), GGS_string ("double"), GGS_string ("inExponant"), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 170)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryImage"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 177)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@doublePredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("pi"), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 192)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doubleWithBinaryImage"), GGS_string ("uint64"), GGS_string ("inBinaryImage"), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 199)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@doublePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_doublePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 213))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_filewrapperPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_filewrapperPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_setterMap & outArgument_outSetterMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inDirectoryPath"), GGS_string ("setCurrentDirectory"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 44)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_getterMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 58)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allTextFilePathes"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 59)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allBinaryFilePathes"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 67)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allDirectoryPathes"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 75)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("currentDirectory"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 83)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allFilePathesWithExtension"), GGS_string ("string"), GGS_string ("inExtension"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 91)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoryExistsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("bool"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 98)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileExistsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("bool"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("textFileContentsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryFileContentsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("data"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 119)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("absolutePathForPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoriesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryFilesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 140)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("textFilesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 147)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_functionPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-function.galgas", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-function.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_functionPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("functionList"), GGS_string ("functionlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 38)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("functionWithName"), GGS_string ("string"), GGS_string ("inName"), GGS_string ("function"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 45)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isFunctionDefined"), GGS_string ("string"), GGS_string ("inFunctionName"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 54)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_functionPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GGS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 69)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("name"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 70)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("resultType"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 78)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("formalParameterTypeList"), GGS_string::makeEmptyString (), GGS_string ("typelist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 86)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("invoke"), GGS_string ("objectlist"), GGS_string ("inParameters"), GGS_string ("location"), GGS_string ("inErrorLocation"), GGS_string ("object"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 94)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_functionPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 106))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_locationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-location.galgas", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-location.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@locationPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nowhere"), GGS_string ("location"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("here"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("next"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("separator"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@locationPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GGS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 72)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLocationString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 73)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLocationString"), GGS_string ("locationString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 81)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLocationIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 89)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLocationIndex"), GGS_string ("locationIndex"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 97)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("file"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 105)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLine"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 113)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLine"), GGS_string ("line"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 121)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startColumn"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 129)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endColumn"), GGS_string ("column"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 137)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isNowhere"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 145)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("union"), GGS_string::makeEmptyString (), GGS_string ("location"), GGS_string ("inOtherLocation"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 153)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_locationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 166))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_objectPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-object.galgas", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-object.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_objectPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@objectPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_objectPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas", 43)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("objectStaticType"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas", 44)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("objectDynamicType"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas", 52)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_stringsetPredefinedTypeAST::getter_supportsCollectionValue (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_stringsetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 36)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 36)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_stringsetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 42))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_stringsetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 48)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 49)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 48)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 49)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 49)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 50)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 49)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 50)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 50)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 51)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 50)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 51)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 51)).operator_or (GGS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 52)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 51)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringsetPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptySet"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 60)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 67)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithStringList"), GGS_string ("stringlist"), GGS_string ("inStringList"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 76)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithLStringList"), GGS_string ("lstringlist"), GGS_string ("inLStringList"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 85)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringsetPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_setterMap & outArgument_outSetterMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringType_3941 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_3941, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 100)) ;
  }
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  outArgument_outSetterMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeKey"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 103)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 104)), GGS_formalParameterSignature::class_func_listWithValue (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 105)), var_stringType_3941, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 105)), GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 105)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 107)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 102)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inValue"), GGS_string ("insert"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 110)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringsetPredefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                 GGS_string & outArgument_outEnumeratedType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_4860 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringTypeIndex_4860, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 125)) ;
  }
  outArgument_outEnumerationList = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.addAssignOperation (var_stringTypeIndex_4860, GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 127)) ;
  outArgument_outEnumeratedType = GGS_string ("string") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringsetPredefinedTypeAST getAddAssignArgumentList'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getAddAssignArgumentList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GGS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_5347 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("stringset"), var_stringTypeIndex_5347, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 135)) ;
  }
  GGS_functionSignature temp_0 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 136)) ;
  temp_0.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 136)), var_stringTypeIndex_5347, GGS_string ("inString"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 136)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringsetPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasKey"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 144)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 151)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("anyString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 159)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringList"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 167)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_sintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 30))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_sintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 38)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 38)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)).operator_or (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 42)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 42)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 43)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sintPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("min"), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sintPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 72)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("double"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 97)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 113)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 121)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 129)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 140)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 149)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 156)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 163)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 170)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_sint_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 32)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 32)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)).operator_or (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 36)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 36)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 37)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sint64PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_sint_36__34_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GGS_classFunctionMap & outArgument_outMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("sint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("min"), GGS_string ("sint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 52)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sint64PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_sint_36__34_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_getterMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 65)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("double"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 74)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 82)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 90)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 98)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 106)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 114)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("sint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 142)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("sint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 149)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("sint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 156)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("sint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 163)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_sint_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 175))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringPredefinedTypeAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  GGS_lstring joker_1660 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_1660, GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 30)), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 30)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("homeDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("newWithStdIn"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("retrieveAndResetTemplateString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("separatorString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 59)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSymbolicLinkContents"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 66)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSourceFilePath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 75)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithCurrentDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 82)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithContentsOfFile"), GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 89)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithCurrentDateTime"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 98)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithEnvironmentVariable"), GGS_string ("string"), GGS_string ("inVariableName"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 105)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithEnvironmentVariableOrEmpty"), GGS_string ("string"), GGS_string ("inVariableName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 114)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppLineComment"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 123)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppSpaceComment"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 130)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppTitleComment"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 137)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 146)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppChar"), GGS_string ("char"), GGS_string ("inChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 155)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("componentsJoinedByString"), GGS_string ("stringlist"), GGS_string ("inComponents"), GGS_string ("string"), GGS_string ("inSeparator"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 164)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByRepeatingString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("uint"), GGS_string ("inCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 175)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSequenceOfCharacters"), GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 186)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classMethodMap & outArgument_outClassMethodMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deleteFile"), GGS_string ("inFilePath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 204)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deleteFileIfExists"), GGS_string ("inFilePath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 211)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removeEmptyDirectory"), GGS_string ("inDirectoryPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 218)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removeDirectoryRecursively"), GGS_string ("inDirectoryPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 225)) ;
  }
  GGS_unifiedTypeMapEntry var_stringType_7250 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_7250, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 232)) ;
  }
  GGS_unifiedTypeMapEntry var_boolType_7340 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_boolType_7340, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 233)) ;
  }
  GGS_formalParameterSignature var_argList_7406 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_7406.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 236)), var_stringType_7250, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 236)), GGS_string ("inStartPath")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 236)) ;
  var_argList_7406.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 237)), var_stringType_7250, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 237)), GGS_string ("inFileName")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 237)) ;
  var_argList_7406.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 238)), var_stringType_7250, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 238)), GGS_string ("inContents")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 238)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("generateFile"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 240)), inCompiler COMMA_HERE), var_argList_7406, GGS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 239)) ;
  }
  var_argList_7406 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_7406.addAssignOperation (GGS_string ("startPath").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 246)), var_stringType_7250, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 246)), GGS_string ("inStartPath")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 246)) ;
  var_argList_7406.addAssignOperation (GGS_string ("fileName").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 247)), var_stringType_7250, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 247)), GGS_string ("inFileName")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 247)) ;
  var_argList_7406.addAssignOperation (GGS_string ("lineComment").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 248)), var_stringType_7250, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 248)), GGS_string ("inLineCommentPrefix")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 248)) ;
  var_argList_7406.addAssignOperation (GGS_string ("header").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 249)), var_stringType_7250, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 249)), GGS_string ("inHeader")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 249)) ;
  var_argList_7406.addAssignOperation (GGS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 250)), var_stringType_7250, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 250)), GGS_string ("inDefaultUserZone1")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 250)) ;
  var_argList_7406.addAssignOperation (GGS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 251)), var_stringType_7250, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 251)), GGS_string ("inGeneratedZone2")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 251)) ;
  var_argList_7406.addAssignOperation (GGS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 252)), var_stringType_7250, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 252)), GGS_string ("inDefaultUserZone2")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 252)) ;
  var_argList_7406.addAssignOperation (GGS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 253)), var_stringType_7250, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 253)), GGS_string ("inGeneratedZone3")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 253)) ;
  var_argList_7406.addAssignOperation (GGS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 254)), var_boolType_7340, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 254)), GGS_string ("inMakeExecutable")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 254)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("generateFileWithPattern"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 256)), inCompiler COMMA_HERE), var_argList_7406, GGS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 255)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 267)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 275)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeDirectoryAndWriteToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 283)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeDirectoryAndWriteToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 291)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeSymbolicLinkWithPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 299)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (outArgument_outInstanceMethodMap, GGS_string ("makeDirectory"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 307)) ;
  }
  GGS_formalParameterSignature var_argList_10531 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_10621 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_t_10621, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 314)) ;
  }
  var_argList_10531.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 315)), var_t_10621, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 315)), GGS_string ("inFilePath")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 315)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_t_10621, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 316)) ;
  }
  var_argList_10531.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 317)), var_t_10621, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-string.galgas", 317)), GGS_string ("outFileModified")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 317)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 319)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas", 320)), var_argList_10531, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 322)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas", 324)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 318)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToExecutableFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 328)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas", 329)), var_argList_10531, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 331)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas", 333)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 327)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inCapacity"), GGS_string ("setCapacity"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 343)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inAmount"), GGS_string ("incIndentation"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 351)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inAmount"), GGS_string ("decIndentation"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 359)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inColumnIndex"), GGS_string ("appendSpacesUntilColumn"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 367)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("setCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 375)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("insertCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 385)) ;
  }
  {
  routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("outChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("removeCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 395)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 411)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lastCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 412)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removingFirst"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 420)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nowhere"), GGS_string::makeEmptyString (), GGS_string ("lstring"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 428)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("here"), GGS_string::makeEmptyString (), GGS_string ("lstring"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 436)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doesEnvironmentVariableExist"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 444)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("length"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 452)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("range"), GGS_string::makeEmptyString (), GGS_string ("range"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 460)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationWithUnicodeEscaping"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 468)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("assemblerRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 476)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileNameRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 484)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nameRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 492)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cStringRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 500)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("identifierRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 508)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decodedStringFromRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 516)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("HTMLRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 524)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationEscapingQuestionMark"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 532)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Representation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 540)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationWithoutDelimiters"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 548)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Length"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 556)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf32Representation"), GGS_string ("withZeroTerminator"), GGS_string ("bool"), GGS_string ("inAppendZeroTerminator"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 564)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByTrimmingWhiteSpaces"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 574)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasPrefix"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPrefix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 582)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasSuffix"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSuffix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 591)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("md5"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 600)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sha256"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 608)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalUnsignedNumber"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 616)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalUnsignedNumber"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 624)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalUnsigned64Number"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 632)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalUnsigned64Number"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 640)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSignedNumber"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 648)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSignedNumber"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 656)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSigned64Number"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 664)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSigned64Number"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 672)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSignedBigInt"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 680)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint\?"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 688)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSignedBigInt"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 696)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDoubleNumber"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 704)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doubleNumber"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 712)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("capacity"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 720)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isSymbolicLink"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 728)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileExists"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 736)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoryExists"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 744)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("pathExtension"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 752)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nativePathWithUnixPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 760)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unixPathWithNativePath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 768)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lastPathComponent"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 776)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deletingPathExtension"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 784)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("capitalizingFirstCharacter"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 792)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("firstCharacterOrNul"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 800)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByDeletingLastPathComponent"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 808)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByStandardizingPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 816)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lowercaseString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 824)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uppercaseString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 832)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("reversedString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 840)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("currentColumn"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 848)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("system"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 856)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("popen"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 864)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationEnclosedWithin"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inCharacter"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 872)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("commandWithArguments"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inArguments"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 881)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hiddenCommandWithArguments"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inArguments"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 890)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("characterAtIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 899)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inCharacter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 908)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsCharacterInRange"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inFirstCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inLastCharacter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 917)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByRemovingCharacterAtIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 930)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("subStringFromIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 939)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("rightSubString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 948)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftSubString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 957)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("subString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inStart"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 966)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("absolutePathFromPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 975)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("relativePathFromPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 984)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("componentsSeparatedByString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSeparator"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 992)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByLeftPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1000)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByRightPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1009)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByLeftAndRightPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1018)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByReplacingStringByString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSearchedString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inReplacementString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1027)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("regularFiles"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1036)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hiddenFiles"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1046)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directories"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1055)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoriesWithExtensions"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inExtensionList"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1064)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("regularFilesWithExtensions"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inExtensionList"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1073)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_stringPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-string.galgas", 1087)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-string.galgas", 1087)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1087)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-string.galgas", 1088)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1087)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-string.galgas", 1088)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1088)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-string.galgas", 1088)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1088)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_stringPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1094))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_timerPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 30)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 30)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_timerPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-timer.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@timerPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                       GGS_setterMap & outArgument_outSetterMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GGS_string ("stop"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 44)) ;
  }
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GGS_string ("resume"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 49)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@timerPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       GGS_getterMap & outArgument_outMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("msFromStart"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 61)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 69)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isRunning"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 77)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@timerPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_classFunctionMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("start"), GGS_string ("timer"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 92)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_timerPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 104))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typePredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("typeList"), GGS_string ("typelist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 32)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typePredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("name"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasSuperclass"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 54)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("superclass"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 62)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_typePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-type.galgas", 75)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-type.galgas", 75)) COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 75)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_typePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 81))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_uintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 30))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_uintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)).operator_or (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 41)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 41)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 42)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@uintPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compilationMode"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("random"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 57)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 64)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("errorCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 71)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("warningCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 78)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("valueWithMask"), GGS_string ("uint"), GGS_string ("inLowerIndex"), GGS_string ("uint"), GGS_string ("inUpperIndex"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 85)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@uintPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("double"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 111)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 119)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 127)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 135)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lsbIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantBitCount"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 151)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("oneBitCount"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 159)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 167)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("alphaString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 175)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 183)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 191)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 202)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeValueAssigned"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 210)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isInRange"), GGS_string ("range"), GGS_string ("inRange"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 218)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 226)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 233)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 240)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 247)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@uintPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_classMethodMap & outArgument_outClassMethodMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setRandomSeed"), GGS_string ("uint"), GGS_string ("inSeed"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 261)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_uint_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 28))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_uint_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)).operator_or (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 39)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 39)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 40)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@uint64PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uint_36__34_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GGS_classFunctionMap & outArgument_outMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 48)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64MaskWithCompressedBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 55)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64BaseValueWithCompressedBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 64)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64WithBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 73)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@uint64PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uint_36__34_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_getterMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("double"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 97)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintSlice"), GGS_string ("uint"), GGS_string ("inStartBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("alphaString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 137)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 145)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 153)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 161)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 172)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 180)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 187)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 194)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 201)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeEmbeddedTypeLName (const GGS_lstring & constinArgument_inOuterTypeName,
                                            const GGS_lstring & constinArgument_inInnerTypeName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (function_makeEmbeddedTypeName (constinArgument_inOuterTypeName.readProperty_string (), constinArgument_inInnerTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 24)), constinArgument_inOuterTypeName.readProperty_location ().getter_union (constinArgument_inInnerTypeName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 25)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeEmbeddedTypeLName [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeEmbeddedTypeLName (Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

GGS_string function_makeEmbeddedTypeName (const GGS_string & constinArgument_inOuterTypeName,
                                          const GGS_string & constinArgument_inInnerTypeName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inOuterTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 32)).add_operation (constinArgument_inInnerTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 32)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeEmbeddedTypeName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeEmbeddedTypeName (Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

GGS_string function_makeOptionalTypeName (const GGS_string & constinArgument_inTypeName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inTypeName.add_operation (GGS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 40)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeOptionalTypeName [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeOptionalTypeName (Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_lstring function_makeOptionalTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = constinArgument_inTypeName ;
  result_result.mProperty_string.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 47)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeOptionalTypeLName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeOptionalTypeLName (Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_string function_makeEmbeddedElementTypeName (const GGS_string & constinArgument_inTypeName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = function_makeEmbeddedTypeName (constinArgument_inTypeName, GGS_string ("element"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 55)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeEmbeddedElementTypeName [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeEmbeddedElementTypeName (Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GGS_lstring function_makeEmbeddedElementTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (function_makeEmbeddedElementTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 61)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeEmbeddedElementTypeLName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeEmbeddedElementTypeLName (Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GGS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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
//Function 'makeArrayTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeArrayTypeName (const GGS_string & constinArgument_inTypeName,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("[").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 69)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 69)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeArrayTypeName [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeArrayTypeName (Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_makeArrayTypeName (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeArrayTypeName ("makeArrayTypeName",
                                                                   functionWithGenericHeader_makeArrayTypeName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_makeArrayTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeArrayTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (function_makeArrayTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 75)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeArrayTypeLName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeArrayTypeLName (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_makeArrayTypeLName (operand0,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeArrayTypeLName ("makeArrayTypeLName",
                                                                    functionWithGenericHeader_makeArrayTypeLName,
                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                    1,
                                                                    functionArgs_makeArrayTypeLName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeWeakTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeWeakTypeName (const GGS_string & constinArgument_inTypeName,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = function_makeEmbeddedTypeName (constinArgument_inTypeName, GGS_string ("weak"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 83)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeWeakTypeName [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeWeakTypeName (Compiler * inCompiler,
                                                              const cObjectArray & inEffectiveParameterArray,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_makeWeakTypeName (operand0,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeWeakTypeName ("makeWeakTypeName",
                                                                  functionWithGenericHeader_makeWeakTypeName,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_makeWeakTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeWeakTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeWeakTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (function_makeWeakTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 89)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeWeakTypeLName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeWeakTypeLName (Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_makeWeakTypeLName (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeWeakTypeLName ("makeWeakTypeLName",
                                                                   functionWithGenericHeader_makeWeakTypeLName,
                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                   1,
                                                                   functionArgs_makeWeakTypeLName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  result_result = GGS_string ("array [@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 68)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 68)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                   GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                   GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                   GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                   GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                   GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                   GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  const GGS_arrayTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_3698 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 81)), temp_1.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3698, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 82)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_3 = this ;
  const GGS_arrayTypeDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_elementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 83)), temp_4.readProperty_elementTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-array.galgas", 83)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayTypeDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                             const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                             const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                             const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                             const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_uintType_4648 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("uint"), var_uintType_4648, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 97)) ;
  }
  GGS_unifiedTypeMapEntry var_elementType_4739 ;
  {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_elementTypeName (), var_elementType_4739, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 99)) ;
  }
  GGS_formalParameterSignature temp_1 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 102)) ;
  temp_1.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 102)), var_elementType_4739, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas", 102)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 102)) ;
  GGS_formalParameterSignature var_setterInputFormalArgumentList_4815 = temp_1 ;
  GGS_formalParameterSignature temp_2 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 105)) ;
  temp_2.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 105)), var_elementType_4739, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas", 105)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 105)) ;
  GGS_formalParameterSignature var_setterOutputFormalArgumentList_4959 = temp_2 ;
  GGS_getterMap var_getterMap_5140 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_5140, inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 108)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5140, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 109)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_6453 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_6453.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("first"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 152)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 153)), var_setterOutputFormalArgumentList_4959, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 155)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 157)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 151)) ;
  }
  {
  var_instanceMethodMap_6453.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("last"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 161)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 162)), var_setterOutputFormalArgumentList_4959, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 164)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 166)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 160)) ;
  }
  GGS_setterMap var_setterMap_7014 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS_formalParameterSignature temp_3 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 174)) ;
  temp_3.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 174)), var_elementType_4739, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas", 174)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 174)) ;
  var_setterMap_7014.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("append"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 172)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 173)), temp_3, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 176)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 171)) ;
  }
  {
  var_setterMap_7014.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("popFirst"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 180)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 181)), var_setterOutputFormalArgumentList_4959, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 184)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 179)) ;
  }
  {
  var_setterMap_7014.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("popLast"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 188)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 189)), var_setterOutputFormalArgumentList_4959, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 192)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 187)) ;
  }
  var_setterOutputFormalArgumentList_4959.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 195)), var_uintType_4648, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas", 195)), GGS_string ("inIndex")  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 195)) ;
  {
  var_setterMap_7014.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 197)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 198)), var_setterOutputFormalArgumentList_4959, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 201)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 196)) ;
  }
  var_setterInputFormalArgumentList_4815.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 205)), var_uintType_4648, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas", 205)), GGS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 205)) ;
  {
  var_setterMap_7014.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("insertAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 207)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 208)), var_setterInputFormalArgumentList_4815, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 211)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 206)) ;
  }
  GGS_initializerMap var_initializerMap_8393 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_8441 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_4 = this ;
  var_initializerMap_8393.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_8441, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 218)), temp_4.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_8441, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 217)) ;
  }
  GGS_subscriptMap var_readSubscriptMap_8646 = GGS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature temp_5 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 223)) ;
  temp_5.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 223)), var_uintType_4648, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 223)) ;
  GGS_functionSignature var_argumentTypeList_8696 = temp_5 ;
  {
  var_readSubscriptMap_8646.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_8696, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 225)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 225)), inCompiler COMMA_HERE), var_argumentTypeList_8696, var_elementType_4739, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 224)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_6 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_arrayTypeName (), GGS_bool (false), var_initializerMap_8393, var_getterMap_5140, var_setterMap_7014, var_instanceMethodMap_6453, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 230)) ;
  }
  GGS_typeFeatures var_features_9368 = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-array.galgas", 246)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-array.galgas", 246)) COMMA_SOURCE_FILE ("declaration-type-array.galgas", 246)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_arrayTypeDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_features_9368.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-array.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 248)) ;
    }
  }
  {
  const GGS_arrayTypeDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_arrayTypeName (), var_features_9368, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 250)) ;
  }
  const GGS_arrayTypeDeclarationAST temp_10 = this ;
  const GGS_arrayTypeDeclarationAST temp_11 = this ;
  const GGS_arrayTypeDeclarationAST temp_12 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_9726 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_10.readProperty_arrayTypeName (), temp_11.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas", 263)), GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-array.galgas", 264)), GGS_bool (true), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_8393, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_5140, var_setterMap_7014, var_instanceMethodMap_6453, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas", 275)), var_readSubscriptMap_8646, GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_9368, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_elementType_4739, GGS_string ("array-").add_operation (temp_12.readProperty_arrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-array.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 282)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-array.galgas", 283)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_9726.readProperty_typeName (), var_typeDefinition_9726, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 285)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayTypeDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                            const GGS_string /* constinArgument_inProductDirectory */,
                                                            const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                            GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_12237 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 323)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12237, var_nameForUsefulness_12237, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 324)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_arrayTypeDeclarationAST temp_2 = this ;
    GGS_bool test_3 = temp_2.readProperty_isUsefull () ;
    if (GalgasBool::boolTrue != test_3.boolEnum ()) {
      const GGS_arrayTypeDeclarationAST temp_4 = this ;
      test_3 = temp_4.readProperty_isPredefined () ;
    }
    test_1 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_12237  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 326)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_12503 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 328)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12237, var_elementTypeNameForUsefulness_12503 COMMA_SOURCE_FILE ("declaration-type-array.galgas", 329)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_arrayTypeDeclarationAST temp_7 = this ;
    GGS_bool test_8 = temp_7.readProperty_isUsefull () ;
    if (GalgasBool::boolTrue != test_8.boolEnum ()) {
      const GGS_arrayTypeDeclarationAST temp_9 = this ;
      test_8 = temp_9.readProperty_isPredefined () ;
    }
    test_6 = test_8.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_elementTypeNameForUsefulness_12503  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 331)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_12881 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_arrayTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 334)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_12881, var_initializerNameForUsefulness_12881, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 338)) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_arrayTypeDeclarationAST temp_12 = this ;
    GGS_bool test_13 = temp_12.readProperty_isUsefull () ;
    if (GalgasBool::boolTrue != test_13.boolEnum ()) {
      const GGS_arrayTypeDeclarationAST temp_14 = this ;
      test_13 = temp_14.readProperty_isPredefined () ;
    }
    test_11 = test_13.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_12881  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 340)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  GGS_unifiedTypeMapEntry var_selfType_14136 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_15.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 361)) ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("array type ").add_operation (temp_16.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 363)), GGS_arrayTypeForGeneration::init_21__21_ (var_selfType_14136, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_17.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 366)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 362)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_15111 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 385)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, var_selfTypeDefinition_15111.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 388)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_15111.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 389)) COMMA_SOURCE_FILE ("declaration-type-array.galgas", 386))) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_15111.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 393)), var_selfTypeDefinition_15111.readProperty_isConcrete (), var_selfTypeDefinition_15111.readProperty_initializerMap (), var_selfTypeDefinition_15111.readProperty_classFunctionMap (), var_selfTypeDefinition_15111.readProperty_getterMap (), var_selfTypeDefinition_15111.readProperty_setterMap (), var_selfTypeDefinition_15111.readProperty_instanceMethodMap (), var_selfTypeDefinition_15111.readProperty_classMethodMap (), var_selfTypeDefinition_15111.readProperty_readSubscriptMap (), var_selfTypeDefinition_15111.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_15111.readProperty_features (), var_selfTypeDefinition_15111.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_15111.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_15111.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-array.galgas", 391))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 391)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outImplementation,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 415)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 416)) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_16620 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 417)) ;
  const GGS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_16620.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 420)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_16620.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 421)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_16620.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 422)) COMMA_SOURCE_FILE ("declaration-type-array.galgas", 418))) ;
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

GGS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (Compiler * inCompiler,
                                                                                const GGS_string & in_TYPE_5F_NAME,
                                                                                const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: ").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 2)).add_operation (GGS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n//--- No copy\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n//--- \n  public: inline bool hasCurrentObject (void) const {\n    return mCurrent >= 0 ;\n  }\n\n//--- \n  public: inline void gotoNextObject (void) {\n    mCurrent -= 1 ;\n  }\n\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n\n//---- Properties\n  private: const GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: int32_t mCurrent ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n//--- No copy\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n//--- \n  public: inline bool hasCurrentObject (void) const {\n    return mCurrent < mSharedArray.count () ;\n  }\n  \n//--- \n  public: inline void gotoNextObject (void) {\n    mCurrent += 1 ;\n  }\n\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n\n//---- Properties\n  private: const GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: int32_t mCurrent ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Private property\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--- Methods that every type should implement\n  public: virtual bool isValid (void) const override ;\n  \n  public: virtual void drop (void) override ;\n\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--------------------------------- Friend\n  friend class UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n  friend class DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayTypeGenerationTemplate arrayTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (Compiler * inCompiler,
                                                                                            const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                            const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GGS_bool & /* in_GENERATE_5F_COMPARISON */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmSharedArray () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmSharedArray (inSource.mSharedArray) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource)  {\n  mSharedArray = inSource.mSharedArray ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mSharedArray.setCapacity (16) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mSharedArray.isAllocated () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  mSharedArray.removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusPlusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  mSharedArray.appendObject (inValue) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (uint32_t (mSharedArray.count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.mSharedArray.appendDataFromPointer (\n      inOperand.mSharedArray.unsafeArrayPointer (),\n      inOperand.mSharedArray.count ()\n    ) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<array @\") ;\n  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\", \") ;\n  ioString.appendSigned (mSharedArray.count()) ;\n  ioString.appendCString (\" object\") ;\n  ioString.appendString ((mSharedArray.count() > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mSharedArray.appendDataFromPointer (\n      inOperand.mSharedArray.unsafeArrayPointer (),\n      inOperand.mSharedArray.count ()\n    ) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    mSharedArray.appendObject (inValue) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insertAtIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_uint inInsertionIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inInsertionIndex.isValid ()) {\n    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;\n    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeAtIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_uint inRemoveIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inRemoveIndex.isValid ()) {\n    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;\n    outValue = mSharedArray (idx COMMA_THERE) ;\n    mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popFirst (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    outValue = mSharedArray (0 COMMA_THERE) ;\n    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popLast (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    outValue = mSharedArray.lastObject (THERE) ;\n    mSharedArray.removeLastObject (THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_first (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (isValid ()) {\n    outValue = mSharedArray (0 COMMA_THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_last (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (isValid ()) {\n    outValue = mSharedArray.lastObject (THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubscript__3F_ (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_uint & inIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const uint32_t idx = inIndex.uintValue () ;\n    if (idx < uint32_t (mSharedArray.count ())) {\n      result = mSharedArray (int32_t (idx) COMMA_HERE) ;\n    }else{\n      String errorMessage ;\n      errorMessage.appendCString (\"subscript value (\") ;\n      errorMessage.appendUnsigned (idx) ;\n      errorMessage.appendCString (\") too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmSharedArray (inOperand.mSharedArray),\nmCurrent (inOperand.mSharedArray.count () - 1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmSharedArray (inOperand.mSharedArray),\nmCurrent (0) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                 GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                 GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_boolsetDeclarationAST temp_0 = this ;
  const GGS_boolsetDeclarationAST temp_1 = this ;
  GGS_lstring var_key_4793 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 127)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_boolsetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4793, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 128)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolsetDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_boolsetDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_boolsetDeclarationAST temp_0 = this ;
  result_result = GGS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 136)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                           const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                           const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_slotNameSet_6090 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_boolsetDeclarationAST temp_0 = this ;
  UpEnumerator_lstringlist enumerator_6115 (temp_0.readProperty_mFlagList ()) ;
  while (enumerator_6115.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_slotNameSet_6090.getter_hasKey (enumerator_6115.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 154)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6115.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated slot name"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 155)) ;
      }
    }
    var_slotNameSet_6090.plusPlusAssignOperation (enumerator_6115.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 157)) ;
    enumerator_6115.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_boolsetTypeIndex_6356 ;
  {
  const GGS_boolsetDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_6356, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 160)) ;
  }
  GGS_getterMap var_getterMap_6446 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6446, inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 162)) ;
  }
  {
  const GGS_boolsetDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6446, ioArgument_ioTypeMap, GGS_string ("contains"), GGS_string::makeEmptyString (), temp_4.readProperty_mBoolsetTypeName ().readProperty_string (), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 163)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_6744 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  const GGS_boolsetDeclarationAST temp_5 = this ;
  UpEnumerator_lstringlist enumerator_6774 (temp_5.readProperty_mFlagList ()) ;
  while (enumerator_6774.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_classFunctionMap_6744.getter_hasKey (enumerator_6774.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 176)).operator_not (SOURCE_FILE ("declaration-type-boolset.galgas", 176)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        {
        var_classFunctionMap_6744.setter_insertKey (enumerator_6774.current_mValue (HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_boolsetTypeIndex_6356, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 177)) ;
        }
      }
    }
    enumerator_6774.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_7009 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_7055 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_boolsetDeclarationAST temp_7 = this ;
  var_initializerMap_7009.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_7055, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 184)), temp_7.readProperty_mBoolsetTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_7055, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 183)) ;
  }
  GGS_setterMap var_setterMap_7247 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_7288 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_boolsetDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mBoolsetTypeName (), GGS_bool (false), var_initializerMap_7009, var_getterMap_6446, var_setterMap_7247, var_instanceMethodMap_7288, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 190)) ;
  }
  GGS_typeFeatures var_features_7726 = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-type-boolset.galgas", 206)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-type-boolset.galgas", 206)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 206)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-type-boolset.galgas", 206)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 206)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-type-boolset.galgas", 207)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 206)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-boolset.galgas", 208)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 207)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-type-boolset.galgas", 208)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 208)).operator_or (GGS_typeFeatures::class_func_andAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas", 209)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 208)).operator_or (GGS_typeFeatures::class_func_orAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas", 210)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 209)).operator_or (GGS_typeFeatures::class_func_xorAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas", 211)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 210)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas", 212)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 211)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_boolsetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isEquatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      var_features_7726.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-boolset.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 214)) ;
    }
  }
  {
  const GGS_boolsetDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mBoolsetTypeName (), var_features_7726, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 216)) ;
  }
  const GGS_boolsetDeclarationAST temp_12 = this ;
  const GGS_boolsetDeclarationAST temp_13 = this ;
  const GGS_boolsetDeclarationAST temp_14 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8373 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_12.readProperty_mBoolsetTypeName (), temp_13.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-boolset.galgas", 229)), GGS_typeKindEnum::class_func_boolsetType (SOURCE_FILE ("declaration-type-boolset.galgas", 230)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_7009, var_classFunctionMap_6744, var_getterMap_6446, var_setterMap_7247, var_instanceMethodMap_7288, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-boolset.galgas", 241)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_7726, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-boolset.galgas", 247)), GGS_string ("boolset-").add_operation (temp_14.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-boolset.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 248)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-boolset.galgas", 249)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8373.readProperty_typeName (), var_typeDefinition_8373, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 251)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolsetDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GGS_string /* constinArgument_inProductDirectory */,
                                                          const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                          const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_boolsetDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-boolset.galgas", 269)).objectCompare (GGS_uint (uint32_t (64U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_boolsetDeclarationAST temp_2 = this ;
      GGS_location var_s_10124 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GGS_uint (uint32_t (64U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 270)).readProperty_location () ;
      const GGS_boolsetDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_10124, GGS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-boolset.galgas", 271)).getter_string (SOURCE_FILE ("declaration-type-boolset.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 271)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 271)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 271)) ;
    }
  }
  const GGS_boolsetDeclarationAST temp_5 = this ;
  GGS_lstring var_boolsetNameForUsefulness_10280 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 274)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_10280, var_boolsetNameForUsefulness_10280, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 275)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_boolsetDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_boolsetNameForUsefulness_10280  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 277)) ;
    }
  }
  const GGS_boolsetDeclarationAST temp_8 = this ;
  GGS_lstring var_initializerNameForUsefulness_10615 = function_initializerNameForUsefulEntitiesGraph (temp_8.readProperty_mBoolsetTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 280)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_10615, var_initializerNameForUsefulness_10615, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 284)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_boolsetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_10615  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 286)) ;
    }
  }
  const GGS_boolsetDeclarationAST temp_11 = this ;
  const GGS_boolsetDeclarationAST temp_12 = this ;
  const GGS_boolsetDeclarationAST temp_13 = this ;
  const GGS_boolsetDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("boolset ").add_operation (temp_11.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 290)), GGS_boolsetTypeForGeneration::init_21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 292)), temp_13.readProperty_mFlagList (), temp_14.readProperty_isEquatable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 289)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'structGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (Compiler * inCompiler,
                                                                               const GGS_string & /* in_TYPE_5F_NAME */,
                                                                               const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const GGS_lstringlist & /* in_SLOT_5F_LIST */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 2)).add_operation (GGS_string (" boolset"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n  private: uint64_t mFlags ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Private constructor\n  private: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                           const GGS_string & in_TYPE_5F_NAME,
                                                                                           const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                           const GGS_lstringlist & in_SLOT_5F_LIST,
                                                                                           const GGS_bigint & in_FULL_5F_SET,
                                                                                           const GGS_bool & in_EQUATABLE
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmFlags (0),\nmIsValid (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) :\nAC_GALGAS_root (),\nmFlags (inFlags),\nmIsValid (true) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  return GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (0) ;\n}\n\n") ;
  GGS_uint index_713_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    UpEnumerator_lstringlist enumerator_713 (in_SLOT_5F_LIST) ;
    while (enumerator_713.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_713.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" (uint64_t (1) << ") ;
      result.appendString (index_713_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      enumerator_713.gotoNextObject () ;
      index_713_idx.increment () ;
    }
  }
  const GalgasBool test_0 = in_EQUATABLE.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::invalid ;\n   if (mIsValid && inOperand.mIsValid) {\n     result = ComparisonResult::operandEqual ;\n     if (mFlags < inOperand.mFlags) {\n       result = ComparisonResult::firstOperandLowerThanSecond ;\n     }else if (mFlags > inOperand.mFlags) {\n       result = ComparisonResult::firstOperandGreaterThanSecond ;\n     }\n   }\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mIsValid ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_contains (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = GGS_bool ((mFlags & inOperand.mFlags) != 0) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::andAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags &= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::orAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags |= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::xorAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags ^= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::minusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags &= ~ inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_or (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags | inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_and (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_xor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags ^ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::substract_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & ~ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_tilde (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (uint64_t (") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 155)).stringValue ()) ;
  result.appendString (") ^ mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<boolset @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GGS_uint index_6298_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    UpEnumerator_lstringlist enumerator_6298 (in_SLOT_5F_LIST) ;
    while (enumerator_6298.hasCurrentObject ()) {
      result.appendString ("    if ((mFlags & (uint64_t (1) << ") ;
      result.appendString (index_6298_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 170)).stringValue ()) ;
      result.appendString (")) != 0) {\n      ioString.appendCString (\" ") ;
      result.appendString (enumerator_6298.current_mValue (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n    }\n") ;
      enumerator_6298.gotoNextObject () ;
      index_6298_idx.increment () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GGS_string (result) ;
}

