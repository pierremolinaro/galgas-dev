#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

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
  result_result = GALGAS_string ("::scanner_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 353)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 353)) ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_1 = this ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_14994 (temp_1.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_14994.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_14994.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 355)) ;
    enumerator_14994.gotoNextObject () ;
  }
  const GALGAS_lexicalRoutineCallInstructionAST temp_2 = this ;
  cEnumerator_lstringlist enumerator_15146 (temp_2.readProperty_mErrorMessageList (), EnumerationOrder::up) ;
  while (enumerator_15146.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 358)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 358)).add_operation (enumerator_15146.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 358)) ;
    enumerator_15146.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 360)) ;
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
  cEnumerator_lexicalSelectBranchListAST enumerator_4297 (temp_0.readProperty_mLexicalSelectBranchList (), EnumerationOrder::up) ;
  while (enumerator_4297.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_4297.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 113)) ;
    GALGAS_lexicalTagMap var_tagMap_4439 = GALGAS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 114)) ;
    cEnumerator_lexicalInstructionListAST enumerator_4504 (enumerator_4297.current_mSelectInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_4504.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4504.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4439, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 116)) ;
      enumerator_4504.gotoNextObject () ;
    }
    enumerator_4297.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_4648 = GALGAS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 119)) ;
  const GALGAS_lexicalSelectInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_4711 (temp_1.readProperty_mDefaultInstructionList (), EnumerationOrder::up) ;
  while (enumerator_4711.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4711.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4648, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 121)) ;
    enumerator_4711.gotoNextObject () ;
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
  cEnumerator_lexicalSelectBranchListAST enumerator_5321 (temp_0.readProperty_mLexicalSelectBranchList (), EnumerationOrder::up) ;
  while (enumerator_5321.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 137)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_5321.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 138)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 139)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 140)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_5615 (enumerator_5321.current_mSelectInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_5615.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5615.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 142)) ;
      enumerator_5615.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 144)) ;
    }
    if (enumerator_5321.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 146)) ;
    }
    enumerator_5321.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 149)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 150)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 151)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_6036 (temp_3.readProperty_mDefaultInstructionList (), EnumerationOrder::up) ;
      while (enumerator_6036.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6036.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 153)) ;
        enumerator_6036.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 155)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 157)) ;
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
  cEnumerator_lexicalSelectBranchListAST enumerator_6648 (temp_0.readProperty_mLexicalSelectBranchList (), EnumerationOrder::up) ;
  while (enumerator_6648.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 170)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_6648.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 171)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 172)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 173)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_6941 (enumerator_6648.current_mSelectInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_6941.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6941.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 175)) ;
      enumerator_6941.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 177)) ;
    }
    if (enumerator_6648.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 179)) ;
    }
    enumerator_6648.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 182)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 183)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 184)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_7363 (temp_3.readProperty_mDefaultInstructionList (), EnumerationOrder::up) ;
      while (enumerator_7363.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7363.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 186)) ;
        enumerator_7363.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 188)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 190)) ;
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
  cEnumerator_lexicalSelectBranchListAST enumerator_7965 (temp_0.readProperty_mLexicalSelectBranchList (), EnumerationOrder::up) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 199)).isValidAndTrue () ;
  if (enumerator_7965.hasCurrentObject () && bool_1) {
    while (enumerator_7965.hasCurrentObject () && bool_1) {
      cEnumerator_lexicalInstructionListAST enumerator_8050 (enumerator_7965.current_mSelectInstructionList (HERE), EnumerationOrder::up) ;
      bool bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 200)).isValidAndTrue () ;
      if (enumerator_8050.hasCurrentObject () && bool_2) {
        while (enumerator_8050.hasCurrentObject () && bool_2) {
          result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_8050.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 201)) ;
          enumerator_8050.gotoNextObject () ;
          if (enumerator_8050.hasCurrentObject ()) {
            bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 200)).isValidAndTrue () ;
          }
        }
      }
      enumerator_7965.gotoNextObject () ;
      if (enumerator_7965.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 199)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_8198 (temp_3.readProperty_mDefaultInstructionList (), EnumerationOrder::up) ;
  bool bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 204)).isValidAndTrue () ;
  if (enumerator_8198.hasCurrentObject () && bool_4) {
    while (enumerator_8198.hasCurrentObject () && bool_4) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_8198.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 205)) ;
      enumerator_8198.gotoNextObject () ;
      if (enumerator_8198.hasCurrentObject ()) {
        bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 204)).isValidAndTrue () ;
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
  cEnumerator_lexicalSelectBranchListAST enumerator_8685 (temp_0.readProperty_mLexicalSelectBranchList (), EnumerationOrder::up) ;
  while (enumerator_8685.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 219)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_8685.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 220)) ;
    result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 221)) ;
    {
    result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 222)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_8922 (enumerator_8685.current_mSelectInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_8922.hasCurrentObject ()) {
      result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8922.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 224)) ;
      enumerator_8922.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 226)) ;
    }
    if (enumerator_8685.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 228)) ;
    }
    enumerator_8685.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 231)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 232)) ;
      {
      result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 233)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_9291 (temp_3.readProperty_mDefaultInstructionList (), EnumerationOrder::up) ;
      while (enumerator_9291.hasCurrentObject ()) {
        result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_9291.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 235)) ;
        enumerator_9291.gotoNextObject () ;
      }
      {
      result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 237)) ;
      }
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 239)) ;
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
  GALGAS_lexicalSentValueList joker_3052 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mSentTerminal (), joker_3052, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 65)) ;
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
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 76)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 76)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 76)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 76)) ;
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
  result_outGeneratedCode = GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 85)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 85)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 85)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 85)) ;
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
  result_result = GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 103)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 103)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 104)) ;
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
  ioArgument_ioTagMap.setter_insertKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 67)) ;
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
  result_outGeneratedCode = GALGAS_string ("scanningPointStructForCocoa locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 78)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 78)) ;
  const GALGAS_lexicalTagInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("[self saveScanningPoint: & locationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 79)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 79)) ;
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
  result_outGeneratedCode = GALGAS_string ("let locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 88)).add_operation (GALGAS_string (" = self.savedScanningPoint ()\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 88)) ;
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
  result_result = GALGAS_string ("const LocationInSource currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 105)).add_operation (GALGAS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 105)).add_operation (GALGAS_string ("const LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 105)).add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (GALGAS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (GALGAS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 107)).add_operation (GALGAS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 107)) ;
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
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 67)) ;
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
  result_result = GALGAS_string ("lexicalWarning (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 104)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 104)).add_operation (temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 104)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 104)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas", 185)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap var_boolOptionMap_7801 = GALGAS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_commandLineOptionMap var_uintOptionMap_7848 = GALGAS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_commandLineOptionMap var_stringOptionMap_7895 = GALGAS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_7944 = GALGAS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_stringset var_optionNameSet_7975 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("optionCompilation.galgas", 204)) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  cEnumerator_commandLineOptionListAST enumerator_8137 (temp_0.readProperty_mOptions (), EnumerationOrder::up) ;
  while (enumerator_8137.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_optionNameSet_7975.getter_hasKey (enumerator_8137.current_mOptionInternalName (HERE).readProperty_string () COMMA_SOURCE_FILE ("optionCompilation.galgas", 206)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_8137.current_mOptionInternalName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8137.current_mOptionInternalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 207)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 207)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas", 207)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_8137.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_boolOptionMap_7801.setter_insertKey (enumerator_8137.current_mOptionInternalName (HERE), enumerator_8137.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_8137.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_8137.current_mOptionComment (HERE).readProperty_string (), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 209)) ;
          }
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8137.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 216)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_8137.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas", 217)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_8137.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::equal, enumerator_8137.current_mOptionDefaultValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("0") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = enumerator_8137.current_mOptionDefaultValue (HERE).readProperty_string () ;
            }
            var_uintOptionMap_7848.setter_insertKey (enumerator_8137.current_mOptionInternalName (HERE), enumerator_8137.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_8137.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_8137.current_mOptionComment (HERE).readProperty_string (), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 220)) ;
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (ComparisonKind::equal, enumerator_8137.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 227)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_8137.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas", 228)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_8137.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              {
              var_stringOptionMap_7895.setter_insertKey (enumerator_8137.current_mOptionInternalName (HERE), enumerator_8137.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_8137.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_8137.current_mOptionComment (HERE).readProperty_string (), enumerator_8137.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 231)) ;
              }
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (ComparisonKind::equal, enumerator_8137.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 238)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_8137.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas", 239)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_11) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (ComparisonKind::equal, enumerator_8137.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
              if (kBoolTrue == test_14) {
                {
                var_stringListOptionMap_7944.setter_insertKey (enumerator_8137.current_mOptionInternalName (HERE), enumerator_8137.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_8137.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_8137.current_mOptionComment (HERE).readProperty_string (), enumerator_8137.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 242)) ;
                }
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8137.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 249)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    TC_Array <FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (enumerator_8137.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @stringlist option cannot accept default value"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas", 250)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_14) {
              TC_Array <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_8137.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray17  COMMA_SOURCE_FILE ("optionCompilation.galgas", 253)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_7975.addAssign_operation (enumerator_8137.current_mOptionInternalName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 255)) ;
    enumerator_8137.gotoNextObject () ;
  }
  {
  const GALGAS_optionComponentDeclarationAST temp_18 = this ;
  const GALGAS_optionComponentDeclarationAST temp_19 = this ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_18.readProperty_mOptionComponentName (), temp_19.readProperty_isPredefined (), var_boolOptionMap_7801, var_uintOptionMap_7848, var_stringOptionMap_7895, var_stringListOptionMap_7944, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 258)) ;
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
  GALGAS_lstring var_nameForUsefulness_11303 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 282)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11303, var_nameForUsefulness_11303, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 283)) ;
  }
  GALGAS_bool var_optionIsPredefined_11580 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_11630 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_11675 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_11720 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_11767 ;
  const GALGAS_optionComponentDeclarationAST temp_1 = this ;
  constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionIsPredefined_11580, var_boolOptionMap_11630, var_uintOptionMap_11675, var_stringOptionMap_11720, var_stringListOptionMap_11767, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 285)) ;
  GALGAS_commandLineOptionSortedList var_boolOptionSortedList_11845 = GALGAS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  cEnumerator_commandLineOptionMap enumerator_11889 (var_boolOptionMap_11630, EnumerationOrder::up) ;
  while (enumerator_11889.hasCurrentObject ()) {
    var_boolOptionSortedList_11845.addAssign_operation (enumerator_11889.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_11889.current (HERE).readProperty_mOptionChar (), enumerator_11889.current (HERE).readProperty_mOptionString (), enumerator_11889.current (HERE).readProperty_mComment (), enumerator_11889.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 296)) ;
    enumerator_11889.gotoNextObject () ;
  }
  GALGAS_commandLineOptionSortedList var_uintOptionSortedList_12116 = GALGAS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  cEnumerator_commandLineOptionMap enumerator_12160 (var_uintOptionMap_11675, EnumerationOrder::up) ;
  while (enumerator_12160.hasCurrentObject ()) {
    var_uintOptionSortedList_12116.addAssign_operation (enumerator_12160.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12160.current (HERE).readProperty_mOptionChar (), enumerator_12160.current (HERE).readProperty_mOptionString (), enumerator_12160.current (HERE).readProperty_mComment (), enumerator_12160.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 305)) ;
    enumerator_12160.gotoNextObject () ;
  }
  GALGAS_commandLineOptionSortedList var_stringOptionSortedList_12387 = GALGAS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  cEnumerator_commandLineOptionMap enumerator_12433 (var_stringOptionMap_11720, EnumerationOrder::up) ;
  while (enumerator_12433.hasCurrentObject ()) {
    var_stringOptionSortedList_12387.addAssign_operation (enumerator_12433.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12433.current (HERE).readProperty_mOptionChar (), enumerator_12433.current (HERE).readProperty_mOptionString (), enumerator_12433.current (HERE).readProperty_mComment (), enumerator_12433.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 314)) ;
    enumerator_12433.gotoNextObject () ;
  }
  GALGAS_commandLineOptionSortedList var_stringListOptionSortedList_12664 = GALGAS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  cEnumerator_commandLineOptionMap enumerator_12714 (var_stringListOptionMap_11767, EnumerationOrder::up) ;
  while (enumerator_12714.hasCurrentObject ()) {
    var_stringListOptionSortedList_12664.addAssign_operation (enumerator_12714.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12714.current (HERE).readProperty_mOptionChar (), enumerator_12714.current (HERE).readProperty_mOptionString (), enumerator_12714.current (HERE).readProperty_mComment (), enumerator_12714.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 323)) ;
    enumerator_12714.gotoNextObject () ;
  }
  const GALGAS_optionComponentDeclarationAST temp_2 = this ;
  const GALGAS_optionComponentDeclarationAST temp_3 = this ;
  const GALGAS_optionComponentDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (temp_2.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 332)), GALGAS_optionComponentForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 335)), var_optionIsPredefined_11580, temp_4.readProperty_mOptionComponentName ().readProperty_string (), var_boolOptionSortedList_11845, var_uintOptionSortedList_12116, var_stringOptionSortedList_12387, var_stringListOptionSortedList_12664, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 331)) ;
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
    temp_1 = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("optionCompilation.galgas", 367)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 367)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.readProperty_mOptionComponentName (), temp_3.readProperty_mBoolOptionSortedList (), temp_4.readProperty_mUIntOptionSortedList (), temp_5.readProperty_mStringOptionSortedList (), temp_6.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 379))) ;
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
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 399))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 399)) ;
    const GALGAS_optionComponentForGeneration temp_3 = this ;
    const GALGAS_optionComponentForGeneration temp_4 = this ;
    const GALGAS_optionComponentForGeneration temp_5 = this ;
    const GALGAS_optionComponentForGeneration temp_6 = this ;
    const GALGAS_optionComponentForGeneration temp_7 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.readProperty_mOptionComponentName (), temp_4.readProperty_mBoolOptionSortedList (), temp_5.readProperty_mUIntOptionSortedList (), temp_6.readProperty_mStringOptionSortedList (), temp_7.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 400))) ;
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
    GALGAS_bool test_1 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("optionCompilation.galgas", 418)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      const GALGAS_optionComponentForGeneration temp_2 = this ;
      test_1 = temp_2.readProperty_mIsPredefined ().operator_not (SOURCE_FILE ("optionCompilation.galgas", 418)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionComponentForGeneration temp_3 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 419)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 419))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 419)) ;
      {
      const GALGAS_optionComponentForGeneration temp_4 = this ;
      const GALGAS_optionComponentForGeneration temp_5 = this ;
      const GALGAS_optionComponentForGeneration temp_6 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_4.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 422)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 422)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, temp_5.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 426))), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, temp_6.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 430))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 420)) ;
      }
      const GALGAS_optionComponentForGeneration temp_7 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_7.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 436)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 436))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 436)) ;
      const GALGAS_optionComponentForGeneration temp_8 = this ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_8.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 437)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 437))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 437)) ;
      {
      const GALGAS_optionComponentForGeneration temp_9 = this ;
      const GALGAS_optionComponentForGeneration temp_10 = this ;
      const GALGAS_optionComponentForGeneration temp_11 = this ;
      const GALGAS_optionComponentForGeneration temp_12 = this ;
      const GALGAS_optionComponentForGeneration temp_13 = this ;
      const GALGAS_optionComponentForGeneration temp_14 = this ;
      const GALGAS_optionComponentForGeneration temp_15 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_9.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 440)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 440)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_10.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 445)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 445)), temp_11.readProperty_mOptionComponentName (), temp_12.readProperty_mBoolOptionSortedList (), temp_13.readProperty_mUIntOptionSortedList (), temp_14.readProperty_mStringOptionSortedList (), temp_15.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 444))), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 438)) ;
      }
      const GALGAS_optionComponentForGeneration temp_16 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_16.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 457)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 457))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 457)) ;
      const GALGAS_optionComponentForGeneration temp_17 = this ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_17.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 458)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 458))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 458)) ;
      {
      const GALGAS_optionComponentForGeneration temp_18 = this ;
      const GALGAS_optionComponentForGeneration temp_19 = this ;
      const GALGAS_optionComponentForGeneration temp_20 = this ;
      const GALGAS_optionComponentForGeneration temp_21 = this ;
      const GALGAS_optionComponentForGeneration temp_22 = this ;
      const GALGAS_optionComponentForGeneration temp_23 = this ;
      const GALGAS_optionComponentForGeneration temp_24 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_18.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 461)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 461)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_19.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 466)).add_operation (GALGAS_string ("-swift-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 466)), temp_20.readProperty_mOptionComponentName (), temp_21.readProperty_mBoolOptionSortedList (), temp_22.readProperty_mUIntOptionSortedList (), temp_23.readProperty_mStringOptionSortedList (), temp_24.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 465))), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 459)) ;
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
  GALGAS_guiAnalysisContext var_context_14504 = GALGAS_guiAnalysisContext::init (inCompiler COMMA_HERE) ;
  var_context_14504.mProperty_mProjectIndexingDescriptorList = constinArgument_inGUIComponentAST.readProperty_mProjectIndexingDescriptorList () ;
  cEnumerator_lstringlist enumerator_14661 (constinArgument_inGUIComponentAST.readProperty_mImportedOptionList (), EnumerationOrder::up) ;
  while (enumerator_14661.hasCurrentObject ()) {
    GALGAS_bool joker_14805_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14805_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14805_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14805_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14805_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (enumerator_14661.current_mValue (HERE), joker_14805_5, joker_14805_4, joker_14805_3, joker_14805_2, joker_14805_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 437)) ;
    var_context_14504.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_14661.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 441)) ;
    enumerator_14661.gotoNextObject () ;
  }
  GALGAS_bool var_runOptionDefined_14912 = GALGAS_bool (false) ;
  cEnumerator_guiSimpleAttributeListAST enumerator_14949 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList (), EnumerationOrder::up) ;
  while (enumerator_14949.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_14949.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("run"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_runOptionDefined_14912.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_14949.current_mKey (HERE).readProperty_location (), GALGAS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 448)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_14949.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_14949.current_mValue (HERE).readProperty_location (), GALGAS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 450)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_context_14504.mProperty_mBuildRunOption = enumerator_14949.current_mValue (HERE).readProperty_string () ;
            var_runOptionDefined_14912 = GALGAS_bool (true) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_14949.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          cEnumerator_stringlist enumerator_15437 (enumerator_14949.current_mValue (HERE).readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 456)), EnumerationOrder::up) ;
          while (enumerator_15437.hasCurrentObject ()) {
            var_context_14504.mProperty_mNibAndClassList.addAssign_operation (enumerator_15437.current (HERE).readProperty_mValue ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 457)) ;
            enumerator_15437.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_14949.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_14949.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)) ;
      }
    }
    enumerator_14949.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_15688 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList (), EnumerationOrder::up) ;
  GALGAS_uint index_15643 (uint32_t (0)) ;
  while (enumerator_15688.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_15905 ;
    GALGAS_lexicalStyleListAST var_lexicalStyleListAST_15938 ;
    GALGAS_bool joker_15878 ; // Joker input parameter
    GALGAS_indexingListAST joker_15923_3 ; // Joker input parameter
    GALGAS_terminalDeclarationListAST joker_15923_2 ; // Joker input parameter
    GALGAS_lexicalAttributeListAST joker_15923_1 ; // Joker input parameter
    GALGAS_lexicalListDeclarationListAST joker_15964 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_15688.current_mLexiqueFileName (HERE), joker_15878, var_terminalMap_15905, joker_15923_3, joker_15923_2, joker_15923_1, var_lexicalStyleListAST_15938, joker_15964, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 466)) ;
    GALGAS_stringset var_terminalSymbolSet_16014 = var_terminalMap_15905.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 475)) ;
    cEnumerator_guiLabelListAST enumerator_16100 (enumerator_15688.current_mLabels (HERE), EnumerationOrder::up) ;
    while (enumerator_16100.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_16137 (enumerator_16100.current_mTerminalList (HERE), EnumerationOrder::up) ;
      while (enumerator_16137.hasCurrentObject ()) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_terminalSymbolSet_16014.getter_hasKey (enumerator_16137.current_mTerminal (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 479)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 479)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_16137.current_mTerminal (HERE).readProperty_location (), GALGAS_string ("the '$").add_operation (enumerator_16137.current_mTerminal (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 480)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 481)).add_operation (enumerator_15688.current_mLexiqueFileName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 482)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 483)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 480)) ;
          }
        }
        enumerator_16137.gotoNextObject () ;
      }
      enumerator_16100.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_16481 = GALGAS_textMacroList::init (inCompiler COMMA_HERE) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_16529 (enumerator_15688.current_mCompoundAttributes (HERE), EnumerationOrder::up) ;
    while (enumerator_16529.hasCurrentObject ()) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (ComparisonKind::notEqual, enumerator_16529.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_16529.current_mKey (HERE).readProperty_location (), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 492)) ;
        }
      }
      if (kBoolFalse == test_11) {
        var_textMacroList_16481.addAssign_operation (enumerator_16529.current_mAttributeName (HERE).readProperty_string (), enumerator_16529.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 494)) ;
      }
      enumerator_16529.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_16816 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_16861 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_16899 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_16939 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_16973 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_17005 (enumerator_15688.current_mSimpleAttributes (HERE), EnumerationOrder::up) ;
    while (enumerator_17005.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::equal, enumerator_17005.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          {
          var_context_14504.mProperty_mExtensionMap.setter_insertKey (enumerator_17005.current_mValue (HERE), enumerator_15688.current_mLexiqueFileName (HERE).readProperty_string (), index_15643, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 505)) ;
          }
          var_hasAssociatedExtension_16816 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (ComparisonKind::equal, enumerator_17005.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("title"))).boolEnum () ;
          if (kBoolTrue == test_14) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = var_hasTabViewTitle_16861.boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_17005.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17005.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)) ;
              }
            }
            var_hasTabViewTitle_16861 = GALGAS_bool (true) ;
            var_tabViewTitle_16939 = enumerator_17005.current_mValue (HERE).readProperty_string () ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (ComparisonKind::equal, enumerator_17005.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = var_hasBlockComment_16899.boolEnum () ;
                if (kBoolTrue == test_18) {
                  TC_Array <FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_17005.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17005.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)) ;
                }
              }
              var_hasBlockComment_16899 = GALGAS_bool (true) ;
              var_blockComment_16973 = enumerator_17005.current_mValue (HERE).readProperty_string () ;
            }
          }
          if (kBoolFalse == test_17) {
            TC_Array <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_17005.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17005.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)) ;
          }
        }
      }
      enumerator_17005.gotoNextObject () ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_16816.operator_not (SOURCE_FILE ("guiCompilation.galgas", 524)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15688.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 525)) ;
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = var_hasTabViewTitle_16861.operator_not (SOURCE_FILE ("guiCompilation.galgas", 528)).boolEnum () ;
      if (kBoolTrue == test_23) {
        TC_Array <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_15688.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 529)) ;
      }
    }
    var_context_14504.mProperty_mWithLexiqueList.addAssign_operation (enumerator_15688.current_mLexiqueFileName (HERE).readProperty_string (), index_15643, var_blockComment_16973, var_tabViewTitle_16939, var_textMacroList_16481, enumerator_15688.current_mLabels (HERE), var_lexicalStyleListAST_15938  COMMA_SOURCE_FILE ("guiCompilation.galgas", 532)) ;
    enumerator_15688.gotoNextObject () ;
    index_15643.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 464)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_14504, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 542)) ;
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
  cEnumerator_optionComponentMapForGeneration enumerator_19077 (constinArgument_inOptionComponentMapForGeneration, EnumerationOrder::up) ;
  while (enumerator_19077.hasCurrentObject ()) {
    GALGAS_string var_swiftFileName_19146 = GALGAS_string ("gui-").add_operation (enumerator_19077.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 558)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 558)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_swiftFileName_19146  COMMA_SOURCE_FILE ("guiCompilation.galgas", 559)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_swiftFileName_19146  COMMA_SOURCE_FILE ("guiCompilation.galgas", 560)) ;
    GALGAS_string var_swift_5F_string_19290 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (inCompiler, enumerator_19077.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 561))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_swiftFileName_19146, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_swift_5F_string_19290, GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 565)) ;
    }
    GALGAS_string var_objcFileName_19800 = GALGAS_string ("gui-").add_operation (enumerator_19077.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 576)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 576)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_objcFileName_19800  COMMA_SOURCE_FILE ("guiCompilation.galgas", 577)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_objcFileName_19800  COMMA_SOURCE_FILE ("guiCompilation.galgas", 578)) ;
    GALGAS_string var_objc_5F_string_19937 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_objc_5F_gui_5F_implementation (inCompiler, enumerator_19077.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 579))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_objcFileName_19800, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_objc_5F_string_19937, GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 583)) ;
    }
    enumerator_19077.gotoNextObject () ;
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
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  const GALGAS_boolsetDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3923 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 99)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3923, temp_2, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 100)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolsetDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_boolsetDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 108)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForBoolset'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForBoolset (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  result_result.addAssign_operation (GALGAS_string ("all")  COMMA_SOURCE_FILE ("type-boolset.galgas", 117)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-boolset.galgas", 118)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-boolset.galgas", 119)) ;
  result_result.addAssign_operation (GALGAS_string ("none")  COMMA_SOURCE_FILE ("type-boolset.galgas", 120)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-boolset.galgas", 121)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForBoolset = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForBoolset ;

//--------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForBoolset (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForBoolset) {
    gOnceFunctionResult_forbiddenKeysForBoolset = onceFunction_forbiddenKeysForBoolset (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForBoolset = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForBoolset ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForBoolset (void) {
  gOnceFunctionResult_forbiddenKeysForBoolset.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForBoolset (nullptr,
                                                                   releaseOnceFunctionResult_forbiddenKeysForBoolset) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForBoolset [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForBoolset (Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForBoolset (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForBoolset ("forbiddenKeysForBoolset",
                                                                         functionWithGenericHeader_forbiddenKeysForBoolset,
                                                                         & kTypeDescriptor_GALGAS_stringset,
                                                                         0,
                                                                         functionArgs_forbiddenKeysForBoolset) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                           const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_slotNameSet_5471 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_5495 (temp_0.readProperty_mFlagList (), EnumerationOrder::up) ;
  while (enumerator_5495.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 137)).getter_hasKey (enumerator_5495.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 137)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_m_5609 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_5679 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 139)), EnumerationOrder::up) ;
        while (enumerator_5679.hasCurrentObject ()) {
          var_m_5609.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_5679.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 140)) ;
          enumerator_5679.gotoNextObject () ;
        }
        var_m_5609.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 142)) ;
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5495.current_mValue (HERE).readProperty_location (), var_m_5609, fixItArray2  COMMA_SOURCE_FILE ("type-boolset.galgas", 143)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_slotNameSet_5471.getter_hasKey (enumerator_5495.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 144)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5495.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated slot name"), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 145)) ;
        }
      }
    }
    var_slotNameSet_5471.addAssign_operation (enumerator_5495.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 147)) ;
    enumerator_5495.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_boolsetTypeIndex_5992 ;
  {
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_5992, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 150)) ;
  }
  GALGAS_getterMap var_getterMap_6103 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6103, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 152)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_6138 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  var_classFunctionMap_6138.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 154)), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_boolsetTypeIndex_5992, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 154)) ;
  }
  {
  var_classFunctionMap_6138.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 155)), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_boolsetTypeIndex_5992, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 155)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6103, ioArgument_ioTypeMap, GALGAS_string ("none"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 156)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6103, ioArgument_ioTypeMap, GALGAS_string ("all"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 164)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  cEnumerator_lstringlist enumerator_6687 (temp_6.readProperty_mFlagList (), EnumerationOrder::up) ;
  while (enumerator_6687.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_classFunctionMap_6138.getter_hasKey (enumerator_6687.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 173)).operator_not (SOURCE_FILE ("type-boolset.galgas", 173)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        var_classFunctionMap_6138.setter_insertKey (enumerator_6687.current_mValue (HERE), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_boolsetTypeIndex_5992, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 174)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6103, ioArgument_ioTypeMap, enumerator_6687.current_mValue (HERE).readProperty_string (), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 175)) ;
        }
      }
    }
    enumerator_6687.gotoNextObject () ;
  }
  GALGAS_initializerMap var_initializerMap_7142 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_7187 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  var_initializerMap_7142.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_7187, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 189)), temp_8.readProperty_mBoolsetTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_7187, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 188)) ;
  }
  GALGAS_setterMap var_setterMap_7382 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7422 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_boolsetDeclarationAST temp_9 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_9.readProperty_mBoolsetTypeName (), GALGAS_bool (false), var_initializerMap_7142, var_getterMap_6103, var_setterMap_7382, var_instanceMethodMap_7422, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 195)) ;
  }
  GALGAS_typeFeatures var_operators_7858 = GALGAS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 211)).operator_or (GALGAS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 211)) COMMA_SOURCE_FILE ("type-boolset.galgas", 211)).operator_or (GALGAS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 211)) COMMA_SOURCE_FILE ("type-boolset.galgas", 211)).operator_or (GALGAS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 212)) COMMA_SOURCE_FILE ("type-boolset.galgas", 211)).operator_or (GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 213)) COMMA_SOURCE_FILE ("type-boolset.galgas", 212)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 213)) COMMA_SOURCE_FILE ("type-boolset.galgas", 213)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("type-boolset.galgas", 213)) COMMA_SOURCE_FILE ("type-boolset.galgas", 213)) ;
  const GALGAS_boolsetDeclarationAST temp_10 = this ;
  const GALGAS_boolsetDeclarationAST temp_11 = this ;
  const GALGAS_boolsetDeclarationAST temp_12 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8075 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_10.readProperty_mBoolsetTypeName (), temp_11.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-boolset.galgas", 219)), GALGAS_typeKindEnum::class_func_boolsetType (SOURCE_FILE ("type-boolset.galgas", 220)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_7142, var_classFunctionMap_6138, var_getterMap_6103, var_setterMap_7382, var_instanceMethodMap_7422, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_operators_7858, GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-boolset.galgas", 237)), GALGAS_string ("boolset-").add_operation (temp_12.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 238)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-boolset.galgas", 239)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8075.readProperty_typeName (), var_typeDefinition_8075, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 241)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                          const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_boolsetDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 259)).objectCompare (GALGAS_uint (uint32_t (64U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = this ;
      GALGAS_location var_s_9804 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GALGAS_uint (uint32_t (64U)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 260)).readProperty_location () ;
      const GALGAS_boolsetDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_9804, GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 261)).getter_string (SOURCE_FILE ("type-boolset.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 261)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 261)), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 261)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  GALGAS_lstring var_boolsetNameForUsefulness_9959 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 264)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_9959, var_boolsetNameForUsefulness_9959, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 265)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  const GALGAS_boolsetDeclarationAST temp_7 = this ;
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 267)), GALGAS_boolsetTypeForGeneration::init_21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 269)), temp_8.readProperty_mFlagList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-boolset.galgas", 266)) ;
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

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_lstringlist & /* in_SLOT_5F_LIST */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" boolset"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n  private: uint64_t mFlags ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Private constructor\n  private: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const GALGAS_lstringlist & in_SLOT_5F_LIST,
                                                                                              const GALGAS_bigint & in_FULL_5F_SET
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmFlags (0),\nmIsValid (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) :\nAC_GALGAS_root (),\nmFlags (inFlags),\nmIsValid (true) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (0) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_none (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (0) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_all (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (uint64_t (") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (")) ;\n}\n\n") ;
  GALGAS_uint index_1246_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1246 (in_SLOT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1246.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_1246.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 38)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" (uint64_t (1) << ") ;
      result.appendString (index_1246_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 39)).stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      index_1246_idx.increment () ;
      enumerator_1246.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::invalid ;\n   if (mIsValid && inOperand.mIsValid) {\n     result = ComparisonResult::operandEqual ;\n     if (mFlags < inOperand.mFlags) {\n       result = ComparisonResult::firstOperandLowerThanSecond ;\n     }else if (mFlags > inOperand.mFlags) {\n       result = ComparisonResult::firstOperandGreaterThanSecond ;\n     }\n   }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mIsValid ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_or (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags | inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_and (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_xor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags ^ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::substract_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & ~ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_tilde (UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (((uint64_t) ") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 114)).stringValue ()) ;
  result.appendString (") ^ mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<boolset @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GALGAS_uint index_5024_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5024 (in_SLOT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5024.hasCurrentObject ()) {
      result.appendString ("    if ((mFlags & ((uint64_t) 1) << ") ;
      result.appendString (index_5024_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 129)).stringValue ()) ;
      result.appendString (") != 0) {\n      ioString.appendCString (\" ") ;
      result.appendString (enumerator_5024.current_mValue (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n    }\n") ;
      index_5024_idx.increment () ;
      enumerator_5024.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_none (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == 0) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_all (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == uint64_t (") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 152)).stringValue ()) ;
  result.appendString (")) ;\n  }\n  return result ;\n}\n\n") ;
  GALGAS_uint index_5860_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5860 (in_SLOT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5860.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_5860.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool ((mFlags & (uint64_t (1) << ") ;
      result.appendString (index_5860_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 162)).stringValue ()) ;
      result.appendString (")) != 0) ;\n  }\n  return result ;\n}\n\n") ;
      index_5860_idx.increment () ;
      enumerator_5860.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_11469 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 305)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, var_typeDefinition_11469.readProperty_typeName ().readProperty_string (), var_typeDefinition_11469.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 308)), temp_1.readProperty_mFlagList () COMMA_SOURCE_FILE ("type-boolset.galgas", 306))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typeDefinition_11469.readProperty_typeName ().readProperty_string (), var_typeDefinition_11469.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 313)), var_typeDefinition_11469.readProperty_isConcrete (), var_typeDefinition_11469.readProperty_initializerMap (), var_typeDefinition_11469.readProperty_classFunctionMap (), var_typeDefinition_11469.readProperty_getterMap (), var_typeDefinition_11469.readProperty_setterMap (), var_typeDefinition_11469.readProperty_instanceMethodMap (), var_typeDefinition_11469.readProperty_classMethodMap (), var_typeDefinition_11469.readProperty_optionalMethodMap (), var_typeDefinition_11469.readProperty_enumerationDescriptorList (), var_typeDefinition_11469.readProperty_features (), var_typeDefinition_11469.readProperty_addAssignOperatorArguments (), var_typeDefinition_11469.readProperty_typeForEnumeratedElement (), var_typeDefinition_11469.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-boolset.galgas", 311))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 311)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 337)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  const GALGAS_boolsetTypeForGeneration temp_2 = this ;
  const GALGAS_boolsetTypeForGeneration temp_3 = this ;
  const GALGAS_boolsetTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 339)).readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 340)), temp_3.readProperty_mFlagList (), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 342)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 342)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 342)) COMMA_SOURCE_FILE ("type-boolset.galgas", 338))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_weakSuffix (Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("-weak") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_weakSuffix [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_weakSuffix (Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_weakSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_weakSuffix ("weakSuffix",
                                                            functionWithGenericHeader_weakSuffix,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_weakSuffix) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@classDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_classDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_classDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("class @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 201)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  const GALGAS_classDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_7191 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 213)), temp_1.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7191, temp_2, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 214)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = this ;
      const GALGAS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7191, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 219)), temp_6.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-class.galgas", 217)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_7618 (temp_7.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_7618.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = this ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7191, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_7618.current_propertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 226)), temp_8.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-class.galgas", 224)) ;
    }
    enumerator_7618.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                         const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_8399 ;
  GALGAS_setterMap var_setterMap_8428 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8465 ;
  GALGAS_typedPropertyList var_inheritedTypedPropertyList_8510 ;
  GALGAS_propertyMap var_attributeMap_8558 = GALGAS_propertyMap::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_superClassIndex_8631 ;
  GALGAS_bool var_generateHeaderInSeparateFile_8661 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_8631 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-class.galgas", 249)) ;
      {
      routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8399, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 250)) ;
      }
      var_setterMap_8428 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
      var_instanceMethodMap_8465 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
      var_inheritedTypedPropertyList_8510 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
      var_attributeMap_8558 = GALGAS_propertyMap::init (inCompiler COMMA_HERE) ;
      const GALGAS_classDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_8661 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperClassName (), var_superClassIndex_8631, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 257)) ;
    }
    const GALGAS_classDeclarationAST temp_4 = this ;
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_9090 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 258)) ;
    var_inheritedTypedPropertyList_8510 = var_superTypeDefinition_9090.readProperty_allTypedPropertyList () ;
    var_attributeMap_8558 = var_superTypeDefinition_9090.readProperty_propertyMap () ;
    var_generateHeaderInSeparateFile_8661 = var_superTypeDefinition_9090.readProperty_generateHeaderInSeparateFile () ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_superTypeDefinition_9090.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("type-class.galgas", 263)).operator_not (SOURCE_FILE ("type-class.galgas", 263)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_classDeclarationAST temp_6 = this ;
        const GALGAS_classDeclarationAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperClassName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_7.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 264)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 264)), fixItArray8  COMMA_SOURCE_FILE ("type-class.galgas", 264)) ;
      }
    }
    var_setterMap_8428 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
    cEnumerator_setterMap enumerator_9672 (var_superTypeDefinition_9090.readProperty_setterMap (), EnumerationOrder::up) ;
    while (enumerator_9672.hasCurrentObject ()) {
      {
      var_setterMap_8428.setter_insertKey (enumerator_9672.current_lkey (HERE), enumerator_9672.current_mKind (HERE), enumerator_9672.current_mParameterList (HERE), enumerator_9672.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-class.galgas", 274)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 269)) ;
      }
      enumerator_9672.gotoNextObject () ;
    }
    var_getterMap_8399 = GALGAS_getterMap::init (inCompiler COMMA_HERE) ;
    cEnumerator_getterMap enumerator_10013 (var_superTypeDefinition_9090.readProperty_getterMap (), EnumerationOrder::up) ;
    while (enumerator_10013.hasCurrentObject ()) {
      {
      var_getterMap_8399.setter_insertKey (enumerator_10013.current (HERE).readProperty_lkey (), enumerator_10013.current (HERE).readProperty_mKind (), enumerator_10013.current (HERE).readProperty_mArgumentTypeList (), enumerator_10013.current (HERE).readProperty_mDeclarationLocation (), enumerator_10013.current (HERE).readProperty_mHasCompilerArgument (), enumerator_10013.current (HERE).readProperty_mReturnedType (), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-class.galgas", 288)), enumerator_10013.current (HERE).readProperty_mGetterNameThatObsoletesInvokationName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 281)) ;
      }
      enumerator_10013.gotoNextObject () ;
    }
    var_instanceMethodMap_8465 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
    cEnumerator_instanceMethodMap enumerator_10488 (var_superTypeDefinition_9090.readProperty_instanceMethodMap (), EnumerationOrder::up) ;
    while (enumerator_10488.hasCurrentObject ()) {
      {
      var_instanceMethodMap_8465.setter_insertKey (enumerator_10488.current (HERE).readProperty_lkey (), enumerator_10488.current (HERE).readProperty_mKind (), enumerator_10488.current (HERE).readProperty_mParameterList (), enumerator_10488.current (HERE).readProperty_mDeclarationLocation (), enumerator_10488.current (HERE).readProperty_mHasCompilerArgument (), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-class.galgas", 301)), enumerator_10488.current (HERE).readProperty_mErrorMessage (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 295)) ;
      }
      enumerator_10488.gotoNextObject () ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_10939 ;
  {
  const GALGAS_classDeclarationAST temp_9 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), var_classIndex_10939, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 307)) ;
  }
  GALGAS_functionSignature var_synthetizedInitializerArgumentList_11035 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  cEnumerator_typedPropertyList enumerator_11095 (var_inheritedTypedPropertyList_8510, EnumerationOrder::up) ;
  while (enumerator_11095.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (ComparisonKind::equal, enumerator_11095.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-class.galgas", 311)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_lstring temp_11 ;
        const enumGalgasBool test_12 = enumerator_11095.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (kBoolTrue == test_12) {
          temp_11 = enumerator_11095.current (HERE).readProperty_name () ;
        }else if (kBoolFalse == test_12) {
          temp_11 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 313)) ;
        }
        var_synthetizedInitializerArgumentList_11035.addAssign_operation (temp_11, enumerator_11095.current (HERE).readProperty_typeEntry (), enumerator_11095.current (HERE).readProperty_name ().readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-class.galgas", 312)) ;
      }
    }
    enumerator_11095.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_13 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11415 (temp_13.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11415.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11493 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11415.current (HERE).readProperty_propertyTypeName (), var_attributeTypeIndex_11493, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 320)) ;
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (ComparisonKind::equal, enumerator_11415.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-class.galgas", 321)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_lstring temp_15 ;
        const enumGalgasBool test_16 = enumerator_11415.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (kBoolTrue == test_16) {
          temp_15 = enumerator_11415.current (HERE).readProperty_propertyName () ;
        }else if (kBoolFalse == test_16) {
          temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 323)) ;
        }
        var_synthetizedInitializerArgumentList_11035.addAssign_operation (temp_15, var_attributeTypeIndex_11493, enumerator_11415.current (HERE).readProperty_propertyName ().readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-class.galgas", 322)) ;
      }
    }
    {
    var_attributeMap_8558.setter_insertKey (enumerator_11415.current (HERE).readProperty_propertyName (), extensionGetter_accessControl (enumerator_11415.current (HERE).readProperty_accessControl (), var_classIndex_10939, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 330)), enumerator_11415.current (HERE).readProperty_isConstant (), var_attributeTypeIndex_11493, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 328)) ;
    }
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_getterMap_8399.getter_hasKey (enumerator_11415.current (HERE).readProperty_propertyName ().readProperty_string () COMMA_SOURCE_FILE ("type-class.galgas", 334)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_11415.current (HERE).readProperty_propertyName ().readProperty_location (), GALGAS_string ("'").add_operation (enumerator_11415.current (HERE).readProperty_propertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 336)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 336)), fixItArray18  COMMA_SOURCE_FILE ("type-class.galgas", 335)) ;
      }
    }
    enumerator_11415.gotoNextObject () ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_12255 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_classDeclarationAST temp_20 = this ;
    test_19 = temp_20.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 341)).boolEnum () ;
    if (kBoolTrue == test_19) {
      {
      var_classFunctionMap_12255.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("new"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 343)), inCompiler COMMA_HERE), var_synthetizedInitializerArgumentList_11035, GALGAS_bool (false), var_classIndex_10939, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 342)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedPropertyList_12539 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_12601 = var_inheritedTypedPropertyList_8510 ;
  const GALGAS_classDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12677 (temp_21.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_12677.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_12755 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12677.current (HERE).readProperty_propertyTypeName (), var_attributeTypeIndex_12755, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 353)) ;
    }
    var_currentClassTypedPropertyList_12539.addAssign_operation (var_attributeTypeIndex_12755, enumerator_12677.current (HERE).readProperty_propertyName (), enumerator_12677.current (HERE).readProperty_initialization (), enumerator_12677.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("type-class.galgas", 358)), enumerator_12677.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-class.galgas", 354)) ;
    var_allTypedAttributeList_12601.addAssign_operation (var_attributeTypeIndex_12755, enumerator_12677.current (HERE).readProperty_propertyName (), enumerator_12677.current (HERE).readProperty_initialization (), enumerator_12677.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("type-class.galgas", 364)), enumerator_12677.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-class.galgas", 360)) ;
    enumerator_12677.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    const GALGAS_classDeclarationAST temp_23 = this ;
    test_22 = temp_23.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 368)).boolEnum () ;
    if (kBoolTrue == test_22) {
      cEnumerator_typedPropertyList enumerator_13297 (var_currentClassTypedPropertyList_12539, EnumerationOrder::up) ;
      while (enumerator_13297.hasCurrentObject ()) {
        enumGalgasBool test_24 = kBoolTrue ;
        if (kBoolTrue == test_24) {
          test_24 = enumerator_13297.current (HERE).readProperty_hasSetter ().boolEnum () ;
          if (kBoolTrue == test_24) {
            {
            GALGAS_formalParameterSignature temp_25 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 374)) ;
            temp_25.enterElement (GALGAS_formalParameterSignature_2D_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 374)), enumerator_13297.current (HERE).readProperty_typeEntry (), GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-class.galgas", 374)), enumerator_13297.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 374)) ;
            var_setterMap_8428.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("set").add_operation (enumerator_13297.current (HERE).readProperty_name ().readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 372)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 372)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-class.galgas", 373)), temp_25, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-class.galgas", 376)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 371)) ;
            }
          }
        }
        enumerator_13297.gotoNextObject () ;
      }
    }
  }
  GALGAS_initializerMap var_initializerMap_13810 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_classDeclarationAST temp_26 = this ;
  GALGAS_typeFeatures temp_27 ;
  const enumGalgasBool test_28 = temp_26.readProperty_mIsReference ().boolEnum () ;
  if (kBoolTrue == test_28) {
    temp_27 = GALGAS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("type-class.galgas", 384)) ;
  }else if (kBoolFalse == test_28) {
    temp_27 = GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("type-class.galgas", 384)) ;
  }
  GALGAS_typeFeatures var_features_13852 = temp_27 ;
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    const GALGAS_classDeclarationAST temp_30 = this ;
    test_29 = temp_30.readProperty_clonable ().boolEnum () ;
    if (kBoolTrue == test_29) {
      var_features_13852 = var_features_13852.operator_or (GALGAS_typeFeatures::class_func_clonable (SOURCE_FILE ("type-class.galgas", 386)) COMMA_SOURCE_FILE ("type-class.galgas", 386)) ;
      GALGAS_functionSignature var_cloneInitializerArgumentList_14023 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
      var_cloneInitializerArgumentList_14023.addAssign_operation (GALGAS_string ("cloned").getter_nowhere (SOURCE_FILE ("type-class.galgas", 389)), var_classIndex_10939, GALGAS_string ("inObject"), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-class.galgas", 388)) ;
      {
      const GALGAS_classDeclarationAST temp_31 = this ;
      var_initializerMap_13810.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_cloneInitializerArgumentList_14023, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 394)), temp_31.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_cloneInitializerArgumentList_14023, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 393)) ;
      }
    }
  }
  {
  const GALGAS_classDeclarationAST temp_32 = this ;
  const GALGAS_classDeclarationAST temp_33 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_32.readProperty_mClassTypeName (), GALGAS_bool (true), var_initializerMap_13810, var_getterMap_8399, var_setterMap_8428, var_instanceMethodMap_8465, temp_33.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 399)) ;
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    const GALGAS_classDeclarationAST temp_35 = this ;
    GALGAS_bigint temp_36 ;
    const enumGalgasBool test_37 = temp_35.readProperty_clonable ().boolEnum () ;
    if (kBoolTrue == test_37) {
      temp_36 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 415)) ;
    }else if (kBoolFalse == test_37) {
      temp_36 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 415)) ;
    }
    test_34 = GALGAS_bool (ComparisonKind::equal, var_initializerMap_13810.getter_count (SOURCE_FILE ("type-class.galgas", 415)).objectCompare (temp_36.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 415)))).boolEnum () ;
    if (kBoolTrue == test_34) {
      var_features_13852 = var_features_13852.operator_or (GALGAS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("type-class.galgas", 416)) COMMA_SOURCE_FILE ("type-class.galgas", 416)) ;
      {
      const GALGAS_classDeclarationAST temp_38 = this ;
      var_initializerMap_13810.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_synthetizedInitializerArgumentList_11035, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 418)), temp_38.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_synthetizedInitializerArgumentList_11035, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 417)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_39 = this ;
  const GALGAS_classDeclarationAST temp_40 = this ;
  const GALGAS_classDeclarationAST temp_41 = this ;
  const GALGAS_classDeclarationAST temp_42 = this ;
  const GALGAS_classDeclarationAST temp_43 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_15235 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_39.readProperty_mClassTypeName (), temp_40.readProperty_isPredefined (), temp_41.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 426)), var_superClassIndex_8631, GALGAS_typeKindEnum::class_func_classType (temp_42.readProperty_mIsReference ()  COMMA_SOURCE_FILE ("type-class.galgas", 428)), GALGAS_bool (false), var_allTypedAttributeList_12601, var_attributeMap_8558, var_currentClassTypedPropertyList_12539, var_initializerMap_13810, var_classFunctionMap_12255, var_getterMap_8399, var_setterMap_8428, var_instanceMethodMap_8465, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_13852, GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), var_generateHeaderInSeparateFile_8661, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-class.galgas", 445)), GALGAS_string ("class-").add_operation (temp_43.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 446)), GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("type-class.galgas", 447)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_15235.readProperty_typeName (), var_typeDefinition_15235, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 449)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  GALGAS_lstring var_classTypeNameForUsefulness_16976 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 462)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_16976, var_classTypeNameForUsefulness_16976, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 463)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superClassNameForUsefulness_17209 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 465)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16976, var_superClassNameForUsefulness_17209 COMMA_SOURCE_FILE ("type-class.galgas", 466)) ;
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
      GALGAS_lstring var_weakRefTypeNameForUsefulness_17439 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_6.readProperty_mClassTypeName ().readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 469)), temp_7.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 469)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16976, var_weakRefTypeNameForUsefulness_17439 COMMA_SOURCE_FILE ("type-class.galgas", 470)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_17732 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 473)) ;
  const GALGAS_classDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeMapEntry temp_10 ;
  const enumGalgasBool test_11 = GALGAS_bool (ComparisonKind::equal, temp_9.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-class.galgas", 476)) ;
  }else if (kBoolFalse == test_11) {
    const GALGAS_classDeclarationAST temp_12 = this ;
    temp_10 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 477)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_17849 = temp_10 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (ComparisonKind::notEqual, var_superClassEntry_17849.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-class.galgas", 482)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_bool var_superClassIsReference_18283 ;
      extensionGetter_definition (var_superClassEntry_17849, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 483)).readProperty_typeKind ().method_classType (var_superClassIsReference_18283, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 483)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_classDeclarationAST temp_15 = this ;
        test_14 = var_superClassIsReference_18283.operator_and (temp_15.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 484)) COMMA_SOURCE_FILE ("type-class.galgas", 484)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_classDeclarationAST temp_16 = this ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'refClass', as its super class"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 485)) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          const GALGAS_classDeclarationAST temp_19 = this ;
          test_18 = var_superClassIsReference_18283.operator_not (SOURCE_FILE ("type-class.galgas", 486)).operator_and (temp_19.readProperty_mIsReference () COMMA_SOURCE_FILE ("type-class.galgas", 486)).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_classDeclarationAST temp_20 = this ;
            TC_Array <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'valueclass', as its super class"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 487)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_18854 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (ComparisonKind::equal, var_superClassEntry_17849.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-class.galgas", 494)))).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_allAttributeList_18854 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_22) {
    var_allAttributeList_18854 = extensionGetter_definition (var_superClassEntry_17849, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 497)).readProperty_allTypedPropertyList () ;
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      const GALGAS_classDeclarationAST temp_24 = this ;
      test_23 = temp_24.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_23) {
        const GALGAS_classDeclarationAST temp_25 = this ;
        TC_Array <FixItDescription> fixItArray26 ;
        inCompiler->emitSemanticError (temp_25.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray26  COMMA_SOURCE_FILE ("type-class.galgas", 499)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_synthetizedInheritedInitializerArgumentList_19205 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  cEnumerator_typedPropertyList enumerator_19274 (var_allAttributeList_18854, EnumerationOrder::up) ;
  while (enumerator_19274.hasCurrentObject ()) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = GALGAS_bool (ComparisonKind::equal, enumerator_19274.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-class.galgas", 504)))).boolEnum () ;
      if (kBoolTrue == test_27) {
        var_synthetizedInheritedInitializerArgumentList_19205.addAssign_operation (enumerator_19274.current (HERE).readProperty_typeEntry (), enumerator_19274.current (HERE).readProperty_name (), enumerator_19274.current (HERE).readProperty_initialization (), enumerator_19274.current (HERE).readProperty_hasSetter (), enumerator_19274.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-class.galgas", 505)) ;
      }
    }
    enumerator_19274.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_19644 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_19694 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_classDeclarationAST temp_28 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_19737 (temp_28.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_19737.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_19764 = function_typeNameForUsefulEntitiesGraph (enumerator_19737.current (HERE).readProperty_propertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 517)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16976, var_propertyTypeNameForUsefulness_19764 COMMA_SOURCE_FILE ("type-class.galgas", 518)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_19965 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_19737.current (HERE).readProperty_propertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 519)) ;
    var_typedAttributeList_19644.addAssign_operation (var_t_19965, enumerator_19737.current (HERE).readProperty_propertyName (), enumerator_19737.current (HERE).readProperty_initialization (), enumerator_19737.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("type-class.galgas", 524)), enumerator_19737.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-class.galgas", 520)) ;
    var_allAttributeList_18854.addAssign_operation (var_t_19965, enumerator_19737.current (HERE).readProperty_propertyName (), enumerator_19737.current (HERE).readProperty_initialization (), enumerator_19737.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("type-class.galgas", 530)), enumerator_19737.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-class.galgas", 526)) ;
    {
    var_attributeMap_19694.setter_insertKey (enumerator_19737.current (HERE).readProperty_propertyName (), var_t_19965, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 532)) ;
    }
    enumerator_19737.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_synthetizedInitialzerArgumentList_20542 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  cEnumerator_typedPropertyList enumerator_20623 (extensionGetter_definition (var_selfType_17732, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 536)).readProperty_allTypedPropertyList (), EnumerationOrder::up) ;
  while (enumerator_20623.hasCurrentObject ()) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GALGAS_bool (ComparisonKind::equal, enumerator_20623.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-class.galgas", 537)))).boolEnum () ;
      if (kBoolTrue == test_29) {
        var_synthetizedInitialzerArgumentList_20542.addAssign_operation (enumerator_20623.current (HERE).readProperty_typeEntry (), enumerator_20623.current (HERE).readProperty_name (), enumerator_20623.current (HERE).readProperty_initialization (), enumerator_20623.current (HERE).readProperty_hasSetter (), enumerator_20623.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-class.galgas", 538)) ;
      }
    }
    enumerator_20623.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedVariableCppNameSet_21115 ;
  GALGAS_string var_initializationCode_21151 ;
  const GALGAS_classDeclarationAST temp_30 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_30.readProperty_mPropertyList (), var_classTypeNameForUsefulness_16976, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_21115, var_initializationCode_21151, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 546)) ;
  GALGAS_bool var_constructorNeedsCompilerVar_21194 = var_unusedVariableCppNameSet_21115.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 556)) COMMA_SOURCE_FILE ("type-class.galgas", 556)).operator_not (SOURCE_FILE ("type-class.galgas", 556)) ;
  const GALGAS_classDeclarationAST temp_31 = this ;
  const GALGAS_classDeclarationAST temp_32 = this ;
  const GALGAS_classDeclarationAST temp_33 = this ;
  const GALGAS_classDeclarationAST temp_34 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_31.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 558)), GALGAS_classTypeForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_selfType_17732, temp_32.readProperty_mIsAbstract (), temp_33.readProperty_mIsReference (), var_superClassEntry_17849, var_allAttributeList_18854, var_typedAttributeList_19644, extensionGetter_definition (var_selfType_17732, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 566)).readProperty_generateHeaderInSeparateFile (), var_constructorNeedsCompilerVar_21194, var_initializationCode_21151, var_synthetizedInitialzerArgumentList_20542, var_synthetizedInheritedInitializerArgumentList_19205, extensionGetter_definition (var_selfType_17732, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 571)).readProperty_initializerMap (), temp_34.readProperty_clonable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 557)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 602)).operator_not (SOURCE_FILE ("type-class.galgas", 602)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 603)) ;
    }
  }
  const GALGAS_classTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_23290 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 605)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classTypeForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classTypeForGeneration temp_6 = this ;
      const GALGAS_classTypeForGeneration temp_7 = this ;
      GALGAS_string temp_8 ;
      const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 610)).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_9) {
        const GALGAS_classTypeForGeneration temp_10 = this ;
        temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 610)) ;
      }
      const GALGAS_classTypeForGeneration temp_11 = this ;
      const GALGAS_classTypeForGeneration temp_12 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_23290.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 609)), temp_8, temp_11.readProperty_mIsAbstract (), temp_12.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 607))) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_classTypeForGeneration temp_13 = this ;
    const GALGAS_classTypeForGeneration temp_14 = this ;
    GALGAS_string temp_15 ;
    const enumGalgasBool test_16 = temp_14.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 618)).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_16) {
      const GALGAS_classTypeForGeneration temp_17 = this ;
      temp_15 = extensionGetter_identifierRepresentation (temp_17.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 618)) ;
    }
    const GALGAS_classTypeForGeneration temp_18 = this ;
    const GALGAS_classTypeForGeneration temp_19 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_23290.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_13.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 617)), temp_15, temp_18.readProperty_mIsAbstract (), temp_19.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 615))) ;
  }
  const GALGAS_classTypeForGeneration temp_20 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_23290.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_20.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 625)), var_selfTypeDefinition_23290.readProperty_isConcrete (), var_selfTypeDefinition_23290.readProperty_initializerMap (), var_selfTypeDefinition_23290.readProperty_classFunctionMap (), var_selfTypeDefinition_23290.readProperty_getterMap (), var_selfTypeDefinition_23290.readProperty_setterMap (), var_selfTypeDefinition_23290.readProperty_instanceMethodMap (), var_selfTypeDefinition_23290.readProperty_classMethodMap (), var_selfTypeDefinition_23290.readProperty_optionalMethodMap (), var_selfTypeDefinition_23290.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_23290.readProperty_features (), var_selfTypeDefinition_23290.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_23290.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_23290.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-class.galgas", 623))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 623)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string constinArgument_inOutputDirectory,
                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_25146 (temp_0.readProperty_mCurrentTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_25146.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_25146.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 648)) ;
    enumerator_25146.gotoNextObject () ;
  }
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_25248 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 650)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_classTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_classTypeForGeneration temp_5 = this ;
        test_4 = temp_5.readProperty_generateHeaderInSeparateFile ().boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_classTypeForGeneration temp_6 = this ;
          const GALGAS_classTypeForGeneration temp_7 = this ;
          GALGAS_string temp_8 ;
          const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 656)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_classTypeForGeneration temp_10 = this ;
            temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 656)) ;
          }
          const GALGAS_classTypeForGeneration temp_11 = this ;
          const GALGAS_classTypeForGeneration temp_12 = this ;
          const GALGAS_classTypeForGeneration temp_13 = this ;
          const GALGAS_classTypeForGeneration temp_14 = this ;
          const GALGAS_classTypeForGeneration temp_15 = this ;
          const GALGAS_classTypeForGeneration temp_16 = this ;
          GALGAS_string var_part_31__25396 = GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_25248.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 655)), temp_8, temp_11.readProperty_mCurrentTypedAttributeList (), temp_12.readProperty_mAllTypedAttributeList (), temp_13.readProperty_mIsAbstract (), extensionGetter_definition (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 660)).readProperty_getterMap (), extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 661)).readProperty_instanceMethodMap (), temp_16.readProperty_initializerMap () COMMA_SOURCE_FILE ("type-class.galgas", 653))) ;
          const GALGAS_classTypeForGeneration temp_17 = this ;
          const GALGAS_classTypeForGeneration temp_18 = this ;
          GALGAS_string temp_19 ;
          const enumGalgasBool test_20 = temp_18.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 667)).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_20) {
            const GALGAS_classTypeForGeneration temp_21 = this ;
            temp_19 = extensionGetter_identifierRepresentation (temp_21.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 667)) ;
          }
          const GALGAS_classTypeForGeneration temp_22 = this ;
          const GALGAS_classTypeForGeneration temp_23 = this ;
          const GALGAS_classTypeForGeneration temp_24 = this ;
          const GALGAS_classTypeForGeneration temp_25 = this ;
          GALGAS_string var_part_32__25960 = GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_25248.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_17.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 666)), temp_19, temp_22.readProperty_mCurrentTypedAttributeList (), temp_23.readProperty_mAllTypedAttributeList (), temp_24.readProperty_mIsAbstract (), temp_25.readProperty_synthetizedInitializerArgumentList () COMMA_SOURCE_FILE ("type-class.galgas", 664))) ;
          const GALGAS_classTypeForGeneration temp_26 = this ;
          GALGAS_string var_headerFileName_26428 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_26.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 673)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 673)) ;
          {
          GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 675)), var_headerFileName_26428, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__25396, GALGAS_string ("\n\n"), var_part_32__25960, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 674)) ;
          }
          outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_26428, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 685)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 685)) ;
        }
      }
      if (kBoolFalse == test_4) {
        const GALGAS_classTypeForGeneration temp_27 = this ;
        const GALGAS_classTypeForGeneration temp_28 = this ;
        GALGAS_string temp_29 ;
        const enumGalgasBool test_30 = temp_28.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 690)).boolEnum () ;
        if (kBoolTrue == test_30) {
          temp_29 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_30) {
          const GALGAS_classTypeForGeneration temp_31 = this ;
          temp_29 = extensionGetter_identifierRepresentation (temp_31.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 690)) ;
        }
        const GALGAS_classTypeForGeneration temp_32 = this ;
        const GALGAS_classTypeForGeneration temp_33 = this ;
        const GALGAS_classTypeForGeneration temp_34 = this ;
        const GALGAS_classTypeForGeneration temp_35 = this ;
        const GALGAS_classTypeForGeneration temp_36 = this ;
        const GALGAS_classTypeForGeneration temp_37 = this ;
        outArgument_outHeader = GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_25248.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_27.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 689)), temp_29, temp_32.readProperty_mCurrentTypedAttributeList (), temp_33.readProperty_mAllTypedAttributeList (), temp_34.readProperty_mIsAbstract (), extensionGetter_definition (temp_35.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 694)).readProperty_getterMap (), extensionGetter_definition (temp_36.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 695)).readProperty_instanceMethodMap (), temp_37.readProperty_initializerMap () COMMA_SOURCE_FILE ("type-class.galgas", 687))) ;
        const GALGAS_classTypeForGeneration temp_38 = this ;
        const GALGAS_classTypeForGeneration temp_39 = this ;
        GALGAS_string temp_40 ;
        const enumGalgasBool test_41 = temp_39.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 701)).boolEnum () ;
        if (kBoolTrue == test_41) {
          temp_40 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_41) {
          const GALGAS_classTypeForGeneration temp_42 = this ;
          temp_40 = extensionGetter_identifierRepresentation (temp_42.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 701)) ;
        }
        const GALGAS_classTypeForGeneration temp_43 = this ;
        const GALGAS_classTypeForGeneration temp_44 = this ;
        const GALGAS_classTypeForGeneration temp_45 = this ;
        const GALGAS_classTypeForGeneration temp_46 = this ;
        outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_25248.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_38.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 700)), temp_40, temp_43.readProperty_mCurrentTypedAttributeList (), temp_44.readProperty_mAllTypedAttributeList (), temp_45.readProperty_mIsAbstract (), temp_46.readProperty_synthetizedInitializerArgumentList () COMMA_SOURCE_FILE ("type-class.galgas", 698))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 698)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_47 = kBoolTrue ;
    if (kBoolTrue == test_47) {
      const GALGAS_classTypeForGeneration temp_48 = this ;
      test_47 = temp_48.readProperty_generateHeaderInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_47) {
        const GALGAS_classTypeForGeneration temp_49 = this ;
        const GALGAS_classTypeForGeneration temp_50 = this ;
        GALGAS_string temp_51 ;
        const enumGalgasBool test_52 = temp_50.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 713)).boolEnum () ;
        if (kBoolTrue == test_52) {
          temp_51 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_52) {
          const GALGAS_classTypeForGeneration temp_53 = this ;
          temp_51 = extensionGetter_identifierRepresentation (temp_53.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 713)) ;
        }
        const GALGAS_classTypeForGeneration temp_54 = this ;
        const GALGAS_classTypeForGeneration temp_55 = this ;
        const GALGAS_classTypeForGeneration temp_56 = this ;
        const GALGAS_classTypeForGeneration temp_57 = this ;
        const GALGAS_classTypeForGeneration temp_58 = this ;
        GALGAS_string var_part_31__28101 = GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_25248.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_49.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 712)), temp_51, temp_54.readProperty_mCurrentTypedAttributeList (), temp_55.readProperty_mAllTypedAttributeList (), temp_56.readProperty_mIsAbstract (), extensionGetter_definition (temp_57.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 717)).readProperty_getterMap (), extensionGetter_definition (temp_58.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 718)).readProperty_instanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 710))) ;
        const GALGAS_classTypeForGeneration temp_59 = this ;
        const GALGAS_classTypeForGeneration temp_60 = this ;
        GALGAS_string temp_61 ;
        const enumGalgasBool test_62 = temp_60.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 723)).boolEnum () ;
        if (kBoolTrue == test_62) {
          temp_61 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_62) {
          const GALGAS_classTypeForGeneration temp_63 = this ;
          temp_61 = extensionGetter_identifierRepresentation (temp_63.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 723)) ;
        }
        const GALGAS_classTypeForGeneration temp_64 = this ;
        const GALGAS_classTypeForGeneration temp_65 = this ;
        const GALGAS_classTypeForGeneration temp_66 = this ;
        GALGAS_string var_part_32__28622 = GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_25248.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_59.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 722)), temp_61, temp_64.readProperty_mCurrentTypedAttributeList (), temp_65.readProperty_mAllTypedAttributeList (), temp_66.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 720))) ;
        const GALGAS_classTypeForGeneration temp_67 = this ;
        GALGAS_string var_headerFileName_29035 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_67.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 728)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 728)) ;
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 730)), var_headerFileName_29035, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__28101, GALGAS_string ("\n\n"), var_part_32__28622, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 729)) ;
        }
        outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_29035, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 740)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 740)) ;
      }
    }
    if (kBoolFalse == test_47) {
      const GALGAS_classTypeForGeneration temp_68 = this ;
      const GALGAS_classTypeForGeneration temp_69 = this ;
      GALGAS_string temp_70 ;
      const enumGalgasBool test_71 = temp_69.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 745)).boolEnum () ;
      if (kBoolTrue == test_71) {
        temp_70 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_71) {
        const GALGAS_classTypeForGeneration temp_72 = this ;
        temp_70 = extensionGetter_identifierRepresentation (temp_72.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 745)) ;
      }
      const GALGAS_classTypeForGeneration temp_73 = this ;
      const GALGAS_classTypeForGeneration temp_74 = this ;
      const GALGAS_classTypeForGeneration temp_75 = this ;
      const GALGAS_classTypeForGeneration temp_76 = this ;
      const GALGAS_classTypeForGeneration temp_77 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_25248.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_68.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 744)), temp_70, temp_73.readProperty_mCurrentTypedAttributeList (), temp_74.readProperty_mAllTypedAttributeList (), temp_75.readProperty_mIsAbstract (), extensionGetter_definition (temp_76.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 749)).readProperty_getterMap (), extensionGetter_definition (temp_77.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 750)).readProperty_instanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 742))) ;
      const GALGAS_classTypeForGeneration temp_78 = this ;
      const GALGAS_classTypeForGeneration temp_79 = this ;
      GALGAS_string temp_80 ;
      const enumGalgasBool test_81 = temp_79.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 755)).boolEnum () ;
      if (kBoolTrue == test_81) {
        temp_80 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_81) {
        const GALGAS_classTypeForGeneration temp_82 = this ;
        temp_80 = extensionGetter_identifierRepresentation (temp_82.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 755)) ;
      }
      const GALGAS_classTypeForGeneration temp_83 = this ;
      const GALGAS_classTypeForGeneration temp_84 = this ;
      const GALGAS_classTypeForGeneration temp_85 = this ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_25248.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_78.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 754)), temp_80, temp_83.readProperty_mCurrentTypedAttributeList (), temp_84.readProperty_mAllTypedAttributeList (), temp_85.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 752))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 752)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outImplementation,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 769)) ;
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_30967 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 770)) ;
  const GALGAS_classTypeForGeneration temp_2 = this ;
  const GALGAS_classTypeForGeneration temp_3 = this ;
  const GALGAS_classTypeForGeneration temp_4 = this ;
  GALGAS_typedPropertyList var_at_31025 = temp_2.readProperty_mAllTypedAttributeList ().getter_subListWithRange (GALGAS_range::init_21__21_ (GALGAS_uint (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_count (SOURCE_FILE ("type-class.galgas", 772)).substract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_count (SOURCE_FILE ("type-class.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 772)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 771)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_classTypeForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_classTypeForGeneration temp_7 = this ;
      const GALGAS_classTypeForGeneration temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = temp_8.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 778)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_10) {
        const GALGAS_classTypeForGeneration temp_11 = this ;
        temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 778)) ;
      }
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      const GALGAS_classTypeForGeneration temp_14 = this ;
      const GALGAS_classTypeForGeneration temp_15 = this ;
      const GALGAS_classTypeForGeneration temp_16 = this ;
      const GALGAS_classTypeForGeneration temp_17 = this ;
      const GALGAS_classTypeForGeneration temp_18 = this ;
      const GALGAS_classTypeForGeneration temp_19 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, var_typedefinition_30967.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_7.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 777)), temp_9, temp_12.readProperty_mCurrentTypedAttributeList (), temp_13.readProperty_mAllTypedAttributeList (), var_at_31025, temp_14.readProperty_mIsAbstract (), temp_15.readProperty_initializerNeedsCompilerVariable (), temp_16.readProperty_propertyInitializationCode (), var_typedefinition_30967.readProperty_features ().getter_generateSynthetizedInitializer (SOURCE_FILE ("type-class.galgas", 785)), temp_17.readProperty_synthetizedInitializerArgumentList (), temp_18.readProperty_inheritedSynthetizedInitializerArgumentList (), var_typedefinition_30967.readProperty_initializerMap (), temp_19.readProperty_clonable () COMMA_SOURCE_FILE ("type-class.galgas", 775))) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_classTypeForGeneration temp_20 = this ;
    const GALGAS_classTypeForGeneration temp_21 = this ;
    GALGAS_string temp_22 ;
    const enumGalgasBool test_23 = temp_21.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 795)).boolEnum () ;
    if (kBoolTrue == test_23) {
      temp_22 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_23) {
      const GALGAS_classTypeForGeneration temp_24 = this ;
      temp_22 = extensionGetter_identifierRepresentation (temp_24.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 795)) ;
    }
    const GALGAS_classTypeForGeneration temp_25 = this ;
    const GALGAS_classTypeForGeneration temp_26 = this ;
    const GALGAS_classTypeForGeneration temp_27 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeSpecificImplementation (inCompiler, var_typedefinition_30967.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_20.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 794)), temp_22, temp_25.readProperty_mCurrentTypedAttributeList (), temp_26.readProperty_mAllTypedAttributeList (), var_at_31025, temp_27.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 792))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassGetterDeclaration (const GALGAS_lstring & constinArgument_inGetterName,
                                                       const GALGAS_functionSignature & constinArgument_inArgumentTypeList,
                                                       const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                       const GALGAS_unifiedTypeMapEntry & constinArgument_inReturnedType,
                                                       const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_33037 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_33076 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_33076 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_33037 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_33037 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_33076 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_33076 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_33037.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//--- Extension getter ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 834)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 834)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual class GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 835)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 835)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 835)) ;
      result_result.plusAssign_operation(GALGAS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 836)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 836)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 836)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 836)) ;
      GALGAS_bool var_first_33724 = GALGAS_bool (true) ;
      cEnumerator_functionSignature enumerator_33763 (constinArgument_inArgumentTypeList, EnumerationOrder::up) ;
      while (enumerator_33763.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_33724.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_33724 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 843)) ;
        }
        result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_33763.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 845)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 845)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 845)) ;
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_33763.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 846)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 846)) ;
        enumerator_33763.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_33724.operator_not (SOURCE_FILE ("type-class.galgas", 849)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 850)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 852)) ;
          var_first_33724 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_33724.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (") const"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 855)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 855)) ;
      result_result.plusAssign_operation(var_suffix_33076.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 856)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 856)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassGetterDeclaration [6] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_functionSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_unifiedTypeMapEntry,
  & kTypeDescriptor_GALGAS_methodQualifier,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassGetterDeclaration (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassGetterDeclaration ("generateClassGetterDeclaration",
                                                                                functionWithGenericHeader_generateClassGetterDeclaration,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                5,
                                                                                functionArgs_generateClassGetterDeclaration) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassInstanceMethodDeclaration (const GALGAS_lstring & constinArgument_inMethodName,
                                                               const GALGAS_formalParameterSignature & constinArgument_inArgumentTypeList,
                                                               const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                               const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_34782 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_34821 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_34821 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_34782 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_34782 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_34821 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_34821 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_34782.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("//--- Extension method ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 885)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 885)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 885)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 886)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 886)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 886)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 886)) ;
      GALGAS_bool var_first_35400 = GALGAS_bool (true) ;
      cEnumerator_formalParameterSignature enumerator_35439 (constinArgument_inArgumentTypeList, EnumerationOrder::up) ;
      while (enumerator_35439.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_35400.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_35400 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 893)) ;
        }
        switch (enumerator_35439.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_35439.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 897)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 897)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 897)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_35439.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 899)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 899)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 899)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 899)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_35439.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 901)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 901)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 901)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 901)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_35439.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 903)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 903)) ;
          }
          break ;
        }
        result_result.plusAssign_operation(GALGAS_string (" arg_").add_operation (enumerator_35439.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 905)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 905)) ;
        enumerator_35439.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_35400.operator_not (SOURCE_FILE ("type-class.galgas", 908)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 909)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 911)) ;
          var_first_35400 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_35400.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 914)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 914)) ;
      result_result.plusAssign_operation(var_suffix_34821.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 915)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 915)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassInstanceMethodDeclaration [5] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_methodQualifier,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassInstanceMethodDeclaration (Compiler * inCompiler,
                                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_formalParameterSignature operand1 = GALGAS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                   inCompiler
                                                                                                   COMMA_THERE) ;
  const GALGAS_bool operand2 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_methodQualifier operand3 = GALGAS_methodQualifier::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_generateClassInstanceMethodDeclaration (operand0,
                                                          operand1,
                                                          operand2,
                                                          operand3,
                                                          inCompiler
                                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassInstanceMethodDeclaration ("generateClassInstanceMethodDeclaration",
                                                                                        functionWithGenericHeader_generateClassInstanceMethodDeclaration,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        4,
                                                                                        functionArgs_generateClassInstanceMethodDeclaration) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'classGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- File '/galgas-predefined-types.ggs'

const char * gWrapperFileContent_0_classGenerationTemplate = 
  "\n"
  "extern proc %usefull println (let @string inString)\n"
  "\n"
  "extern proc %usefull print (let @string inString)\n"
  "\n"
  "list @2lstringlist %usefull {\n"
  "  public var @lstring mValue0\n"
  "  public var @lstring mValue1\n"
  "}\n"
   ;

const cRegularFileWrapper gWrapperFile_0_classGenerationTemplate (
  "galgas-predefined-types.ggs",
  "ggs",
  true, // Text file
 197, // Text length
  gWrapperFileContent_0_classGenerationTemplate
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_0 [2] = {
  & gWrapperFile_0_classGenerationTemplate,
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_classGenerationTemplate (
  "",
  1,
  gWrapperAllFiles_classGenerationTemplate_0,
  0,
  gWrapperAllDirectories_classGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                    const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                    const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                    const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                    const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("  value class\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_value_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Embedded object pointer\n  public: inline const class cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr (void) const {\n    return (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) mObjectPtr ;\n  }\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) ;\n\n//--------------------------------- Property read access\n") ;
  GALGAS_uint index_1008_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1008 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1008.hasCurrentObject ()) {
      result.appendString ("  public: class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1008.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_1008.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (void) const ;\n\n") ;
      index_1008_.increment () ;
      enumerator_1008.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_31_ (Compiler * inCompiler,
                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                            const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                            const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                            const GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                            const GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("acPtr_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n\n") ;
  GALGAS_uint index_511_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_511 (in_GETTER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_511.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_511.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString (function_generateClassGetterDeclaration (enumerator_511.current_lkey (HERE), enumerator_511.current_mArgumentTypeList (HERE), enumerator_511.current_mHasCompilerArgument (HERE), enumerator_511.current_mReturnedType (HERE), enumerator_511.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_511_.increment () ;
      enumerator_511.gotoNextObject () ;
    }
  }
  GALGAS_uint index_753_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_753 (in_INSTANCE_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_753.hasCurrentObject ()) {
      result.appendString (function_generateClassInstanceMethodDeclaration (enumerator_753.current_lkey (HERE), enumerator_753.current_mParameterList (HERE), enumerator_753.current_mHasCompilerArgument (HERE), enumerator_753.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 16)).stringValue ()) ;
      index_753_.increment () ;
      enumerator_753.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_32_ (Compiler * inCompiler,
                                                                                            const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                            const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                            const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                            const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--- Properties\n") ;
  GALGAS_uint index_111_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_111 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_111.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_111.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_111.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_111_.increment () ;
      enumerator_111.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--- Constructor\n  public: cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_401_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_401 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_401.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_401.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_401.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      if (enumerator_401.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_401_.increment () ;
      enumerator_401.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("LOCATION_ARGS") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") ;\n\n") ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("//--- Duplication\n  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--- Attribute accessors\n") ;
  GALGAS_uint index_898_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_898 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_898.hasCurrentObject ()) {
      result.appendString ("  public: VIRTUAL_IN_DEBUG GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_898.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue ()) ;
      result.appendString (" getter_") ;
      result.appendString (enumerator_898.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      const enumGalgasBool test_2 = enumerator_898.current_hasSetter (HERE).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("  public: VIRTUAL_IN_DEBUG void setter_set") ;
        result.appendString (enumerator_898.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue ()) ;
        result.appendString (" (GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_898.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue ()) ;
        result.appendString (" inValue COMMA_LOCATION_ARGS) ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_898_.increment () ;
      enumerator_898.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_3 = in_IS_5F_ABSTRACT.boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override = 0 ;\n\n  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override ;\n\n  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                                const GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                                const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Object comparison                                                                           \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).operator_and (GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("ComparisonResult cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n  return ComparisonResult::operandEqual ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).operator_and (GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("ComparisonResult cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n  ComparisonResult result = ComparisonResult::operandEqual ;\n  const cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * p = (const cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) inOperandPtr ;\n  macroValidSharedObject (p, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (") ;\n") ;
    GALGAS_uint index_1088_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1088 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_1088.hasCurrentObject ()) {
        result.appendString ("  if (ComparisonResult::operandEqual == result) {\n    result = mProperty_") ;
        result.appendString (enumerator_1088.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue ()) ;
        result.appendString (".objectCompare (p->mProperty_") ;
        result.appendString (enumerator_1088.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        index_1088_.increment () ;
        enumerator_1088.gotoNextObject () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;\n    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;\n    if (mySlot < operandSlot) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mySlot > operandSlot) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_value_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) :\n") ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_value_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" (inSourcePtr) {\n  macroNullOrValidSharedObject (inSourcePtr, cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n}\n") ;
  const enumGalgasBool test_4 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).operator_and (GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (LOCATION_ARGS) {\n  GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (THERE)) ;\n  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_5 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).operator_and (GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_3568_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3568 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3568.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3568.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (" & inAttribute_") ;
        result.appendString (enumerator_3568.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        if (enumerator_3568.hasNextObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_3568_.increment () ;
        enumerator_3568.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 81)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_6) {
    case kBoolTrue : {
      result.appendString ("LOCATION_ARGS") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS") ;
      } break ;
    default :
      break ;
    }
    result.appendString (") {\n  GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  if (") ;
    GALGAS_uint index_3973_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3973 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3973.hasCurrentObject ()) {
        result.appendString ("inAttribute_") ;
        result.appendString (enumerator_3973.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 90)).stringValue ()) ;
        result.appendString (".isValid ()") ;
        if (enumerator_3973.hasNextObject ()) {
          result.appendString (" && ") ;
        }
        index_3973_.increment () ;
        enumerator_3973.gotoNextObject () ;
      }
    }
    result.appendString (") {\n    macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_4239_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4239 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4239.hasCurrentObject ()) {
        result.appendString ("inAttribute_") ;
        result.appendString (enumerator_4239.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 96)).stringValue ()) ;
        if (enumerator_4239.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_4239_.increment () ;
        enumerator_4239.gotoNextObject () ;
      }
    }
    result.appendString (" COMMA_THERE)) ;\n  }\n  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_4489_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4489 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4489.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4489.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::readProperty_") ;
      result.appendString (enumerator_4489.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" (void) const {\n  if (nullptr == mObjectPtr) {\n    return GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4489.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 109)).stringValue ()) ;
      result.appendString (" () ;\n  }else{\n    const cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    return p->mProperty_") ;
      result.appendString (enumerator_4489.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (" ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4489.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (" cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_4489.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mProperty_") ;
      result.appendString (enumerator_4489.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 118)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_4489_.increment () ;
      enumerator_4489.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5599_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5599 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5599.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_5599.current_hasSetter (HERE).boolEnum () ;
      switch (test_7) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_5599.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5599.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).stringValue ()) ;
        result.appendString (" inValue\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) {\n  if (nullptr != mObjectPtr) {\n    insulate (THERE) ;\n    cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    p->mProperty_") ;
        result.appendString (enumerator_5599.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 131)).stringValue ()) ;
        result.appendString (" = inValue ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_5599.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5599.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.appendString (" inValue\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  mProperty_") ;
        result.appendString (enumerator_5599.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 137)).stringValue ()) ;
        result.appendString (" = inValue ;\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_5599_.increment () ;
      enumerator_5599.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 143)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 143)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7175_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7175 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7175.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7175.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_7175.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue ()) ;
      if (enumerator_7175.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7175_.increment () ;
      enumerator_7175.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 151)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("LOCATION_ARGS") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") :\n") ;
  const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_9) {
  case kBoolTrue : {
    result.appendString ("acPtr_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" (") ;
  GALGAS_uint index_7618_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7618 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7618.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_7618.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 159)).stringValue ()) ;
      if (enumerator_7618.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7618_.increment () ;
      enumerator_7618.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::greaterThan, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 162)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
  case kBoolTrue : {
    result.appendString (" COMMA_THERE") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("THERE") ;
    } break ;
  default :
    break ;
  }
  result.appendString (")") ;
  GALGAS_uint index_7882_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7882 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7882.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_7882.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (" (in_") ;
      result.appendString (enumerator_7882.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (")") ;
      index_7882_.increment () ;
      enumerator_7882.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n") ;
  const enumGalgasBool test_11 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 175)).boolEnum () ;
  switch (test_11) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n}\n\n") ;
    const enumGalgasBool test_12 = GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 180)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_12) {
    case kBoolTrue : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("]\") ;\n}\n\n") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (":\") ;\n") ;
      GALGAS_uint index_8878_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8878 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_8878.hasCurrentObject ()) {
          result.appendString ("  mProperty_") ;
          result.appendString (enumerator_8878.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 190)).stringValue ()) ;
          result.appendString (".description (ioString, inIndentation+1) ;\n") ;
          if (enumerator_8878.hasNextObject ()) {
            result.appendString ("  ioString.appendCString (\", \") ;\n") ;
          }
          index_8878_.increment () ;
          enumerator_8878.gotoNextObject () ;
        }
      }
      result.appendString ("  ioString.appendCString (\"]\") ;\n}\n\n") ;
      } break ;
    default :
      break ;
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_13 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 198)).boolEnum () ;
  switch (test_13) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nacPtr_class * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::duplicate (LOCATION_ARGS) const {\n  acPtr_class * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_9475_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9475 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      const bool nonEmpty_enumerator_9475 = enumerator_9475.hasCurrentObject () ;
      while (enumerator_9475.hasCurrentObject ()) {
        result.appendString ("mProperty_") ;
        result.appendString (enumerator_9475.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 205)).stringValue ()) ;
        if (enumerator_9475.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_9475_.increment () ;
        enumerator_9475.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9475) {
        result.appendString (" COMMA_") ;
      }
    }
    result.appendString ("THERE)) ;\n  return ptr ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                        const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                        const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                        const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                        const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString (" reference class\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_reference_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) ;\n\n//--------------------------------- Property access\n") ;
  GALGAS_uint index_808_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_808 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_808.hasCurrentObject ()) {
      result.appendString ("  public: class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_808.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_808.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      const enumGalgasBool test_1 = enumerator_808.current_hasSetter (HERE).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("  public: void setProperty_") ;
        result.appendString (enumerator_808.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 23)).stringValue ()) ;
        result.appendString (" (const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_808.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 23)).stringValue ()) ;
        result.appendString (" & inValue) ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("\n") ;
      index_808_.increment () ;
      enumerator_808.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_31_ (Compiler * inCompiler,
                                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                                const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                                const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                                const GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                                const GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                                const GALGAS_initializerMap & in_INITIALIZER_5F_MAP
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("acStrongPtr_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (void) const override ;\n  #endif\n\n//--------------------------------- Initializers\n") ;
  GALGAS_uint index_639_ (0) ;
  if (in_INITIALIZER_5F_MAP.isValid ()) {
    cEnumerator_initializerMap enumerator_639 (in_INITIALIZER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_639.hasCurrentObject ()) {
      result.appendString ("  public: void ") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_639.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 15)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_820_IDX (0) ;
      if (enumerator_639.current_mArgumentTypeList (HERE).isValid ()) {
        cEnumerator_functionSignature enumerator_820 (enumerator_639.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
        while (enumerator_820.hasCurrentObject ()) {
          const enumGalgasBool test_1 = enumerator_820.current_isConstant (HERE).boolEnum () ;
          switch (test_1) {
          case kBoolTrue : {
            result.appendString ("const ") ;
            } break ;
          case kBoolFalse : {
            } break ;
          default :
            break ;
          }
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_820.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 18)).stringValue ()) ;
          result.appendString (" & inOperand") ;
          result.appendString (index_820_IDX.getter_string (SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 18)).stringValue ()) ;
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          index_820_IDX.increment () ;
          enumerator_820.gotoNextObject () ;
        }
      }
      result.appendString ("Compiler * inCompiler) ;\n") ;
      index_639_.increment () ;
      enumerator_639.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n") ;
  GALGAS_uint index_1127_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_1127 (in_GETTER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1127.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_1127.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString (function_generateClassGetterDeclaration (enumerator_1127.current_lkey (HERE), enumerator_1127.current_mArgumentTypeList (HERE), enumerator_1127.current_mHasCompilerArgument (HERE), enumerator_1127.current_mReturnedType (HERE), enumerator_1127.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 26)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1127_.increment () ;
      enumerator_1127.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1369_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_1369 (in_INSTANCE_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1369.hasCurrentObject ()) {
      result.appendString (function_generateClassInstanceMethodDeclaration (enumerator_1369.current_lkey (HERE), enumerator_1369.current_mParameterList (HERE), enumerator_1369.current_mHasCompilerArgument (HERE), enumerator_1369.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 30)).stringValue ()) ;
      index_1369_.increment () ;
      enumerator_1369.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_32_ (Compiler * inCompiler,
                                                                                                const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                                const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                                const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                                const GALGAS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--- Properties\n") ;
  GALGAS_uint index_111_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_111 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_111.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_111.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_111.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_111_.increment () ;
      enumerator_111.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--- Default constructor\n  public: cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n\n//--- Constructor\n  public: cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_517_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_517 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_517.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_517.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_517.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 14)).stringValue ()) ;
      if (enumerator_517.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_517_.increment () ;
      enumerator_517.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 17)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("LOCATION_ARGS") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") ;\n\n") ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 24)).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("//--- Duplication\n  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--- Attribute accessors\n") ;
  const enumGalgasBool test_2 = in_IS_5F_ABSTRACT.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override = 0 ;\n\n  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override ;\n\n  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                    const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                    const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                    const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                    const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                    const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                                    const GALGAS_typedPropertyList & /* in_INHERITED_5F_ATTRIBUTE_5F_LIST */,
                                                                                                    const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                                    const GALGAS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                                    const GALGAS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                                    const GALGAS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                                    const GALGAS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                    const GALGAS_typedPropertyList & in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                    const GALGAS_initializerMap & /* in_INITIALIZER_5F_MAP */,
                                                                                                    const GALGAS_bool & in_CLONABLE
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GALGAS_string (" @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString (" reference class\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  const enumGalgasBool test_0 = in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("Compiler * inCompiler") ;
    } break ;
  case kBoolFalse : {
    const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::notEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    switch (test_1) {
    case kBoolTrue : {
      result.appendString ("Compiler * inCompiler") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("Compiler * /* inCompiler */") ;
      } break ;
    default :
      break ;
    }
    } break ;
  default :
    break ;
  }
  result.appendString (" COMMA_LOCATION_ARGS) :\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("acStrongPtr_class (THERE)") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE)") ;
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_708_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_708 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_708.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_708.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 19)).stringValue ()) ;
      result.appendString (" ()") ;
      index_708_.increment () ;
      enumerator_708.gotoNextObject () ;
    }
  }
  result.appendString (" {\n") ;
  result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifndef DO_NOT_GENERATE_CHECKINGS\n  void cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::printNonNullClassInstanceProperties (void) const {\n  ") ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("  acStrongPtr_class::printNonNullClassInstanceProperties () ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::printNonNullClassInstanceProperties () ;\n") ;
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_1295_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1295 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1295.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_1295.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 34)).stringValue ()) ;
      result.appendString (".printNonNullClassInstanceProperties (\"") ;
      result.appendString (enumerator_1295.current_name (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n") ;
      index_1295_.increment () ;
      enumerator_1295.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_4 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 41)).operator_and (GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 41)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 41)).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("ComparisonResult cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n  return ComparisonResult::operandEqual ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_5 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 49)).operator_and (GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 49)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 49)).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("ComparisonResult cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n  ComparisonResult result = ComparisonResult::operandEqual ;\n  const cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * p = (const cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) inOperandPtr ;\n  macroValidSharedObject (p, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (") ;\n") ;
    GALGAS_uint index_2335_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2335 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2335.hasCurrentObject ()) {
        result.appendString ("  if (ComparisonResult::operandEqual == result) {\n    result = mProperty_") ;
        result.appendString (enumerator_2335.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 56)).stringValue ()) ;
        result.appendString (".objectCompare (p->mProperty_") ;
        result.appendString (enumerator_2335.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 56)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        index_2335_.increment () ;
        enumerator_2335.gotoNextObject () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    const size_t myObjectPtr = size_t (mObjectPtr) ;\n    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_reference_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" () {\n}\n\n") ;
  const enumGalgasBool test_7 = in_CLONABLE.boolEnum () ;
  switch (test_7) {
  case kBoolTrue : {
    result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::init_21_cloned (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inObject,\n           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  if (inObject.isValid ()) {\n    macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inCompiler COMMA_HERE)) ;\n") ;
    GALGAS_uint index_4136_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4136 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4136.hasCurrentObject ()) {
        result.appendString ("    ((cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) result.mObjectPtr)->mProperty_") ;
        result.appendString (enumerator_4136.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 102)).stringValue ()) ;
        result.appendString (" = ((cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) inObject.mObjectPtr)->mProperty_") ;
        result.appendString (enumerator_4136.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 102)).stringValue ()) ;
        result.appendString (" ;\n") ;
        index_4136_.increment () ;
        enumerator_4136.gotoNextObject () ;
      }
    }
    result.appendString ("  }\n  return result ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_8 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 109)).operator_and (in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 109)).boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.appendString ("//--- Synthetized initializer ----------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::\n") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 113)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 113)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4739_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4739 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4739.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_4739.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 115)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_4739.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 115)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_4739_.increment () ;
        enumerator_4739.gotoNextObject () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n          ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * object = nullptr ;\n  macroMyNew (object, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE)) ;\n  object->") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 121)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 121)).stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_5201_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_5201 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_5201.hasCurrentObject ()) {
        result.appendString ("in_") ;
        result.appendString (enumerator_5201.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 123)).stringValue ()) ;
        result.appendString (", ") ;
        index_5201_.increment () ;
        enumerator_5201.gotoNextObject () ;
      }
    }
    result.appendString ("inCompiler) ;\n  const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result (object) ;\n  macroDetachSharedObject (object) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::\n") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 134)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 134)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_5673_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_5673 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_5673.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5673.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 136)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_5673.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 136)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_5673_.increment () ;
        enumerator_5673.gotoNextObject () ;
      }
    }
    result.appendString ("Compiler * /* inCompiler */) {\n") ;
    GALGAS_uint index_5877_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_5877 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_5877.hasCurrentObject ()) {
        result.appendString ("  mProperty_") ;
        result.appendString (enumerator_5877.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 141)).stringValue ()) ;
        result.appendString (" = in_") ;
        result.appendString (enumerator_5877.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 141)).stringValue ()) ;
        result.appendString (" ;\n") ;
        index_5877_.increment () ;
        enumerator_5877.gotoNextObject () ;
      }
    }
    result.appendString ("}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) :\n") ;
  const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_9) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_reference_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" (inSourcePtr) {\n  macroNullOrValidSharedObject (inSourcePtr, cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n}\n") ;
  const enumGalgasBool test_10 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 156)).operator_and (GALGAS_bool (ComparisonKind::equal, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 156)).boolEnum () ;
  switch (test_10) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (LOCATION_ARGS) {\n  GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (THERE)) ;\n  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_11 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 165)).operator_and (GALGAS_bool (ComparisonKind::greaterThan, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 165)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 165)).boolEnum () ;
  switch (test_11) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_7181_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_7181 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_7181.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_7181.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 169)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_7181.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 169)).stringValue ()) ;
        if (enumerator_7181.hasNextObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_7181_.increment () ;
        enumerator_7181.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_12 = GALGAS_bool (ComparisonKind::equal, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 172)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_12) {
    case kBoolTrue : {
      result.appendString ("LOCATION_ARGS") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS") ;
      } break ;
    default :
      break ;
    }
    result.appendString (") {\n  GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_7645_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_7645 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_7645.hasCurrentObject ()) {
        result.appendString ("in_") ;
        result.appendString (enumerator_7645.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 181)).stringValue ()) ;
        if (enumerator_7645.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_7645_.increment () ;
        enumerator_7645.gotoNextObject () ;
      }
    }
    result.appendString (" COMMA_THERE)) ;\n  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_7866_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7866 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7866.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7866.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 191)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::readProperty_") ;
      result.appendString (enumerator_7866.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 191)).stringValue ()) ;
      result.appendString (" (void) const {\n  if (nullptr == mObjectPtr) {\n    return GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7866.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (" () ;\n  }else{\n    cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    return p->mProperty_") ;
      result.appendString (enumerator_7866.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 197)).stringValue ()) ;
      result.appendString (" ;\n  }\n}\n\n") ;
      const enumGalgasBool test_13 = enumerator_7866.current_hasSetter (HERE).boolEnum () ;
      switch (test_13) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setProperty_") ;
        result.appendString (enumerator_7866.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 202)).stringValue ()) ;
        result.appendString (" (const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_7866.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 202)).stringValue ()) ;
        result.appendString (" & inValue) {\n  if (nullptr != mObjectPtr) {\n    cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    p->mProperty_") ;
        result.appendString (enumerator_7866.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 206)).stringValue ()) ;
        result.appendString (" = inValue ;\n  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_7866_.increment () ;
      enumerator_7866.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 213)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 213)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9538_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9538 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9538.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9538.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 218)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_9538.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 218)).stringValue ()) ;
      if (enumerator_9538.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_9538_.increment () ;
      enumerator_9538.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_14 = GALGAS_bool (ComparisonKind::greaterThan, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 221)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_14) {
  case kBoolTrue : {
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("LOCATION_ARGS") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") :\n") ;
  const enumGalgasBool test_15 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_15) {
  case kBoolTrue : {
    result.appendString ("acStrongPtr_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" (") ;
  GALGAS_uint index_10019_ (0) ;
  if (in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10019 (in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10019.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_10019.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 229)).stringValue ()) ;
      if (enumerator_10019.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_10019_.increment () ;
      enumerator_10019.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_16 = GALGAS_bool (ComparisonKind::greaterThan, in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 232)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_16) {
  case kBoolTrue : {
    result.appendString (" COMMA_THERE") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("THERE") ;
    } break ;
  default :
    break ;
  }
  result.appendString (")") ;
  GALGAS_uint index_10290_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10290 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10290.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_10290.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 239)).stringValue ()) ;
      result.appendString (" ()") ;
      index_10290_.increment () ;
      enumerator_10290.gotoNextObject () ;
    }
  }
  result.appendString (" {\n") ;
  result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  GALGAS_uint index_10462_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10462 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10462.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_10462.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 244)).stringValue ()) ;
      result.appendString (" = in_") ;
      result.appendString (enumerator_10462.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 244)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_10462_.increment () ;
      enumerator_10462.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n") ;
  const enumGalgasBool test_17 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 249)).boolEnum () ;
  switch (test_17) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n}\n\n") ;
    const enumGalgasBool test_18 = GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 254)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_18) {
    case kBoolTrue : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("]\") ;\n}\n\n") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (":\") ;\n") ;
      GALGAS_uint index_11459_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_11459 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_11459.hasCurrentObject ()) {
          result.appendString ("  mProperty_") ;
          result.appendString (enumerator_11459.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 264)).stringValue ()) ;
          result.appendString (".description (ioString, inIndentation+1) ;\n") ;
          if (enumerator_11459.hasNextObject ()) {
            result.appendString ("  ioString.appendCString (\", \") ;\n") ;
          }
          index_11459_.increment () ;
          enumerator_11459.gotoNextObject () ;
        }
      }
      result.appendString ("  ioString.appendCString (\"]\") ;\n}\n\n") ;
      } break ;
    default :
      break ;
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_19 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 272)).boolEnum () ;
  switch (test_19) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nacPtr_class * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::duplicate (LOCATION_ARGS) const {\n  acPtr_class * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_12064_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_12064 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      const bool nonEmpty_enumerator_12064 = enumerator_12064.hasCurrentObject () ;
      while (enumerator_12064.hasCurrentObject ()) {
        result.appendString ("mProperty_") ;
        result.appendString (enumerator_12064.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 279)).stringValue ()) ;
        if (enumerator_12064.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_12064_.increment () ;
        enumerator_12064.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_12064) {
        result.appendString (" COMMA_") ;
      }
    }
    result.appendString ("THERE)) ;\n  return ptr ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate weakReferenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_weakReferenceClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                            const GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" weak reference class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Constructor and assignment from strong reference\n  public: GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n  public: GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const class GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Bang operator\n  public: GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" bang_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate weakReferenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_weakReferenceClassTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                                        const GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                                        const GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                        const GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                        const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                                        const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                                        const GALGAS_typedPropertyList & /* in_INHERITED_5F_ATTRIBUTE_5F_LIST */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    cPtr_weakReference_proxy * myPtr = mProxyPtr ;\n    const size_t myObjectPtr = size_t (myPtr) ;\n    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;\n    const size_t operandObjectPtr = size_t (operandPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  cPtr_weakReference_proxy * proxyPtr = nullptr ;\n  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;\n  if (p != nullptr) {\n    proxyPtr = p->getProxy () ;\n  }\n  macroAssignSharedObject (mProxyPtr, proxyPtr) ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" (inSource) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_nil (LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::bang_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mProxyPtr != nullptr) {\n    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;\n    if (strongPtr == nullptr) {\n      inCompiler->onTheFlySemanticError (\"weak reference is nil\" COMMA_THERE) ;\n    }else{\n      macroValidSharedObject (strongPtr, cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n      result = GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ((cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) strongPtr) ;\n    }\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@weakReferenceDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_weakReferenceDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_2632 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 48)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2632, temp_2, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 49)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
      const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2632, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 53)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 51)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_superClassIndex_3932 ;
  GALGAS_bool var_generateHeaderInSeparateFile_3960 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_3932 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-weak-reference.galgas", 78)) ;
      const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_3960 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_3932, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 86)) ;
    }
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_4421 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 87)) ;
    var_generateHeaderInSeparateFile_3960 = var_superTypeDefinition_4421.readProperty_generateHeaderInSeparateFile () ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_superTypeDefinition_4421.readProperty_typeKind ().getter_isWeakReferenceType (SOURCE_FILE ("type-weak-reference.galgas", 98)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 98)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
        const GALGAS_weakReferenceDeclarationAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_7.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 99)).add_operation (GALGAS_string (" should be a weak reference type"), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 99)), fixItArray8  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 99)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_weakReferenceIndex_5088 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_9 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_9.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_5088, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 103)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_5156 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_10 = this ;
  var_classFunctionMap_5156.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("nil"), temp_10.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_weakReferenceIndex_5088, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 109)) ;
  }
  GALGAS_getterMap var_getterMap_5355 = GALGAS_getterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_setterMap var_setterMap_5387 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5427 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_initializerMap var_initializerMap_5472 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_11.readProperty_mWeakReferenceTypeName (), GALGAS_bool (false), var_initializerMap_5472, var_getterMap_5355, var_setterMap_5387, var_instanceMethodMap_5427, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 120)) ;
  }
  cEnumerator_getterMap enumerator_5903 (var_getterMap_5355, EnumerationOrder::up) ;
  while (enumerator_5903.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (enumerator_5903.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray12  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 136)) ;
    enumerator_5903.gotoNextObject () ;
  }
  cEnumerator_setterMap enumerator_6004 (var_setterMap_5387, EnumerationOrder::up) ;
  while (enumerator_6004.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_6004.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 139)) ;
    enumerator_6004.gotoNextObject () ;
  }
  cEnumerator_instanceMethodMap enumerator_6105 (var_instanceMethodMap_5427, EnumerationOrder::up) ;
  while (enumerator_6105.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (enumerator_6105.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray14  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 142)) ;
    enumerator_6105.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_6276 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_15 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_15.readProperty_mClassTypeName (), var_classIndex_6276, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 145)) ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_17 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_18 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_6294 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_16.readProperty_mWeakReferenceTypeName (), temp_17.readProperty_isPredefined (), GALGAS_bool (true), var_superClassIndex_3932, GALGAS_typeKindEnum::class_func_weakReferenceType (var_classIndex_6276  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 151)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_5472, var_classFunctionMap_5156, GALGAS_getterMap::init (inCompiler COMMA_HERE), GALGAS_setterMap::init (inCompiler COMMA_HERE), GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE), GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), GALGAS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("type-weak-reference.galgas", 164)), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), var_generateHeaderInSeparateFile_3960, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-weak-reference.galgas", 168)), GALGAS_string ("weak-reference-").add_operation (temp_18.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 169)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-weak-reference.galgas", 170)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_6294.readProperty_typeName (), var_typeDefinition_6294, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 172)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  GALGAS_lstring var_weakRefTypeNameForUsefulness_8039 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 189)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_8039, var_weakRefTypeNameForUsefulness_8039, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 190)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superWeakRefNameForUsefulness_8292 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 192)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_8039, var_superWeakRefNameForUsefulness_8292 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 193)) ;
      }
    }
  }
  const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_8541 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 196)) ;
  const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::equal, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-weak-reference.galgas", 199)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 200)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_8662 = temp_6 ;
  GALGAS_typedPropertyList var_allAttributeList_9038 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (ComparisonKind::equal, var_superClassEntry_8662.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-weak-reference.galgas", 206)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_allAttributeList_9038 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_9) {
    var_allAttributeList_9038 = extensionGetter_definition (var_superClassEntry_8662, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 222)).readProperty_allTypedPropertyList () ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_weakReferenceDeclarationAST temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 224)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_9951 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_9999 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_weakReferenceDeclarationAST temp_14 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10099 (temp_14.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_10099.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_t_10148 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_10099.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 231)) ;
    var_typedAttributeList_9951.addAssign_operation (var_t_10148, enumerator_10099.current_propertyName (HERE), enumerator_10099.current_initialization (HERE), enumerator_10099.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 236)), enumerator_10099.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 232)) ;
    var_allAttributeList_9038.addAssign_operation (var_t_10148, enumerator_10099.current_propertyName (HERE), enumerator_10099.current_initialization (HERE), enumerator_10099.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 242)), enumerator_10099.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 238)) ;
    {
    var_attributeMap_9999.setter_insertKey (enumerator_10099.current_propertyName (HERE), var_t_10148, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 244)) ;
    }
    enumerator_10099.gotoNextObject () ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_15 = this ;
  GALGAS_unifiedTypeMapEntry var_referenceClassType_10576 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_15.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 247)) ;
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("weak reference ").add_operation (temp_16.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 251)), GALGAS_weakReferenceTypeForGeneration::init_21__21__21__21__21__21_ (var_selfType_8541, var_referenceClassType_10576, var_superClassEntry_8662, var_allAttributeList_9038, var_typedAttributeList_9951, extensionGetter_definition (var_selfType_8541, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 258)).readProperty_generateHeaderInSeparateFile (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 250)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 278)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 278)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 279)) ;
    }
  }
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 281)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_4 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_12096 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 282)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_5 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 286)).boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_9) {
    const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
    temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 286)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_classGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 284)), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 285)), temp_8 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 283))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typeDefinition_12096.readProperty_typeName ().readProperty_string (), var_typeDefinition_12096.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 290)), var_typeDefinition_12096.readProperty_isConcrete (), var_typeDefinition_12096.readProperty_initializerMap (), var_typeDefinition_12096.readProperty_classFunctionMap (), var_typeDefinition_12096.readProperty_getterMap (), var_typeDefinition_12096.readProperty_setterMap (), var_typeDefinition_12096.readProperty_instanceMethodMap (), var_typeDefinition_12096.readProperty_classMethodMap (), var_typeDefinition_12096.readProperty_optionalMethodMap (), var_typeDefinition_12096.readProperty_enumerationDescriptorList (), var_typeDefinition_12096.readProperty_features (), var_typeDefinition_12096.readProperty_addAssignOperatorArguments (), var_typeDefinition_12096.readProperty_typeForEnumeratedElement (), var_typeDefinition_12096.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-weak-reference.galgas", 288))), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 288)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 314)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_13444 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 315)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = temp_3.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 319)).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
    temp_4 = extensionGetter_identifierRepresentation (temp_6.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 319)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_8 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_9 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_classGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 317)), var_typeDefinition_13444.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 318)), temp_4, temp_7.readProperty_mTypedAttributeList (), temp_8.readProperty_allTypedPropertyList (), temp_9.readProperty_allTypedPropertyList ().getter_subListWithRange (GALGAS_range::init_21__21_ (GALGAS_uint (uint32_t (0U)), temp_10.readProperty_allTypedPropertyList ().getter_count (SOURCE_FILE ("type-weak-reference.galgas", 322)).substract_operation (temp_11.readProperty_mTypedAttributeList ().getter_count (SOURCE_FILE ("type-weak-reference.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 322)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 322)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 316))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_5118 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 137)), temp_1.readProperty_mEnumTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5118, temp_2, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 138)) ;
  }
  GALGAS_bool var_circularReference_5342 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_5376 (temp_3.readProperty_mConstantList (), EnumerationOrder::up) ;
  bool bool_4 = var_circularReference_5342.isValidAndTrue () ;
  if (enumerator_5376.hasCurrentObject () && bool_4) {
    while (enumerator_5376.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_5465 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_5507 (enumerator_5376.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
      bool bool_5 = var_namesCurrentType_5465.operator_not (SOURCE_FILE ("type-enum.galgas", 143)).isValidAndTrue () ;
      if (enumerator_5507.hasCurrentObject () && bool_5) {
        while (enumerator_5507.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_5584 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_5507.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 144)), enumerator_5507.current_mValue_30_ (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (ComparisonKind::equal, var_propertyKey_5584.readProperty_string ().objectCompare (var_key_5118.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_5465 = GALGAS_bool (true) ;
            }
          }
          enumerator_5507.gotoNextObject () ;
          if (enumerator_5507.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_5465.operator_not (SOURCE_FILE ("type-enum.galgas", 143)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_5465.operator_not (SOURCE_FILE ("type-enum.galgas", 149)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_5342 = GALGAS_bool (false) ;
        }
      }
      enumerator_5376.gotoNextObject () ;
      if (enumerator_5376.hasCurrentObject ()) {
        bool_4 = var_circularReference_5342.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_5342.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = this ;
      cEnumerator_enumConstantList enumerator_5923 (temp_9.readProperty_mConstantList (), EnumerationOrder::up) ;
      while (enumerator_5923.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_5999 (enumerator_5923.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
        while (enumerator_5999.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_6051 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_5999.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 157)), enumerator_5999.current_mValue_30_ (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (ComparisonKind::notEqual, var_propertyKey_6051.readProperty_string ().objectCompare (var_key_5118.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5118, var_propertyKey_6051 COMMA_SOURCE_FILE ("type-enum.galgas", 159)) ;
              }
            }
          }
          enumerator_5999.gotoNextObject () ;
        }
        enumerator_5923.gotoNextObject () ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap var_classFunctionMap_7030 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_setterMap var_setterMap_7069 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7109 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_7200 = GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_enumTypeEntry_7302 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mEnumTypeName (), var_enumTypeEntry_7302, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 184)) ;
  }
  GALGAS_constantIndexMap var_constantMap_7362 = GALGAS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  GALGAS_bool var_hasAssociatedValues_7391 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_7440 (temp_1.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_7440.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_7530 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
    GALGAS_functionSignature var_argumentTypeList_7581 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator__32_lstringlist enumerator_7621 (enumerator_7440.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
    while (enumerator_7621.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_7717 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7621.current_mValue_30_ (HERE), var_associatedTypeEntry_7717, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 192)) ;
      }
      var_argumentTypeList_7581.addAssign_operation (enumerator_7621.current_mValue_31_ (HERE), var_associatedTypeEntry_7717, enumerator_7621.current_mValue_30_ (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-enum.galgas", 193)) ;
      var_associatedTypeList_7530.addAssign_operation (var_associatedTypeEntry_7717  COMMA_SOURCE_FILE ("type-enum.galgas", 194)) ;
      var_hasAssociatedValues_7391 = GALGAS_bool (true) ;
      enumerator_7621.gotoNextObject () ;
    }
    {
    var_constantMap_7362.setter_insertKey (enumerator_7440.current_mConstantName (HERE), var_constantMap_7362.getter_count (SOURCE_FILE ("type-enum.galgas", 197)), var_associatedTypeList_7530, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 197)) ;
    }
    {
    var_classFunctionMap_7030.setter_insertOrReplace (enumerator_7440.current_mConstantName (HERE), var_argumentTypeList_7581, GALGAS_bool (false), var_enumTypeEntry_7302 COMMA_SOURCE_FILE ("type-enum.galgas", 198)) ;
    }
    enumerator_7440.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_2 = this ;
  cEnumerator_enumConstantList enumerator_8163 (temp_2.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_8163.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_8253 = GALGAS_optionalMethodSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator__32_lstringlist enumerator_8293 (enumerator_8163.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
    while (enumerator_8293.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_8389 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8293.current_mValue_30_ (HERE), var_associatedTypeEntry_8389, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 209)) ;
      }
      var_argumentTypeList_8253.addAssign_operation (GALGAS_bool (false), enumerator_8293.current_mValue_31_ (HERE), var_associatedTypeEntry_8389, enumerator_8293.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 210)) ;
      enumerator_8293.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_7200.setter_insertKey (enumerator_8163.current_mConstantName (HERE), var_argumentTypeList_8253, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 212)) ;
    }
    enumerator_8163.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_8638 (temp_3.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_8638.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_8638.current_mAssociatedValueDefinitionList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 219)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_8785 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
        GALGAS_formalParameterSignature var_argumentTypeList_8845 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        cEnumerator__32_lstringlist enumerator_8887 (enumerator_8638.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
        while (enumerator_8887.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_8985 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8887.current_mValue_30_ (HERE), var_associatedTypeEntry_8985, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 223)) ;
          }
          var_argumentTypeList_8845.addAssign_operation (enumerator_8887.current_mValue_31_ (HERE), var_associatedTypeEntry_8985, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-enum.galgas", 224)), enumerator_8887.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 224)) ;
          var_associatedTypeList_8785.addAssign_operation (var_associatedTypeEntry_8985  COMMA_SOURCE_FILE ("type-enum.galgas", 225)) ;
          var_hasAssociatedValues_7391 = GALGAS_bool (true) ;
          enumerator_8887.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_7109.setter_insertKey (enumerator_8638.current_mConstantName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-enum.galgas", 230)), var_argumentTypeList_8845, enumerator_8638.current_mConstantName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 234)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 228)) ;
        }
      }
    }
    enumerator_8638.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_9482 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_9482, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 240)) ;
  }
  const GALGAS_enumDeclarationAST temp_5 = this ;
  cEnumerator_enumConstantList enumerator_9514 (temp_5.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_9514.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_9482, ioArgument_ioTypeMap, GALGAS_string ("is").add_operation (enumerator_9514.current_mConstantName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 245)), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 242)) ;
    }
    enumerator_9514.gotoNextObject () ;
  }
  GALGAS_initializerMap var_initializerMap_9834 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_enumDeclarationAST temp_6 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_mEnumTypeName (), GALGAS_bool (false), var_initializerMap_9834, var_getterMap_9482, var_setterMap_7069, var_instanceMethodMap_7109, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 253)) ;
  }
  const GALGAS_enumDeclarationAST temp_7 = this ;
  const GALGAS_enumDeclarationAST temp_8 = this ;
  const GALGAS_enumDeclarationAST temp_9 = this ;
  GALGAS_headerKind temp_10 ;
  const enumGalgasBool test_11 = var_hasAssociatedValues_7391.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("type-enum.galgas", 293)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-enum.galgas", 293)) ;
  }
  GALGAS_unifiedTypeDefinition var_typeDefinition_10277 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_7.readProperty_mEnumTypeName (), temp_8.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-enum.galgas", 273)), GALGAS_typeKindEnum::class_func_enumType (var_constantMap_7362  COMMA_SOURCE_FILE ("type-enum.galgas", 274)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_9834, var_classFunctionMap_7030, var_getterMap_9482, var_setterMap_7069, var_instanceMethodMap_7109, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), var_optionalMethodMap_7200, GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 287)).operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("type-enum.galgas", 287)) COMMA_SOURCE_FILE ("type-enum.galgas", 287)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("type-enum.galgas", 287)) COMMA_SOURCE_FILE ("type-enum.galgas", 287)), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-enum.galgas", 291)), GALGAS_string ("enum-").add_operation (temp_9.readProperty_mEnumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 292)), temp_10, inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_10277.readProperty_typeName (), var_typeDefinition_10277, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 295)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_12109 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 312)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12109, var_nameForUsefulness_12109, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 313)) ;
  }
  GALGAS_stringlist var_constantList_12281 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_12348 = GALGAS_enumConstantListForGeneration::init (inCompiler COMMA_HERE) ;
  GALGAS_constantIndexMap var_constantMap_12389 = GALGAS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_12445 (temp_1.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_12445.hasCurrentObject ()) {
    var_constantList_12281.addAssign_operation (enumerator_12445.current_mConstantName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 319)) ;
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_12577 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
    GALGAS_stringset var_associatedValueNameSet_12620 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
    cEnumerator__32_lstringlist enumerator_12665 (enumerator_12445.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
    while (enumerator_12665.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_12721 = function_typeNameForUsefulEntitiesGraph (enumerator_12665.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 323)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12109, var_propertyTypeNameForUsefulness_12721 COMMA_SOURCE_FILE ("type-enum.galgas", 324)) ;
      }
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_12895 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12665.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 325)) ;
      var_associatedTypeList_12577.addAssign_operation (var_associatedTypeEntry_12895  COMMA_SOURCE_FILE ("type-enum.galgas", 326)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_associatedValueNameSet_12620.getter_hasKey (enumerator_12665.current_mValue_31_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-enum.galgas", 327)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_12665.current_mValue_31_ (HERE).readProperty_location (), GALGAS_string ("duplicated name"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 328)) ;
        }
      }
      var_associatedValueNameSet_12620.addAssign_operation (enumerator_12665.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 330)) ;
      enumerator_12665.gotoNextObject () ;
    }
    {
    var_constantMap_12389.setter_insertKey (enumerator_12445.current_mConstantName (HERE), var_constantMap_12389.getter_count (SOURCE_FILE ("type-enum.galgas", 332)), var_associatedTypeList_12577, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 332)) ;
    }
    var_enumConstantListForGeneration_12348.addAssign_operation (enumerator_12445.current_mConstantName (HERE).readProperty_string (), var_associatedTypeList_12577  COMMA_SOURCE_FILE ("type-enum.galgas", 333)) ;
    enumerator_12445.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_13359 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 336)) ;
  const GALGAS_enumDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_5.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 338)), GALGAS_enumTypeForGeneration::init_21__21_ (var_selfType_13359, var_enumConstantListForGeneration_12348, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 337)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("*\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Enumeration\n  public: typedef enum {\n    kNotBuilt") ;
  GALGAS_uint index_611_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_611 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_611.hasCurrentObject ()) {
      result.appendString (",\n    kEnum_") ;
      result.appendString (enumerator_611.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue ()) ;
      index_611_.increment () ;
      enumerator_611.gotoNextObject () ;
    }
  }
  result.appendString ("\n  } enumeration ;\n  \n//--------------------------------- Private data member\n") ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;\n  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {\n    return mAssociatedValues.unsafePointer () ;\n  }\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  private: enumeration mEnum ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }\n  public: inline enumeration enumValue (void) const { return mEnum ; }\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
    result.appendString (GALGAS_string (" Phase 2: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).add_operation (GALGAS_string (" enum, associated values"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).stringValue ()) ;
    result.appendString ("\n//\n") ;
    GALGAS_uint index_269_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_269 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_269.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_269.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("//--------------------------------------------------------------------------------------------------\n\nclass cEnumAssociatedValues_") ;
          result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_269.current_mConstantName (HERE).stringValue ()) ;
          result.appendString (" : public cEnumAssociatedValues {\n") ;
          GALGAS_uint index_583_idx (0) ;
          if (enumerator_269.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_583 (enumerator_269.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
            while (enumerator_583.hasCurrentObject ()) {
              result.appendString ("  public: const GALGAS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_583.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue ()) ;
              result.appendString (" mAssociatedValue") ;
              result.appendString (index_583_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue ()) ;
              result.appendString (" ;\n") ;
              index_583_idx.increment () ;
              enumerator_583.gotoNextObject () ;
            }
          }
          result.appendString ("\n//--- Constructor\n  public: cEnumAssociatedValues_") ;
          result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_269.current_mConstantName (HERE).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_864_idx (0) ;
          if (enumerator_269.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_864 (enumerator_269.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
            while (enumerator_864.hasCurrentObject ()) {
              result.appendString ("const GALGAS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_864.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue ()) ;
              result.appendString (" inAssociatedValue") ;
              result.appendString (index_864_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue ()) ;
              if (enumerator_864.hasNextObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_864_idx.increment () ;
              enumerator_864.gotoNextObject () ;
            }
          }
          result.appendString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: virtual void description (") ;
          columnMarker = result.currentColumn () ;
          result.appendString ("String & ioString,\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("const int32_t inIndentation) const ;\n  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;\n\n  public: virtual ~ cEnumAssociatedValues_") ;
          result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_269.current_mConstantName (HERE).stringValue ()) ;
          result.appendString (" (void) { }\n} ;\n\n") ;
          } break ;
        case kBoolFalse : {
          } break ;
        default :
          break ;
        }
        index_269_.increment () ;
        enumerator_269.gotoNextObject () ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  GALGAS_uint index_64_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_64 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_64.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_64.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\ncEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString ("::cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_404_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_404 (enumerator_64.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_404.hasCurrentObject ()) {
            result.appendString ("const GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_404.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue ()) ;
            result.appendString (" inAssociatedValue") ;
            result.appendString (index_404_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue ()) ;
            if (enumerator_404.hasNextObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_404_idx.increment () ;
            enumerator_404.gotoNextObject () ;
          }
        }
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) :\ncEnumAssociatedValues (THERE)") ;
        GALGAS_uint index_640_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_640 (enumerator_64.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_640.hasCurrentObject ()) {
            result.appendString (",\nmAssociatedValue") ;
            result.appendString (index_640_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue ()) ;
            result.appendString (" (inAssociatedValue") ;
            result.appendString (index_640_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue ()) ;
            result.appendString (")") ;
            index_640_idx.increment () ;
            enumerator_640.gotoNextObject () ;
          }
        }
        result.appendString (" {\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString ("::description (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("String & ioString,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"(\\n\") ;\n") ;
        GALGAS_uint index_1134_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1134 (enumerator_64.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_1134.hasCurrentObject ()) {
            result.appendString ("  mAssociatedValue") ;
            result.appendString (index_1134_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            result.appendString (".description (ioString, inIndentation) ;\n") ;
            index_1134_idx.increment () ;
            enumerator_1134.gotoNextObject () ;
          }
        }
        result.appendString ("  ioString.appendCString (\")\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString ("::compare (const cEnumAssociatedValues * inOperand) const {\n  const cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" * ptr = dynamic_cast<const cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" *> (inOperand) ;\n  macroValidPointer (ptr) ;\n  ComparisonResult result = ComparisonResult::operandEqual ;\n") ;
        GALGAS_uint index_1866_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1866 (enumerator_64.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_1866.hasCurrentObject ()) {
            result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = mAssociatedValue") ;
            result.appendString (index_1866_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue ()) ;
            result.appendString (".objectCompare (ptr->mAssociatedValue") ;
            result.appendString (index_1866_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue ()) ;
            result.appendString (") ;\n  }\n") ;
            index_1866_idx.increment () ;
            enumerator_1866.gotoNextObject () ;
          }
        }
        result.appendString ("  return result ;\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_64_.increment () ;
      enumerator_64.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const enumGalgasBool test_1 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("mAssociatedValues (),\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("mEnum (kNotBuilt) {\n}\n\n") ;
  GALGAS_uint index_2429_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2429 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2429.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_2429.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_2429.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("UNUSED_LOCATION_ARGS") ;
        } break ;
      case kBoolFalse : {
        GALGAS_uint index_2791_idx (0) ;
        if (enumerator_2429.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_2791 (enumerator_2429.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_2791.hasCurrentObject ()) {
            result.appendString ("const GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2791.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue ()) ;
            result.appendString (" & inAssociatedValue") ;
            result.appendString (index_2791_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue ()) ;
            if (enumerator_2791.hasNextObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2791_idx.increment () ;
            enumerator_2791.gotoNextObject () ;
          }
        }
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS") ;
        } break ;
      default :
        break ;
      }
      result.appendString (") {\n  GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" result ;\n") ;
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_2429.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("  result.mEnum = kEnum_") ;
        result.appendString (enumerator_2429.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("  if (") ;
        GALGAS_uint index_3196_idx (0) ;
        if (enumerator_2429.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3196 (enumerator_2429.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_3196.hasCurrentObject ()) {
            result.appendString ("inAssociatedValue") ;
            result.appendString (index_3196_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue ()) ;
            result.appendString (".isValid ()") ;
            if (enumerator_3196.hasNextObject ()) {
              result.appendString (" && ") ;
            }
            index_3196_idx.increment () ;
            enumerator_3196.gotoNextObject () ;
          }
        }
        result.appendString (") {\n    result.mEnum = kEnum_") ;
        result.appendString (enumerator_2429.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue ()) ;
        result.appendString (" ;\n    cEnumAssociatedValues * ptr = nullptr ;\n    macroMyNew (ptr, cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_2429.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" (") ;
        GALGAS_uint index_3556_idx (0) ;
        if (enumerator_2429.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3556 (enumerator_2429.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_3556.hasCurrentObject ()) {
            result.appendString ("inAssociatedValue") ;
            result.appendString (index_3556_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue ()) ;
            if (enumerator_3556.hasNextObject ()) {
              result.appendString (", ") ;
            }
            index_3556_idx.increment () ;
            enumerator_3556.gotoNextObject () ;
          }
        }
        result.appendString (" COMMA_THERE)) ;\n    result.mAssociatedValues.setPointer (ptr) ;\n    macroDetachSharedObject (ptr) ;\n  }\n") ;
        } break ;
      default :
        break ;
      }
      result.appendString ("  return result ;\n}\n\n") ;
      index_2429_.increment () ;
      enumerator_2429.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3863_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3863 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3863.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_3863.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::method_") ;
        result.appendString (enumerator_3863.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4165_idx (0) ;
        if (enumerator_3863.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4165 (enumerator_3863.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_4165.hasCurrentObject ()) {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_4165.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue ()) ;
            result.appendString (" & outAssociatedValue") ;
            result.appendString (index_4165_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4165_idx.increment () ;
            enumerator_4165.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (mEnum != kEnum_") ;
        result.appendString (enumerator_3863.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue ()) ;
        result.appendString (") {\n") ;
        GALGAS_uint index_4465_idx (0) ;
        if (enumerator_3863.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4465 (enumerator_3863.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_4465.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue") ;
            result.appendString (index_4465_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue ()) ;
            result.appendString (".drop () ;\n") ;
            index_4465_idx.increment () ;
            enumerator_4465.gotoNextObject () ;
          }
        }
        result.appendString ("    String s ;\n    s.appendCString (\"method @") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" ") ;
        result.appendString (enumerator_3863.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" invoked with an invalid enum value\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_3863.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" * ptr = (const cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_3863.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" *) unsafePointer () ;\n") ;
        GALGAS_uint index_4975_idx (0) ;
        if (enumerator_3863.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4975 (enumerator_3863.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_4975.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue") ;
            result.appendString (index_4975_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue ()) ;
            result.appendString (" = ptr->mAssociatedValue") ;
            result.appendString (index_4975_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue ()) ;
            result.appendString (" ;\n") ;
            index_4975_idx.increment () ;
            enumerator_4975.gotoNextObject () ;
          }
        }
        result.appendString ("  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_3863_.increment () ;
      enumerator_3863.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5175_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5175 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5175.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::optional_") ;
      result.appendString (enumerator_5175.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 120)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_5436_idx (0) ;
      if (enumerator_5175.current_mAssociatedValueTypeList (HERE).isValid ()) {
        cEnumerator_unifiedTypeMapEntryList enumerator_5436 (enumerator_5175.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
        while (enumerator_5436.hasCurrentObject ()) {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_5436.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue ()) ;
          result.appendString (" & outAssociatedValue") ;
          result.appendString (index_5436_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue ()) ;
          if (enumerator_5436.hasNextObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_5436_idx.increment () ;
          enumerator_5436.gotoNextObject () ;
        }
      }
      result.appendString (") const {\n  const bool ok = mEnum == kEnum_") ;
      result.appendString (enumerator_5175.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 128)).stringValue ()) ;
      result.appendString (" ;\n") ;
      const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_5175.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_5) {
      case kBoolTrue : {
        result.appendString ("  if (ok) {\n    const auto * ptr = (const cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_5175.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" *) unsafePointer () ;\n") ;
        GALGAS_uint index_5910_idx (0) ;
        if (enumerator_5175.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_5910 (enumerator_5175.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_5910.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue") ;
            result.appendString (index_5910_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 133)).stringValue ()) ;
            result.appendString (" = ptr->mAssociatedValue") ;
            result.appendString (index_5910_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 133)).stringValue ()) ;
            result.appendString (" ;\n") ;
            index_5910_idx.increment () ;
            enumerator_5910.gotoNextObject () ;
          }
        }
        result.appendString ("  }\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("  return ok ;\n}\n\n") ;
      index_5175_.increment () ;
      enumerator_5175.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_CONSTANT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).stringValue ()) ;
  result.appendString ("] = {\n  \"(not built)\"") ;
  GALGAS_uint index_6369_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6369 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6369.hasCurrentObject ()) {
      result.appendString (",\n  ") ;
      result.appendString (enumerator_6369.current_mConstantName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 146)).stringValue ()) ;
      index_6369_.increment () ;
      enumerator_6369.gotoNextObject () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  GALGAS_uint index_6509_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6509 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6509.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_is") ;
      result.appendString (enumerator_6509.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return GALGAS_bool (kNotBuilt != mEnum, kEnum_") ;
      result.appendString (enumerator_6509.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue ()) ;
      result.appendString (" == mEnum) ;\n}\n\n") ;
      index_6509_.increment () ;
      enumerator_6509.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t ") ;
  const enumGalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("inIndentation") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("/* inIndentation */") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") const {\n  ioString.appendCString (\"<enum @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (": \") ;\n  ioString.appendCString (gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [mEnum]) ;\n") ;
  const enumGalgasBool test_7 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_7) {
  case kBoolTrue : {
    result.appendString ("  mAssociatedValues.description (ioString, inIndentation) ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mEnum < inOperand.mEnum) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mEnum > inOperand.mEnum) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n") ;
  const enumGalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.appendString ("      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("      result = ComparisonResult::operandEqual ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("    }\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_15274 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_15311 (temp_0.readProperty_mConstantList (), EnumerationOrder::up) ;
  bool bool_1 = var_hasAssociatedValues_15274.operator_not (SOURCE_FILE ("type-enum.galgas", 392)).isValidAndTrue () ;
  if (enumerator_15311.hasCurrentObject () && bool_1) {
    while (enumerator_15311.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_15274 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_15311.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 393)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_15311.gotoNextObject () ;
      if (enumerator_15311.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_15274.operator_not (SOURCE_FILE ("type-enum.galgas", 392)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_15467 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 395)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypeDefinition_15467.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_15467.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 398)), temp_3.readProperty_mConstantList (), var_hasAssociatedValues_15274 COMMA_SOURCE_FILE ("type-enum.galgas", 396))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_15467.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_15467.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 404)), var_selfTypeDefinition_15467.readProperty_isConcrete (), var_selfTypeDefinition_15467.readProperty_initializerMap (), var_selfTypeDefinition_15467.readProperty_classFunctionMap (), var_selfTypeDefinition_15467.readProperty_getterMap (), var_selfTypeDefinition_15467.readProperty_setterMap (), var_selfTypeDefinition_15467.readProperty_instanceMethodMap (), var_selfTypeDefinition_15467.readProperty_classMethodMap (), var_selfTypeDefinition_15467.readProperty_optionalMethodMap (), var_selfTypeDefinition_15467.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_15467.readProperty_features (), var_selfTypeDefinition_15467.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_15467.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_15467.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-enum.galgas", 402))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 402)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                               GALGAS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_16758 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16795 (temp_0.readProperty_mConstantList (), EnumerationOrder::up) ;
  bool bool_1 = var_hasAssociatedValues_16758.operator_not (SOURCE_FILE ("type-enum.galgas", 429)).isValidAndTrue () ;
  if (enumerator_16795.hasCurrentObject () && bool_1) {
    while (enumerator_16795.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_16758 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_16795.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 430)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_16795.gotoNextObject () ;
      if (enumerator_16795.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_16758.operator_not (SOURCE_FILE ("type-enum.galgas", 429)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16954 (temp_2.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_16954.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_17014 (enumerator_16954.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
    while (enumerator_17014.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_17014.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 434)) ;
      enumerator_17014.gotoNextObject () ;
    }
    enumerator_16954.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_17122 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 437)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, var_selfTypeDefinition_17122.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_17122.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 440)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_16758 COMMA_SOURCE_FILE ("type-enum.galgas", 438))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_17709 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_17746 (temp_0.readProperty_mConstantList (), EnumerationOrder::up) ;
  bool bool_1 = var_hasAssociatedValues_17709.operator_not (SOURCE_FILE ("type-enum.galgas", 454)).isValidAndTrue () ;
  if (enumerator_17746.hasCurrentObject () && bool_1) {
    while (enumerator_17746.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_17709 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_17746.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 455)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_17746.gotoNextObject () ;
      if (enumerator_17746.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_17709.operator_not (SOURCE_FILE ("type-enum.galgas", 454)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 457)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_17961 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 458)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_17961.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_17961.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 461)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_17709 COMMA_SOURCE_FILE ("type-enum.galgas", 459))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                    GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_14040 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 367)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_14040, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 368)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_externTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 374)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                              const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                              const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                              const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_15058 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_15058, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 387)) ;
  }
  GALGAS_setterMap var_setterMap_15138 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_15180 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_initializerMap var_initializerMap_15250 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  cEnumerator_externTypeConstructorList enumerator_15298 (temp_0.readProperty_externTypeInitializerList (), EnumerationOrder::up) ;
  while (enumerator_15298.hasCurrentObject ()) {
    GALGAS_functionSignature var_arguments_15448 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_15515 (enumerator_15298.current (HERE).readProperty_mParameterList (), EnumerationOrder::up) ;
    while (enumerator_15515.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_15632 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15515.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_15632, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 398)) ;
      }
      var_arguments_15448.addAssign_operation (enumerator_15515.current_mFormalSelector (HERE), var_argumentTypeEntry_15632, enumerator_15515.current_mFormalParameterName (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-extern.galgas", 399)) ;
      enumerator_15515.gotoNextObject () ;
    }
    const GALGAS_externTypeDeclarationAST temp_1 = this ;
    GALGAS_lstring var_initializerName_15772 = GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_15298.current (HERE).readProperty_mParameterList (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 402)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    var_initializerMap_15250.setter_insertKey (var_initializerName_15772, var_arguments_15448, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 403)) ;
    }
    enumerator_15298.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  cEnumerator_externTypeGetterList enumerator_16192 (temp_2.readProperty_mExternTypeGetterList (), EnumerationOrder::up) ;
  while (enumerator_16192.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_16292 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16192.current_mResultTypeName (HERE), var_returnedTypeEntry_16292, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 414)) ;
    }
    GALGAS_functionSignature var_arguments_16349 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_16416 (enumerator_16192.current_mParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_16416.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_16521 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16416.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_16521, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 418)) ;
      }
      var_arguments_16349.addAssign_operation (enumerator_16416.current_mFormalSelector (HERE), var_argumentTypeEntry_16521, enumerator_16416.current_mFormalParameterName (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-extern.galgas", 419)) ;
      enumerator_16416.gotoNextObject () ;
    }
    {
    var_getterMap_15058.setter_insertKey (enumerator_16192.current_mGetterName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-extern.galgas", 424)), var_arguments_16349, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 426)), GALGAS_bool (true), var_returnedTypeEntry_16292, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 429)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 422)) ;
    }
    enumerator_16192.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  cEnumerator_externTypeSetterList enumerator_17014 (temp_3.readProperty_mExternTypeSetterList (), EnumerationOrder::up) ;
  while (enumerator_17014.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_17105 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_formalParameterListAST enumerator_17225 (enumerator_17014.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_17225.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_17357 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17225.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_17357, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 437)) ;
      }
      var_routineSignature_17105.addAssign_operation (enumerator_17225.current_mFormalSelector (HERE), var_parameterTypeIndex_17357, enumerator_17225.current_mFormalArgumentPassingMode (HERE), enumerator_17225.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 441)) ;
      enumerator_17225.gotoNextObject () ;
    }
    {
    var_setterMap_15138.setter_insertKey (enumerator_17014.current_mSetterName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-extern.galgas", 446)), var_routineSignature_17105, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 449)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 444)) ;
    }
    enumerator_17014.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  cEnumerator_externTypeMethodList enumerator_17830 (temp_4.readProperty_mExternTypeMethodList (), EnumerationOrder::up) ;
  while (enumerator_17830.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_17895 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_formalParameterListAST enumerator_18041 (enumerator_17830.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_18041.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_18152 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18041.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_18152, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 457)) ;
      }
      var_routineSignature_17895.addAssign_operation (enumerator_18041.current_mFormalSelector (HERE), var_parameterTypeIndex_18152, enumerator_18041.current_mFormalArgumentPassingMode (HERE), enumerator_18041.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 461)) ;
      enumerator_18041.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_15180.setter_insertKey (enumerator_17830.current_mMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-extern.galgas", 466)), var_routineSignature_17895, enumerator_17830.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 470)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 464)) ;
    }
    enumerator_17830.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  const GALGAS_externTypeDeclarationAST temp_6 = this ;
  const GALGAS_externTypeDeclarationAST temp_7 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_18644 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_5.readProperty_mExternTypeName (), temp_6.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-extern.galgas", 479)), GALGAS_typeKindEnum::class_func_externType (SOURCE_FILE ("type-extern.galgas", 480)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_15250, GALGAS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_15058, var_setterMap_15138, var_instanceMethodMap_15180, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), GALGAS_typeFeatures::class_func_none (SOURCE_FILE ("type-extern.galgas", 493)), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-extern.galgas", 497)), GALGAS_string ("externtype-").add_operation (temp_7.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 498)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-extern.galgas", 499)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_18644.readProperty_typeName (), var_typeDefinition_18644, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 501)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_string /* constinArgument_inProductDirectory */,
                                                             const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_20484 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 522)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_20484, var_nameForUsefulness_20484, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 523)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 526)), GALGAS_externTypeDeclarationForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 528)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 525)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_21601 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 550)) ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21601.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 553)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("type-extern.galgas", 551))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21601.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 559)), var_selfTypeDefinition_21601.readProperty_isConcrete (), var_selfTypeDefinition_21601.readProperty_initializerMap (), var_selfTypeDefinition_21601.readProperty_classFunctionMap (), var_selfTypeDefinition_21601.readProperty_getterMap (), var_selfTypeDefinition_21601.readProperty_setterMap (), var_selfTypeDefinition_21601.readProperty_instanceMethodMap (), var_selfTypeDefinition_21601.readProperty_classMethodMap (), var_selfTypeDefinition_21601.readProperty_optionalMethodMap (), var_selfTypeDefinition_21601.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_21601.readProperty_features (), var_selfTypeDefinition_21601.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_21601.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_21601.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-extern.galgas", 557))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 557)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4736 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 119)), temp_1.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4736, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 120)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4736, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 121)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-graph.galgas", 121)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                         const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeEntry_5808 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeEntry_5808, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 136)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeEntry_5932 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_5932, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 141)) ;
  }
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_6055 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_6055, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 146)) ;
  }
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_6195 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_6195, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 151)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringListTypeEntry_6336 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_6336, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 156)) ;
  }
  GALGAS_getterMap var_getterMap_6424 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6424, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 161)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_6460 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_setterMap var_setterMap_6499 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6539 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterSignature var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 168)), var_associatedListTypeEntry_6195, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 170)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 167)) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 173)), var_lstringListTypeEntry_6336, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 175)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 172)) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 178)), var_associatedListTypeEntry_6195, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 177)) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 183)), var_lstringListTypeEntry_6336, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 185)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 182)) ;
  {
  var_instanceMethodMap_6539.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("topologicalSort"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 188)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 189)), var_formalParameterList_6628, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 191)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 193)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 187)) ;
  }
  {
  var_instanceMethodMap_6539.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 197)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 198)), var_formalParameterList_6628, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 200)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 202)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 196)) ;
  }
  var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 209)), var_associatedListTypeEntry_6195, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 211)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 208)) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 214)), var_lstringListTypeEntry_6336, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 216)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 213)) ;
  {
  var_instanceMethodMap_6539.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("circularities"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 219)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 220)), var_formalParameterList_6628, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 222)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 224)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 218)) ;
  }
  {
  var_instanceMethodMap_6539.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 228)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 229)), var_formalParameterList_6628, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 231)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 233)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 227)) ;
  }
  {
  var_instanceMethodMap_6539.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 237)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 238)), var_formalParameterList_6628, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 240)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 242)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 236)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("nodeList"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 247)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("reversedGraph"), GALGAS_string::makeEmptyString (), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 256)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 265)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 274)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 283)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("graphviz"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 292)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 301)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 311)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 321)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("lkeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 330)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("edges"), GALGAS_string::makeEmptyString (), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 339)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 348)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 362)) ;
  }
  {
  var_classFunctionMap_6460.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("emptyGraph"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 373)), inCompiler COMMA_HERE), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_graphTypeEntry_6055, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 372)) ;
  }
  var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 381)), var_lstringTypeEntry_5932, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 383)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 380)) ;
  cEnumerator_functionSignature enumerator_13009 (extensionGetter_definition (var_associatedListTypeEntry_6195, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 385)).readProperty_addAssignOperatorArguments (), EnumerationOrder::up) ;
  while (enumerator_13009.hasCurrentObject ()) {
    var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 387)), enumerator_13009.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 389)), enumerator_13009.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 386)) ;
    enumerator_13009.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_5 = this ;
  cEnumerator_graphInsertModifierList enumerator_13283 (temp_5.readProperty_mInsertModifierList (), EnumerationOrder::up) ;
  while (enumerator_13283.hasCurrentObject ()) {
    {
    var_setterMap_6499.setter_insertOrReplace (enumerator_13283.current_mInsertModifierName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 396)), var_formalParameterList_6628, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 399)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 394)) ;
    }
    enumerator_13283.gotoNextObject () ;
  }
  {
  var_setterMap_6499.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 406)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 407)), GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 410)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 405)) ;
  }
  var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 415)), var_stringTypeEntry_5808, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 415)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 415)) ;
  {
  var_setterMap_6499.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeEdgesToNode"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 417)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 418)), var_formalParameterList_6628, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 421)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 416)) ;
  }
  var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 427)), var_lstringTypeEntry_5932, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 427)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 427)) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 428)), var_lstringTypeEntry_5932, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 428)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 428)) ;
  {
  var_setterMap_6499.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("addEdge"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 430)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 431)), var_formalParameterList_6628, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 434)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 429)) ;
  }
  var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 440)), var_lstringTypeEntry_5932, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 440)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 440)) ;
  {
  var_setterMap_6499.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("noteNode"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 442)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 443)), var_formalParameterList_6628, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 446)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 441)) ;
  }
  GALGAS_initializerMap var_initializerMap_15338 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_15383 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_graphDeclarationAST temp_6 = this ;
  var_initializerMap_15338.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_15383, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 453)), temp_6.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_15383, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_mGraphTypeName (), GALGAS_bool (false), var_initializerMap_15338, var_getterMap_6424, var_setterMap_6499, var_instanceMethodMap_6539, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 457)) ;
  }
  const GALGAS_graphDeclarationAST temp_8 = this ;
  const GALGAS_graphDeclarationAST temp_9 = this ;
  const GALGAS_graphDeclarationAST temp_10 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_16013 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_8.readProperty_mGraphTypeName (), temp_9.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-graph.galgas", 477)), GALGAS_typeKindEnum::class_func_graphType (SOURCE_FILE ("type-graph.galgas", 478)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_15338, var_classFunctionMap_6460, var_getterMap_6424, var_setterMap_6499, var_instanceMethodMap_6539, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 491)), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-graph.galgas", 495)), GALGAS_string ("graph-").add_operation (temp_10.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-graph.galgas", 497)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_16013.readProperty_typeName (), var_typeDefinition_16013, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 499)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_17773 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 516)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17773, var_nameForUsefulness_17773, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 517)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_17927 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 518)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17773, var_associatedTypeNameForUsefulness_17927 COMMA_SOURCE_FILE ("type-graph.galgas", 519)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_18123 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 521)) ;
  const GALGAS_graphDeclarationAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_18199 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 522)) ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  const GALGAS_graphDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListElementTypeEntry_18293 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_4.readProperty_mAssociatedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 524)), temp_5.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 523)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_associatedListTypeEntry_18199, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 526)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("type-graph.galgas", 526)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = this ;
      const GALGAS_graphDeclarationAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_8.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 527)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 527)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 527)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 530)) ;
  temp_10.enterElement (GALGAS_string ("noteNode"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 530)) ;
  temp_10.enterElement (GALGAS_string ("addArc"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 530)) ;
  GALGAS_stringset var_reservedModifierNames_18707 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = this ;
  cEnumerator_graphInsertModifierList enumerator_18782 (temp_11.readProperty_mInsertModifierList (), EnumerationOrder::up) ;
  while (enumerator_18782.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_18707.getter_hasKey (enumerator_18782.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-graph.galgas", 532)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_18782.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_18782.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 533)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 533)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 533)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_18782.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 535)) ;
    }
    enumerator_18782.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = this ;
  const GALGAS_graphDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 539)), GALGAS_graphDeclarationForGeneration::init_21__21__21__21_ (var_graphTypeEntry_18123, var_associatedListTypeEntry_18199, var_associatedListElementTypeEntry_18293, temp_15.readProperty_mInsertModifierList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 538)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_20061 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 563)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypeDefinition_20061.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 566)) COMMA_SOURCE_FILE ("type-graph.galgas", 564))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_20061.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 570)), var_selfTypeDefinition_20061.readProperty_isConcrete (), var_selfTypeDefinition_20061.readProperty_initializerMap (), var_selfTypeDefinition_20061.readProperty_classFunctionMap (), var_selfTypeDefinition_20061.readProperty_getterMap (), var_selfTypeDefinition_20061.readProperty_setterMap (), var_selfTypeDefinition_20061.readProperty_instanceMethodMap (), var_selfTypeDefinition_20061.readProperty_classMethodMap (), var_selfTypeDefinition_20061.readProperty_optionalMethodMap (), var_selfTypeDefinition_20061.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20061.readProperty_features (), var_selfTypeDefinition_20061.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_20061.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20061.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-graph.galgas", 568))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 568)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 593)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 594)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 595)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = this ;
  const GALGAS_graphDeclarationForGeneration temp_4 = this ;
  const GALGAS_graphDeclarationForGeneration temp_5 = this ;
  const GALGAS_graphDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 598)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("type-graph.galgas", 596))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  const GALGAS_listDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4746 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 122)), temp_1.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4746, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 123)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4900 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_4900.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_4900.current_propertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 125)), enumerator_4900.current_propertyTypeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-list.galgas", 125)) ;
    }
    enumerator_4900.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedPropertyList var_typedAttributeList_5800 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5897 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_5897.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_5897.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 144)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5897.current_propertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 145)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_6112 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5897.current_propertyTypeName (HERE), var_attributeTypeIndex_6112, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 147)) ;
    }
    var_typedAttributeList_5800.addAssign_operation (var_attributeTypeIndex_6112, enumerator_5897.current_propertyName (HERE), enumerator_5897.current_initialization (HERE), GALGAS_bool (true), enumerator_5897.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 148)) ;
    enumerator_5897.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_uintType_6327 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("uint"), var_uintType_6327, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 151)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_6409 ;
  {
  const GALGAS_listDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mListTypeName (), var_listTypeIndex_6409, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 153)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_6602 ;
  {
  const GALGAS_listDeclarationAST temp_4 = this ;
  const GALGAS_listDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_4.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 156)), temp_5.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_listElementTypeIndex_6602, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 155)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6686 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_6738 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_6804 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_6872 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  cEnumerator_typedPropertyList enumerator_6951 (var_typedAttributeList_5800, EnumerationOrder::up) ;
  while (enumerator_6951.hasCurrentObject ()) {
    GALGAS_string temp_6 ;
    const enumGalgasBool test_7 = enumerator_6951.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_7) {
      temp_6 = enumerator_6951.current_name (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_7) {
      temp_6 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_6998 = temp_6 ;
    var_enumerationDescriptor_6686.addAssign_operation (enumerator_6951.current_typeEntry (HERE), enumerator_6951.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 166)) ;
    var_constructorAttributeTypeList_6738.addAssign_operation (var_selector_6998.getter_nowhere (SOURCE_FILE ("type-list.galgas", 168)), enumerator_6951.current_typeEntry (HERE), enumerator_6951.current_name (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-list.galgas", 167)) ;
    var_setterOutputFormalArgumentList_6804.addAssign_operation (var_selector_6998.getter_nowhere (SOURCE_FILE ("type-list.galgas", 173)), enumerator_6951.current_typeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-list.galgas", 175)), enumerator_6951.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 172)) ;
    var_setterInputFormalArgumentList_6872.addAssign_operation (var_selector_6998.getter_nowhere (SOURCE_FILE ("type-list.galgas", 178)), enumerator_6951.current_typeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 180)), enumerator_6951.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 177)) ;
    enumerator_6951.gotoNextObject () ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_7595 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_listDeclarationAST temp_8 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_7595, ioArgument_ioTypeMap, GALGAS_string ("emptyList"), temp_8.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 185)) ;
  }
  {
  var_classFunctionMap_7595.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("listWithValue"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 193)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_6738, GALGAS_bool (false), var_listTypeIndex_6409, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 192)) ;
  }
  GALGAS_getterMap var_getterMap_8011 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8011, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 199)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8011, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 200)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8011, ioArgument_ioTypeMap, GALGAS_string ("range"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 208)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_9 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8011, ioArgument_ioTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_9.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 216)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_10 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8011, ioArgument_ioTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_10.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 224)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_11 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8011, ioArgument_ioTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_11.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 232)) ;
  }
  cEnumerator_typedPropertyList enumerator_9154 (var_typedAttributeList_5800, EnumerationOrder::up) ;
  while (enumerator_9154.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_12 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 244)) ;
    temp_12.enterElement (GALGAS_functionSignature_2D_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 244)), var_uintType_6327, GALGAS_string ("inIndex"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 244)) ;
    var_getterMap_8011.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (enumerator_9154.current_name (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 242)), enumerator_9154.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 243)), temp_12, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 245)), GALGAS_bool (true), enumerator_9154.current_typeEntry (HERE), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 248)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 241)) ;
    }
    enumerator_9154.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_9639 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_9639.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("first"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 255)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 256)), var_setterOutputFormalArgumentList_6804, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 258)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 260)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 254)) ;
  }
  {
  var_instanceMethodMap_9639.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("last"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 264)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 265)), var_setterOutputFormalArgumentList_6804, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 267)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 269)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 263)) ;
  }
  GALGAS_setterMap var_setterMap_10161 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_10161.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("append"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 275)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 276)), var_setterInputFormalArgumentList_6872, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 279)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 274)) ;
  }
  {
  var_setterMap_10161.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("popFirst"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 283)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 284)), var_setterOutputFormalArgumentList_6804, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 287)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 282)) ;
  }
  {
  var_setterMap_10161.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("popLast"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 291)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 292)), var_setterOutputFormalArgumentList_6804, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 295)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 290)) ;
  }
  var_setterOutputFormalArgumentList_6804.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 298)), var_uintType_6327, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 298)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 298)) ;
  {
  var_setterMap_10161.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeAtIndex"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 300)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 301)), var_setterOutputFormalArgumentList_6804, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 304)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 299)) ;
  }
  cEnumerator_typedPropertyList enumerator_11230 (var_typedAttributeList_5800, EnumerationOrder::up) ;
  while (enumerator_11230.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = enumerator_11230.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_11291 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        var_setterFormalArgumentList_11291.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 310)), enumerator_11230.current_typeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 310)), enumerator_11230.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 310)) ;
        var_setterFormalArgumentList_11291.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 311)), var_uintType_6327, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 311)), enumerator_11230.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 311)) ;
        {
        var_setterMap_10161.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("set").add_operation (enumerator_11230.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 313)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 313)), enumerator_11230.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 314)), var_setterFormalArgumentList_11291, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 317)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 312)) ;
        }
      }
    }
    enumerator_11230.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_6872.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 323)), var_uintType_6327, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 323)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 323)) ;
  {
  var_setterMap_10161.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insertAtIndex"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 325)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 326)), var_setterInputFormalArgumentList_6872, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 329)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 324)) ;
  }
  GALGAS_initializerMap var_initializerMap_12383 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_12428 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_listDeclarationAST temp_14 = this ;
  var_initializerMap_12383.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_12428, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 336)), temp_14.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_12428, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 335)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_15 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_15.readProperty_mListTypeName (), GALGAS_bool (false), var_initializerMap_12383, var_getterMap_8011, var_setterMap_10161, var_instanceMethodMap_9639, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 340)) ;
  }
  const GALGAS_listDeclarationAST temp_16 = this ;
  const GALGAS_listDeclarationAST temp_17 = this ;
  const GALGAS_listDeclarationAST temp_18 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_13021 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_16.readProperty_mListTypeName (), temp_17.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-list.galgas", 360)), GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("type-list.galgas", 361)), GALGAS_bool (true), var_typedAttributeList_5800, GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_12383, var_classFunctionMap_7595, var_getterMap_8011, var_setterMap_10161, var_instanceMethodMap_9639, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_6686, GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 374)).operator_or (GALGAS_typeFeatures::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 374)) COMMA_SOURCE_FILE ("type-list.galgas", 374)).operator_or (GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("type-list.galgas", 374)) COMMA_SOURCE_FILE ("type-list.galgas", 374)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("type-list.galgas", 374)) COMMA_SOURCE_FILE ("type-list.galgas", 374)), var_constructorAttributeTypeList_6738, GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_listElementTypeIndex_6602, GALGAS_string ("list-").add_operation (temp_18.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 379)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-list.galgas", 380)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_13021.readProperty_typeName (), var_typeDefinition_13021, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 382)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_14405 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_14493 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_14493.hasCurrentObject ()) {
    var_structAttributeList_14405.addAssign_operation (enumerator_14493.current_isConstant (HERE), enumerator_14493.current_propertyTypeName (HERE), enumerator_14493.current_propertyName (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-list.galgas", 396)), enumerator_14493.current_hasSelector (HERE), enumerator_14493.current_initialization (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 392)) ;
    enumerator_14493.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_ (temp_1.readProperty_isPredefined (), GALGAS_lstring::init_21__21_ (temp_2.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 402)), temp_3.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_structAttributeList_14405, GALGAS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 400)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_15649 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 423)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15649, var_nameForUsefulness_15649, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 424)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_15802 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_1.readProperty_mListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 425)), temp_2.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 425)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15649, var_elementTypeNameForUsefulness_15802 COMMA_SOURCE_FILE ("type-list.galgas", 426)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_listDeclarationAST temp_4 = this ;
    test_3 = temp_4.readProperty_usefullList ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_15649  COMMA_SOURCE_FILE ("type-list.galgas", 428)) ;
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_16133 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_16181 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_listDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_16271 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_16271.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = enumerator_16271.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 434)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_16271.current_propertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 435)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_16443 = function_typeNameForUsefulEntitiesGraph (enumerator_16271.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 437)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15649, var_propertyTypeNameForUsefulness_16443 COMMA_SOURCE_FILE ("type-list.galgas", 438)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_16622 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16271.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 439)) ;
    var_typedAttributeList_16133.addAssign_operation (var_t_16622, enumerator_16271.current_propertyName (HERE), enumerator_16271.current_initialization (HERE), GALGAS_bool (true), enumerator_16271.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 440)) ;
    {
    var_attributeMap_16181.setter_insertKey (enumerator_16271.current_propertyName (HERE), var_t_16622, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 446)) ;
    }
    enumerator_16271.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_16890 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 449)) ;
  const GALGAS_listDeclarationAST temp_9 = this ;
  const GALGAS_listDeclarationAST temp_10 = this ;
  const GALGAS_listDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_9.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 451)), GALGAS_listTypeForGeneration::init_21__21__21_ (var_selfType_16890, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_10.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 454)), temp_11.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 454)), var_typedAttributeList_16133, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 450)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'listGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_listGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_listGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_listGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_listGenerationTemplate_0,
  0,
  gWrapperAllDirectories_listGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_list {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- List constructor used by listmap\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const capCollectionElementArray & inSharedArray) ;\n\n//--------------------------------- Element constructor\n  public: static void makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("capCollectionElement & outAttributes") ;
  GALGAS_uint index_781_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_781 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_781.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_781.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_781.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue ()) ;
      index_781_.increment () ;
      enumerator_781.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                         const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cCollectionElement {\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element mObject ;\n\n//--- Class functions\n  public: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_540_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_540 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_540.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_540.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_540.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue ()) ;
      if (enumerator_540.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_540_.increment () ;
      enumerator_540.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n  public: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) ;\n\n//--- Description\n  public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1555_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1555 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1555.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1555.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1555.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue ()) ;
      if (enumerator_1555.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1555_.increment () ;
      enumerator_1555.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GALGAS_uint index_1807_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1807 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1807.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1807.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue ()) ;
      if (enumerator_1807.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_1807_.increment () ;
      enumerator_1807.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GALGAS_uint index_2221_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2221 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2221.hasCurrentObject ()) {
      result.appendString ("inElement.mProperty_") ;
      result.appendString (enumerator_2221.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue ()) ;
      if (enumerator_2221.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2221_.increment () ;
      enumerator_2221.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return true ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement * cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cCollectionElement * result = nullptr ;\n  macroMyNew (result, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_2851_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2851 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2851.hasCurrentObject ()) {
      result.appendString ("mObject.mProperty_") ;
      result.appendString (enumerator_2851.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue ()) ;
      if (enumerator_2851.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2851_.increment () ;
      enumerator_2851.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
  GALGAS_uint index_3259_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3259 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3259.hasCurrentObject ()) {
      result.appendString ("  ioString.appendNewLine () ;\n  ioString.appendStringMultiple (\"| \", inIndentation) ;\n  ioString.appendCString (") ;
      result.appendString (enumerator_3259.current_name (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" \":\") ;\n  mObject.mProperty_") ;
      result.appendString (enumerator_3259.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation) ;\n") ;
      index_3259_.increment () ;
      enumerator_3259.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::compare (const cCollectionElement * inOperand) const {\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * operand = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inOperand ;\n  macroValidSharedObject (operand, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_list () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const capCollectionElementArray & inSharedArray) :\nAC_GALGAS_list (inSharedArray) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (capCollectionElementArray ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (capCollectionElementArray ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterElement (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement * p = nullptr ;\n  macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inValue COMMA_THERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  appendObject (attributes) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_listWithValue (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5781_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5781 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5781.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5781.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 143)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_5781_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 143)).stringValue ()) ;
      if (enumerator_5781.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5781_IDX.increment () ;
      enumerator_5781.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (") ;
  GALGAS_uint index_6041_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6041 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6041.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_6041_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 150)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      if (enumerator_6041.hasNextObject ()) {
        result.appendString (" && ") ;
      }
      index_6041_IDX.increment () ;
      enumerator_6041.gotoNextObject () ;
    }
  }
  result.appendString (") {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (capCollectionElementArray ()) ;\n    capCollectionElement attributes ;\n    GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (attributes") ;
  GALGAS_uint index_6364_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6364 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6364.hasCurrentObject ()) {
      result.appendString (", inOperand") ;
      result.appendString (index_6364_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue ()) ;
      index_6364_IDX.increment () ;
      enumerator_6364.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE) ;\n    result.appendObject (attributes) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("capCollectionElement & outAttributes") ;
  GALGAS_uint index_6756_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6756 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6756.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6756.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_6756.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue ()) ;
      index_6756_.increment () ;
      enumerator_6756.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7092_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7092 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7092.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_7092.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 177)).stringValue ()) ;
      if (enumerator_7092.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7092_.increment () ;
      enumerator_7092.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n  outAttributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7480_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7480 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7480.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7480.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 189)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_7480_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 189)).stringValue ()) ;
      if (enumerator_7480.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7480_IDX.increment () ;
      enumerator_7480.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_7818_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7818 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7818.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7818_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 197)).stringValue ()) ;
      if (enumerator_7818.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7818_IDX.increment () ;
      enumerator_7818.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8257_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8257 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8257.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8257.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 212)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_8257_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 212)).stringValue ()) ;
      result.appendString (",") ;
      if (enumerator_8257.hasNextObject ()) {
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_8257_IDX.increment () ;
      enumerator_8257.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_8633_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8633 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8633.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_8633_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue ()) ;
      if (enumerator_8633.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_8633_IDX.increment () ;
      enumerator_8633.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insertAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9077_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9077 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9077.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9077.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 236)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_9077_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 236)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9077_IDX.increment () ;
      enumerator_9077.gotoNextObject () ;
    }
  }
  result.appendString ("const GALGAS_uint inInsertionIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inInsertionIndex.isValid ()") ;
  GALGAS_uint index_9411_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9411 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9411.hasCurrentObject ()) {
      result.appendString (" && inOperand") ;
      result.appendString (index_9411_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 244)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      index_9411_IDX.increment () ;
      enumerator_9411.gotoNextObject () ;
    }
  }
  result.appendString (") {\n      cCollectionElement * p = nullptr ;\n      macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_9648_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9648 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9648.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_9648_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 250)).stringValue ()) ;
      if (enumerator_9648.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_9648_IDX.increment () ;
      enumerator_9648.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n      capCollectionElement attributes ;\n      attributes.setPointer (p) ;\n      macroDetachSharedObject (p) ;\n      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n    }else{\n      drop () ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10201_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10201 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10201.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10201.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 268)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_10201_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 268)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10201_IDX.increment () ;
      enumerator_10201.gotoNextObject () ;
    }
  }
  result.appendString ("const GALGAS_uint inRemoveIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inRemoveIndex.isValid ()) {\n      capCollectionElement attributes ;\n      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n      cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n      if (nullptr == p) {\n") ;
  GALGAS_uint index_10798_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10798 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10798.hasCurrentObject ()) {
      result.appendString ("        outOperand") ;
      result.appendString (index_10798_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 281)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_10798_IDX.increment () ;
      enumerator_10798.gotoNextObject () ;
    }
  }
  result.appendString ("        drop () ;\n      }else{\n        macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_11035_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11035 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11035.hasCurrentObject ()) {
      result.appendString ("        outOperand") ;
      result.appendString (index_11035_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 288)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_11035.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 288)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_11035_IDX.increment () ;
      enumerator_11035.gotoNextObject () ;
    }
  }
  result.appendString ("      }\n    }else{\n") ;
  GALGAS_uint index_11242_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11242 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11242.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_11242_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 294)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_11242_IDX.increment () ;
      enumerator_11242.gotoNextObject () ;
    }
  }
  result.appendString ("      drop () ;    \n    }\n  }else{\n") ;
  GALGAS_uint index_11405_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11405 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11405.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11405_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 301)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_11405_IDX.increment () ;
      enumerator_11405.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popFirst (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11694_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11694 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11694.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11694.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_11694_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11694_IDX.increment () ;
      enumerator_11694.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_12140_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12140 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12140.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12140_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_12140_IDX.increment () ;
      enumerator_12140.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_12347_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12347 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12347.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12347_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 326)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_12347.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 326)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_12347_IDX.increment () ;
      enumerator_12347.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popLast (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12693_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12693 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12693.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_12693.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 335)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_12693_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 335)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12693_IDX.increment () ;
      enumerator_12693.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_13138_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13138 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13138.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13138_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_13138_IDX.increment () ;
      enumerator_13138.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_13345_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13345 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13345.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13345_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 351)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_13345.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 351)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_13345_IDX.increment () ;
      enumerator_13345.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_first (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13689_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13689 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13689.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_13689.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_13689_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13689_IDX.increment () ;
      enumerator_13689.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readFirst (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_14133_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14133 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14133.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_14133_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_14133_IDX.increment () ;
      enumerator_14133.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_14340_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14340 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14340.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_14340_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 376)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_14340.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 376)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_14340_IDX.increment () ;
      enumerator_14340.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_last (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14683_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14683 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14683.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_14683.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 385)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_14683_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 385)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_14683_IDX.increment () ;
      enumerator_14683.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readLast (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_15126_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15126 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_15126.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_15126_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 395)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_15126_IDX.increment () ;
      enumerator_15126.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_15333_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15333 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_15333.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_15333_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 401)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_15333.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 401)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_15333_IDX.increment () ;
      enumerator_15333.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.appendList (inOperand) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListWithRange (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_range & inRange,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (THERE) ;\n  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListFromIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_uint & inIndex,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (THERE) ;\n  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListToIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_uint & inIndex,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (THERE) ;\n  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  appendList (inOperand) ;\n}\n\n") ;
  GALGAS_uint index_18059_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18059 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_18059.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_18059.current_hasSetter (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_18059.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 461)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 461)).stringValue ()) ;
        result.appendString ("AtIndex (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_18059.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 461)).stringValue ()) ;
        result.appendString (" inOperand,\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("GALGAS_uint inIndex,\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cCollectionElement_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cCollectionElement_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    macroUniqueSharedObject (p) ;\n    p->mObject.mProperty_") ;
        result.appendString (enumerator_18059.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 469)).stringValue ()) ;
        result.appendString (" = inOperand ;\n  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_18059.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 475)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_18059.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 475)).stringValue ()) ;
      result.appendString ("AtIndex (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GALGAS_uint & inIndex,\n                                              ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                                              ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) attributes.ptr () ;\n  GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_18059.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 480)).stringValue ()) ;
      result.appendString (" result ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    result = p->mObject.mProperty_") ;
      result.appendString (enumerator_18059.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 483)).stringValue ()) ;
      result.appendString (" ;\n  }\n  return result ;\n}\n\n") ;
      index_18059_IDX.increment () ;
      enumerator_18059.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject,\n                   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const EnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return p->mObject ;\n}\n\n\n") ;
  GALGAS_uint index_20912_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20912 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_20912.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_20912.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 509)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_20912.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 509)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mObject.mProperty_") ;
      result.appendString (enumerator_20912.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 512)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_20912_IDX.increment () ;
      enumerator_20912.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_18467 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 491)) ;
  const GALGAS_listTypeForGeneration temp_1 = this ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypeDefinition_18467.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 494)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-list.galgas", 492))) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_18467.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 499)), var_selfTypeDefinition_18467.readProperty_isConcrete (), var_selfTypeDefinition_18467.readProperty_initializerMap (), var_selfTypeDefinition_18467.readProperty_classFunctionMap (), var_selfTypeDefinition_18467.readProperty_getterMap (), var_selfTypeDefinition_18467.readProperty_setterMap (), var_selfTypeDefinition_18467.readProperty_instanceMethodMap (), var_selfTypeDefinition_18467.readProperty_classMethodMap (), var_selfTypeDefinition_18467.readProperty_optionalMethodMap (), var_selfTypeDefinition_18467.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_18467.readProperty_features (), var_selfTypeDefinition_18467.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_18467.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_18467.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-list.galgas", 497))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 497)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_19838 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_19838.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19838.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 523)) ;
    enumerator_19838.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 525)) ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 526)) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_20052 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 527)) ;
  const GALGAS_listTypeForGeneration temp_4 = this ;
  const GALGAS_listTypeForGeneration temp_5 = this ;
  const GALGAS_listTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_20052.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 530)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (extensionGetter_definition (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 532)).readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 532)) COMMA_SOURCE_FILE ("type-list.galgas", 528))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_3403 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_structAttributeList_3403.addAssign_operation (GALGAS_bool (false), GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 84)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 85)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-listmap.galgas", 86)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-listmap.galgas", 88))  COMMA_SOURCE_FILE ("type-listmap.galgas", 82)) ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  var_structAttributeList_3403.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mAssociatedListTypeName (), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 92)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-listmap.galgas", 93)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-listmap.galgas", 95))  COMMA_SOURCE_FILE ("type-listmap.galgas", 89)) ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_ (temp_1.readProperty_isPredefined (), GALGAS_lstring::init_21__21_ (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 99)), temp_3.readProperty_mListmapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_structAttributeList_3403, GALGAS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 97)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4819 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 116)), temp_1.readProperty_mListmapTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4819, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 117)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4819, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 118)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-listmap.galgas", 118)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                           const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_5847 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_0.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 133)) ;
  GALGAS_typedPropertyList var_listTypedAttributeList_5956 = var_associatedTypeDefinition_5847.readProperty_allTypedPropertyList () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_associatedTypeDefinition_5847.readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("type-listmap.galgas", 135)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = this ;
      const GALGAS_listmapDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 136)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 136)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 136)) ;
      var_listTypedAttributeList_5956 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
    }
  }
  GALGAS_classFunctionMap var_classFunctionMap_6297 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_getterMap var_getterMap_6376 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6376, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 141)) ;
  }
  GALGAS_setterMap var_setterMap_6405 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6445 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeIndex_6560 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mAssociatedListTypeName (), var_associatedListTypeIndex_6560, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 145)) ;
  }
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_6663 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_6663, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 147)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6376, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 149)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6376, ioArgument_ioTypeMap, GALGAS_string ("allKeys"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 157)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6376, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 165)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6376, ioArgument_ioTypeMap, GALGAS_string ("listForKey"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 173)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_6297, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_7.readProperty_mListmapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 182)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_7729 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  var_enumeratorDescriptor_7729.addAssign_operation (var_stringTypeIndex_6663, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 191)) ;
  var_enumeratorDescriptor_7729.addAssign_operation (var_associatedListTypeIndex_6560, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 192)) ;
  GALGAS_formalParameterSignature var_insertSetterFormalArgumentList_7976 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_insertSetterFormalArgumentList_7976.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 196)), var_stringTypeIndex_6663, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-listmap.galgas", 198)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 195)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_8131 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_addAssignOperatorDescription_8131.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 201)), var_stringTypeIndex_6663, GALGAS_string ("inKey"), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-listmap.galgas", 201)) ;
  cEnumerator_typedPropertyList enumerator_8305 (var_listTypedAttributeList_5956, EnumerationOrder::up) ;
  while (enumerator_8305.hasCurrentObject ()) {
    var_addAssignOperatorDescription_8131.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 203)), enumerator_8305.current_typeEntry (HERE), enumerator_8305.current_name (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-listmap.galgas", 203)) ;
    var_insertSetterFormalArgumentList_7976.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 205)), enumerator_8305.current_typeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-listmap.galgas", 207)), enumerator_8305.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 204)) ;
    enumerator_8305.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  var_setterMap_6405.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insert"), temp_8.readProperty_mListmapTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-listmap.galgas", 212)), var_insertSetterFormalArgumentList_7976, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-listmap.galgas", 215)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-listmap.galgas", 210)) ;
  }
  GALGAS_initializerMap var_initializerMap_8846 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_8891 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  var_initializerMap_8846.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_8891, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 222)), temp_9.readProperty_mListmapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_8891, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 221)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_10.readProperty_mListmapTypeName (), GALGAS_bool (false), var_initializerMap_8846, var_getterMap_6376, var_setterMap_6405, var_instanceMethodMap_6445, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 226)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_9645 ;
  {
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_11.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 243)), temp_12.readProperty_mListmapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_listElementTypeIndex_9645, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 242)) ;
  }
  const GALGAS_listmapDeclarationAST temp_13 = this ;
  const GALGAS_listmapDeclarationAST temp_14 = this ;
  const GALGAS_listmapDeclarationAST temp_15 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_9704 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_mListmapTypeName (), temp_14.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-listmap.galgas", 251)), GALGAS_typeKindEnum::class_func_listMapType (SOURCE_FILE ("type-listmap.galgas", 252)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), var_listTypedAttributeList_5956, var_initializerMap_8846, var_classFunctionMap_6297, var_getterMap_6376, var_setterMap_6405, var_instanceMethodMap_6445, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE), var_enumeratorDescriptor_7729, GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 265)), var_addAssignOperatorDescription_8131, GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_listElementTypeIndex_9645, GALGAS_string ("listmap-").add_operation (temp_15.readProperty_mListmapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 270)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-listmap.galgas", 271)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_9704.readProperty_typeName (), var_typeDefinition_9704, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                          const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_11465 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 290)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11465, var_nameForUsefulness_11465, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 291)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_11621 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 292)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11465, var_associatedTypeNameForUsefulness_11621 COMMA_SOURCE_FILE ("type-listmap.galgas", 293)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_11812 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 294)), temp_3.readProperty_mListmapTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 294)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11465, var_elementTypeNameForUsefulness_11812 COMMA_SOURCE_FILE ("type-listmap.galgas", 295)) ;
  }
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_12087 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 297)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::notEqual, var_associatedTypeDefinition_12087.readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("type-listmap.galgas", 299)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 300)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 304)), GALGAS_listmapTypeForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 306)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 307)), var_associatedTypeDefinition_12087.readProperty_allTypedPropertyList (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_11.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 309)), temp_12.readProperty_mListmapTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 309)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 303)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_13498 (temp_0.readProperty_mAssociatedListTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_13498.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_13498.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 329)) ;
    enumerator_13498.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_13602 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 331)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, var_selfTypeDefinition_13602.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 334)) COMMA_SOURCE_FILE ("type-listmap.galgas", 332))) ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_13602.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 338)), var_selfTypeDefinition_13602.readProperty_isConcrete (), var_selfTypeDefinition_13602.readProperty_initializerMap (), var_selfTypeDefinition_13602.readProperty_classFunctionMap (), var_selfTypeDefinition_13602.readProperty_getterMap (), var_selfTypeDefinition_13602.readProperty_setterMap (), var_selfTypeDefinition_13602.readProperty_instanceMethodMap (), var_selfTypeDefinition_13602.readProperty_classMethodMap (), var_selfTypeDefinition_13602.readProperty_optionalMethodMap (), var_selfTypeDefinition_13602.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_13602.readProperty_features (), var_selfTypeDefinition_13602.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_13602.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_13602.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-listmap.galgas", 336))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 336)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 361)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListMapElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 362)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  const GALGAS_listmapTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 364)), extensionGetter_identifierRepresentation (temp_3.readProperty_mAssociatedListTypeIndex (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 365)), temp_4.readProperty_mAssociatedListTypedAttributeList () COMMA_SOURCE_FILE ("type-listmap.galgas", 363))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dictDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_dictDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_dictDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_4277 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GALGAS_dictDeclarationAST temp_0 = this ;
  var_structAttributeList_4277.addAssign_operation (GALGAS_bool (true), temp_0.readProperty_mKeyTypeName (), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 115)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-dict.galgas", 116)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-dict.galgas", 118))  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4517 (temp_1.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_4517.hasCurrentObject ()) {
    var_structAttributeList_4277.addAssign_operation (GALGAS_bool (true), enumerator_4517.current_propertyTypeName (HERE), enumerator_4517.current_propertyName (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-dict.galgas", 124)), enumerator_4517.current_hasSelector (HERE), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-dict.galgas", 126))  COMMA_SOURCE_FILE ("type-dict.galgas", 120)) ;
    enumerator_4517.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = this ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_ (temp_2.readProperty_isPredefined (), GALGAS_lstring::init_21__21_ (temp_3.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 130)), temp_4.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_structAttributeList_4277, GALGAS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 128)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  GALGAS_lstring var_dictionary_5737 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 148)), temp_1.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_5737, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 149)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 150)), temp_4.readProperty_mKeyTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-dict.galgas", 150)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5998 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_5998.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_5998.current_propertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 152)), enumerator_5998.current_propertyTypeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-dict.galgas", 152)) ;
    }
    enumerator_5998.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_keyTypeIndex_6912 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_6912, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 168)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6961 = GALGAS_enumerationDescriptorList::class_func_listWithValue (var_keyTypeIndex_6912, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 170)) ;
  GALGAS_classFunctionMap var_classFunctionMap_7078 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_getterMap var_getterMap_7158 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7158, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 173)) ;
  }
  GALGAS_setterMap var_setterMap_7187 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7227 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_dictDeclarationAST temp_1 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_7078, ioArgument_ioTypeMap, GALGAS_string ("emptyDict"), temp_1.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 177)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7158, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 185)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7158, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 193)) ;
  }
  GALGAS_formalParameterSignature var_insertSetterFormalArgumentList_7917 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_typedPropertyList_7978 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_8026 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_8026.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 205)), var_keyTypeIndex_6912, GALGAS_string ("key"), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-dict.galgas", 205)) ;
  var_insertSetterFormalArgumentList_7917.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 207)), var_keyTypeIndex_6912, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 209)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 206)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_8323 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_8323.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 213)), var_keyTypeIndex_6912, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 215)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 212)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_8500 = GALGAS_optionalMethodSignature::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_8500.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 220)), var_keyTypeIndex_6912, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 218)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_8623 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8722 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_8722.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_8805 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8722.current_propertyTypeName (HERE), var_attributeTypeIndex_8805, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 225)) ;
    }
    GALGAS_bool var_hasSetter_8833 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_8858 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_8026.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 228)), var_attributeTypeIndex_8805, enumerator_8722.current_propertyName (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-dict.galgas", 228)) ;
    var_typedPropertyList_7978.addAssign_operation (var_attributeTypeIndex_8805, enumerator_8722.current_propertyName (HERE), enumerator_8722.current_initialization (HERE), var_hasSetter_8833, var_hasSelector_8858  COMMA_SOURCE_FILE ("type-dict.galgas", 229)) ;
    var_typesToIncludeInHeaderCompilation_8623.addAssign_operation (var_attributeTypeIndex_8805  COMMA_SOURCE_FILE ("type-dict.galgas", 230)) ;
    var_enumerationDescriptor_6961.addAssign_operation (var_attributeTypeIndex_8805, enumerator_8722.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 231)) ;
    var_insertSetterFormalArgumentList_7917.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 233)), var_attributeTypeIndex_8805, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 235)), enumerator_8722.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 232)) ;
    var_removeMethodFormalArgumentList_8323.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 238)), var_attributeTypeIndex_8805, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-dict.galgas", 240)), enumerator_8722.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
    var_optionalMethodSignature_8500.addAssign_operation (GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 244)), var_attributeTypeIndex_8805, enumerator_8722.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 242)) ;
    enumerator_8722.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_4 = this ;
  var_setterMap_7187.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insert"), temp_4.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 251)), var_insertSetterFormalArgumentList_7917, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 254)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 249)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_5 = this ;
  var_setterMap_7187.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeKey"), temp_5.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 260)), var_removeMethodFormalArgumentList_8323, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 263)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 258)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  var_instanceMethodMap_7227.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("searchKey"), temp_6.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 269)), var_removeMethodFormalArgumentList_8323, temp_7.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 273)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 267)) ;
  }
  const GALGAS_dictDeclarationAST temp_8 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10561 (temp_8.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_10561.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_10597 = GALGAS_lstring::init_21__21_ (enumerator_10561.current_propertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 278)), enumerator_10561.current_propertyName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_10723 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_10561.current_propertyTypeName (HERE), var_attributeTypeIndex_10723, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 279)) ;
    }
    {
    GALGAS_functionSignature temp_9 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 283)) ;
    temp_9.enterElement (GALGAS_functionSignature_2D_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 283)), var_keyTypeIndex_6912, GALGAS_string ("inKey"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 283)) ;
    var_getterMap_7158.setter_insertOrReplace (var_accessorName_10597, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 282)), temp_9, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 284)), GALGAS_bool (true), var_attributeTypeIndex_10723, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 287)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 280)) ;
    }
    enumerator_10561.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_10 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11148 (temp_10.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11148.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_11184 = GALGAS_lstring::init_21__21_ (GALGAS_string ("set").add_operation (enumerator_11148.current_propertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 294)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 294)), enumerator_11148.current_propertyName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11405 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11148.current_propertyTypeName (HERE), var_attributeTypeIndex_11405, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 297)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_11438 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_11438.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 302)), var_attributeTypeIndex_11405, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 302)), enumerator_11148.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 302)) ;
    var_accessorFormalArgumentList_11438.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 303)), var_keyTypeIndex_6912, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 303)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 303)) ;
    {
    var_setterMap_7187.setter_insertOrReplace (var_accessorName_11184, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 306)), var_accessorFormalArgumentList_11438, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 309)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 304)) ;
    }
    enumerator_11148.gotoNextObject () ;
  }
  GALGAS_initializerMap var_initializerMap_11964 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_12009 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_dictDeclarationAST temp_11 = this ;
  var_initializerMap_11964.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_12009, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 317)), temp_11.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_12009, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 316)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_12 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_12.readProperty_mDictTypeName (), GALGAS_bool (false), var_initializerMap_11964, var_getterMap_7158, var_setterMap_7187, var_instanceMethodMap_7227, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 321)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_12751 ;
  {
  const GALGAS_dictDeclarationAST temp_13 = this ;
  const GALGAS_dictDeclarationAST temp_14 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_13.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 338)), temp_14.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_elementTypeEntry_12751, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 337)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_12803 = GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_optionalMethodMap_12803.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 343)), var_optionalMethodSignature_8500, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 343)) ;
  }
  const GALGAS_dictDeclarationAST temp_15 = this ;
  const GALGAS_dictDeclarationAST temp_16 = this ;
  const GALGAS_dictDeclarationAST temp_17 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_12956 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_15.readProperty_mDictTypeName (), temp_16.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dict.galgas", 349)), GALGAS_typeKindEnum::class_func_mapType (SOURCE_FILE ("type-dict.galgas", 350)), GALGAS_bool (true), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_7978, var_initializerMap_11964, var_classFunctionMap_7078, var_getterMap_7158, var_setterMap_7187, var_instanceMethodMap_7227, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), var_optionalMethodMap_12803, var_enumerationDescriptor_6961, GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 363)).operator_or (GALGAS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 363)) COMMA_SOURCE_FILE ("type-dict.galgas", 363)), var_argumentTypeListForAddAssignWithFieldExpressionList_8026, GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_elementTypeEntry_12751, GALGAS_string ("dict-").add_operation (temp_17.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 368)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-dict.galgas", 369)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12956.readProperty_typeName (), var_typeDefinition_12956, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 371)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const GALGAS_lstring constinArgument_inString,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_14486 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 379)), EnumerationOrder::up) ;
  while (enumerator_14486.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_14511 = enumerator_14486.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 380)) ;
    {
    GALGAS_string joker_14610 ; // Joker input parameter
    var_explodedArray_14511.setter_popFirst (joker_14610, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 381)) ;
    }
    cEnumerator_stringlist enumerator_14623 (var_explodedArray_14511, EnumerationOrder::up) ;
    while (enumerator_14623.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_14623.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 383)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14702 = enumerator_14623.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 384)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (ComparisonKind::notEqual, var_c_14702.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 386)) ;
            }
          }
        }
      }
      enumerator_14623.gotoNextObject () ;
    }
    enumerator_14486.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (const GALGAS_lstring constinArgument_inString,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_15174 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 396)), EnumerationOrder::up) ;
  while (enumerator_15174.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_15199 = enumerator_15174.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 397)) ;
    {
    GALGAS_string joker_15298 ; // Joker input parameter
    var_explodedArray_15199.setter_popFirst (joker_15298, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 398)) ;
    }
    cEnumerator_stringlist enumerator_15311 (var_explodedArray_15199, EnumerationOrder::up) ;
    while (enumerator_15311.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_15311.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 400)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_15390 = enumerator_15311.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 401)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (ComparisonKind::notEqual, var_c_15390.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_c_15390.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 402)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 403)) ;
            }
          }
        }
      }
      enumerator_15311.gotoNextObject () ;
    }
    enumerator_15174.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForMapAndDict'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForMapAndDict (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 414)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 415)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 416)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForMapAndDict ;

//--------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForMapAndDict (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict) {
    gOnceFunctionResult_forbiddenKeysForMapAndDict = onceFunction_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForMapAndDict ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForMapAndDict (void) {
  gOnceFunctionResult_forbiddenKeysForMapAndDict.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForMapAndDict (nullptr,
                                                                      releaseOnceFunctionResult_forbiddenKeysForMapAndDict) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForMapAndDict [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForMapAndDict (Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForMapAndDict ("forbiddenKeysForMapAndDict",
                                                                            functionWithGenericHeader_forbiddenKeysForMapAndDict,
                                                                            & kTypeDescriptor_GALGAS_stringset,
                                                                            0,
                                                                            functionArgs_forbiddenKeysForMapAndDict) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_16413 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 431)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16413, var_nameForUsefulness_16413, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 432)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = this ;
  const GALGAS_dictDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_16566 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_1.readProperty_mDictTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 433)), temp_2.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 433)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16413, var_elementTypeNameForUsefulness_16566 COMMA_SOURCE_FILE ("type-dict.galgas", 434)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_16833 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_16881 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_16945 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_16945.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_16994 = function_typeNameForUsefulEntitiesGraph (enumerator_16945.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 439)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16413, var_propertyTypeNameForUsefulness_16994 COMMA_SOURCE_FILE ("type-dict.galgas", 440)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_17186 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16945.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 441)) ;
    GALGAS_bool var_hasSetter_17240 = GALGAS_bool (true) ;
    var_typedAttributeList_16833.addAssign_operation (var_t_17186, enumerator_16945.current_propertyName (HERE), enumerator_16945.current_initialization (HERE), var_hasSetter_17240, enumerator_16945.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 443)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 449)).getter_hasKey (enumerator_16945.current_propertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-dict.galgas", 449)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_17486 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_17563 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 451)), EnumerationOrder::up) ;
        while (enumerator_17563.hasCurrentObject ()) {
          var_m_17486.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_17563.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 452)) ;
          enumerator_17563.gotoNextObject () ;
        }
        var_m_17486.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 454)) ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_16945.current_propertyName (HERE).readProperty_location (), var_m_17486, fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 455)) ;
      }
    }
    {
    var_attributeMap_16881.setter_insertKey (enumerator_16945.current_propertyName (HERE), var_t_17186, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 457)) ;
    }
    enumerator_16945.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  const GALGAS_dictDeclarationAST temp_8 = this ;
  const GALGAS_dictDeclarationAST temp_9 = this ;
  const GALGAS_dictDeclarationAST temp_10 = this ;
  const GALGAS_dictDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_6.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 461)), GALGAS_dictTypeForGeneration::init_21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 463)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_8.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 464)), temp_9.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 464)), temp_10.readProperty_mDictTypeName (), var_typedAttributeList_16833, temp_11.readProperty_mKeyTypeName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 460)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_18846 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 488)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypeDefinition_18846.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 491)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-dict.galgas", 489))) ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_18846.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 496)), var_selfTypeDefinition_18846.readProperty_isConcrete (), var_selfTypeDefinition_18846.readProperty_initializerMap (), var_selfTypeDefinition_18846.readProperty_classFunctionMap (), var_selfTypeDefinition_18846.readProperty_getterMap (), var_selfTypeDefinition_18846.readProperty_setterMap (), var_selfTypeDefinition_18846.readProperty_instanceMethodMap (), var_selfTypeDefinition_18846.readProperty_classMethodMap (), var_selfTypeDefinition_18846.readProperty_optionalMethodMap (), var_selfTypeDefinition_18846.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_18846.readProperty_features (), var_selfTypeDefinition_18846.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_18846.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_18846.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-dict.galgas", 494))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 494)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 519)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 520)) ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  const GALGAS_dictTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 522)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 524)) COMMA_SOURCE_FILE ("type-dict.galgas", 521))) ;
}
