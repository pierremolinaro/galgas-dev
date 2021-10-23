#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateFunction (const GALGAS_string constinArgument_inFunctionCppRepresentationName,
                               GALGAS_stringset & ioArgument_ioInclusionSet,
                               const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                               const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                               const GALGAS_string constinArgument_inCompilerTypeName,
                               const GALGAS_unifiedTypeMap_2D_entry constinArgument_inResultType,
                               const GALGAS_string constinArgument_inResultVariableCppName,
                               const GALGAS_bool constinArgument_inIsStatic,
                               GALGAS_string & outArgument_outGeneratedCode,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 358)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_15008 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 360)) ;
  var_unusedVariableCppNameSet_15008.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 361))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 361)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_15165 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_15165.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15165.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 364)) ;
    var_unusedVariableCppNameSet_15008.addAssign_operation (enumerator_15165.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 365)) ;
    enumerator_15165.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_15341 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody_15367 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_15367.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 370)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_15438 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_15438.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_15438.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_15341, var_unusedVariableCppNameSet_15008, GALGAS_bool (false), var_routineBody_15367, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 372)) ;
    enumerator_15438.gotoNextObject () ;
  }
  {
  var_routineBody_15367.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 379)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsStatic.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (constinArgument_inResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 384)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 384)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 385)) ;
  GALGAS_uint var_colRef_15928 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 386)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16001 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_16001.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_16001.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_16001.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)) ;
      }
    }
    if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_16001.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 392)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 392)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_15008.getter_hasKey (enumerator_16001.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 394)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_16001.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_16001.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 397)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 399)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_15928, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 400)) ;
    }
    enumerator_16001.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 403)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_15008.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 404)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 404)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 407)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 409)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_15928, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 410)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 411)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (constinArgument_inResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 414)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 414)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 414)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_15367, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 417)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 419)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 422)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter (const GALGAS_string constinArgument_inClassName,
                                      const GALGAS_string constinArgument_inBaseClassName,
                                      const GALGAS_string constinArgument_inMethodName,
                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      GALGAS_string & outArgument_outGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet_18188 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 440)) ;
  var_unusedVariableCppNameSet_18188.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 441))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 441)) ;
  var_unusedVariableCppNameSet_18188.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 442)) ;
  cEnumerator_formalParameterListForGeneration enumerator_18316 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_18316.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_18188.addAssign_operation (enumerator_18316.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 444)) ;
    enumerator_18316.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_18429 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody_18451 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_18451.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 449)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_18522 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_18522.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_18522.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_18429, var_unusedVariableCppNameSet_18188, GALGAS_bool (false), var_routineBody_18451, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451)) ;
    enumerator_18522.gotoNextObject () ;
  }
  {
  var_routineBody_18451.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 459)) ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void extensionSetter_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)) ;
  GALGAS_uint var_colRef_18963 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 462)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 464)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 464)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 466)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 466)) ;
  }
  GALGAS_bool var_currentObjectIsUnused_19243 = var_unusedVariableCppNameSet_18188.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 468)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_currentObjectIsUnused_19243.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 470)) ;
    }
  }
  if (kBoolFalse == test_1) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 472)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_19448 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_19448.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 476)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_18963, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 477)) ;
    }
    switch (enumerator_19448.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_19448.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_19448.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_19448.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_19448.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 486)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 486)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_18188.getter_hasKey (enumerator_19448.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 488)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_19448.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 489)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 489)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_19448.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)) ;
    }
    enumerator_19448.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 495)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_18963, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_18188.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 498)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 498)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 501)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 503)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_18963, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 504)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 505)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 506)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_currentObjectIsUnused_19243.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 508)).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)) ;
        }
      }
      if (kBoolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)).add_operation (GALGAS_string (" * object = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)).add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_18451, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 516)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 518)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethod'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionMethod (const GALGAS_unifiedTypeMap_2D_entry constinArgument_inReceiverType,
                                      const GALGAS_string constinArgument_inBaseClassName,
                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_string constinArgument_inMethodName,
                                      const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      GALGAS_string & outArgument_outGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_string var_className_22112 = constinArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 535)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_22204 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 537)) ;
  var_unusedVariableCppNameSet_22204.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 538))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 538)) ;
  var_unusedVariableCppNameSet_22204.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 539)) ;
  cEnumerator_formalParameterListForGeneration enumerator_22332 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_22332.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_22204.addAssign_operation (enumerator_22332.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 541)) ;
    enumerator_22332.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_22447 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody_22473 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_22473.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 546)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_22544 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_22544.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_22544.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_22447, var_unusedVariableCppNameSet_22204, GALGAS_bool (false), var_routineBody_22473, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 548)) ;
    enumerator_22544.gotoNextObject () ;
  }
  {
  var_routineBody_22473.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 556)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_baseType_22855 = constinArgument_inReceiverType ;
  GALGAS_bool var_searching_22890 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 560)).isValid ()) {
    uint32_t variant_22904 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 560)).uintValue () ;
    bool loop_22904 = true ;
    while (loop_22904) {
      loop_22904 = var_searching_22890.isValid () ;
      if (loop_22904) {
        loop_22904 = var_searching_22890.boolValue () ;
      }
      if (loop_22904 && (0 == variant_22904)) {
        loop_22904 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 560)) ;
      }
      if (loop_22904) {
        variant_22904 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = var_baseType_22855.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 561)).getter_isNull (SOURCE_FILE ("semanticGeneration.galgas", 561)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 561)).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = var_baseType_22855.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 562)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 562)).getter_hasKey (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 562)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType_22855 = var_baseType_22855.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 563)) ;
              }
            }
            if (kBoolFalse == test_1) {
              var_searching_22890 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          var_searching_22890 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType_22855.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 571)).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 571)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 571)).add_operation (constinArgument_inMethodName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 571))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 571)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)) ;
  cEnumerator_formalParameterListForGeneration enumerator_23406 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_23406.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_23406.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)) ;
    enumerator_23406.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void extensionMethod_").add_operation (var_className_22112.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 577)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 577)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 577)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 577)) ;
  GALGAS_uint var_colRef_23662 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 578)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (var_className_22112.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 580)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 580)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)) ;
  }
  GALGAS_bool var_currentObjectIsUnused_23952 = var_unusedVariableCppNameSet_22204.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 584)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_currentObjectIsUnused_23952.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_24157 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_24157.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23662, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 593)) ;
    }
    switch (enumerator_24157.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_24157.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 596)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 596)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 596)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_24157.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 598)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 598)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_24157.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 600)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 600)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_24157.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 602)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 602)) ;
      }
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unusedVariableCppNameSet_22204.getter_hasKey (enumerator_24157.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 604)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_24157.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 605)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 605)) ;
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_24157.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 607)) ;
    }
    enumerator_24157.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 611)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23662, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 613)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_unusedVariableCppNameSet_22204.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 614)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 614)).boolEnum () ;
    if (kBoolTrue == test_5) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 615)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 615)) ;
    }
  }
  if (kBoolFalse == test_5) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 617)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 617)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 619)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23662, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 620)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 621)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 622)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_currentObjectIsUnused_23952.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 624)).boolEnum () ;
    if (kBoolTrue == test_6) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const cPtr_").add_operation (var_className_22112.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626)) ;
        }
      }
      if (kBoolFalse == test_7) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const cPtr_").add_operation (var_className_22112.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 628)).add_operation (GALGAS_string (" * object = (const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 628)).add_operation (var_className_22112.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 628)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 628)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 628)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (var_className_22112.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 630)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 630)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_22473, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 632)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 634)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetter'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionGetter (const GALGAS_unifiedTypeMap_2D_entry constinArgument_inReceiverType,
                                      const GALGAS_string constinArgument_inBaseClassName,
                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_string constinArgument_inGetterName,
                                      const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      const GALGAS_string constinArgument_inCompilerTypeName,
                                      const GALGAS_string constinArgument_inResultTypeName,
                                      const GALGAS_string constinArgument_inResultVariableCppName,
                                      GALGAS_string & outArgument_outGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_string var_className_26941 = constinArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 655)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_27033 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 657)) ;
  var_unusedVariableCppNameSet_27033.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 658))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 658)) ;
  var_unusedVariableCppNameSet_27033.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 659)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_27161 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_27161.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_27033.addAssign_operation (enumerator_27161.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 661)) ;
    enumerator_27161.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_27276 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody_27302 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_27302.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 666)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_27373 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_27373.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_27373.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_27276, var_unusedVariableCppNameSet_27033, GALGAS_bool (false), var_routineBody_27302, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 668)) ;
    enumerator_27373.gotoNextObject () ;
  }
  {
  var_routineBody_27302.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)) ;
  }
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 678)) ;
  GALGAS_unifiedTypeMap_2D_entry var_baseType_27738 = constinArgument_inReceiverType ;
  GALGAS_bool var_searching_27773 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 681)).isValid ()) {
    uint32_t variant_27787 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 681)).uintValue () ;
    bool loop_27787 = true ;
    while (loop_27787) {
      loop_27787 = var_searching_27773.isValid () ;
      if (loop_27787) {
        loop_27787 = var_searching_27773.boolValue () ;
      }
      if (loop_27787 && (0 == variant_27787)) {
        loop_27787 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 681)) ;
      }
      if (loop_27787) {
        variant_27787 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = var_baseType_27738.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 682)).getter_isNull (SOURCE_FILE ("semanticGeneration.galgas", 682)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 682)).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = var_baseType_27738.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 683)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 683)).getter_hasKey (constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 683)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType_27738 = var_baseType_27738.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 684)) ;
              }
            }
            if (kBoolFalse == test_1) {
              var_searching_27773 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          var_searching_27773 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_27738.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 692)).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 692)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 692)).add_operation (constinArgument_inGetterName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 692))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 692)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 693)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_28281 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_28281.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_28281.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 695)) ;
    enumerator_28281.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static GALGAS_").add_operation (constinArgument_inResultTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 698)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 698)).add_operation (GALGAS_string (" extensionGetter_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 698)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_className_26941.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 699)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 699)).add_operation (constinArgument_inGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 699)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 699)) ;
  GALGAS_uint var_colRef_28611 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 700)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (var_className_26941.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)) ;
  }
  GALGAS_bool var_currentObjectIsUnused_28901 = var_unusedVariableCppNameSet_27033.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 706)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_currentObjectIsUnused_28901.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 708)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 710)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 712)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_28611, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 713)) ;
  }
  cEnumerator_formalInputParameterListForGeneration enumerator_29189 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_29189.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = enumerator_29189.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_29189.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 717)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 717)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 717)) ;
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_29189.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 719)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 719)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 719)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 719)) ;
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_unusedVariableCppNameSet_27033.getter_hasKey (enumerator_29189.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 721)).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_29189.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 722)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 722)) ;
      }
    }
    if (kBoolFalse == test_5) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_29189.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 724)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 726)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_28611, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 727)) ;
    }
    enumerator_29189.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 730)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 730)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_unusedVariableCppNameSet_27033.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 731)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 731)).boolEnum () ;
    if (kBoolTrue == test_6) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 732)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 732)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 732)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 732)) ;
    }
  }
  if (kBoolFalse == test_6) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 734)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 736)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_28611, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 737)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 738)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 739)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (constinArgument_inResultTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 741)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 741)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 742)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 742)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 741)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_currentObjectIsUnused_28901.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 744)).boolEnum () ;
    if (kBoolTrue == test_7) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const cPtr_").add_operation (var_className_26941.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 746)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 746)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 746)) ;
        }
      }
      if (kBoolFalse == test_8) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const cPtr_").add_operation (var_className_26941.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 748)).add_operation (GALGAS_string (" * object = (const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 748)).add_operation (var_className_26941.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 748)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 748)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 748)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (var_className_26941.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 750)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 750)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 750)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_27302, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 752)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 754)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 755)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 755)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 755)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 757)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_typeGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_bool & /* in_IS_5F_CONCRETE */,
                                                                                  const GALGAS_constructorMap & in_CONSTRUCTOR_5F_MAP,
                                                                                  const GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                  const GALGAS_setterMap & in_MODIFIER_5F_MAP,
                                                                                  const GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_optionalMethodMap & in_OPTIONAL_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                  const GALGAS_operators & in_SUPPORTED_5F_OPERATORS,
                                                                                  const GALGAS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & in_ENUMERATED_5F_OBJECT_5F_TYPE
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//-- Start of generic part --*\n"
    "\n"
    "//--------------------------------- Object cloning\n"
    "  protected: virtual AC_GALGAS_root * clonedObject (void) const ;\n"
    "\n"
    "//--------------------------------- Object extraction\n"
    "  public: static GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " extractObject (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_object & inObject,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_CONSTRUCTOR_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 12)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//--------------------------------- GALGAS constructors\n" ;
    GALGAS_uint index_513_ (0) ;
    if (in_CONSTRUCTOR_5F_MAP.isValid ()) {
      cEnumerator_constructorMap enumerator_513 (in_CONSTRUCTOR_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_513.hasCurrentObject ()) {
        result << "  public: static class GALGAS_" ;
        result << enumerator_513.current_mReturnedType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result << " constructor_" ;
        result << enumerator_513.current_lkey (HERE).getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_704_IDX (0) ;
        if (enumerator_513.current_mArgumentTypeList (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_704 (enumerator_513.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_704.hasCurrentObject ()) {
            result << "const class GALGAS_" ;
            result << enumerator_704.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            result << " & inOperand" ;
            result << index_704_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            if (enumerator_704.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_704_IDX.increment () ;
            enumerator_704.gotoNextObject () ;
          }
        }
        const enumGalgasBool test_1 = enumerator_513.current_mHasCompilerArgument (HERE).operator_and (GALGAS_bool (kIsStrictSup, enumerator_513.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "class C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = enumerator_513.current_mHasCompilerArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "C_Compiler * inCompiler\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "COMMA_LOCATION_ARGS) ;\n"
              "\n" ;
          }else if (kBoolFalse == test_2) {
            const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, enumerator_513.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_3) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS) ;\n"
                "\n" ;
            }else if (kBoolFalse == test_3) {
              result << "LOCATION_ARGS) ;\n"
                "\n" ;
            }
          }
        }
        index_513_.increment () ;
        enumerator_513.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_4 = in_SUPPORTED_5F_OPERATORS.getter_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//--------------------------------- Handle copy\n"
      "  public: GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inSource) ;\n"
      "  public: GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & operator = (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inSource) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_4) {
  }
  const enumGalgasBool test_5 = in_SUPPORTED_5F_OPERATORS.getter_infixShiftOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "//--------------------------------- << and >> shift operators\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " left_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_uint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " left_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_bigint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " right_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_uint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " right_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_bigint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_5) {
  }
  const enumGalgasBool test_6 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 56)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "//--------------------------------- += operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                       class C_Compiler * inCompiler\n"
      "                                                       COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = in_SUPPORTED_5F_OPERATORS.getter_minusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 63)).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "//--------------------------------- -= operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                        class C_Compiler * inCompiler\n"
      "                                                        COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_7) {
  }
  const enumGalgasBool test_8 = in_SUPPORTED_5F_OPERATORS.getter_mulEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "//--------------------------------- *= operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                      class C_Compiler * inCompiler\n"
      "                                                      COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_8) {
  }
  const enumGalgasBool test_9 = in_SUPPORTED_5F_OPERATORS.getter_divEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "//--------------------------------- /= operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                      class C_Compiler * inCompiler\n"
      "                                                      COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_9) {
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "//--------------------------------- += operator (with list of field expressions)\n"
      "  public: VIRTUAL_IN_DEBUG void addAssign_operation (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4375_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_functionSignature enumerator_4375 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4375.hasCurrentObject ()) {
        result << "const class GALGAS_" ;
        result << enumerator_4375.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue () ;
        result << " & inOperand" ;
        result << index_4375_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue () ;
        if (enumerator_4375.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4375_IDX.increment () ;
        enumerator_4375.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_11 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)).boolEnum () ;
    if (kBoolTrue == test_11) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler" ;
    }else if (kBoolFalse == test_11) {
    }
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n" ;
  }else if (kBoolFalse == test_10) {
  }
  const enumGalgasBool test_12 = in_SUPPORTED_5F_OPERATORS.getter_infixAndOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)).boolEnum () ;
  if (kBoolTrue == test_12) {
    result << "//--------------------------------- & operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_and (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_12) {
  }
  const enumGalgasBool test_13 = in_SUPPORTED_5F_OPERATORS.getter_infixOrOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 104)).boolEnum () ;
  if (kBoolTrue == test_13) {
    result << "//--------------------------------- | operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_or (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_13) {
  }
  const enumGalgasBool test_14 = in_SUPPORTED_5F_OPERATORS.getter_infixXorOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 110)).boolEnum () ;
  if (kBoolTrue == test_14) {
    result << "//--------------------------------- ^ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_xor (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_14) {
  }
  const enumGalgasBool test_15 = in_SUPPORTED_5F_OPERATORS.getter_prefixNotOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 116)).boolEnum () ;
  if (kBoolTrue == test_15) {
    result << "//--------------------------------- not operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_not (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_15) {
  }
  const enumGalgasBool test_16 = in_SUPPORTED_5F_OPERATORS.getter_prefixTildeOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 121)).boolEnum () ;
  if (kBoolTrue == test_16) {
    result << "//--------------------------------- ~ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_tilde (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_16) {
  }
  const enumGalgasBool test_17 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)).boolEnum () ;
  if (kBoolTrue == test_17) {
    result << "//--------------------------------- + operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " add_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_17) {
  }
  const enumGalgasBool test_18 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 133)).boolEnum () ;
  if (kBoolTrue == test_18) {
    result << "//--------------------------------- &+ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " add_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_18) {
  }
  const enumGalgasBool test_19 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 138)).boolEnum () ;
  if (kBoolTrue == test_19) {
    result << "//--------------------------------- &- operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " substract_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_19) {
  }
  const enumGalgasBool test_20 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 143)).boolEnum () ;
  if (kBoolTrue == test_20) {
    result << "//--------------------------------- - operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " substract_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_20) {
  }
  const enumGalgasBool test_21 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 150)).boolEnum () ;
  if (kBoolTrue == test_21) {
    result << "//--------------------------------- * operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " multiply_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_21) {
  }
  const enumGalgasBool test_22 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 157)).boolEnum () ;
  if (kBoolTrue == test_22) {
    result << "//--------------------------------- &* operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " multiply_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_22) {
  }
  const enumGalgasBool test_23 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 162)).boolEnum () ;
  if (kBoolTrue == test_23) {
    result << "//--------------------------------- / operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " divide_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_23) {
  }
  const enumGalgasBool test_24 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 169)).boolEnum () ;
  if (kBoolTrue == test_24) {
    result << "//--------------------------------- &/ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " divide_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_24) {
  }
  const enumGalgasBool test_25 = in_SUPPORTED_5F_OPERATORS.getter_infixModOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 174)).boolEnum () ;
  if (kBoolTrue == test_25) {
    result << "//--------------------------------- mod operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " modulo_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_25) {
  }
  const enumGalgasBool test_26 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 181)).boolEnum () ;
  if (kBoolTrue == test_26) {
    result << "//--------------------------------- prefix - operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_unary_minus (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_26) {
  }
  const enumGalgasBool test_27 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 187)).boolEnum () ;
  if (kBoolTrue == test_27) {
    result << "//--------------------------------- prefix &- operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_unary_minus_no_ovf (void) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_27) {
  }
  const enumGalgasBool test_28 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 192)).boolEnum () ;
  if (kBoolTrue == test_28) {
    result << "//--------------------------------- ++, -- operators\n"
      "  public: VIRTUAL_IN_DEBUG void increment_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG void decrement_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_28) {
  }
  const enumGalgasBool test_29 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 199)).boolEnum () ;
  if (kBoolTrue == test_29) {
    result << "//--------------------------------- &++, &-- operators\n"
      "  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_29) {
  }
  const enumGalgasBool test_30 = in_SUPPORTED_5F_OPERATORS.getter_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 204)).boolEnum () ;
  if (kBoolTrue == test_30) {
    result << "//--------------------------------- Implementation of getter 'description'\n"
      "  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
      "                                              const int32_t inIndentation) const ;\n" ;
  }else if (kBoolFalse == test_30) {
  }
  const enumGalgasBool test_31 = in_SUPPORTED_5F_OPERATORS.getter_doNotGenererateObjectCompare (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).boolEnum () ;
  if (kBoolTrue == test_31) {
    result << "//--------------------------------- Comparison\n"
      "  public: typeComparisonResult objectCompare (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n" ;
  }else if (kBoolFalse == test_31) {
  }
  result << "\n"
    "//--------------------------------- Setters\n" ;
  GALGAS_uint index_10111_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    cEnumerator_setterMap enumerator_10111 (in_MODIFIER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_10111.hasCurrentObject ()) {
      const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, enumerator_10111.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 220)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        const enumGalgasBool test_33 = GALGAS_bool (kIsEqual, enumerator_10111.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_10111.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))).operator_or (GALGAS_bool (kIsEqual, enumerator_10111.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).operator_or (GALGAS_bool (kIsEqual, enumerator_10111.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).boolEnum () ;
        if (kBoolTrue == test_33) {
          result << "  public: VIRTUAL_IN_DEBUG void setter_" ;
          result << enumerator_10111.current_lkey (HERE).getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 222)).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 222)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_10478_IDX (0) ;
          if (enumerator_10111.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_10478 (enumerator_10111.current_mParameterList (HERE), kENUMERATION_UP) ;
            while (enumerator_10478.hasCurrentObject ()) {
              const enumGalgasBool test_34 = GALGAS_bool (kIsEqual, enumerator_10478.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 224)))).boolEnum () ;
              if (kBoolTrue == test_34) {
                result << "class GALGAS_" ;
                result << enumerator_10478.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue () ;
                result << " constinArgument" ;
                result << index_10478_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue () ;
              }else if (kBoolFalse == test_34) {
                const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_10478.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 226)))).boolEnum () ;
                if (kBoolTrue == test_35) {
                  result << "class GALGAS_" ;
                  result << enumerator_10478.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_10478_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue () ;
                }else if (kBoolFalse == test_35) {
                  const enumGalgasBool test_36 = GALGAS_bool (kIsEqual, enumerator_10478.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 228)))).boolEnum () ;
                  if (kBoolTrue == test_36) {
                    result << "class GALGAS_" ;
                    result << enumerator_10478.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_10478_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue () ;
                  }else if (kBoolFalse == test_36) {
                    result << "class GALGAS_" ;
                    result << enumerator_10478.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue () ;
                    result << " inArgument" ;
                    result << index_10478_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue () ;
                  }
                }
              }
              if (enumerator_10478.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_10478_IDX.increment () ;
              enumerator_10478.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_37 = GALGAS_bool (kIsEqual, enumerator_10111.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_37) {
            const enumGalgasBool test_38 = enumerator_10111.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_38) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_38) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_37) {
            const enumGalgasBool test_39 = enumerator_10111.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_39) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_39) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }
          }
          result << ") ;\n"
            "\n" ;
        }else if (kBoolFalse == test_33) {
        }
      }else if (kBoolFalse == test_32) {
      }
      index_10111_.increment () ;
      enumerator_10111.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Instance Methods\n" ;
  GALGAS_uint index_11784_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_11784 (in_INSTANCE_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_11784.hasCurrentObject ()) {
      const enumGalgasBool test_40 = GALGAS_bool (kIsEqual, enumerator_11784.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 258)))).boolEnum () ;
      if (kBoolTrue == test_40) {
        const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, enumerator_11784.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_11784.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))).operator_or (GALGAS_bool (kIsEqual, enumerator_11784.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).operator_or (GALGAS_bool (kIsEqual, enumerator_11784.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).boolEnum () ;
        if (kBoolTrue == test_41) {
          result << "  public: VIRTUAL_IN_DEBUG void method_" ;
          result << enumerator_11784.current_lkey (HERE).getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 260)).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 260)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_12151_IDX (0) ;
          if (enumerator_11784.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_12151 (enumerator_11784.current_mParameterList (HERE), kENUMERATION_UP) ;
            while (enumerator_12151.hasCurrentObject ()) {
              const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, enumerator_12151.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 262)))).boolEnum () ;
              if (kBoolTrue == test_42) {
                result << "class GALGAS_" ;
                result << enumerator_12151.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue () ;
                result << " constinArgument" ;
                result << index_12151_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue () ;
              }else if (kBoolFalse == test_42) {
                const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, enumerator_12151.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 264)))).boolEnum () ;
                if (kBoolTrue == test_43) {
                  result << "class GALGAS_" ;
                  result << enumerator_12151.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_12151_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue () ;
                }else if (kBoolFalse == test_43) {
                  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, enumerator_12151.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 266)))).boolEnum () ;
                  if (kBoolTrue == test_44) {
                    result << "class GALGAS_" ;
                    result << enumerator_12151.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_12151_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue () ;
                  }else if (kBoolFalse == test_44) {
                    result << "class GALGAS_" ;
                    result << enumerator_12151.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue () ;
                    result << " inArgument" ;
                    result << index_12151_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue () ;
                  }
                }
              }
              if (enumerator_12151.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_12151_IDX.increment () ;
              enumerator_12151.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, enumerator_11784.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_45) {
            const enumGalgasBool test_46 = enumerator_11784.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_46) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_46) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_45) {
            const enumGalgasBool test_47 = enumerator_11784.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_47) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_47) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }
          }
          result << ") const ;\n"
            "\n" ;
        }else if (kBoolFalse == test_41) {
        }
      }else if (kBoolFalse == test_40) {
      }
      index_11784_.increment () ;
      enumerator_11784.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Class Methods\n" ;
  GALGAS_uint index_13456_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_classMethodMap enumerator_13456 (in_CLASS_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_13456.hasCurrentObject ()) {
      result << "  public: static void class_method_" ;
      result << enumerator_13456.current_lkey (HERE).getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_13583_IDX (0) ;
      if (enumerator_13456.current_mParameterList (HERE).isValid ()) {
        cEnumerator_formalParameterSignature enumerator_13583 (enumerator_13456.current_mParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_13583.hasCurrentObject ()) {
          const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, enumerator_13583.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 297)))).boolEnum () ;
          if (kBoolTrue == test_48) {
            result << "class GALGAS_" ;
            result << enumerator_13583.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue () ;
            result << " constinArgument" ;
            result << index_13583_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue () ;
          }else if (kBoolFalse == test_48) {
            const enumGalgasBool test_49 = GALGAS_bool (kIsEqual, enumerator_13583.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 299)))).boolEnum () ;
            if (kBoolTrue == test_49) {
              result << "class GALGAS_" ;
              result << enumerator_13583.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue () ;
              result << " & ioArgument" ;
              result << index_13583_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue () ;
            }else if (kBoolFalse == test_49) {
              const enumGalgasBool test_50 = GALGAS_bool (kIsEqual, enumerator_13583.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 301)))).boolEnum () ;
              if (kBoolTrue == test_50) {
                result << "class GALGAS_" ;
                result << enumerator_13583.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue () ;
                result << " & outArgument" ;
                result << index_13583_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue () ;
              }else if (kBoolFalse == test_50) {
                result << "class GALGAS_" ;
                result << enumerator_13583.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue () ;
                result << " inArgument" ;
                result << index_13583_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue () ;
              }
            }
          }
          if (enumerator_13583.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_13583_IDX.increment () ;
          enumerator_13583.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_51 = GALGAS_bool (kIsEqual, enumerator_13456.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 308)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_51) {
        const enumGalgasBool test_52 = enumerator_13456.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_52) {
          result << "C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_52) {
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "LOCATION_ARGS" ;
        }
      }else if (kBoolFalse == test_51) {
        const enumGalgasBool test_53 = enumerator_13456.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_53) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_53) {
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }
      }
      result << ") ;\n"
        "\n" ;
      index_13456_.increment () ;
      enumerator_13456.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Getters\n" ;
  GALGAS_uint index_14749_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_14749 (in_GETTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_14749.hasCurrentObject ()) {
      switch (enumerator_14749.current_mKind (HERE).enumValue ()) {
      case GALGAS_methodKind::kNotBuilt :
        break ;
      case GALGAS_methodKind::kEnum_definedAsExtension :
        {
        }
        break ;
      case GALGAS_methodKind::kEnum_definedAsMember :
        {
          const enumGalgasBool test_54 = GALGAS_bool (kIsEqual, enumerator_14749.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_14749.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)))).operator_or (GALGAS_bool (kIsEqual, enumerator_14749.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)).operator_or (GALGAS_bool (kIsEqual, enumerator_14749.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)).boolEnum () ;
          if (kBoolTrue == test_54) {
            result << "  public: VIRTUAL_IN_DEBUG class GALGAS_" ;
            result << enumerator_14749.current_mReturnedType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 352)).stringValue () ;
            result << " getter_" ;
            result << enumerator_14749.current_lkey (HERE).getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 352)).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 352)).stringValue () ;
            result << " (" ;
            columnMarker = result.currentColumn () ;
            GALGAS_uint index_15986_IDX (0) ;
            if (enumerator_14749.current_mArgumentTypeList (HERE).isValid ()) {
              cEnumerator_functionSignature enumerator_15986 (enumerator_14749.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
              while (enumerator_15986.hasCurrentObject ()) {
                result << "const class GALGAS_" ;
                result << enumerator_15986.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 354)).stringValue () ;
                result << " & constinOperand" ;
                result << index_15986_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 354)).stringValue () ;
                if (enumerator_15986.hasNextObject ()) {
                  result << ",\n" ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                }
                index_15986_IDX.increment () ;
                enumerator_15986.gotoNextObject () ;
              }
            }
            const enumGalgasBool test_55 = GALGAS_bool (kIsEqual, enumerator_14749.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 357)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_55) {
              const enumGalgasBool test_56 = enumerator_14749.current_mHasCompilerArgument (HERE).boolEnum () ;
              if (kBoolTrue == test_56) {
                result << "C_Compiler * inCompiler\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "COMMA_LOCATION_ARGS" ;
              }else if (kBoolFalse == test_56) {
                result << "LOCATION_ARGS" ;
              }
            }else if (kBoolFalse == test_55) {
              const enumGalgasBool test_57 = enumerator_14749.current_mHasCompilerArgument (HERE).boolEnum () ;
              if (kBoolTrue == test_57) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "C_Compiler * inCompiler\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "COMMA_LOCATION_ARGS" ;
              }else if (kBoolFalse == test_57) {
                result << "\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "COMMA_LOCATION_ARGS" ;
              }
            }
            result << ") const ;\n"
              "\n" ;
          }else if (kBoolFalse == test_54) {
          }
        }
        break ;
      }
      index_14749_.increment () ;
      enumerator_14749.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Optional Methods\n" ;
  GALGAS_uint index_16646_ (0) ;
  if (in_OPTIONAL_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_optionalMethodMap enumerator_16646 (in_OPTIONAL_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_16646.hasCurrentObject ()) {
      result << "  public: VIRTUAL_IN_DEBUG bool optional_" ;
      result << enumerator_16646.current_lkey (HERE).getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 379)).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 379)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_16789_IDX (0) ;
      if (enumerator_16646.current_mArgumentTypeList (HERE).isValid ()) {
        cEnumerator_optionalMethodSignature enumerator_16789 (enumerator_16646.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_16789.hasCurrentObject ()) {
          const enumGalgasBool test_58 = enumerator_16789.current_mInputArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_58) {
            result << "const class GALGAS_" ;
            result << enumerator_16789.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 383)).stringValue () ;
            result << " & constinOperand" ;
            result << index_16789_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 383)).stringValue () ;
          }else if (kBoolFalse == test_58) {
            result << "class GALGAS_" ;
            result << enumerator_16789.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 385)).stringValue () ;
            result << " & outOperand" ;
            result << index_16789_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 385)).stringValue () ;
          }
          if (enumerator_16789.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_16789_IDX.increment () ;
          enumerator_16789.gotoNextObject () ;
        }
      }
      result << ") const ;\n"
        "\n" ;
      index_16646_.increment () ;
      enumerator_16646.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Introspection\n"
    "  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;\n" ;
  const enumGalgasBool test_59 = in_SUPPORTED_5F_OPERATORS.getter_generateEnumerationHelperMethods (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 397)).boolEnum () ;
  if (kBoolTrue == test_59) {
    result << "//--------------------------------- Enumeration helper methods\n"
      "  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_59) {
  }
  const enumGalgasBool test_60 = in_SUPPORTED_5F_OPERATORS.getter_supportWithAccessor (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 403)).boolEnum () ;
  if (kBoolTrue == test_60) {
    result << "  public: VIRTUAL_IN_DEBUG cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * readWriteAccessForWithInstruction (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_string & inKey\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_60) {
  }
  const enumGalgasBool test_61 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 409)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_61) {
    result << "//--------------------------------- Friend\n"
      "\n"
      "  friend class cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " ;\n" ;
  }else if (kBoolFalse == test_61) {
  }
  result << " \n"
    "} ; // End of GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " class\n"
    "\n" ;
  const enumGalgasBool test_62 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 416)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_62) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "//   Enumerator declaration                                                                      \n"
      "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "class cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " : public cGenericAbstractEnumerator {\n"
      "  public: cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inEnumeratedObject,\n"
      "     " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const typeEnumerationOrder inOrder) ;\n"
      "\n"
      "//--- Current element access\n" ;
    GALGAS_uint index_18648_ (0) ;
    if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
      cEnumerator_enumerationDescriptorList enumerator_18648 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_18648.hasCurrentObject ()) {
        result << "  public: class GALGAS_" ;
        result << enumerator_18648.current_mEnumeratedType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 427)).stringValue () ;
        result << " current_" ;
        result << enumerator_18648.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 427)).stringValue () ;
        result << " (LOCATION_ARGS) const ;\n" ;
        index_18648_.increment () ;
        enumerator_18648.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_63 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 429)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 429)).boolEnum () ;
    if (kBoolTrue == test_63) {
      result << "//--- Current element access\n"
        "  public: class GALGAS_" ;
      result << in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 431)).stringValue () ;
      result << " current (LOCATION_ARGS) const ;\n" ;
    }else if (kBoolFalse == test_63) {
    }
    result << "} ;\n" ;
  }else if (kBoolFalse == test_62) {
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate genericTypeImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (C_Compiler * inCompiler,
                                                                                    const GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const GALGAS_unifiedTypeMap_2D_entry & in_SUPER_5F_TYPE_5F_INDEX,
                                                                                    const GALGAS_operators & /* in_SUPPORTED_5F_OPERATORS */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "const C_galgas_type_descriptor\n"
    "kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "\"" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << "\",\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  const enumGalgasBool test_0 = in_SUPER_5F_TYPE_5F_INDEX.getter_isNull (SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NULL" ;
  }else if (kBoolFalse == test_0) {
    result << "& kTypeDescriptor_GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_INDEX.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).stringValue () ;
  }
  result << ") ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "const C_galgas_type_descriptor * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::staticTypeDescriptor (void) const {\n"
    "  return & kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "AC_GALGAS_root * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::clonedObject (void) const {\n"
    "  AC_GALGAS_root * result = NULL ;\n"
    "  if (isValid ()) {\n"
    "    macroMyNew (result, GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (*this)) ;\n"
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
  result << "::extractObject (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_object & inObject,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inObject.embeddedObject () ;\n"
    "  if (NULL != p) {\n"
    "    if (NULL != dynamic_cast <const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *> (p)) {\n"
    "      result = *p ;\n"
    "    }else{\n"
    "      inCompiler->castError (\"" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << "\", p->dynamicTypeDescriptor () COMMA_THERE) ;\n"
    "    }  \n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate externTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (C_Compiler * inCompiler,
                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const GALGAS_string & in_PRE_5F_DECLARATION,
                                                                               const GALGAS_string & in_CODE
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" extern type"), inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Predeclarations (from GALGAS extern type declaration\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_PRE_5F_DECLARATION.stringValue () ;
  result << "\n"
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
    "//---\n"
    "  public: virtual bool isValid (void) const ;\n"
    "  public: virtual void drop (void) ;\n"
    "\n"
    "//--- For log instruction\n"
    "  public: virtual void description (C_String & ioString,\n"
    "                                     const int32_t inIndentation) const ;\n"
    "\n"
    "//--- Code (from GALGAS extern type declaration)\n" ;
  result << in_CODE.stringValue () ;
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_graph {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & /* in_TYPE */,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                          const GALGAS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_graph () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyGraph (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyGraph (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_719_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    cEnumerator_graphInsertModifierList enumerator_719 (in_INSERT_5F_MODIFIER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_719.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_719.current_mInsertModifierName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_1034_IDX (0) ;
      if (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).isValid ()) {
        cEnumerator_functionSignature enumerator_1034 (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)), kENUMERATION_UP) ;
        while (enumerator_1034.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_1034.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          result << " inArgument_" ;
          result << index_1034_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          index_1034_IDX.increment () ;
          enumerator_1034.gotoNextObject () ;
        }
      }
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  capCollectionElement attributes ;\n"
        "  GALGAS_" ;
      result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 29)).stringValue () ;
      result << "::makeAttributesFromObjects (attributes" ;
      GALGAS_uint index_1414_IDX (0) ;
      if (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).isValid ()) {
        cEnumerator_functionSignature enumerator_1414 (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)), kENUMERATION_UP) ;
        while (enumerator_1414.hasCurrentObject ()) {
          result << ", inArgument_" ;
          result << index_1414_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).stringValue () ;
          index_1414_IDX.increment () ;
          enumerator_1414.gotoNextObject () ;
        }
      }
      result << " COMMA_THERE) ;\n"
        "  const char * kErrorMessage = " ;
      result << enumerator_719.current_mInsertErrorMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 34)).stringValue () ;
      result << " ;\n"
        "  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;\n"
        "}\n"
        "\n" ;
      index_719_.increment () ;
      enumerator_719.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_topologicalSort (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 43)).stringValue () ;
  result << " & outSortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outSortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 45)).stringValue () ;
  result << " & outUnsortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outUnsortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray sortedList ;\n"
    "  capCollectionElementArray unsortedList ;\n"
    "  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n"
    "  outSortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 52)).stringValue () ;
  result << " (sortedList) ;\n"
    "  outUnsortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 53)).stringValue () ;
  result << " (unsortedList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_depthFirstTopologicalSort (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 58)).stringValue () ;
  result << " & outSortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outSortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 60)).stringValue () ;
  result << " & outUnsortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outUnsortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray sortedList ;\n"
    "  capCollectionElementArray unsortedList ;\n"
    "  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n"
    "  outSortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 67)).stringValue () ;
  result << " (sortedList) ;\n"
    "  outUnsortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 68)).stringValue () ;
  result << " (unsortedList) ;\n"
    "}\n"
    "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_reversedGraph (LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.reversedGraphFromGraph (*this COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_circularities (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 82)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray infoList ;\n"
    "  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 87)).stringValue () ;
  result << " (infoList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_nodesWithNoSuccessor (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 92)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray infoList ;\n"
    "  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 97)).stringValue () ;
  result << " (infoList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_nodesWithNoPredecessor (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 102)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray infoList ;\n"
    "  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 107)).stringValue () ;
  result << " (infoList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subgraphFromNodes (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstringlist & inStartKeyList,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const GALGAS_stringset & inKeysToExclude,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_lstringlist GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_accessibleNodesFrom (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstringlist & inStartKeyList,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const GALGAS_stringset & inNodesToExclude,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_lstringlist result ;\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " resultingGraph ;\n"
    "  subGraph (resultingGraph,\n"
    "            inStartKeyList,\n"
    "            inNodesToExclude,\n"
    "            inCompiler\n"
    "            COMMA_THERE) ;\n"
    "  if (resultingGraph.isValid ()) {\n"
    "    result = resultingGraph.getter_lkeyList (THERE) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate arrayTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_string & /* in_ELEMENT_5F_TYPE_5F_IDENTIFIER */,
                                                                              const GALGAS_uint & /* in_DIMENSION */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public: inline GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "  mSharedObject (NULL) {\n"
    "  }\n"
    "\n"
    "//--------------------------------- Virtual destructor\n"
    "  public: virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- Handle copy\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject) ;\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject) ;\n"
    "\n"
    "//--- Insulate\n"
    "  private: VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;\n"
    "\n"
    "//--- isValid\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const {\n"
    "    return NULL != mSharedObject ;\n"
    "  }\n"
    "\n"
    "//--- Drop\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--- Private attribute\n"
    "  private: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mSharedObject ;\n"
    "\n"
    "//--- Drop\n"
    "  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
    "                                              const int32_t inIndentation) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate arrayTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_uint & in_DIMENSION,
                                                                                          const GALGAS_stringlist & in_DIMENSION_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_SharedObject {\n"
    "  private: GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mObjectArray ;\n" ;
  GALGAS_uint index_426_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_426 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_426.hasCurrentObject ()) {
      result << "  private: uint32_t mSize" ;
      result << enumerator_426.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_426_.increment () ;
      enumerator_426.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_559_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_559 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_559.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_559.current_mValue (HERE).stringValue () ;
      if (enumerator_559.hasNextObject ()) {
        result << ",\n" ;
      }
      index_559_.increment () ;
      enumerator_559.gotoNextObject () ;
    }
  }
  result << "\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "  public: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inPointer\n"
    "      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Destructor\n"
    "  public: virtual ~ cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "  private: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--- Comparison\n"
    "  public: VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const ;\n"
    "\n"
    "//--- \n" ;
  GALGAS_uint index_1169_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1169 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1169.hasCurrentObject ()) {
      result << "  public: inline uint32_t size" ;
      result << enumerator_1169.current_mValue (HERE).stringValue () ;
      result << " (void) const { return mSize" ;
      result << enumerator_1169.current_mValue (HERE).stringValue () ;
      result << " ; }\n" ;
      index_1169_.increment () ;
      enumerator_1169.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " objectAtAbsoluteIndex (const int32_t inIndex) const ;\n"
    "\n"
    "  public: VIRTUAL_IN_DEBUG void setObjectAtAbsoluteIndex (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject,\n"
    "                                                           const int32_t inIndex) ;\n"
    "\n"
    "//--- \n"
    "  public: VIRTUAL_IN_DEBUG int32_t indexForIndexes (" ;
  GALGAS_uint index_1672_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1672 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_1672 = enumerator_1672.hasCurrentObject () ;
    if (nonEmpty_enumerator_1672) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_1672.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_1672.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_1672_.increment () ;
      enumerator_1672.gotoNextObject () ;
    }
  }
  result << " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const ;\n"
    "\n"
    "//--- \n"
    "  public: VIRTUAL_IN_DEBUG void setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1862_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1862 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1862.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_1862.current_mValue (HERE).stringValue () ;
      if (enumerator_1862.hasNextObject ()) {
        result << ",\n" ;
      }
      index_1862_.increment () ;
      enumerator_1862.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2153_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2153 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2153.hasCurrentObject ()) {
      result << "const uint32_t inSize" ;
      result << enumerator_2153.current_mValue (HERE).stringValue () ;
      if (enumerator_2153.hasNextObject ()) {
        result << ",\n"
          "                                                      " ;
      }
      index_2153_.increment () ;
      enumerator_2153.gotoNextObject () ;
    }
  }
  result << "    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_SharedObject (THERE),\n"
    "mObjectArray (NULL),\n" ;
  GALGAS_uint index_2367_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2367 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2367.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_2367.current_mValue (HERE).stringValue () ;
      result << " (inSize" ;
      result << enumerator_2367.current_mValue (HERE).stringValue () ;
      result << ")" ;
      if (enumerator_2367.hasNextObject ()) {
        result << ",\n" ;
      }
      index_2367_.increment () ;
      enumerator_2367.gotoNextObject () ;
    }
  }
  result << " {\n"
    "  macroMyNewArray (mObjectArray, GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ", " ;
  GALGAS_uint index_2526_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2526 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2526.hasCurrentObject ()) {
      result << " inSize" ;
      result << enumerator_2526.current_mValue (HERE).stringValue () ;
      if (enumerator_2526.hasNextObject ()) {
        result << " * " ;
      }
      index_2526_.increment () ;
      enumerator_2526.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inPointer\n"
    "    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_SharedObject (THERE),\n"
    "mObjectArray (NULL),\n" ;
  GALGAS_uint index_2895_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2895 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2895.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_2895.current_mValue (HERE).stringValue () ;
      result << " (inPointer->size" ;
      result << enumerator_2895.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_2895.hasNextObject ()) {
        result << ",\n" ;
      }
      index_2895_.increment () ;
      enumerator_2895.gotoNextObject () ;
    }
  }
  result << " {\n"
    "  const uint32_t size = " ;
  GALGAS_uint index_3022_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3022 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3022.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_3022.current_mValue (HERE).stringValue () ;
      if (enumerator_3022.hasNextObject ()) {
        result << " * " ;
      }
      index_3022_.increment () ;
      enumerator_3022.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "  macroMyNewArray (mObjectArray, GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ", size) ;\n"
    "  for (uint32_t i=0 ; i<size ; i++) {\n"
    "    mObjectArray [i] = inPointer->mObjectArray [i] ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static inline uint32_t " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_3444_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3444 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3444.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inIndex" ;
      result << enumerator_3444.current_mValue (HERE).stringValue () ;
      if (enumerator_3444.hasNextObject ()) {
        result << ",\n" ;
      }
      index_3444_.increment () ;
      enumerator_3444.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3549_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)).isValid ()) {
    cEnumerator_stringlist enumerator_3549 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)), kENUMERATION_UP) ;
    while (enumerator_3549.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_3549.current_mValue (HERE).stringValue () ;
      index_3549_.increment () ;
      enumerator_3549.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "  uint32_t idx = inIndex0 ;\n" ;
  GALGAS_uint index_3676_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)).isValid ()) {
    cEnumerator_stringlist enumerator_3676 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)), kENUMERATION_UP) ;
    while (enumerator_3676.hasCurrentObject ()) {
      result << "  idx *= inSize" ;
      result << enumerator_3676.current_mValue (HERE).stringValue () ;
      result << " ;\n"
        "  idx += inIndex" ;
      result << enumerator_3676.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_3676_.increment () ;
      enumerator_3676.gotoNextObject () ;
    }
  }
  result << "  return idx ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "int32_t cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_3968_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3968 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3968.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inIndex" ;
      result << enumerator_3968.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_3968_.increment () ;
      enumerator_3968.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  int32_t result = -1 ;\n"
    "  " ;
  GALGAS_uint index_4134_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4134 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4134.hasCurrentObject ()) {
      result << "if (inIndex" ;
      result << enumerator_4134.current_mValue (HERE).stringValue () ;
      result << " >= size" ;
      result << enumerator_4134.current_mValue (HERE).stringValue () ;
      result << " ()) {\n"
        "    C_String s ;\n"
        "    s << \"array index " ;
      result << enumerator_4134.current_mValue (HERE).stringValue () ;
      result << " : \" << cStringWithUnsigned (inIndex" ;
      result << enumerator_4134.current_mValue (HERE).stringValue () ;
      result << ") << \" >= size \" << cStringWithUnsigned (size" ;
      result << enumerator_4134.current_mValue (HERE).stringValue () ;
      result << " ()) ;\n"
        "    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
      if (enumerator_4134.hasNextObject ()) {
        result << "  }else " ;
      }
      index_4134_.increment () ;
      enumerator_4134.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    result = (int32_t) " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_4509_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4509 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4509.hasCurrentObject ()) {
      result << "inIndex" ;
      result << enumerator_4509.current_mValue (HERE).stringValue () ;
      if (enumerator_4509.hasNextObject ()) {
        result << ", " ;
      }
      index_4509_.increment () ;
      enumerator_4509.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4593_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 139)).isValid ()) {
    cEnumerator_stringlist enumerator_4593 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 139)), kENUMERATION_UP) ;
    while (enumerator_4593.hasCurrentObject ()) {
      result << ", size" ;
      result << enumerator_4593.current_mValue (HERE).stringValue () ;
      result << " ()" ;
      index_4593_.increment () ;
      enumerator_4593.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectAtAbsoluteIndex (const int32_t inIndex) const {\n"
    "  return mObjectArray [inIndex] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setObjectAtAbsoluteIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t inIndex) {\n"
    "  mObjectArray [inIndex] = inObject ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroMyDeleteArray (mObjectArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5647_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5647 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5647.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_5647.current_mValue (HERE).stringValue () ;
      if (enumerator_5647.hasNextObject ()) {
        result << ",\n" ;
      }
      index_5647_.increment () ;
      enumerator_5647.gotoNextObject () ;
    }
  }
  result << "      \n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  macroMyNewArrayThere (p, GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ", " ;
  GALGAS_uint index_5875_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5875 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5875.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_5875.current_mValue (HERE).stringValue () ;
      if (enumerator_5875.hasNextObject ()) {
        result << " * " ;
      }
      index_5875_.increment () ;
      enumerator_5875.gotoNextObject () ;
    }
  }
  result << ") ;\n" ;
  GALGAS_uint index_5944_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5944 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5944.hasCurrentObject ()) {
      result << "  uint32_t min" ;
      result << enumerator_5944.current_mValue (HERE).stringValue () ;
      result << " = uimin32 (size" ;
      result << enumerator_5944.current_mValue (HERE).stringValue () ;
      result << " (), inSize" ;
      result << enumerator_5944.current_mValue (HERE).stringValue () ;
      result << ") ;\n" ;
      index_5944_.increment () ;
      enumerator_5944.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6052_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6052 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6052.hasCurrentObject ()) {
      result << "  for (uint32_t i" ;
      result << enumerator_6052.current_mValue (HERE).stringValue () ;
      result << "=0 ; i" ;
      result << enumerator_6052.current_mValue (HERE).stringValue () ;
      result << "<min" ;
      result << enumerator_6052.current_mValue (HERE).stringValue () ;
      result << " ; i" ;
      result << enumerator_6052.current_mValue (HERE).stringValue () ;
      result << "++) {\n" ;
      index_6052_.increment () ;
      enumerator_6052.gotoNextObject () ;
    }
  }
  result << "        const uint32_t idxSource = " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_6231_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6231 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6231.hasCurrentObject ()) {
      result << "i" ;
      result << enumerator_6231.current_mValue (HERE).stringValue () ;
      if (enumerator_6231.hasNextObject ()) {
        result << ", " ;
      }
      index_6231_.increment () ;
      enumerator_6231.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6309_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 180)).isValid ()) {
    cEnumerator_stringlist enumerator_6309 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 180)), kENUMERATION_UP) ;
    while (enumerator_6309.hasCurrentObject ()) {
      result << ", size" ;
      result << enumerator_6309.current_mValue (HERE).stringValue () ;
      result << " ()" ;
      index_6309_.increment () ;
      enumerator_6309.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "        const uint32_t idxTarget = " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_6436_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6436 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6436.hasCurrentObject ()) {
      result << "i" ;
      result << enumerator_6436.current_mValue (HERE).stringValue () ;
      if (enumerator_6436.hasNextObject ()) {
        result << ", " ;
      }
      index_6436_.increment () ;
      enumerator_6436.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6514_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 181)).isValid ()) {
    cEnumerator_stringlist enumerator_6514 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 181)), kENUMERATION_UP) ;
    while (enumerator_6514.hasCurrentObject ()) {
      result << ", inSize" ;
      result << enumerator_6514.current_mValue (HERE).stringValue () ;
      index_6514_.increment () ;
      enumerator_6514.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "        p [idxTarget] = mObjectArray [idxSource] ;\n" ;
  GALGAS_uint index_6622_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6622 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6622.hasCurrentObject ()) {
      result << "  }\n" ;
      index_6622_.increment () ;
      enumerator_6622.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6662_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6662 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6662.hasCurrentObject ()) {
      result << "  mSize" ;
      result << enumerator_6662.current_mValue (HERE).stringValue () ;
      result << " = inSize" ;
      result << enumerator_6662.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_6662_.increment () ;
      enumerator_6662.gotoNextObject () ;
    }
  }
  result << "  macroMyDeleteArray (mObjectArray) ;\n"
    "  mObjectArray = p ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroDetachSharedObject (mSharedObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  macroDetachSharedObject (mSharedObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSourceObject) :\n"
    "AC_GALGAS_root (),\n"
    "mSharedObject (NULL) {\n"
    "  macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSourceObject) {\n"
    "  if (this != & inSourceObject) {\n"
    "    macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n"
    "  }\n"
    "  return *this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_new (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8165_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8165 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8165.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inSize" ;
      result << enumerator_8165.current_mValue (HERE).stringValue () ;
      if (enumerator_8165.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8165_.increment () ;
      enumerator_8165.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_8326_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8326 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8326.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_8326.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_8326.hasNextObject ()) {
        result << " && " ;
      }
      index_8326_.increment () ;
      enumerator_8326.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroMyNew (result.mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_8472_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8472 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8472.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_8472.current_mValue (HERE).stringValue () ;
      result << ".uintValue ()" ;
      if (enumerator_8472.hasNextObject ()) {
        result << ", " ;
      }
      index_8472_.increment () ;
      enumerator_8472.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
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
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t /* inIndentation */) const {\n"
    "  ioString << \"<@ptrint:\" ;\n"
    "  if (NULL == mSharedObject) {\n"
    "    ioString << \"NULL\" ;\n"
    "  }else{\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    ioString " ;
  columnMarker = result.currentColumn () ;
  result << "<< \"array [\"" ;
  GALGAS_uint index_9031_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_9031 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9031.hasCurrentObject ()) {
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "<< cStringWithUnsigned (mSharedObject->size" ;
      result << enumerator_9031.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_9031.hasNextObject ()) {
        result << " << \", \"" ;
      }
      index_9031_.increment () ;
      enumerator_9031.gotoNextObject () ;
    }
  }
  result << "             << \"] of @uint\" ;\n"
    "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_uint GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_axisCount (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_uint result ;\n"
    "  if (isValid ()) {\n"
    "    result = GALGAS_uint (" ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 263)).stringValue () ;
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_range GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_rangeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inAxisIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_range result ;\n"
    "  if (isValid () && inAxisIndex.isValid ()) {\n"
    "    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n"
    "    if (axisIndex >= " ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 276)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"getter @ptrint sizeForAxis: argument >= dimension\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
  GALGAS_uint index_10162_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_10162 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10162.hasCurrentObject ()) {
      result << "    }else if (" ;
      result << enumerator_10162.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) {\n"
        "      result = GALGAS_range (GALGAS_uint (0), GALGAS_uint (mSharedObject->size" ;
      result << enumerator_10162.current_mValue (HERE).stringValue () ;
      result << " ())) ;\n" ;
      index_10162_.increment () ;
      enumerator_10162.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_uint GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_sizeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inAxisIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_uint result ;\n"
    "  if (isValid () && inAxisIndex.isValid ()) {\n"
    "    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n"
    "    if (axisIndex >= " ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 297)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"getter @ptrint sizeForAxis: argument >= dimension\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
  GALGAS_uint index_10994_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_10994 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10994.hasCurrentObject ()) {
      result << "    }else if (" ;
      result << enumerator_10994.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) {\n"
        "      result = GALGAS_uint (mSharedObject->size" ;
      result << enumerator_10994.current_mValue (HERE).stringValue () ;
      result << " ()) ;\n" ;
      index_10994_.increment () ;
      enumerator_10994.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_isValueValidAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11363_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11363 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11363.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inIndex" ;
      result << enumerator_11363.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_11363_.increment () ;
      enumerator_11363.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (isValid ()" ;
  GALGAS_uint index_11548_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11548 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11548.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_11548.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_11548_.increment () ;
      enumerator_11548.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11748_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11748 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11748.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_11748.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_11748_.increment () ;
      enumerator_11748.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      result = GALGAS_bool (mSharedObject->objectAtAbsoluteIndex (idx).isValid ()) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_valueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12303_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12303 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12303.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inIndex" ;
      result << enumerator_12303.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_12303_.increment () ;
      enumerator_12303.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (isValid ()" ;
  GALGAS_uint index_12510_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12510 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12510.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_12510.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_12510_.increment () ;
      enumerator_12510.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12710_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12710 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12710.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_12710.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_12710_.increment () ;
      enumerator_12710.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      result = mSharedObject->objectAtAbsoluteIndex (idx) ;\n"
    "      if (! result.isValid ()) {\n"
    "        C_String s ;\n"
    "        s << \"getter @ptrint valueAtIndex: object at index (\"" ;
  GALGAS_uint index_13117_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13117 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13117.hasCurrentObject ()) {
      result << "\n"
        "             << cStringWithUnsigned (mSharedObject->size" ;
      result << enumerator_13117.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_13117.hasNextObject ()) {
        result << " << \", \"" ;
      }
      index_13117_.increment () ;
      enumerator_13117.gotoNextObject () ;
    }
  }
  result << "\n"
    "             << \") is invalid\" ;\n"
    "        inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::insulate (LOCATION_ARGS) {\n"
    "  if (isValid () && !mSharedObject->isUniquelyReferenced ()) {\n"
    "    cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "    macroMyNew (p, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mSharedObject COMMA_THERE)) ;\n"
    "    macroAssignSharedObject (mSharedObject, p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_setValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inValue,\n" ;
  GALGAS_uint index_14152_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14152 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14152.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_uint inIndex" ;
      result << enumerator_14152.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_14152_.increment () ;
      enumerator_14152.gotoNextObject () ;
    }
  }
  result << "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_14331_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14331 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14331.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_14331.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_14331_.increment () ;
      enumerator_14331.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14653_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14653 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14653.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_14653.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_14653_.increment () ;
      enumerator_14653.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      mSharedObject->setObjectAtAbsoluteIndex (inValue, idx) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_forceValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inValue,\n" ;
  GALGAS_uint index_15188_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15188 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15188.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint inIndex" ;
      result << enumerator_15188.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_15188_.increment () ;
      enumerator_15188.gotoNextObject () ;
    }
  }
  result << " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_15362_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15362 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15362.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_15362.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_15362_.increment () ;
      enumerator_15362.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "  //--- Resize \?\n"
    "    const bool resize = " ;
  GALGAS_uint index_15666_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15666 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15666.hasCurrentObject ()) {
      result << "(inIndex" ;
      result << enumerator_15666.current_mValue (HERE).stringValue () ;
      result << ".uintValue () >= mSharedObject->size" ;
      result << enumerator_15666.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_15666.hasNextObject ()) {
        result << " || " ;
      }
      index_15666_.increment () ;
      enumerator_15666.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "    if (resize) {\n" ;
  GALGAS_uint index_15805_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15805 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15805.hasCurrentObject ()) {
      result << "      const uint32_t newSize" ;
      result << enumerator_15805.current_mValue (HERE).stringValue () ;
      result << " = uimax32 (mSharedObject->size" ;
      result << enumerator_15805.current_mValue (HERE).stringValue () ;
      result << " (), inIndex" ;
      result << enumerator_15805.current_mValue (HERE).stringValue () ;
      result << ".uintValue () + 1) ;\n" ;
      index_15805_.increment () ;
      enumerator_15805.gotoNextObject () ;
    }
  }
  result << "      mSharedObject->setSize (" ;
  GALGAS_uint index_15992_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15992 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15992.hasCurrentObject ()) {
      result << "newSize" ;
      result << enumerator_15992.current_mValue (HERE).stringValue () ;
      if (enumerator_15992.hasNextObject ()) {
        result << ", " ;
      }
      index_15992_.increment () ;
      enumerator_15992.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    }\n"
    "  //---\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_16144_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16144 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16144.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_16144.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_16144_.increment () ;
      enumerator_16144.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      mSharedObject->setObjectAtAbsoluteIndex (inValue, idx) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_setSizeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_uint inNewSize,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_uint inAxisIndex,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inNewSize.isValid () && inAxisIndex.isValid ()) {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "  //--- \n"
    "    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n"
    "    if (axisIndex >= " ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 451)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"setter @ptrint setSizeForAxis: axis index (\"\n"
    "        << cStringWithUnsigned (axisIndex) << \") >= dimension (" ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 454)).stringValue () ;
  result << ")\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
    "    }else{\n" ;
  GALGAS_uint index_17372_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17372 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17372.hasCurrentObject ()) {
      result << "      const uint32_t newSize" ;
      result << enumerator_17372.current_mValue (HERE).stringValue () ;
      result << " = (" ;
      result << enumerator_17372.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) \? inNewSize.uintValue () : mSharedObject->size" ;
      result << enumerator_17372.current_mValue (HERE).stringValue () ;
      result << " () ;\n" ;
      index_17372_.increment () ;
      enumerator_17372.gotoNextObject () ;
    }
  }
  result << "      mSharedObject->setSize (" ;
  GALGAS_uint index_17567_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17567 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17567.hasCurrentObject ()) {
      result << "newSize" ;
      result << enumerator_17567.current_mValue (HERE).stringValue () ;
      if (enumerator_17567.hasNextObject ()) {
        result << ", " ;
      }
      index_17567_.increment () ;
      enumerator_17567.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_invalidateValueAtIndex (" ;
  GALGAS_uint index_17858_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17858 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_17858 = enumerator_17858.hasCurrentObject () ;
    if (nonEmpty_enumerator_17858) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_17858.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_uint inIndex" ;
      result << enumerator_17858.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_17858_.increment () ;
      enumerator_17858.gotoNextObject () ;
    }
  }
  result << "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_18017_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18017 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18017.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_18017.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_18017_.increment () ;
      enumerator_18017.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_18339_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18339 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18339.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_18339.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_18339_.increment () ;
      enumerator_18339.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      mSharedObject->setObjectAtAbsoluteIndex (GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (), idx) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_18848_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18848 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18848.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint inNewSize" ;
      result << enumerator_18848.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_18848_.increment () ;
      enumerator_18848.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_19009_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19009 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19009.hasCurrentObject ()) {
      result << " && inNewSize" ;
      result << enumerator_19009.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_19009_.increment () ;
      enumerator_19009.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "    mSharedObject->setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_19305_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19305 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19305.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inNewSize" ;
      result << enumerator_19305.current_mValue (HERE).stringValue () ;
      result << ".uintValue ()" ;
      if (enumerator_19305.hasNextObject ()) {
        result << ",\n" ;
      }
      index_19305_.increment () ;
      enumerator_19305.gotoNextObject () ;
    }
  }
  result << "\n"
    "                            COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const {\n"
    "  typeComparisonResult result =  kOperandEqual ;\n" ;
  GALGAS_uint index_19724_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19724 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19724.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    if (mSize" ;
      result << enumerator_19724.current_mValue (HERE).stringValue () ;
      result << " < inOperand->mSize" ;
      result << enumerator_19724.current_mValue (HERE).stringValue () ;
      result << ") {\n"
        "      result = kFirstOperandLowerThanSecond ;\n"
        "    }else if (mSize" ;
      result << enumerator_19724.current_mValue (HERE).stringValue () ;
      result << " > inOperand->mSize" ;
      result << enumerator_19724.current_mValue (HERE).stringValue () ;
      result << ") {\n"
        "      result = kFirstOperandGreaterThanSecond ;\n"
        "    }\n"
        "  }\n" ;
      index_19724_.increment () ;
      enumerator_19724.gotoNextObject () ;
    }
  }
  result << "  for (uint32_t i=0 ; (i<(" ;
  GALGAS_uint index_20039_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_20039 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20039.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_20039.current_mValue (HERE).stringValue () ;
      if (enumerator_20039.hasNextObject ()) {
        result << "*" ;
      }
      index_20039_.increment () ;
      enumerator_20039.gotoNextObject () ;
    }
  }
  result << ")) && (result == kOperandEqual) ; i++) {\n"
    "    GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptrObject1 = & (mObjectArray [i]) ;\n"
    "    GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptrObject2 = & (inOperand->mObjectArray [i]) ;\n"
    "    if ((! ptrObject1->isValid ()) && ptrObject2->isValid ()) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (ptrObject1->isValid () && ! ptrObject2->isValid ()) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else if (ptrObject1->isValid () && ptrObject2->isValid ()) {\n"
    "      result = ptrObject1->objectCompare (* ptrObject2) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = (isValid () && inOperand.isValid ()) \? kOperandEqual : kOperandNotValid ;\n"
    "  if (kOperandEqual == result) {\n"
    "    result = mSharedObject->objectCompare (inOperand.mSharedObject) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate listmapTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_listmap {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate listmapTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
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
    "AC_GALGAS_listmap () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyMap (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyListMap (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey" ;
  GALGAS_uint index_767_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_767 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_767.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_767.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue () ;
      result << " & inOperand" ;
      result << index_767_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue () ;
      index_767_IDX.increment () ;
      enumerator_767.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inKey.isValid ()" ;
  GALGAS_uint index_983_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_983 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_983.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_983_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 24)).stringValue () ;
      result << ".isValid ()" ;
      index_983_IDX.increment () ;
      enumerator_983.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    capCollectionElement attributes ;\n"
    "    GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_1212_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1212 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1212.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_1212_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 30)).stringValue () ;
      index_1212_IDX.increment () ;
      enumerator_1212.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    addObjectInListMap (inKey.stringValue (), attributes) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_listForKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  return GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (listForKey (inKey)) ;\n"
    "}\n"
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
    "                       " ;
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
    "  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cListMapElement) ;\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (p->mKey, p->mSharedListMapList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_string cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_key (LOCATION_ARGS) const {\n"
    "  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cListMapElement) ;\n"
    "  return GALGAS_string (p->mKey) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_mList (LOCATION_ARGS) const {\n"
    "  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cListMapElement) ;\n"
    "  return GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (p->mSharedListMapList) ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */,
                                                                            const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  GALGAS_uint index_361_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_361 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_361.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "extern const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_361.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 12)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_361_.increment () ;
      enumerator_361.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_map {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  \n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeHeader2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (C_Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 2: class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cMapElement {\n"
    "//--- Map attributes\n" ;
  GALGAS_uint index_431_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_431 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_431.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << enumerator_431.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_431.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
      result << " ;\n" ;
      index_431_.increment () ;
      enumerator_431.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_695_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_695 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_695.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_695.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_695.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      index_695_.increment () ;
      enumerator_695.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cMapElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    " public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                        const GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapRemoveMethodListAST & in_REMOVE_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE,
                                                                                        const GALGAS_bool & in_ACTIVATE_5F_REMPLACEMENT_5F_SUGGESTIONS
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_252_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_252 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_252.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_252.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      result << " & in_" ;
      result << enumerator_252.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      index_252_.increment () ;
      enumerator_252.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cMapElement (inKey COMMA_THERE)" ;
  GALGAS_uint index_470_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_470 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_470.hasCurrentObject ()) {
      result << ",\n"
        "mProperty_" ;
      result << enumerator_470.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result << " (in_" ;
      result << enumerator_470.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result << ")" ;
      index_470_.increment () ;
      enumerator_470.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mProperty_lkey.isValid ()" ;
  GALGAS_uint index_849_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_849 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_849.hasCurrentObject ()) {
      result << " && mProperty_" ;
      result << enumerator_849.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 21)).stringValue () ;
      result << ".isValid ()" ;
      index_849_.increment () ;
      enumerator_849.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement * cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cMapElement * result = NULL ;\n"
    "  macroMyNew (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mProperty_lkey" ;
  GALGAS_uint index_1259_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1259 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1259.hasCurrentObject ()) {
      result << ", mProperty_" ;
      result << enumerator_1259.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 32)).stringValue () ;
      index_1259_.increment () ;
      enumerator_1259.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 40)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {\n" ;
  }else if (kBoolFalse == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
    GALGAS_uint index_1798_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1798 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1798.hasCurrentObject ()) {
        result << "  ioString << \"\\n\" ;\n"
          "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
          "  ioString << " ;
        result << enumerator_1798.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 47)).stringValue () ;
        result << " \":\" ;\n"
          "  mProperty_" ;
        result << enumerator_1798.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".description (ioString, inIndentation) ;\n" ;
        index_1798_.increment () ;
        enumerator_1798.gotoNextObject () ;
      }
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;\n" ;
  GALGAS_uint index_2517_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2517 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2517.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    result = mProperty_" ;
      result << enumerator_2517.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 60)).stringValue () ;
      result << ".objectCompare (operand->mProperty_" ;
      result << enumerator_2517.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 60)).stringValue () ;
      result << ") ;\n"
        "  }\n" ;
      index_2517_.increment () ;
      enumerator_2517.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_map (" ;
  result << in_ACTIVATE_5F_REMPLACEMENT_5F_SUGGESTIONS.getter_cString (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 69)).stringValue () ;
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) :\n"
    "AC_GALGAS_map (inSource) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) {\n"
    "  * ((AC_GALGAS_map *) this) = inSource ;\n"
    "  return * this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyMap (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyMap (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_mapWithMapToOverride (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inMapToOverride\n"
    "                                                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_overriddenMap (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  getOverridenMap (result, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_4968_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4968 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4968.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_4968.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 115)).stringValue () ;
      result << " & inArgument" ;
      result << index_4968_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 115)).stringValue () ;
      index_4968_IDX.increment () ;
      enumerator_4968.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  macroMyNew (p, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inKey" ;
  GALGAS_uint index_5284_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5284 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5284.hasCurrentObject ()) {
      result << ", inArgument" ;
      result << index_5284_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 122)).stringValue () ;
      index_5284_IDX.increment () ;
      enumerator_5284.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  capCollectionElement attributes ;\n"
    "  attributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n" ;
  if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
    result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
  }
  result << "const char * kInsertErrorMessage = \"@" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " insert error: '%K' already in map\" ;\n"
    "const char * kShadowErrorMessage = \"\" ;\n"
    "performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n" ;
  if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
    result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
  }
  result << "}\n"
    "\n" ;
  GALGAS_uint index_5744_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_5744 (in_INSERT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5744.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_5744.current_mInsertMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 137)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_6038_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6038 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_6038.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_6038.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 139)).stringValue () ;
          result << " inArgument" ;
          result << index_6038_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 139)).stringValue () ;
          index_6038_IDX.increment () ;
          enumerator_6038.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = NULL ;\n"
        "  macroMyNew (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (inKey" ;
      GALGAS_uint index_6370_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6370 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_6370.hasCurrentObject ()) {
          result << ", inArgument" ;
          result << index_6370_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 146)).stringValue () ;
          index_6370_IDX.increment () ;
          enumerator_6370.gotoNextObject () ;
        }
      }
      result << " COMMA_HERE)) ;\n"
        "  capCollectionElement attributes ;\n"
        "  attributes.setPointer (p) ;\n"
        "  macroDetachSharedObject (p) ;\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
      }
      result << "const char * kInsertErrorMessage = " ;
      result << enumerator_5744.current_mErrorMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue () ;
      result << " ;\n"
        "const char * kShadowErrorMessage = " ;
      result << enumerator_5744.current_mShadowErrorMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 154)).stringValue () ;
      result << " ;\n"
        "performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_5744_.increment () ;
      enumerator_5744.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6882_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_6882 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6882.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_6882.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 162)).stringValue () ;
      result << " = " ;
      result << enumerator_6882.current_mErrorMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 162)).stringValue () ;
      result << " ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::method_" ;
      result << enumerator_6882.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 164)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_7451_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_7451 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_7451.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_7451.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).stringValue () ;
          result << " & outArgument" ;
          result << index_7451_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).stringValue () ;
          index_7451_IDX.increment () ;
          enumerator_7451.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_1 = enumerator_6882.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_location & outKeyLocation" ;
      }else if (kBoolFalse == test_1) {
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) performSearch (" ;
      columnMarker = result.currentColumn () ;
      result << "inKey,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inCompiler,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_6882.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 175)).stringValue () ;
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE) ;\n"
        "  if (NULL == p) {\n" ;
      GALGAS_uint index_8068_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8068 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8068.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_8068_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 179)).stringValue () ;
          result << ".drop () ;\n" ;
          index_8068_IDX.increment () ;
          enumerator_8068.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_2 = enumerator_6882.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "    outKeyLocation.drop () ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      result << "  }else{\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_8321_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8321 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8321.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_8321_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 187)).stringValue () ;
          result << " = p->mProperty_" ;
          result << enumerator_8321.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 187)).stringValue () ;
          result << " ;\n" ;
          index_8321_IDX.increment () ;
          enumerator_8321.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_3 = enumerator_6882.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "    outKeyLocation = p->mProperty_lkey.mProperty_location ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      result << "  }\n"
        "}\n"
        "\n" ;
      index_6882_.increment () ;
      enumerator_6882.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8588_ (0) ;
  if (in_REMOVE_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapRemoveMethodListAST enumerator_8588 (in_REMOVE_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8588.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_8588.current_mMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 199)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_8872_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8872 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8872.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_8872.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).stringValue () ;
          result << " & outArgument" ;
          result << index_8872_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).stringValue () ;
          index_8872_IDX.increment () ;
          enumerator_8872.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  const char * kRemoveErrorMessage = " ;
      result << enumerator_8588.current_mErrorMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 205)).stringValue () ;
      result << " ;\n"
        "  capCollectionElement attributes ;\n"
        "  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes.ptr () ;\n"
        "  if (NULL == p) {\n" ;
      GALGAS_uint index_9421_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9421 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9421.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_9421_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 211)).stringValue () ;
          result << ".drop () ;\n" ;
          index_9421_IDX.increment () ;
          enumerator_9421.gotoNextObject () ;
        }
      }
      result << "  }else{\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_9602_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9602 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9602.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_9602_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 216)).stringValue () ;
          result << " = p->mProperty_" ;
          result << enumerator_9602.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 216)).stringValue () ;
          result << " ;\n" ;
          index_9602_IDX.increment () ;
          enumerator_9602.gotoNextObject () ;
        }
      }
      result << "  }\n"
        "}\n"
        "\n" ;
      index_8588_.increment () ;
      enumerator_8588.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_4 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "void GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::setter_insertOrReplace (" ;
    columnMarker = result.currentColumn () ;
    result << "GALGAS_lstring inKey" ;
    GALGAS_uint index_10022_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_10022 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_10022.hasCurrentObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_" ;
        result << enumerator_10022.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 227)).stringValue () ;
        result << " inArgument" ;
        result << index_10022_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 227)).stringValue () ;
        index_10022_IDX.increment () ;
        enumerator_10022.gotoNextObject () ;
      }
    }
    result << "\n"
      " " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
      "  cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * p = NULL ;\n"
      "  macroMyNew (p, cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (inKey" ;
    GALGAS_uint index_10315_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_10315 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_10315.hasCurrentObject ()) {
        result << ", inArgument" ;
        result << index_10315_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 233)).stringValue () ;
        index_10315_IDX.increment () ;
        enumerator_10315.gotoNextObject () ;
      }
    }
    result << " COMMA_HERE)) ;\n"
      "  capCollectionElement attributes ;\n"
      "  attributes.setPointer (p) ;\n"
      "  macroDetachSharedObject (p) ;\n"
      "  performInsertOrReplace (attributes) ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_4) {
  }
  GALGAS_uint index_10586_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10586 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10586.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_10586.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 245)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_10586.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 245)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_string & inKey,\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes ;\n"
        "  GALGAS_" ;
      result << enumerator_10586.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 250)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_10586.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 253)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_10586_IDX.increment () ;
      enumerator_10586.gotoNextObject () ;
    }
  }
  GALGAS_uint index_11610_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11610 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11610.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_11610.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 261)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 261)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << enumerator_11610.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 261)).stringValue () ;
      result << " inAttributeValue,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_string inKey,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    p->mProperty_" ;
      result << enumerator_11610.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 269)).stringValue () ;
      result << " = inAttributeValue ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_11610_IDX.increment () ;
      enumerator_11610.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::readWriteAccessForWithInstruction (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCompiler,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const GALGAS_string & inKey\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * result = (cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;\n"
    "  macroNullOrValidSharedObject (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return result ;\n"
    "}\n"
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
    "                       " ;
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
    "  const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (p->mProperty_lkey" ;
  GALGAS_uint index_14040_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14040 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14040.hasCurrentObject ()) {
      result << ", p->mProperty_" ;
      result << enumerator_14040.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 301)).stringValue () ;
      index_14040_.increment () ;
      enumerator_14040.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_lstring cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_lkey (LOCATION_ARGS) const {\n"
    "  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cMapElement) ;\n"
    "  return p->mProperty_lkey ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_14509_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14509 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14509.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_14509.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 316)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_14509.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 316)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mProperty_" ;
      result << enumerator_14509.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 319)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_14509_IDX.increment () ;
      enumerator_14509.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::optional_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey" ;
  GALGAS_uint index_15338_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15338 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15338.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << enumerator_15338.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 326)).stringValue () ;
      result << " & outArgument" ;
      result << index_15338_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 326)).stringValue () ;
      index_15338_IDX.increment () ;
      enumerator_15338.gotoNextObject () ;
    }
  }
  result << ") const {\n"
    "  const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) searchForKey (" ;
  columnMarker = result.currentColumn () ;
  result << "inKey) ;\n"
    "  const bool result = NULL != p ;\n"
    "  if (result) {\n"
    "    macroValidSharedObject (p, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_15730_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15730 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15730.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_15730_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 334)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_15730.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 334)).stringValue () ;
      result << " ;\n" ;
      index_15730_IDX.increment () ;
      enumerator_15730.gotoNextObject () ;
    }
  }
  result << "  }else{\n" ;
  GALGAS_uint index_15883_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15883 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15883.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_15883_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 338)).stringValue () ;
      result << ".drop () ;\n" ;
      index_15883_IDX.increment () ;
      enumerator_15883.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate dictTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" dict"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Attributes\n"
    "  private: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mSharedDict ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Destructor\n"
    "  public: virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "\n"
    "//--- isValid\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedDict != NULL ; }\n"
    "\n"
    "//--- drop\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--- Implementation of reader 'description'\n"
    "  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
    "                                              const int32_t inIndentation) const ;\n"
    "\n"
    "//--- Insulate\n"
    "  private: void insulate (LOCATION_ARGS) ;\n"
    "\n"
    "//--- Object compare\n"
    "  public: VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const ;\n"
    "\n"
    "//--- Enumeration\n"
    "  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate dictTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                         const GALGAS_string & in_KEY_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element {\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mInfPtr ;\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mSupPtr ;\n"
    "  public: int32_t mBalance ;\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & in_key" ;
  GALGAS_uint index_439_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_439 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_439.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_439.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue () ;
      result << " & inProperty_" ;
      result << enumerator_439.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue () ;
      index_439_.increment () ;
      enumerator_439.gotoNextObject () ;
    }
  }
  result << ") :\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (in_key" ;
  GALGAS_uint index_652_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_652 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_652.hasCurrentObject ()) {
      result << ", inProperty_" ;
      result << enumerator_652.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 15)).stringValue () ;
      index_652_.increment () ;
      enumerator_652.gotoNextObject () ;
    }
  }
  result << "),\n"
    "  mInfPtr (NULL),\n"
    "  mSupPtr (NULL),\n"
    "  mBalance (0) {\n"
    "  }\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode) ;\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) = delete ;\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "& operator = (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) = delete ;\n"
    "\n"
    "  public: virtual ~ cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "    macroMyDelete (mInfPtr) ;\n"
    "    macroMyDelete (mSupPtr) ;\n"
    "  }\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_SharedObject {\n"
    "//--------------------------------- Attributes\n"
    "  private: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mRoot ;\n"
    "  private: uint32_t mCount ;\n"
    "\n"
    "//--------------------------------- Constructor\n"
    "  protected: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (LOCATION_ARGS) :\n"
    "  C_SharedObject (THERE),\n"
    "  mRoot (NULL),\n"
    "  mCount (0) {\n"
    "  }\n"
    "\n"
    "//--------------------------------- Virtual destructor\n"
    "  protected: virtual ~ cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "    macroMyDelete (mRoot) ;\n"
    "  }\n"
    "\n"
    "//--------------------------------- No copy\n"
    "  private: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "  private: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--------------------------------- Copy a map\n"
    "  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSource) ;\n"
    "\n"
    "//--------------------------------- Insert\n"
    "  protected: VIRTUAL_IN_DEBUG void performInsert (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element & inNewNode) {\n"
    "    macroUniqueSharedObject (this) ;\n"
    "    bool extension = false ;\n"
    "    bool entryAdded = false ;\n"
    "    recursiveAddEntry (mRoot, inNewNode, entryAdded, extension) ;\n"
    "    if (entryAdded) {\n"
    "      mCount ++ ;\n"
    "    }\n"
    "    #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "      checkDict (HERE) ;\n"
    "    #endif\n"
    "  }\n"
    "\n"
    "  protected: static void rotateLeft (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRootPtr) {\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = ioRootPtr->mSupPtr ;\n"
    "    ioRootPtr->mSupPtr = ptr->mInfPtr ;\n"
    "    ptr->mInfPtr = ioRootPtr;\n"
    "\n"
    "    if (ptr->mBalance >= 0) {\n"
    "      ioRootPtr->mBalance ++ ;\n"
    "    }else{\n"
    "      ioRootPtr->mBalance += 1 - ptr->mBalance ;\n"
    "    }\n"
    "\n"
    "    if (ioRootPtr->mBalance > 0) {\n"
    "      ptr->mBalance += ioRootPtr->mBalance + 1 ;\n"
    "    }else{\n"
    "      ptr->mBalance ++ ;\n"
    "    }\n"
    "    ioRootPtr = ptr ;\n"
    "  }\n"
    "\n"
    "  protected: static void rotateRight (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRootPtr) {\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = ioRootPtr->mInfPtr ;\n"
    "    ioRootPtr->mInfPtr = ptr->mSupPtr ;\n"
    "    ptr->mSupPtr = ioRootPtr ;\n"
    "   \n"
    "    if (ptr->mBalance > 0) {\n"
    "      ioRootPtr->mBalance += -ptr->mBalance - 1 ;\n"
    "    }else{\n"
    "      ioRootPtr->mBalance -- ;\n"
    "    }\n"
    "    if (ioRootPtr->mBalance >= 0) {\n"
    "      ptr->mBalance -- ;\n"
    "    }else{\n"
    "      ptr->mBalance += ioRootPtr->mBalance - 1 ;\n"
    "    }\n"
    "    ioRootPtr = ptr ;\n"
    "  }\n"
    "\n"
    "  protected: static void recursiveAddEntry (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRootPtr,\n"
    "                                             const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element & inNewNode,\n"
    "                                             bool & outEntryAdded,\n"
    "                                             bool & ioExtension) {\n"
    "    if (ioRootPtr == NULL) {\n"
    "      macroMyNew (ioRootPtr, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNewNode.mProperty_key" ;
  GALGAS_uint index_4050_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4050 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4050.hasCurrentObject ()) {
      result << ", inNewNode.mProperty_" ;
      result << enumerator_4050.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 119)).stringValue () ;
      index_4050_.increment () ;
      enumerator_4050.gotoNextObject () ;
    }
  }
  result << ")) ;\n"
    "      ioExtension = true ;\n"
    "      outEntryAdded = true ;\n"
    "    }else{\n"
    "      macroValidPointer (ioRootPtr) ;\n"
    "      const typeComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;\n"
    "      if (comparaison == kFirstOperandGreaterThanSecond) {\n"
    "        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAdded, ioExtension) ;\n"
    "        if (ioExtension) {\n"
    "          ioRootPtr->mBalance++;\n"
    "          if (ioRootPtr->mBalance == 0) {\n"
    "            ioExtension = false;\n"
    "          }else if (ioRootPtr->mBalance == 2) {\n"
    "            if (ioRootPtr->mInfPtr->mBalance == -1) {\n"
    "              rotateLeft (ioRootPtr->mInfPtr) ;\n"
    "            }\n"
    "            rotateRight (ioRootPtr) ;\n"
    "            ioExtension = false;\n"
    "          }\n"
    "        }\n"
    "      }else if (comparaison == kFirstOperandLowerThanSecond) {\n"
    "        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAdded, ioExtension) ;\n"
    "        if (ioExtension) {\n"
    "          ioRootPtr->mBalance-- ;\n"
    "          if (ioRootPtr->mBalance == 0) {\n"
    "            ioExtension = false ;\n"
    "          }else if (ioRootPtr->mBalance == -2) {\n"
    "            if (ioRootPtr->mSupPtr->mBalance == 1) {\n"
    "              rotateRight (ioRootPtr->mSupPtr) ;\n"
    "            }\n"
    "            rotateLeft (ioRootPtr) ;\n"
    "            ioExtension = false;\n"
    "          }\n"
    "        }\n"
    "      }else{  // Found\n"
    "        ioExtension = false ;\n"
    "        outEntryAdded = false ;\n" ;
  GALGAS_uint index_5552_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5552 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5552.hasCurrentObject ()) {
      result << "        ioRootPtr->mProperty_" ;
      result << enumerator_5552.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 160)).stringValue () ;
      result << " = inNewNode.mProperty_" ;
      result << enumerator_5552.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 160)).stringValue () ;
      result << " ;\n" ;
      index_5552_.increment () ;
      enumerator_5552.gotoNextObject () ;
    }
  }
  result << "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "//--------------------------------- Search\n"
    "  private: VIRTUAL_IN_DEBUG cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * findEntryInDict (const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey) const {\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * result = NULL ;\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * currentNode = mRoot ;\n"
    "    while ((currentNode != NULL) && (NULL == result)) {\n"
    "      macroValidPointer (currentNode) ;\n"
    "      const typeComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;\n"
    "      if (comparaison == kFirstOperandGreaterThanSecond) {\n"
    "        currentNode = currentNode->mInfPtr ;\n"
    "      }else if (comparaison == kFirstOperandLowerThanSecond) {\n"
    "        currentNode = currentNode->mSupPtr ;\n"
    "      }else{ // Found\n"
    "        result = currentNode ;\n"
    "      }\n"
    "    }\n"
    "    return result ;\n"
    "  }\n"
    "\n"
    "//--------------------------------- Remove\n"
    "  protected: VIRTUAL_IN_DEBUG void performRemove (const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & outRemovedNodePtr) {\n"
    "    bool branchHasBeenRemoved = false ; // Unused here\n"
    "    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;\n"
    "    if (NULL != outRemovedNodePtr) {\n"
    "      mCount -- ;\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void supBranchDecreased (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                              bool & ioBranchHasBeenRemoved) {\n"
    "    ioRoot->mBalance ++ ;\n"
    "    switch (ioRoot->mBalance) {\n"
    "    case 0:\n"
    "      break;\n"
    "    case 1:\n"
    "      ioBranchHasBeenRemoved = false;\n"
    "      break;\n"
    "    case 2:\n"
    "      switch (ioRoot->mInfPtr->mBalance) {\n"
    "      case -1:\n"
    "        rotateLeft (ioRoot->mInfPtr) ;\n"
    "        rotateRight (ioRoot) ;\n"
    "        break;\n"
    "      case 0:\n"
    "        rotateRight (ioRoot) ;\n"
    "        ioBranchHasBeenRemoved = false;\n"
    "        break;\n"
    "      case 1:\n"
    "        rotateRight (ioRoot) ;\n"
    "        break;\n"
    "      }\n"
    "      break;\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void infBranchDecreased (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                              bool & ioBranchHasBeenRemoved) {\n"
    "    ioRoot->mBalance -- ;\n"
    "    switch (ioRoot->mBalance) {\n"
    "    case 0:\n"
    "      break;\n"
    "    case -1:\n"
    "      ioBranchHasBeenRemoved = false;\n"
    "      break;\n"
    "    case -2:\n"
    "      switch (ioRoot->mSupPtr->mBalance) {\n"
    "      case 1:\n"
    "        rotateRight (ioRoot->mSupPtr) ;\n"
    "        rotateLeft (ioRoot) ;\n"
    "        break;\n"
    "      case 0:\n"
    "        rotateLeft (ioRoot) ;\n"
    "        ioBranchHasBeenRemoved = false;\n"
    "        break;\n"
    "      case -1:\n"
    "        rotateLeft (ioRoot) ;\n"
    "        break;\n"
    "      }\n"
    "      break;\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void  getPreviousElement (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                               cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioElement,\n"
    "                                               bool & ioBranchHasBeenRemoved) {\n"
    "    if (ioRoot->mSupPtr == NULL) {\n"
    "      ioElement = ioRoot ;\n"
    "      ioRoot = ioRoot->mInfPtr ;\n"
    "      ioBranchHasBeenRemoved = true ;\n"
    "    }else{\n"
    "      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;\n"
    "      if (ioBranchHasBeenRemoved) {\n"
    "        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void internalRemoveRecursively (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                                     const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKeyToRemove,\n"
    "                                                     cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & outRemovedNode,\n"
    "                                                     bool & ioBranchHasBeenRemoved) {\n"
    "    if (ioRoot != NULL) {\n"
    "      const typeComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;\n"
    "      if (comparaison == kFirstOperandGreaterThanSecond) {\n"
    "        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n"
    "        if (ioBranchHasBeenRemoved) {\n"
    "          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n"
    "        }\n"
    "      }else if (comparaison == kFirstOperandLowerThanSecond) {\n"
    "        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n"
    "        if (ioBranchHasBeenRemoved) {\n"
    "          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);\n"
    "        }\n"
    "      }else{\n"
    "        cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = ioRoot ;\n"
    "        if (p->mInfPtr == NULL) {\n"
    "          ioRoot = p->mSupPtr;\n"
    "          p->mSupPtr = NULL;\n"
    "          ioBranchHasBeenRemoved = true;\n"
    "        }else if (p->mSupPtr == NULL) {\n"
    "          ioRoot = p->mInfPtr;\n"
    "          p->mInfPtr = NULL;\n"
    "          ioBranchHasBeenRemoved = true;\n"
    "        }else{\n"
    "          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;\n"
    "          ioRoot->mSupPtr = p->mSupPtr;\n"
    "          p->mSupPtr = NULL;\n"
    "          ioRoot->mInfPtr = p->mInfPtr;\n"
    "          p->mInfPtr = NULL;\n"
    "          ioRoot->mBalance = p->mBalance;\n"
    "          p->mBalance = 0;\n"
    "          if (ioBranchHasBeenRemoved) {\n"
    "            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n"
    "          }\n"
    "        }\n"
    "        outRemovedNode = p ;\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "//--------------------------------- Internal method for enumeration\n"
    "  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n"
    "\n"
    "//--------------------------------- Check Dictionary\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "      private: VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {\n"
    "      uint32_t n = 0 ;\n"
    "      checkNode (mRoot, n) ;\n"
    "      MF_AssertThere (n == mCount, \"n (%lld) != mCount (%lld)\", n, mCount) ;\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    private: static void checkNode (const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode,\n"
    "                                     uint32_t & ioCount) {\n"
    "      if (NULL != inNode) {\n"
    "        checkNode (inNode->mInfPtr, ioCount) ;\n"
    "        ioCount ++ ;\n"
    "        checkNode (inNode->mSupPtr, ioCount) ;\n"
    "      }\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "//--------------------------------- Compare Dictionaries\n"
    "  public: typeComparisonResult compare (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const {\n"
    "    typeComparisonResult result = kOperandEqual ;\n"
    "    if (mCount < inOperand->mCount) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (mCount > inOperand->mCount) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n"
    "      capCollectionElementArray enumerationArray ;\n"
    "      populateEnumerationArray (enumerationArray) ;\n"
    "      capCollectionElementArray operandEnumerationArray ;\n"
    "      inOperand->populateEnumerationArray (operandEnumerationArray) ;\n"
    "      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;\n"
    "    }\n"
    "    return result ;\n"
    "  }\n"
    "\n"
    "//--------------------------------- Friend\n"
    "  friend class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "} ;\n"
    "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_root (),\n"
    "mSharedDict (NULL) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroDetachSharedObject (mSharedDict) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) :\n"
    "AC_GALGAS_root (),\n"
    "mSharedDict (NULL) {\n"
    "  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) {\n"
    "  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n"
    "  return * this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  macroDetachSharedObject (mSharedDict) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyDict (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  macroMyNew (result.mSharedDict, cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (THERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Description\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode,\n"
    "                                 C_String & ioString,\n"
    "                                 const int32_t inIndentation) {\n"
    "  if (NULL != inNode) {\n"
    "    internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mInfPtr, ioString, inIndentation) ;\n"
    "    ioString << \"\\n\" ;\n"
    "    inNode->description (ioString, inIndentation) ;\n"
    "    internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mSupPtr, ioString, inIndentation) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString,\n"
    "                                             const int32_t inIndentation) const {\n"
    "  ioString << \"<dict @\" << staticTypeDescriptor ()->mGalgasTypeName << \":\" ;\n"
    "  if (isValid ()) {\n"
    "    internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mSharedDict->mRoot, ioString, inIndentation) ;\n"
    "  }else{\n"
    "    ioString << \" not built\" ;\n"
    "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Insulate\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode) :\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (inNode->mProperty_key" ;
  GALGAS_uint index_15815_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15815 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15815.hasCurrentObject ()) {
      result << ", inNode->mProperty_" ;
      result << enumerator_15815.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 436)).stringValue () ;
      index_15815_.increment () ;
      enumerator_15815.gotoNextObject () ;
    }
  }
  result << "),\n"
    "mInfPtr (NULL),\n"
    "mSupPtr (NULL),\n"
    "mBalance (inNode->mBalance) {\n"
    "  if (inNode->mInfPtr != NULL) {\n"
    "    macroMyNew (mInfPtr, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mInfPtr)) ;\n"
    "  }\n"
    "  if (inNode->mSupPtr != NULL) {\n"
    "    macroMyNew (mSupPtr, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mSupPtr)) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copyFrom (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSource) {\n"
    "  macroUniqueSharedObject (this) ;\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    inSource->checkDict (HERE) ;\n"
    "  #endif\n"
    "  macroValidSharedObject (inSource, cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  mCount = inSource->mCount ;\n"
    "  if (NULL != inSource->mRoot) {\n"
    "    macroMyNew (mRoot, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inSource->mRoot)) ;\n"
    "  }\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    checkDict (HERE) ;\n"
    "  #endif\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::insulate (LOCATION_ARGS) {\n"
    "  if ((NULL != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {\n"
    "    cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "    macroMyNew (p, cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (THERE)) ;\n"
    "    p->copyFrom (mSharedDict) ;\n"
    "    macroAssignSharedObject (mSharedDict, p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Insert\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey" ;
  GALGAS_uint index_17723_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17723 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17723.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_17723.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 489)).stringValue () ;
      result << " & inArgument" ;
      result << index_17723_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 489)).stringValue () ;
      index_17723_IDX.increment () ;
      enumerator_17723.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element newElement (inKey" ;
  GALGAS_uint index_17997_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17997 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17997.hasCurrentObject ()) {
      result << ", inArgument" ;
      result << index_17997_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 495)).stringValue () ;
      index_17997_IDX.increment () ;
      enumerator_17997.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "  if (isValid () && newElement.isValid ()) {\n"
    "    insulate (THERE) ;\n"
    "    macroUniqueSharedObject (mSharedDict) ;\n"
    "    mSharedDict->performInsert (newElement) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_hasKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (isValid () && inKey.isValid ()) {\n"
    "    const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = mSharedDict->findEntryInDict (inKey) ;\n"
    "    result = GALGAS_bool (p != NULL) ;\n"
    "   }\n"
    "   return result ;\n"
    " }\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inKey" ;
  GALGAS_uint index_18931_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18931 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18931.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << enumerator_18931.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 521)).stringValue () ;
      result << " & outArgument" ;
      result << index_18931_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 521)).stringValue () ;
      index_18931_IDX.increment () ;
      enumerator_18931.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  if (isValid () && inKey.isValid ()) {\n"
    "    p = mSharedDict->findEntryInDict (inKey) ;\n"
    "    if (NULL == p) {\n"
    "    //--- Build error message\n"
    "      C_String message ;\n"
    "      message << \"cannot search in dict: the key does not exist\" ;\n"
    "    //--- Emit error message\n"
    "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_19536_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19536 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19536.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_19536_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 539)).stringValue () ;
      result << ".drop () ;\n" ;
      index_19536_IDX.increment () ;
      enumerator_19536.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_19696_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19696 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19696.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_19696_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 545)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_19696.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 545)).stringValue () ;
      result << " ;\n" ;
      index_19696_IDX.increment () ;
      enumerator_19696.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeKey (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inKey" ;
  GALGAS_uint index_20064_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20064 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20064.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << enumerator_20064.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 553)).stringValue () ;
      result << " & outArgument" ;
      result << index_20064_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 553)).stringValue () ;
      index_20064_IDX.increment () ;
      enumerator_20064.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  if (isValid () && inKey.isValid ()) {\n"
    "    insulate (THERE) ;\n"
    "    macroUniqueSharedObject (mSharedDict) ;\n"
    "    mSharedDict->performRemove (inKey, p) ;\n"
    "    if (NULL == p) {\n"
    "    //--- Build error message\n"
    "      C_String message ;\n"
    "      message << \"cannot remove in dict: the key does not exist\" ;\n"
    "    //--- Emit error message\n"
    "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_20721_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20721 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20721.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_20721_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 573)).stringValue () ;
      result << ".drop () ;\n" ;
      index_20721_IDX.increment () ;
      enumerator_20721.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_20881_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20881 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20881.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_20881_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 579)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_20881.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 579)).stringValue () ;
      result << " ;\n" ;
      index_20881_IDX.increment () ;
      enumerator_20881.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_21020_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21020 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21020.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_21020.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 586)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_21020.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 586)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_" ;
      result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " & inKey,\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  GALGAS_" ;
      result << enumerator_21020.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 589)).stringValue () ;
      result << " result ;\n"
        "  if (isValid () && inKey.isValid ()) {\n"
        "  const cNode_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = mSharedDict->findEntryInDict (inKey) ;\n"
        "   if (NULL == p) {\n"
        "    //--- Build error message\n"
        "      C_String message ;\n"
        "      message << \"cannot get " ;
      result << enumerator_21020.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 595)).stringValue () ;
      result << " ForKey in dict: the key does not exist\" ;\n"
        "    //--- Emit error message\n"
        "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
        "    }else{\n"
        "      macroValidSharedObject (p, cNode_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "      result = p->mProperty_" ;
      result << enumerator_21020.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 600)).stringValue () ;
      result << "  ;\n"
        "    }\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_21020_.increment () ;
      enumerator_21020.gotoNextObject () ;
    }
  }
  GALGAS_uint index_22289_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22289 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22289.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_22289.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 609)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 609)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << enumerator_22289.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 609)).stringValue () ;
      result << " inPropertyValue,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " inKey,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  if (isValid () && inKey.isValid ()) {\n"
        "    insulate (THERE) ;\n"
        "    macroUniqueSharedObject (mSharedDict) ;\n"
        "    cNode_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = mSharedDict->findEntryInDict (inKey) ;\n"
        "    if (NULL == p) {\n"
        "    //--- Build error message\n"
        "      C_String message ;\n"
        "      message << \"cannot set" ;
      result << enumerator_22289.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 620)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 620)).stringValue () ;
      result << "ForKey in dict: the key does not exist\" ;\n"
        "    //--- Emit error message\n"
        "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
        "    }else{\n"
        "      p->mProperty_" ;
      result << enumerator_22289.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 624)).stringValue () ;
      result << " = inPropertyValue ;\n"
        "    }\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_22289_.increment () ;
      enumerator_22289.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Object compare\n"
    "#endif\n"
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
    "    result = mSharedDict->compare (inOperand.mSharedDict) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark map Enumeration\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cCollectionElement {\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mElement ;\n"
    "\n"
    "//--- Constructor\n"
    "  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element & inElement) :\n"
    "  cCollectionElement (HERE),\n"
    "  mElement (inElement) {\n"
    "  }\n"
    "\n"
    "//--- No copy\n"
    "  private: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "  private: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const { return mElement.isValid () ; }\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const {\n"
    "    const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "    return mElement.objectCompare (p->mElement) ;\n"
    "  }\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cCollectionElement * copy (void) {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mElement)) ;\n"
    "    return p ;\n"
    "  }\n"
    "\n"
    "//--- Description\n"
    "  public: virtual void description (C_String & ioString, const int32_t inIndentation) const {\n"
    "    mElement.description (ioString, inIndentation) ;\n"
    "  }\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode,\n"
    "                                                       capCollectionElementArray & ioEnumerationArray) {\n"
    "  if (inNode != NULL) {\n"
    "    enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mInfPtr, ioEnumerationArray) ;\n"
    "    cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (*inNode)) ;\n"
    "    capCollectionElement element ;\n"
    "    element.setPointer (p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    ioEnumerationArray.appendObject (element) ;\n"
    "    enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mSupPtr, ioEnumerationArray) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    checkDict (HERE) ;\n"
    "  #endif\n"
    "  ioEnumerationArray.setCapacity (mCount) ;\n"
    "  enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mRoot, ioEnumerationArray) ;\n"
    "  MF_Assert (mCount == ioEnumerationArray.count (), \"mCount (%lld) != ioEnumerationArray.count () (%lld)\", mCount, ioEnumerationArray.count ()) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n"
    "  if (NULL != mSharedDict) {\n"
    "    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                                                        const typeEnumerationOrder inOrder) :\n"
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
  result << "* p = dynamic_cast  <const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "*> (currentObjectPtr (THERE)) ;\n"
    "  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (p->mElement) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_key (LOCATION_ARGS) const {\n"
    "  const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "* p = dynamic_cast  <const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "*> (currentObjectPtr (THERE)) ;\n"
    "  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return p->mElement.mProperty_key ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_29025_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_29025 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_29025.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_29025.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 750)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_29025.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 750)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "* p = dynamic_cast  <const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "*> (currentObjectPtr (THERE)) ;\n"
        "  macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mElement.mProperty_" ;
      result << enumerator_29025.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 753)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_29025_IDX.increment () ;
      enumerator_29025.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::optional_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey" ;
  GALGAS_uint index_29914_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_29914 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_29914.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << enumerator_29914.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 759)).stringValue () ;
      result << " & outArgument" ;
      result << index_29914_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 759)).stringValue () ;
      index_29914_IDX.increment () ;
      enumerator_29914.gotoNextObject () ;
    }
  }
  result << ") const {\n"
    "  const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  if ((mSharedDict != NULL) && inKey.isValid ()) {\n"
    "    p = (const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) mSharedDict->findEntryInDict (inKey) ;\n"
    "  }\n"
    "  const bool result = NULL != p ;\n"
    "  if (result) {\n"
    "    macroValidSharedObject (p, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_30382_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_30382 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_30382.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_30382_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 770)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_30382.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 770)).stringValue () ;
      result << " ;\n" ;
      index_30382_IDX.increment () ;
      enumerator_30382.gotoNextObject () ;
    }
  }
  result << "  }else{\n" ;
  GALGAS_uint index_30535_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_30535 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_30535.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_30535_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 774)).stringValue () ;
      result << ".drop () ;\n" ;
      index_30535_IDX.increment () ;
      enumerator_30535.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate classTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                              const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR,
                                                                              const GALGAS_bool & in_IS_5F_REFERENCE
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = in_IS_5F_REFERENCE.boolEnum () ;
    if (kBoolTrue == test_1) {
      result << "AC_GALGAS_reference_class" ;
    }else if (kBoolFalse == test_1) {
      result << "AC_GALGAS_value_class" ;
    }
  }else if (kBoolFalse == test_0) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  const enumGalgasBool test_2 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 15)) COMMA_SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 15)).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "//--------------------------------- Default GALGAS constructor\n"
      "  public: static GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "//--------------------------------- Embedded object pointer\n"
    "  public: inline const class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr (void) const { return (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) mObjectPtr ; }\n"
    "\n"
    "//--------------------------------- Constructor from pointer\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate classTypeHeader2part1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & in_TYPE_5F_NAME,
                                                                                      const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                      const GALGAS_typedPropertyList & /* in_CURRENT_5F_ATTRIBUTE_5F_LIST */,
                                                                                      const GALGAS_typedPropertyList & /* in_ALL_5F_ATTRIBUTE_5F_LIST */,
                                                                                      const GALGAS_bool & /* in_IS_5F_ABSTRACT */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "acPtr_class" ;
  }else if (kBoolFalse == test_0) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate classTypeHeader2part2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                      const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                      const GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                      const GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                      const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//--- Attributes\n" ;
  GALGAS_uint index_55_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_55 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_55.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << enumerator_55.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_55.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " ;\n" ;
      index_55_.increment () ;
      enumerator_55.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_288_ (0) ;
  if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_288 (in_ALL_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_288.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_288.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      result << " & in_" ;
      result << enumerator_288.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      if (enumerator_288.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_288_.increment () ;
      enumerator_288.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_0) {
    result << "LOCATION_ARGS" ;
  }
  result << ") ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--- Duplication\n"
      "  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--- Attribute accessors\n" ;
  GALGAS_uint index_721_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_721 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_721.hasCurrentObject ()) {
      const enumGalgasBool test_2 = enumerator_721.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
        result << enumerator_721.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 29)).stringValue () ;
        result << " getter_" ;
        result << enumerator_721.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 29)).stringValue () ;
        result << " (LOCATION_ARGS) const ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      const enumGalgasBool test_3 = enumerator_721.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  public: VIRTUAL_IN_DEBUG void setter_set" ;
        result << enumerator_721.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 32)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 32)).stringValue () ;
        result << " (GALGAS_" ;
        result << enumerator_721.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 32)).stringValue () ;
        result << " inValue COMMA_LOCATION_ARGS) ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_721_.increment () ;
      enumerator_721.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_4 = in_IS_5F_ABSTRACT.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//--- Description\n"
      "  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const = 0 ;\n"
      "\n"
      "  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;\n"
      "\n"
      "  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;\n" ;
  }else if (kBoolFalse == test_4) {
    result << "//--- Description\n"
      "  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const ;\n"
      "\n"
      "  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;\n"
      "\n"
      "  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;\n" ;
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate classTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                          const GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                          const GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                          const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                          const GALGAS_bool & in_IS_5F_REFERENCE,
                                                                                          const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//   Object comparison                                                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 6)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 6)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 6)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n"
      "  return kOperandEqual ;\n"
      "}\n"
      "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 14)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 14)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 14)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n"
      "  typeComparisonResult result = kOperandEqual ;\n"
      "  const cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * p = (const cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " *) inOperandPtr ;\n"
      "  macroValidSharedObject (p, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << ") ;\n" ;
    GALGAS_uint index_1074_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1074 (in_ALL_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1074.hasCurrentObject ()) {
        result << "  if (kOperandEqual == result) {\n"
          "    result = mProperty_" ;
        result << enumerator_1074.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ".objectCompare (p->mProperty_" ;
        result << enumerator_1074.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ") ;\n"
          "  }\n" ;
        index_1074_.increment () ;
        enumerator_1074.gotoNextObject () ;
      }
    }
    result << "  return result ;\n"
      "}\n"
      "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;\n"
    "    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;\n"
    "    if (mySlot < operandSlot) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (mySlot > operandSlot) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n"
    "      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = in_IS_5F_REFERENCE.boolEnum () ;
    if (kBoolTrue == test_3) {
      result << "AC_GALGAS_reference_class" ;
    }else if (kBoolFalse == test_3) {
      result << "AC_GALGAS_value_class" ;
    }
  }else if (kBoolFalse == test_2) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " () {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_4 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 55)) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 55)).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_default (LOCATION_ARGS) {\n"
      "  return GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 60)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_uint index_2831_ (0) ;
      if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_2831 (in_ALL_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_2831.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << enumerator_2831.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 62)).stringValue () ;
          result << "::constructor_" ;
          result << enumerator_2831.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 62)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 62)).stringValue () ;
          result << " (HERE)" ;
          if (enumerator_2831.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_2831_.increment () ;
          enumerator_2831.gotoNextObject () ;
        }
      }
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE" ;
    }else if (kBoolFalse == test_5) {
      result << "THERE" ;
    }
    result << ") ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_4) {
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) :\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = in_IS_5F_REFERENCE.boolEnum () ;
    if (kBoolTrue == test_7) {
      result << "AC_GALGAS_reference_class" ;
    }else if (kBoolFalse == test_7) {
      result << "AC_GALGAS_value_class" ;
    }
  }else if (kBoolFalse == test_6) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (inSourcePtr) {\n"
    "  macroNullOrValidSharedObject (inSourcePtr, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_8 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 83)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 83)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 83)).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (LOCATION_ARGS) {\n"
      "  GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " result ;\n"
      "  macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (THERE)) ;\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_8) {
  }
  const enumGalgasBool test_9 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 92)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 92)).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4292_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4292 (in_ALL_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4292.hasCurrentObject ()) {
        result << "const GALGAS_" ;
        result << enumerator_4292.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 96)).stringValue () ;
        result << " & inAttribute_" ;
        result << enumerator_4292.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 96)).stringValue () ;
        if (enumerator_4292.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4292_.increment () ;
        enumerator_4292.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 99)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      result << "LOCATION_ARGS" ;
    }else if (kBoolFalse == test_10) {
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS" ;
    }
    result << ") {\n"
      "  GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " result ;\n"
      "  if (" ;
    GALGAS_uint index_4642_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4642 (in_ALL_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4642.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4642.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 108)).stringValue () ;
        result << ".isValid ()" ;
        if (enumerator_4642.hasNextObject ()) {
          result << " && " ;
        }
        index_4642_.increment () ;
        enumerator_4642.gotoNextObject () ;
      }
    }
    result << ") {\n"
      "    macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_4851_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4851 (in_ALL_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4851.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4851.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 114)).stringValue () ;
        if (enumerator_4851.hasNextObject ()) {
          result << ", " ;
        }
        index_4851_.increment () ;
        enumerator_4851.gotoNextObject () ;
      }
    }
    result << " COMMA_THERE)) ;\n"
      "  }\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_9) {
  }
  GALGAS_uint index_5044_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5044 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5044.hasCurrentObject ()) {
      const enumGalgasBool test_11 = enumerator_5044.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_11) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "GALGAS_" ;
        result << enumerator_5044.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 126)).stringValue () ;
        result << " GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::getter_" ;
        result << enumerator_5044.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 126)).stringValue () ;
        result << " (UNUSED_LOCATION_ARGS) const {\n"
          "  GALGAS_" ;
        result << enumerator_5044.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 127)).stringValue () ;
        result << " result ;\n"
          "  if (NULL != mObjectPtr) {\n"
          "    const cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (const cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) mObjectPtr ;\n"
          "    macroValidSharedObject (p, cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    result = p->mProperty_" ;
        result << enumerator_5044.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 131)).stringValue () ;
        result << " ;\n"
          "  }\n"
          "  return result ;\n"
          "}\n"
          "\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "GALGAS_" ;
        result << enumerator_5044.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 136)).stringValue () ;
        result << " cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::getter_" ;
        result << enumerator_5044.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 136)).stringValue () ;
        result << " (UNUSED_LOCATION_ARGS) const {\n"
          "  return mProperty_" ;
        result << enumerator_5044.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 137)).stringValue () ;
        result << " ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_11) {
      }
      index_5044_.increment () ;
      enumerator_5044.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6205_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6205 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6205.hasCurrentObject ()) {
      const enumGalgasBool test_12 = enumerator_6205.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_12) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_6205.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 145)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 145)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_6205.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 145)).stringValue () ;
        result << " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        const enumGalgasBool test_13 = in_IS_5F_REFERENCE.boolEnum () ;
        if (kBoolTrue == test_13) {
          result << "COMMA_UNUSED_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_13) {
          result << "COMMA_LOCATION_ARGS" ;
        }
        result << ") {\n"
          "  if (NULL != mObjectPtr) {\n" ;
        const enumGalgasBool test_14 = in_IS_5F_REFERENCE.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 148)).boolEnum () ;
        if (kBoolTrue == test_14) {
          result << "    insulate (THERE) ;\n" ;
        }else if (kBoolFalse == test_14) {
        }
        result << "    cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) mObjectPtr ;\n"
          "    macroValidSharedObject (p, cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    p->mProperty_" ;
        result << enumerator_6205.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 153)).stringValue () ;
        result << " = inValue ;\n"
          "  }\n"
          "}\n"
          "\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_6205.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 157)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 157)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_6205.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 157)).stringValue () ;
        result << " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
          "  mProperty_" ;
        result << enumerator_6205.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 159)).stringValue () ;
        result << " = inValue ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_12) {
      }
      index_6205_.increment () ;
      enumerator_6205.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//" ;
  result << GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 165)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 165)).stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7902_ (0) ;
  if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7902 (in_ALL_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7902.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_7902.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & in_" ;
      result << enumerator_7902.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_7902.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7902_.increment () ;
      enumerator_7902.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 173)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_15) {
    result << "LOCATION_ARGS" ;
  }
  result << ") :\n" ;
  const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_16) {
    result << "acPtr_class" ;
  }else if (kBoolFalse == test_16) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (" ;
  GALGAS_uint index_8289_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8289 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8289.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_8289.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 181)).stringValue () ;
      if (enumerator_8289.hasNextObject ()) {
        result << ", " ;
      }
      index_8289_.increment () ;
      enumerator_8289.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 184)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    result << " COMMA_THERE" ;
  }else if (kBoolFalse == test_17) {
    result << "THERE" ;
  }
  result << ")" ;
  GALGAS_uint index_8497_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8497 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8497.hasCurrentObject ()) {
      result << ",\n"
        "mProperty_" ;
      result << enumerator_8497.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 191)).stringValue () ;
      result << " (in_" ;
      result << enumerator_8497.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 191)).stringValue () ;
      result << ")" ;
      index_8497_.increment () ;
      enumerator_8497.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_18 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 197)).boolEnum () ;
  if (kBoolTrue == test_18) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "const C_galgas_type_descriptor * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::classDescriptor (void) const {\n"
      "  return & kTypeDescriptor_GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " ;\n"
      "}\n"
      "\n" ;
    const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 202)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      result << "void cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::description (" ;
      columnMarker = result.currentColumn () ;
      result << "C_String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const int32_t /* inIndentation */) const {\n"
        "  ioString << \"[@" ;
      result << in_TYPE_5F_NAME.stringValue () ;
      result << "]\" ;\n"
        "}\n"
        "\n" ;
    }else if (kBoolFalse == test_19) {
      result << "void cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::description (" ;
      columnMarker = result.currentColumn () ;
      result << "C_String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const int32_t inIndentation) const {\n"
        "  ioString << \"[@" ;
      result << in_TYPE_5F_NAME.stringValue () ;
      result << ":\" ;\n" ;
      GALGAS_uint index_9436_ (0) ;
      if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9436 (in_ALL_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9436.hasCurrentObject ()) {
          result << "  mProperty_" ;
          result << enumerator_9436.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 212)).stringValue () ;
          result << ".description (ioString, inIndentation+1) ;\n" ;
          if (enumerator_9436.hasNextObject ()) {
            result << "  ioString << \", \" ;\n" ;
          }
          index_9436_.increment () ;
          enumerator_9436.gotoNextObject () ;
        }
      }
      result << "  ioString << \"]\" ;\n"
        "}\n"
        "\n" ;
    }
  }else if (kBoolFalse == test_18) {
  }
  const enumGalgasBool test_20 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 220)).boolEnum () ;
  if (kBoolTrue == test_20) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "acPtr_class * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::duplicate (LOCATION_ARGS) const {\n"
      "  acPtr_class * ptr = NULL ;\n"
      "  macroMyNew (ptr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_9967_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9967 (in_ALL_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_9967 = enumerator_9967.hasCurrentObject () ;
      while (enumerator_9967.hasCurrentObject ()) {
        result << "mProperty_" ;
        result << enumerator_9967.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 227)).stringValue () ;
        if (enumerator_9967.hasNextObject ()) {
          result << ", " ;
        }
        index_9967_.increment () ;
        enumerator_9967.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9967) {
        result << " COMMA_" ;
      }
    }
    result << "THERE)) ;\n"
      "  return ptr ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_20) {
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticComponentGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticComponentGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticComponentGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticComponentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticComponentGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticComponentGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_RETURN_5F_TYPE
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typedef class GALGAS_" ;
  result << in_RETURN_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << " (*enterExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_614_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_614 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_614.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_614.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_614.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_614_IDX.getter_string (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_614.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 14)).stringValue () ;
        result << " inArgument" ;
        result << index_614_IDX.getter_string (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 14)).stringValue () ;
      }
      index_614_IDX.increment () ;
      enumerator_614.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 22)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "enterExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 23)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 23)).stringValue () ;
  result << " inMethod) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_RETURN_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 27)).stringValue () ;
  result << " callExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 27)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 27)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1664_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1664 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1664.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_1 = enumerator_1664.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "const GALGAS_" ;
        result << enumerator_1664.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 31)).stringValue () ;
        result << " constin_" ;
        result << enumerator_1664.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 31)).stringValue () ;
      }else if (kBoolFalse == test_1) {
        result << "GALGAS_" ;
        result << enumerator_1664.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 33)).stringValue () ;
        result << " in_" ;
        result << enumerator_1664.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 33)).stringValue () ;
      }
      index_1664_.increment () ;
      enumerator_1664.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                             const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                             const GALGAS_unifiedTypeMap_2D_entry & in_RETURN_5F_TYPE
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static TC_UniqueArray <enterExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "enterExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inGetter) {\n"
    "  gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void freeExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 18)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (void) {\n"
    "  gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 19)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 19)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 24)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 24)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NULL,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 25)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 25)).stringValue () ;
  result << ") ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_RETURN_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 29)).stringValue () ;
  result << " callExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 29)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2154_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_2154 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2154.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_2154.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_2154.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 33)).stringValue () ;
        result << " in_" ;
        result << enumerator_2154.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "GALGAS_" ;
        result << enumerator_2154.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 35)).stringValue () ;
        result << " in_" ;
        result << enumerator_2154.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 35)).stringValue () ;
      }
      index_2154_.increment () ;
      enumerator_2154.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_RETURN_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 40)).stringValue () ;
  result << " result ;\n"
    "//--- Find Reader\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 43)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    enterExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 46)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 46)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 47)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 47)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 48)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 48)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 53)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 53)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 54)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 54)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 58)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 58)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "      fatalError (\"FATAL CATEGORY READER CALL ERROR\", __FILE__, __LINE__) ;\n"
    "    }else{\n"
    "      result = f (inObject, " ;
  GALGAS_uint index_4073_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_4073 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4073.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_4073.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 65)).stringValue () ;
      result << ", " ;
      index_4073_.increment () ;
      enumerator_4073.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GALGAS_unifiedTypeMap_2D_entry & in_RETURN_5F_TYPE
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typedef class GALGAS_" ;
  result << in_RETURN_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << " (*enterExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_605_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_605 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_605.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_605.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_605.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_605_IDX.getter_string (SOURCE_FILE ("extension-getter.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_605.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 14)).stringValue () ;
        result << " inArgument" ;
        result << index_605_IDX.getter_string (SOURCE_FILE ("extension-getter.h.galgasTemplate", 14)).stringValue () ;
      }
      index_605_IDX.increment () ;
      enumerator_605.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    " \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 22)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "enterExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 23)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 23)).stringValue () ;
  result << " inGetter) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_RETURN_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 27)).stringValue () ;
  result << " callExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 27)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 27)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1644_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1644 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1644.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_1 = enumerator_1644.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "const GALGAS_" ;
        result << enumerator_1644.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 31)).stringValue () ;
        result << " constin_" ;
        result << enumerator_1644.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 31)).stringValue () ;
      }else if (kBoolFalse == test_1) {
        result << "GALGAS_" ;
        result << enumerator_1644.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 33)).stringValue () ;
        result << " in_" ;
        result << enumerator_1644.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 33)).stringValue () ;
      }
      index_1644_.increment () ;
      enumerator_1644.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                     const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_unifiedTypeMap_2D_entry & in_RETURN_5F_TYPE,
                                                                                                     const GALGAS_string & in_GETTER_5F_IMPLEMENTATION
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static TC_UniqueArray <enterExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "enterExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inGetter) {\n"
    "  gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_RETURN_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 18)).stringValue () ;
  result << " callExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 18)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1418_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1418 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1418.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_1418.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_1418.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 22)).stringValue () ;
        result << " in_" ;
        result << enumerator_1418.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 22)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "GALGAS_" ;
        result << enumerator_1418.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 24)).stringValue () ;
        result << " in_" ;
        result << enumerator_1418.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 24)).stringValue () ;
      }
      index_1418_.increment () ;
      enumerator_1418.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_RETURN_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 29)).stringValue () ;
  result << " result ;\n"
    "//--- Find Reader\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 32)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    enterExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 35)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 35)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 36)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 36)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 37)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 37)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 42)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 42)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 43)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 43)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 47)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 47)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "      fatalError (\"FATAL CATEGORY READER CALL ERROR\", __FILE__, __LINE__) ;\n"
    "    }else{\n"
    "      result = f (inObject, " ;
  GALGAS_uint index_3337_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_3337 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3337.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_3337.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 54)).stringValue () ;
      result << ", " ;
      index_3337_.increment () ;
      enumerator_3337.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_GETTER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void defineExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 67)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 67)).stringValue () ;
  result << " (void) {\n"
    "  enterExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 68)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 68)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 69)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 69)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void freeExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 74)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 74)).stringValue () ;
  result << " (void) {\n"
    "  gExtensionGetterTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 75)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 75)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 80)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 80)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "defineExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 80)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 80)).stringValue () ;
  result << ",\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 81)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 81)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const GALGAS_unifiedTypeMap_2D_entry & /* in_RETURN_5F_TYPE */,
                                                                                                               const GALGAS_string & in_GETTER_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Overriding extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_GETTER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void defineExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 10)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 10)).stringValue () ;
  result << " (void) {\n"
    "  enterExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 12)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 17)).stringValue () ;
  result << " (defineExtensionGetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 17)).stringValue () ;
  result << ", NULL) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typedef void (*extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_566_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_566 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_566.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_566.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_566.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_566_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_566.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_566.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_566_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_566.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_566.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_566_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_566.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_566_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_566_IDX.increment () ;
      enumerator_566.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result << " inModifier) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2022_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2022 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2022.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2022.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2022.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2022.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2022.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2022.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2022.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2022.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2022.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2022.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2022.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2022.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2022_.increment () ;
      enumerator_2022.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                             const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static TC_UniqueArray <extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inModifier) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (void) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NULL,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue () ;
  result << ") ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2148_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2148 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2148.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2148.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 32)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_2148.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2148.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2148.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 34)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_2148.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2148.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2148.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2148.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2148.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2148.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue () ;
            result << " in_" ;
            result << enumerator_2148.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue () ;
          }
        }
      }
      index_2148_.increment () ;
      enumerator_2148.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_3082_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3082 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3082.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3082.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_3082.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_3082_.increment () ;
      enumerator_3082.gotoNextObject () ;
    }
  }
  result << "//--- Find setter\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 53)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    f (inObject, " ;
  GALGAS_uint index_4659_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4659 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4659.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4659.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 72)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_4659.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 73)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4659.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 74)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_4659.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 75)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4659.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 76)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_4659.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 77)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_4659.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 79)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_4659_.increment () ;
      enumerator_4659.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                  const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typedef void (*extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_557_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_557 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_557.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_557.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_557.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_557_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_557.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_557.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_557_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_557.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_557.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_557_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_557.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_557_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_557_IDX.increment () ;
      enumerator_557.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result << " inModifier) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2026_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2026 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2026.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2026.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2026.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2026.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2026.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2026.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2026.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2026.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2026.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2026.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2026.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2026.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2026_.increment () ;
      enumerator_2026.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionsetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                     const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static TC_UniqueArray <extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inModifier) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1398_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1398 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1398.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1398.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 21)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_1398.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue () ;
        result << " constin_" ;
        result << enumerator_1398.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1398.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 23)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_1398.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
          result << " & io_" ;
          result << enumerator_1398.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1398.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 25)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1398.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue () ;
            result << " & out_" ;
            result << enumerator_1398.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1398.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue () ;
            result << " in_" ;
            result << enumerator_1398.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue () ;
          }
        }
      }
      index_1398_.increment () ;
      enumerator_1398.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_2332_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2332 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2332.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2332.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_2332.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 37)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_2332_.increment () ;
      enumerator_2332.gotoNextObject () ;
    }
  }
  result << "//--- Find setter\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 42)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    f (inObject, " ;
  GALGAS_uint index_3909_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3909 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3909.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_3909.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 61)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_3909.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 62)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_3909.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 63)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_3909.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 64)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_3909.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 65)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_3909.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 66)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_3909.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 68)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_3909_.increment () ;
      enumerator_3909.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue () ;
  result << " (void) {\n"
    "  enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue () ;
  result << " (void) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result << ",\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionSetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                               const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Overriding extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue () ;
  result << " (void) {\n"
    "  enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result << " (defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result << ", NULL) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typedef void (*extensionMethodSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_568_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_568 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_568.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_568.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_568.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_568_IDX.getter_string (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_568.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_568.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_568_IDX.getter_string (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_568.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_568.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_568_IDX.getter_string (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_568.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_568_IDX.getter_string (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_568_IDX.increment () ;
      enumerator_568.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionMethodSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 27)).stringValue () ;
  result << " inMethod) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2035_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2035 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2035.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2035.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2035.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2035.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2035.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2035.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2035.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2035.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2035.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2035.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2035.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2035.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2035_.increment () ;
      enumerator_2035.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (C_Compiler * inCompiler,
                                                                                                             const GALGAS_unifiedTypeMap_2D_entry & in_RECEIVER_5F_TYPE,
                                                                                                             const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                             const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension method '@").add_operation (in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static TC_UniqueArray <extensionMethodSignature_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gExtensionMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionMethodSignature_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 12)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inMethod) {\n"
    "  gExtensionMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void freeExtensionMethod_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 18)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (void) {\n"
    "  gExtensionMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 19)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 19)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 19)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gMethod_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 24)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 24)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 24)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NULL,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeExtensionMethod_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 25)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 25)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 25)).stringValue () ;
  result << ") ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 29)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 29)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2208_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2208 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2208.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2208.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 32)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_2208.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 33)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2208.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2208.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 34)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_2208.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 35)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2208.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 35)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2208.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2208.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 37)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2208.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 37)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2208.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 39)).stringValue () ;
            result << " in_" ;
            result << enumerator_2208.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 39)).stringValue () ;
          }
        }
      }
      index_2208_.increment () ;
      enumerator_2208.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_3142_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3142 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3142.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3142.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_3142.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_3142_.increment () ;
      enumerator_3142.gotoNextObject () ;
    }
  }
  result << "//--- Find method\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 53)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 53)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    extensionMethodSignature_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 56)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 56)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 56)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gExtensionMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 57)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 57)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 57)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gExtensionMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 58)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 58)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 58)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "      while ((NULL == f) && (NULL != p)) {\n"
    "        if (p->mSlotID < gExtensionMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 63)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 63)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 63)).stringValue () ;
  result << ".count ()) {\n"
    "          f = gExtensionMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 64)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 64)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 64)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "        }\n"
    "        p = p->mSuperclassDescriptor ;\n"
    "      }\n"
    "      gExtensionMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 68)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 68)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 68)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "      fatalError (\"FATAL CATEGORY METHOD CALL ERROR\", __FILE__, __LINE__) ;\n"
    "    }else{\n"
    "      f (inObject, " ;
  GALGAS_uint index_4864_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4864 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4864.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4864.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 75)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_4864.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 76)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4864.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 77)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_4864.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 78)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4864.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 79)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_4864.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 80)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_4864.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 82)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_4864_.increment () ;
      enumerator_4864.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                  const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typedef void (*extensionMethodSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_559_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_559 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_559.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_559.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_559.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_559_IDX.getter_string (SOURCE_FILE ("extension-method.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_559.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_559.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_559_IDX.getter_string (SOURCE_FILE ("extension-method.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_559.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_559.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_559_IDX.getter_string (SOURCE_FILE ("extension-method.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_559.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_559_IDX.getter_string (SOURCE_FILE ("extension-method.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_559_IDX.increment () ;
      enumerator_559.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionMethodSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 27)).stringValue () ;
  result << " inMethod) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2026_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2026 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2026.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2026.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2026.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2026.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2026.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2026.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2026.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2026.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2026.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2026.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2026.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2026.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2026_.increment () ;
      enumerator_2026.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                     const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static TC_UniqueArray <extensionMethodSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gExtensionMethodTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionMethodSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inMethod) {\n"
    "  gExtensionMethodTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1382_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1382 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1382.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1382.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_1382.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 22)).stringValue () ;
        result << " constin_" ;
        result << enumerator_1382.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 22)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1382.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 23)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_1382.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 24)).stringValue () ;
          result << " & io_" ;
          result << enumerator_1382.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 24)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1382.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 25)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1382.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 26)).stringValue () ;
            result << " & out_" ;
            result << enumerator_1382.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 26)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1382.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 28)).stringValue () ;
            result << " in_" ;
            result << enumerator_1382.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 28)).stringValue () ;
          }
        }
      }
      index_1382_.increment () ;
      enumerator_1382.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n" ;
  GALGAS_uint index_2288_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2288 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2288.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2288.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 35)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_2288.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 36)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_2288_.increment () ;
      enumerator_2288.gotoNextObject () ;
    }
  }
  result << "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 40)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    extensionMethodSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 43)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 43)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gExtensionMethodTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 44)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 44)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gExtensionMethodTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 45)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 45)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gExtensionMethodTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 50)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 50)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gExtensionMethodTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 51)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 51)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gExtensionMethodTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 55)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 55)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "      fatalError (\"FATAL CATEGORY METHOD CALL ERROR\", __FILE__, __LINE__) ;\n"
    "    }else{\n"
    "      f (inObject, " ;
  GALGAS_uint index_3937_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3937 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3937.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_3937.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 62)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_3937.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 63)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_3937.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 64)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_3937.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 65)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_3937.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 66)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_3937.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 67)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_3937.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 69)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_3937_.increment () ;
      enumerator_3937.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void defineExtensionMethod_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 83)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 83)).stringValue () ;
  result << " (void) {\n"
    "  enterExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 84)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 84)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionMethod_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 85)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 85)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void freeExtensionMethod_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 90)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 90)).stringValue () ;
  result << " (void) {\n"
    "  gExtensionMethodTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 91)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 91)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gMethod_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 96)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 96)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "defineExtensionMethod_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 96)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 96)).stringValue () ;
  result << ",\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeExtensionMethod_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 97)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 97)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Overriding extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void defineExtensionMethod_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 11)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (void) {\n"
    "  enterExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionMethod_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 13)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gMethod_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (defineExtensionMethod_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << ", NULL) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (C_Compiler * inCompiler,
                                                                                              const GALGAS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_string & in_FILEWRAPPER_5F_NAME
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_348_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_348 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_348.hasCurrentObject ()) {
      result << "extern const char * gWrapperFileContent_" ;
      result << enumerator_348.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue () ;
      result << " ;\n" ;
      index_348_idx.increment () ;
      enumerator_348.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_636_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_636 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_636.hasCurrentObject ()) {
      result << "extern const uint8_t gWrapperFileContent_" ;
      result << enumerator_636.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue () ;
      result << " [] ;\n" ;
      index_636_idx.increment () ;
      enumerator_636.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_918_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_918 (in_FILE_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_918.hasCurrentObject ()) {
      result << "extern const cRegularFileWrapper gWrapperFile_" ;
      result << enumerator_918.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue () ;
      result << " ;\n" ;
      index_918_idx.increment () ;
      enumerator_918.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1197_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1197 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1197.hasCurrentObject ()) {
      result << "extern const cDirectoryWrapper gWrapperDirectory_" ;
      result << enumerator_1197.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue () ;
      result << " ;\n" ;
      index_1197_.increment () ;
      enumerator_1197.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                            const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                            const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " extensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class GALGAS_" ;
  result << in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " & inObject" ;
  GALGAS_uint index_545_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_545 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_545.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_545.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_545.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue () ;
        result << " & constinArgument" ;
        result << index_545_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_545.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue () ;
        result << " inArgument" ;
        result << index_545_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue () ;
      }
      index_545_IDX.increment () ;
      enumerator_545.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void extensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class GALGAS_" ;
  result << in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " inObject" ;
  GALGAS_uint index_485_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_485 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_485.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_485.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_485.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_485.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue () ;
          result << " & io_" ;
          result << enumerator_485.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_485.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue () ;
            result << " & out_" ;
            result << enumerator_485.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue () ;
            result << " in_" ;
            result << enumerator_485.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_485_.increment () ;
      enumerator_485.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterAsFunctionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void extensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class GALGAS_" ;
  result << in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " & ioObject" ;
  GALGAS_uint index_485_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_485 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_485.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_485.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_485.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_485.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue () ;
          result << " & io_" ;
          result << enumerator_485.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_485.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue () ;
            result << " & out_" ;
            result << enumerator_485.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue () ;
            result << " in_" ;
            result << enumerator_485.current_mFormalArgumentName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_485_.increment () ;
      enumerator_485.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                           const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " function_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_430_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_430 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_430.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_430.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_430.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << " & constinArgument" ;
        result << index_430_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_430.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue () ;
        result << " inArgument" ;
        result << index_430_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_430_IDX.increment () ;
      enumerator_430.gotoNextObject () ;
    }
  }
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                              const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                              const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                              const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Function introspection                                                                       \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static const C_galgas_type_descriptor * functionArgs_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
  result << " [" ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
  result << "] = {\n" ;
  GALGAS_uint index_842_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_842 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_842.hasCurrentObject ()) {
      result << "  & kTypeDescriptor_GALGAS_" ;
      result << enumerator_842.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 15)).stringValue () ;
      result << ",\n" ;
      index_842_.increment () ;
      enumerator_842.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 23)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 24)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & /* inEffectiveParameterArray */,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n"
      "  return function_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 28)).stringValue () ;
    result << " (inCompiler COMMA_THERE).getter_object (THERE) ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 31)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & inEffectiveParameterArray,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n" ;
    GALGAS_uint index_2090_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2090 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2090.hasCurrentObject ()) {
        result << "  const GALGAS_" ;
        result << enumerator_2090.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << " operand" ;
        result << index_2090_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << " = GALGAS_" ;
        result << enumerator_2090.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << "::extractObject (" ;
        columnMarker = result.currentColumn () ;
        result << "inEffectiveParameterArray.objectAtIndex (" ;
        result << index_2090_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 37)).stringValue () ;
        result << " COMMA_HERE),\n"
          "  " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "inCompiler\n"
          "  " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_THERE) ;\n" ;
        index_2090_IDX.increment () ;
        enumerator_2090.gotoNextObject () ;
      }
    }
    result << "  return function_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 41)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_2500_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2500 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2500.hasCurrentObject ()) {
        result << "operand" ;
        result << index_2500_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 43)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_2500_IDX.increment () ;
        enumerator_2500.gotoNextObject () ;
      }
    }
    result << "inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_THERE).getter_object (THERE) ;\n"
      "}\n" ;
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_galgas_function_descriptor functionDescriptor_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << in_FUNCTION_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionWithGenericHeader_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 52)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "& kTypeDescriptor_GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionArgs_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 55)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void routine_" ;
  result << in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_392_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_392 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_392.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_392.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_392.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << " constinArgument" ;
        result << index_392_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_392.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_392.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue () ;
          result << " & ioArgument" ;
          result << index_392_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_392.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_392.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue () ;
            result << " & outArgument" ;
            result << index_392_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_392.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue () ;
            result << " inArgument" ;
            result << index_392_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue () ;
          }
        }
      }
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_392_IDX.increment () ;
      enumerator_392.gotoNextObject () ;
    }
  }
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                             const GALGAS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_ROUTINE_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Function implementation                                                                      \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static bool gOnceFunctionResultAvailable_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 13)).stringValue () ;
  result << " = false ;\n"
    "static GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 14)).stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " function_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    "              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (! gOnceFunctionResultAvailable_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 20)).stringValue () ;
  result << ") {\n"
    "    gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue () ;
  result << " = onceFunction_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue () ;
  result << " (inCompiler COMMA_THERE) ;\n"
    "    gOnceFunctionResultAvailable_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 22)).stringValue () ;
  result << " = true ;\n"
    "  }\n"
    "  return gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 24)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void releaseOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (void) {\n"
    "  gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 30)).stringValue () ;
  result << ".drop () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gEpilogueForOnceFunction_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 35)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NULL,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "releaseOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
  result << ") ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Function introspection                                                                       \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static const C_galgas_type_descriptor * functionArgs_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue () ;
  result << " [" ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue () ;
  result << "] = {\n" ;
  GALGAS_uint index_2680_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_2680 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2680.hasCurrentObject ()) {
      result << "  & kTypeDescriptor_GALGAS_" ;
      result << enumerator_2680.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 45)).stringValue () ;
      result << ",\n" ;
      index_2680_.increment () ;
      enumerator_2680.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 53)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 54)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & /* inEffectiveParameterArray */,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n"
      "  return function_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 58)).stringValue () ;
    result << " (inCompiler COMMA_THERE).getter_object (THERE) ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 61)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & inEffectiveParameterArray,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* inErrorLocation*/\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n" ;
    GALGAS_uint index_3927_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_3927 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3927.hasCurrentObject ()) {
        result << "  const GALGAS_" ;
        result << enumerator_3927.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " operand" ;
        result << index_3927_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " = GALGAS_" ;
        result << enumerator_3927.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << "::extractObject (inEffectiveParameterArray.objectAtIndex (" ;
        result << index_3927_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " COMMA_HERE), inCompiler COMMA_THERE) ;\n" ;
        index_3927_IDX.increment () ;
        enumerator_3927.gotoNextObject () ;
      }
    }
    result << "  return function_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 68)).stringValue () ;
    result << " (" ;
    GALGAS_uint index_4314_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_4314 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4314.hasCurrentObject ()) {
        result << "operand" ;
        result << index_4314_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 70)).stringValue () ;
        result << ", " ;
        index_4314_IDX.increment () ;
        enumerator_4314.gotoNextObject () ;
      }
    }
    result << "inCompiler COMMA_THERE).getter_object (THERE) ;\n"
      "}\n" ;
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_galgas_function_descriptor functionDescriptor_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << in_FUNCTION_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionWithGenericHeader_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 79)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "& kTypeDescriptor_GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionArgs_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 82)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (C_Compiler * inCompiler,
                                                                                                      const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_string filewrapperTemplate_" ;
  result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class C_Compiler * inCompiler" ;
  GALGAS_uint index_521_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_521 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_521.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << enumerator_521.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue () ;
      result << " & " ;
      result << enumerator_521.current_mFormalArgumentCppName (HERE).stringValue () ;
      index_521_.increment () ;
      enumerator_521.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                         const GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                         const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const GALGAS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                         const GALGAS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                         const GALGAS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_string filewrapperTemplate_" ;
  result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * " ;
  const enumGalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "/* " ;
    result << function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 9)).stringValue () ;
    result << " */" ;
  }else if (kBoolFalse == test_0) {
    result << function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 11)).stringValue () ;
  }
  GALGAS_uint index_630_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_630 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_630.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_630.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue () ;
      result << " & " ;
      const enumGalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (enumerator_630.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "/* " ;
        result << enumerator_630.current_mFormalArgumentCppName (HERE).stringValue () ;
        result << " */" ;
      }else if (kBoolFalse == test_1) {
        result << enumerator_630.current_mFormalArgumentCppName (HERE).stringValue () ;
      }
      index_630_.increment () ;
      enumerator_630.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  C_String result ;\n" ;
  const enumGalgasBool test_2 = in_USES_5F_COLUMN_5F_MARKER.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  uint32_t columnMarker = 0 ;\n" ;
  }else if (kBoolFalse == test_2) {
  }
  if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
    result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
  }
  result << in_GENERATED_5F_INSTRUCTION_5F_STRING.stringValue () ;
  if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
    result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
  }
  result << "  return GALGAS_string (result) ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@routinePrototypeDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_routinePrototypeDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1094)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_routinePrototypeDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration.mSlotID,
                                   extensionGetter_routinePrototypeDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_routinePrototypeDeclarationForGeneration_headerKind (defineExtensionGetter_routinePrototypeDeclarationForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routinePrototypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GALGAS_string & outArgument_outHeader,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routinePrototypeDeclarationForGeneration * object = (const cPtr_routinePrototypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routinePrototypeDeclarationForGeneration) ;
  const GALGAS_routinePrototypeDeclarationForGeneration temp_0 = object ;
  const GALGAS_routinePrototypeDeclarationForGeneration temp_1 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, temp_0.getter_mRoutineName (HERE), temp_1.getter_mFormalArgumentList (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1102))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPrototypeDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_functionPrototypeDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1113)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_functionPrototypeDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration.mSlotID,
                                   extensionGetter_functionPrototypeDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_functionPrototypeDeclarationForGeneration_headerKind (defineExtensionGetter_functionPrototypeDeclarationForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                             GALGAS_string & outArgument_outHeader,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionPrototypeDeclarationForGeneration * object = (const cPtr_functionPrototypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionPrototypeDeclarationForGeneration) ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_0 = object ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_1 = object ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.getter_mFunctionName (HERE), temp_1.getter_mFormalArgumentList (HERE), temp_2.getter_mReturnType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1124)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1121))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_onceFunctionDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1131)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_onceFunctionDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                   extensionGetter_onceFunctionDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_onceFunctionDeclarationForGeneration_headerKind (defineExtensionGetter_onceFunctionDeclarationForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationForGeneration * object = (const cPtr_onceFunctionDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationForGeneration) ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = object ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.getter_mFunctionName (HERE), GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1141)), temp_1.getter_mReturnType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1142)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1139))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                              extensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outImplementation ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  const GALGAS_semanticTypeForGeneration temp_0 = object ;
  const GALGAS_semanticTypeForGeneration temp_1 = object ;
  const GALGAS_semanticTypeForGeneration temp_2 = object ;
  const GALGAS_semanticTypeForGeneration temp_3 = object ;
  result_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1152)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1153)), temp_2.getter_mSelfTypeEntry (HERE).getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1154)), temp_3.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1155)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1151))) ;
//---
  return result_outImplementation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation (void) {
  enterExtensionGetter_appendTypeGenericImplementation (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                                        extensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticTypeForGeneration_appendTypeGenericImplementation (defineExtensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routineImplementationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_routineImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineImplementationForGeneration * object = (const cPtr_routineImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routineImplementationForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineImplementationForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mHasHeader (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_routineImplementationForGeneration temp_2 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_2.getter_mRoutineName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1169)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1169))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1169)) ;
    }
  }
  GALGAS_string var_code_47279 ;
  {
  const GALGAS_routineImplementationForGeneration temp_3 = object ;
  const GALGAS_routineImplementationForGeneration temp_4 = object ;
  const GALGAS_routineImplementationForGeneration temp_5 = object ;
  const GALGAS_routineImplementationForGeneration temp_6 = object ;
  routine_generateProcedure (temp_3.getter_mGenerateStatic (HERE), GALGAS_string ("routine_").add_operation (temp_4.getter_mRoutineName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1173)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1173)), ioArgument_ioInclusionSet, temp_5.getter_mFormalArgumentList (HERE), temp_6.getter_mRoutineInstructionList (HERE), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_47279, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1171)) ;
  }
  const GALGAS_routineImplementationForGeneration temp_7 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.getter_mRoutineName (HERE), var_code_47279 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1184))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_routineImplementationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_routineImplementationForGeneration.mSlotID,
                                                     extensionMethod_routineImplementationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_routineImplementationForGeneration_appendSpecificImplementation (defineExtensionMethod_routineImplementationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionImplementationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_string & outArgument_outImplementation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionImplementationForGeneration * object = (const cPtr_functionImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionImplementationForGeneration) ;
  const GALGAS_functionImplementationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.getter_mFunctionName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1196)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1196))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1196)) ;
  GALGAS_string var_code_48091 ;
  {
  const GALGAS_functionImplementationForGeneration temp_1 = object ;
  const GALGAS_functionImplementationForGeneration temp_2 = object ;
  const GALGAS_functionImplementationForGeneration temp_3 = object ;
  const GALGAS_functionImplementationForGeneration temp_4 = object ;
  const GALGAS_functionImplementationForGeneration temp_5 = object ;
  routine_generateFunction (GALGAS_string ("function_").add_operation (temp_1.getter_mFunctionName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1198)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1198)), ioArgument_ioInclusionSet, temp_2.getter_mFormalArgumentList (HERE), temp_3.getter_mFunctionInstructionList (HERE), GALGAS_string ("C_Compiler"), temp_4.getter_mReturnType (HERE), temp_5.getter_mResultVariableCppName (HERE), GALGAS_bool (false), var_code_48091, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1197)) ;
  }
  const GALGAS_functionImplementationForGeneration temp_6 = object ;
  const GALGAS_functionImplementationForGeneration temp_7 = object ;
  const GALGAS_functionImplementationForGeneration temp_8 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.getter_mFunctionName (HERE), var_code_48091, temp_7.getter_mFormalArgumentList (HERE), temp_8.getter_mReturnType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1212)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1208))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionImplementationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_functionImplementationForGeneration.mSlotID,
                                                     extensionMethod_functionImplementationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionImplementationForGeneration_appendSpecificImplementation (defineExtensionMethod_functionImplementationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationForGeneration * object = (const cPtr_onceFunctionDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationForGeneration) ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.getter_mFunctionName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1223)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223)) ;
  GALGAS_string var_code_49008 ;
  {
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = object ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_2 = object ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_3 = object ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_4 = object ;
  routine_generateFunction (GALGAS_string ("onceFunction_").add_operation (temp_1.getter_mFunctionName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1225)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1225)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1227)), temp_2.getter_mFunctionInstructionList (HERE), GALGAS_string ("C_Compiler"), temp_3.getter_mReturnType (HERE), temp_4.getter_mResultVariableCppName (HERE), GALGAS_bool (true), var_code_49008, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1224)) ;
  }
  const GALGAS_onceFunctionDeclarationForGeneration temp_5 = object ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.getter_mFunctionName (HERE), var_code_49008, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1238)), temp_6.getter_mReturnType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1239)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1235))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                                     extensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_lexiqueDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1248)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexiqueDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                   extensionGetter_lexiqueDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexiqueDeclarationForGeneration_headerKind (defineExtensionGetter_lexiqueDeclarationForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_string & outArgument_outHeader,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = object ;
  outArgument_outHeader = temp_0.getter_mHeaderContents (HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                              extensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                          const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_string & outArgument_outHeader,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1265)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1265))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1265)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = object ;
  outArgument_outHeader = temp_1.getter_mCppContents (HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                                     extensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_string constinArgument_inProductDirectory,
                                                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                                 GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = object ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1277)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1277)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1277))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1277)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = object ;
  const GALGAS_lexiqueDeclarationForGeneration temp_2 = object ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_1.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1280)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1280)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1280)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), temp_2.getter_mCocoaHeader (HERE), GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1278)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_3 = object ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1290)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1290)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1290))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1290)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_4 = object ;
  ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_4.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1291)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1291)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1291))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1291)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_5 = object ;
  const GALGAS_lexiqueDeclarationForGeneration temp_6 = object ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_5.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1294)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), temp_6.getter_mCocoaImplementation (HERE), GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"
    "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (void) {
  enterExtensionMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                            extensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@programComponentForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_programComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1310)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_programComponentForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_programComponentForGeneration.mSlotID,
                                   extensionGetter_programComponentForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_programComponentForGeneration_headerKind (defineExtensionGetter_programComponentForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@programComponentForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_programComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_programComponentForGeneration * object = (const cPtr_programComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_programComponentForGeneration) ;
  const GALGAS_programComponentForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.plusAssign_operation(temp_0.getter_mInclusionSet (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)) ;
  const GALGAS_programComponentForGeneration temp_1 = object ;
  outArgument_outImplementation = temp_1.getter_mImplementationString (HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_programComponentForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_programComponentForGeneration.mSlotID,
                                                     extensionMethod_programComponentForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_programComponentForGeneration_appendSpecificImplementation (defineExtensionMethod_programComponentForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_filewrapperDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1330)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_filewrapperDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                   extensionGetter_filewrapperDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_filewrapperDeclarationForGeneration_headerKind (defineExtensionGetter_filewrapperDeclarationForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile (const GALGAS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                             const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                             GALGAS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1342)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1342))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1342)) ;
  cEnumerator_wrapperFileMap enumerator_53468 (constinArgument_inFilewrapperFileMap, kENUMERATION_UP) ;
  while (enumerator_53468.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1344)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1344))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1344)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_53468.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_53468.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1346))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1346)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_53468.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1348))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348)) ;
    }
    enumerator_53468.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_53788 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_53788.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile (enumerator_53788.current_mRegularFileMap (HERE), enumerator_53788.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1352)) ;
    }
    enumerator_53788.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                       GALGAS_string & outArgument_outHeader,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  GALGAS_stringlist var_regularFileIndexStringList_54336 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1368)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList_54394 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1369)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList_54450 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1370)) ;
  GALGAS_stringlist var_directoryIndexStringList_54497 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1371)) ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = object ;
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = object ;
  routine_recursivlyEnumerateRegularFile (temp_0.getter_mFilewrapperFileMap (HERE), temp_1.getter_mFilewrapperDirectoryMap (HERE), var_regularFileIndexStringList_54336, var_directoryIndexStringList_54497, var_regularTextContentIndexStringList_54450, var_regularBinaryContentIndexStringList_54394, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1372)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_54336, var_directoryIndexStringList_54497, var_regularTextContentIndexStringList_54450, var_regularBinaryContentIndexStringList_54394, temp_2.getter_mFilewrapperName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1380))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = object ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_55103 (temp_3.getter_mFilewrapperTemplateListForGeneration (HERE), kENUMERATION_UP) ;
  while (enumerator_55103.hasCurrentObject ()) {
    const GALGAS_filewrapperDeclarationForGeneration temp_4 = object ;
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.getter_mFilewrapperName (HERE), enumerator_55103.current_mFilewrapperTemplateName (HERE), enumerator_55103.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1389))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1389)) ;
    enumerator_55103.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                              extensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateWrapperContents (const GALGAS_string constinArgument_inFilewrapperName,
                                      const GALGAS_string constinArgument_inFilewrapperDirectory,
                                      const GALGAS_uint constinArgument_inFilewrapperDirectoryIndex,
                                      const GALGAS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                      const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                      GALGAS_string & ioArgument_ioImplementation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_wrapperFileMap enumerator_55795 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_55795.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_55795.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_contents_55849 = GALGAS_string::constructor_stringWithContentsOfFile (enumerator_55795.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (enumerator_55795.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1410)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (GALGAS_string ("'\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (GALGAS_string ("const char * gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (enumerator_55795.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1413)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (var_contents_55849.getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1414)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (GALGAS_string (" ;\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)).add_operation (enumerator_55795.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1415)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1416)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)).add_operation (enumerator_55795.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1417)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)).add_operation (enumerator_55795.current_lkey (HERE).getter_string (HERE).getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1418)).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1418)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (GALGAS_string ("  true, // Text file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (var_contents_55849.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1420)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1420)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1420)).add_operation (GALGAS_string (", // Text length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1420)).add_operation (GALGAS_string ("  gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1420)).add_operation (enumerator_55795.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1421)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1421)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)).add_operation (GALGAS_string (") ;\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_data var_contents_56713 = GALGAS_data::constructor_dataWithContentsOfFile (enumerator_55795.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1424)) ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)).add_operation (enumerator_55795.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1425)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)).add_operation (GALGAS_string ("'\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)).add_operation (GALGAS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)).add_operation (enumerator_55795.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1427)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1426)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1428)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (var_contents_56713.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1428)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1428)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (GALGAS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (var_contents_56713.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1429)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (GALGAS_string ("} ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1429)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1429)).add_operation (enumerator_55795.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1430)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1430)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1430)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1431)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1430)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1431)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1431)).add_operation (enumerator_55795.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1432)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1432)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1432)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1432)).add_operation (enumerator_55795.current_lkey (HERE).getter_string (HERE).getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1433)).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1433)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1433)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1433)).add_operation (GALGAS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1433)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1434)).add_operation (var_contents_56713.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1435)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1435)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)).add_operation (GALGAS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)).add_operation (GALGAS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)).add_operation (enumerator_55795.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1436)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1436)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1436)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1436)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1436)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1436)).add_operation (GALGAS_string (") ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1436)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)) ;
    }
    enumerator_55795.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_57668 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_57668.hasCurrentObject ()) {
    {
    routine_generateWrapperContents (constinArgument_inFilewrapperName, enumerator_57668.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1444)), enumerator_57668.current_mWrapperDirectoryIndex (HERE), enumerator_57668.current_mRegularFileMap (HERE), enumerator_57668.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1442)) ;
    }
    enumerator_57668.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)).add_operation (GALGAS_string ("' directory\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)).add_operation (GALGAS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1454)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1453)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1454)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1455)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)) ;
  cEnumerator_wrapperFileMap enumerator_58248 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_58248.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperFile_").add_operation (enumerator_58248.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1457)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1457)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)) ;
    enumerator_58248.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (GALGAS_string ("' directory\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (GALGAS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1464)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1463)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1464)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1465)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1465)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)) ;
  cEnumerator_wrapperDirectoryMap enumerator_58845 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_58845.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperDirectory_").add_operation (enumerator_58845.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1467)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1467)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)) ;
    enumerator_58845.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1472)).add_operation (GALGAS_string ("'\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1472)).add_operation (GALGAS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1472)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1473)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1473)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1473)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1473)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1475)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1476)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1476)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)).add_operation (GALGAS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1477)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1478)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1478)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1478)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1478)).add_operation (GALGAS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1478)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1479)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1479)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)).add_operation (GALGAS_string (") ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1472)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_string & outArgument_outImplementation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.getter_mFilewrapperName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1489))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1489)) ;
  GALGAS_string var_filewrapperImplementation_60172 = GALGAS_string::makeEmptyString () ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = object ;
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = object ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = object ;
  routine_generateWrapperContents (temp_1.getter_mFilewrapperName (HERE), GALGAS_string::makeEmptyString (), GALGAS_uint ((uint32_t) 0U), temp_2.getter_mFilewrapperFileMap (HERE), temp_3.getter_mFilewrapperDirectoryMap (HERE), var_filewrapperImplementation_60172, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1491)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.getter_mFilewrapperName (HERE), var_filewrapperImplementation_60172 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1499))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_5 = object ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_60587 (temp_5.getter_mFilewrapperTemplateListForGeneration (HERE), kENUMERATION_UP) ;
  while (enumerator_60587.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList_60683 = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex_60721 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_stringset var_unusedVariableCppNameSet_60765 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1508)) ;
    var_unusedVariableCppNameSet_60765.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1509))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1509)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_60878 (enumerator_60587.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
    while (enumerator_60878.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_60765.addAssign_operation (enumerator_60878.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1511)) ;
      enumerator_60878.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker_60973 = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction (enumerator_60587.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_60683, ioArgument_ioInclusionSet, var_temporaryVariableIndex_60721, var_unusedVariableCppNameSet_60765, var_useColumnMarker_60973, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1514)) ;
    }
    const GALGAS_filewrapperDeclarationForGeneration temp_6 = object ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.getter_mFilewrapperName (HERE), enumerator_60587.current_mFilewrapperTemplateName (HERE), enumerator_60587.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_60765, var_useColumnMarker_60973, var_generatedCodeForInstructionList_60683 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1523))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1523)) ;
    enumerator_60587.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                                     extensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedTypeGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedTypeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedTypeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_predefinedTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_predefinedTypeGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"all-predefined-types.h\"\n"
    "#include \"galgas2/cCollectionElement.h\"\n"
    "#include \"galgas2/cSortedListElement.h\"\n"
    "#include \"galgas2/capSortedListElement.h\"\n"
    "#include \"galgas2/C_Compiler.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement::cMapElement (const GALGAS_lstring & inLKey\n"
    "                          COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mProperty_lkey (inLKey) {\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#pragma once\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"strings/C_String.h\"\n"
    "#include \"time/C_Timer.h\"\n"
    "#include \"galgas2/AC_GALGAS_root.h\"\n"
    "#include \"galgas2/C_galgas_type_descriptor.h\"\n"
    "#include \"galgas2/typeComparisonResult.h\"\n"
    "#include \"galgas2/cGenericAbstractEnumerator.h\"\n"
    "#include \"galgas2/cEnumerator_range.h\"\n"
    "#include \"galgas2/AC_GALGAS_list.h\"\n"
    "#include \"galgas2/AC_GALGAS_sortedlist.h\"\n"
    "#include \"galgas2/AC_GALGAS_map.h\"\n"
    "#include \"galgas2/AC_GALGAS_uniqueMap.h\"\n"
    "#include \"galgas2/AC_GALGAS_reference_class.h\"\n"
    "#include \"galgas2/AC_GALGAS_value_class.h\"\n"
    "#include \"galgas2/AC_GALGAS_enumAssociatedValues.h\"\n"
    "#include \"galgas2/AC_GALGAS_graph.h\"\n"
    "#include \"galgas2/acPtr_class.h\"\n"
    "#include \"command_line_interface/C_BoolCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_UIntCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_StringCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_StringListCommandLineOption.h\"\n"
    "#include \"utilities/C_PrologueEpilogue.h\"\n"
    "#include \"utilities/C_BigInt.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class C_Compiler ;\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/cCollectionElement.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cMapElement : public cCollectionElement {\n"
    "//--- Attribut\n"
    "  public: GALGAS_lstring mProperty_lkey ;\n"
    "\n"
    "//--- Default constructor\n"
    "  public: cMapElement (const GALGAS_lstring & inLKey\n"
    "                        COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cMapElement (const cMapElement &) ;\n"
    "  private: cMapElement & operator = (const cMapElement &) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/cSortedListElement.h\"\n"
    "#include \"galgas2/capSortedListElement.h\"\n"
    "#include \"galgas2/C_galgas_function_descriptor.h\"\n"
    "#include \"galgas2/cObjectArray.h\"\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @sint type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_sint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: int32_t mSIntValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline int32_t intValue (void) const { return mSIntValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_sint (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_sint constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_sint (const int32_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @sint64 type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_sint_36__34_ : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: int64_t mSInt64Value ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline int64_t int64Value (void) const { return mSInt64Value ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_sint_36__34_ (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_sint_36__34_ constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_sint_36__34_ (const int64_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @object type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_object ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_object : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data member\n"
    "  private: cPtr_object * mSharedObject ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedObject != NULL ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_object (void) ;\n"
    "\n"
    "//--------------------------------- Constructor from pointer\n"
    "  public: GALGAS_object (AC_GALGAS_root * inObjectPointer\n"
    "                          COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_object (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_object (const GALGAS_object & inSource) ;\n"
    "  public: GALGAS_object & operator = (const GALGAS_object & inSource) ;\n"
    "\n"
    "//--------------------------------- Embedded Object\n"
    "  public: const AC_GALGAS_root * embeddedObject (void) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @uint type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_uint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: uint32_t mUIntValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n"
    "  public: inline void increment (void) { mUIntValue ++ ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_uint (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_uint constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public: GALGAS_uint (const uint32_t inValue) ;\n"
    "  public: GALGAS_uint (const bool inValid, const uint32_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//  @uint64 type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_uint_36__34_ : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: uint64_t mUInt64Value ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_uint_36__34_ (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_uint_36__34_ constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_uint_36__34_ (const uint64_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@bool type").stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typedef enum {kBoolNotValid, kBoolFalse, kBoolTrue} enumGalgasBool ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_bool : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: bool mBoolValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n"
    "  public: inline bool boolValue (void) const { return mBoolValue ; }\n"
    "  public: enumGalgasBool boolEnum (void) const ;\n"
    "\n"
    "//--------------------------------- Drop\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_bool (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_bool constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public: GALGAS_bool (const bool inValue) ; // Is built\n"
    "  public: GALGAS_bool (const bool inBuilt, const bool inValue) ;\n"
    "\n"
    "//--------------------------------- Constructor for comparison result\n"
    "  public: GALGAS_bool (const typeComparisonKind inComparisonKind,\n"
    "                        const typeComparisonResult inComparisonResult) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "// @binaryset type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"bdd/C_BDD.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_binaryset : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: C_BDD mBDD ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline C_BDD bddValue (void) const { return mBDD ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_binaryset (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_binaryset (const C_BDD & inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @function type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class C_galgas_function_descriptor ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_function : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data member\n"
    "  private: const C_galgas_function_descriptor * mFunctionDescriptor ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return NULL != mFunctionDescriptor ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mFunctionDescriptor = NULL ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_function (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_function (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_function (const GALGAS_function & inSource) ;\n"
    "  public: GALGAS_function & operator = (const GALGAS_function & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_function (const C_galgas_function_descriptor * inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @type type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_type : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: const C_galgas_type_descriptor * mTypeDescriptor ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return NULL != mTypeDescriptor ; }\n"
    "  public: inline void drop (void) { mTypeDescriptor = NULL ; }\n"
    "  public: inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_type (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_type (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_type (const GALGAS_type & inSource) ;\n"
    "  public: GALGAS_type & operator = (const GALGAS_type & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_type (const C_galgas_type_descriptor * inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @location type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/C_LocationInSource.h\"\n"
    "#include \"galgas2/C_SourceTextInString.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_location : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: C_LocationInSource mStartLocationInSource ;\n"
    "  private: C_LocationInSource mEndLocationInSource ;\n"
    "  private: C_SourceTextInString mSourceText ;\n"
    "  private: bool mIsValid ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "  public: C_LocationInSource startLocation (void) const { return mStartLocationInSource ; }\n"
    "  public: C_LocationInSource endLocation (void) const { return mEndLocationInSource ; }\n"
    "  public: C_SourceTextInString sourceText (void) const { return mSourceText ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_location (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_location (const C_LocationInSource & inStartLocationInSource,\n"
    "                            const C_LocationInSource & inEndLocationInSource,\n"
    "                            const C_SourceTextInString & inSourceText) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @data type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_data : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: C_Data mData ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline C_Data dataValue (void) const { return mData ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_data (void) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public: GALGAS_data (const C_Data & inData) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @char type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_char : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: utf32 mCharValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline utf32 charValue (void) const { return mCharValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_char (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_char constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_char (const utf32 inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//  @double type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_double : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: double mDoubleValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline double doubleValue (void) const { return mDoubleValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_double (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_double constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_double (const double inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @string type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "AC_OutputStream & operator << (AC_OutputStream & inStream,\n"
    "                               const GALGAS_string & inString) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "AC_OutputStream & operator << (AC_OutputStream & inStream,\n"
    "                               const GALGAS_lstring & inString) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_string : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: C_String mString ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "  public: inline C_String stringValue (void) const { return mString ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_string (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_string constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Constructor for making an empty string\n"
    "  public: static GALGAS_string makeEmptyString (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_string (const C_String & inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @stringset type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_stringset : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: class cSharedStringsetRoot * mSharedRoot ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedRoot != NULL ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_stringset (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_stringset (void) ;\n"
    "\n"
    "//--------------------------------- In debug mode : check method\n"
    "  protected: void checkStringset (LOCATION_ARGS) const ;\n"
    "\n"
    "//--------------------------------- Insulate\n"
    "  protected: void insulate (LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @filewrapper type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cRegularFileWrapper {\n"
    "  public: const char * mName ;\n"
    "  public: const char * mExtension ;\n"
    "  public: const bool mIsTextFile ; // True: text file, false: binary file\n"
    "  public: const uint32_t mFileLength ;\n"
    "  public: const char * mContents ;\n"
    "\n"
    "//--- Constructor\n"
    "  public: cRegularFileWrapper (const char * inName,\n"
    "                                const char * inExtension,\n"
    "                                const bool inIsTextFile,\n"
    "                                const uint32_t inFileLength,\n"
    "                                const char * inContents) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n"
    "  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cDirectoryWrapper {\n"
    "  public: const char * mDirectoryName ;\n"
    "  public: const uint32_t mFileCount ;\n"
    "  public: const cRegularFileWrapper * * const mFiles ;\n"
    "  public: const uint32_t mDirectoryCount ;\n"
    "  public: const cDirectoryWrapper * * mDirectories ;\n"
    "\n"
    "//--- Constructor\n"
    "  public: cDirectoryWrapper (const char * inDirectoryName,\n"
    "                              const uint32_t inFileCount,\n"
    "                              const cRegularFileWrapper * * const inFiles,\n"
    "                              const uint32_t inDirectoryCount,\n"
    "                              const cDirectoryWrapper * * inDirectories) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n"
    "  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_filewrapper : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n"
    "  private: C_String mCurrentDirectory ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return NULL != mRootDirectoryPtr ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mRootDirectoryPtr = NULL ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_filewrapper (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_filewrapper (const GALGAS_filewrapper & inSource) ;\n"
    "  public: GALGAS_filewrapper & operator = (const GALGAS_filewrapper & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@application type").stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_application : public AC_GALGAS_root {\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return false ; }\n"
    "  public: inline void drop (void) { }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_application (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_application (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_application (const GALGAS_application & inSource) ;\n"
    "  public: GALGAS_application & operator = (const GALGAS_application & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @bigint type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_bigint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private properties\n"
    "  private: bool mIsValid ;\n"
    "  private: C_BigInt mValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: inline C_BigInt bigintValue (void) const { return mValue ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_bigint (void) ;\n"
    "\n"
    "//--------------------------------- Constructor\n"
    "  public: GALGAS_bigint (const C_BigInt & inValue) ;\n"
    "  public: GALGAS_bigint (const char * inDecimalString, C_Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Destructor\n"
    "  public: virtual ~ GALGAS_bigint (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @timer type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_timer : public AC_GALGAS_root {\n"
    "//--------------------------------- Private properties\n"
    "  private: bool mIsValid ;\n"
    "  private: C_Timer mTimer ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) { mIsValid = false ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_timer (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outHeader ; // Returned variable
  const cPtr_primitiveTypeForGeneration * object = (const cPtr_primitiveTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_primitiveTypeForGeneration) ;
  const GALGAS_primitiveTypeForGeneration temp_0 = object ;
  switch (temp_0.getter_mKind (HERE).enumValue ()) {
  case GALGAS_predefinedTypeKindEnum::kNotBuilt:
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1593))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1595))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1597))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1599))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1601))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1603))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1605))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1607))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1609))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1611))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1613))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1615))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1617))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1619))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1621))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1623))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1625))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bigint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1627))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_timer:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629))) ;
    }
    break ;
  }
  const GALGAS_primitiveTypeForGeneration temp_1 = object ;
  const GALGAS_primitiveTypeForGeneration temp_2 = object ;
  const GALGAS_primitiveTypeForGeneration temp_3 = object ;
  const GALGAS_primitiveTypeForGeneration temp_4 = object ;
  const GALGAS_primitiveTypeForGeneration temp_5 = object ;
  const GALGAS_primitiveTypeForGeneration temp_6 = object ;
  const GALGAS_primitiveTypeForGeneration temp_7 = object ;
  const GALGAS_primitiveTypeForGeneration temp_8 = object ;
  const GALGAS_primitiveTypeForGeneration temp_9 = object ;
  const GALGAS_primitiveTypeForGeneration temp_10 = object ;
  const GALGAS_primitiveTypeForGeneration temp_11 = object ;
  const GALGAS_primitiveTypeForGeneration temp_12 = object ;
  const GALGAS_primitiveTypeForGeneration temp_13 = object ;
  result_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1632)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1633)), temp_3.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1634)), temp_4.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1635)), temp_5.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1636)), temp_6.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1637)), temp_7.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1638)), temp_8.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1639)), temp_9.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1640)), temp_10.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1641)), temp_11.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1642)), temp_12.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1643)), temp_13.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1644)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1631))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1631)) ;
//---
  return result_outHeader ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (void) {
  enterExtensionGetter_appendPrimitiveTypeDeclaration (kTypeDescriptor_GALGAS_primitiveTypeForGeneration.mSlotID,
                                                       extensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (defineExtensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioHeader,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primitiveTypeForGeneration * object = (const cPtr_primitiveTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_primitiveTypeForGeneration) ;
  const GALGAS_primitiveTypeForGeneration temp_0 = object ;
  ioArgument_ioHeader.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (temp_0.getter_mPredefinedTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1652)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1652)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1652)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration (void) {
  enterExtensionMethod_appendPrimitiveTypePreDeclaration (kTypeDescriptor_GALGAS_primitiveTypeForGeneration.mSlotID,
                                                          extensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration (defineExtensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles (const GALGAS_string constinArgument_inDirectory,
                                          const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationListForGeneration,
                                          GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                          GALGAS_stringlist & ioArgument_ioToolCppFileList,
                                          GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_generatedCode_67312 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1667))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_67441 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_67441.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_67441.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1669)).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_67441.current_mDeclaration (HERE).ptr (), var_generatedCode_67312, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1670)) ;
      }
    }
    enumerator_67441.gotoNextObject () ;
  }
  var_generatedCode_67312.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1673)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_67644 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_67644.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_67644.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1675)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generatedCode_67312.plusAssign_operation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_67644.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1676)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1676)) ;
      }
    }
    enumerator_67644.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_67821 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_67821.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_67821.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1680)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_stringset joker_67906 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1681)) ;
        GALGAS_string var_code_67925 ;
        callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_67821.current_mDeclaration (HERE).ptr (), joker_67906, var_code_67925, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1681)) ;
        var_generatedCode_67312.plusAssign_operation(var_code_67925, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1682)) ;
      }
    }
    enumerator_67821.gotoNextObject () ;
  }
  var_generatedCode_67312.plusAssign_operation(GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1685))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1685)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_68110 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_68110.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_68110.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1687)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_stringset joker_68208 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1688)) ;
        GALGAS_string var_headerString_32__68236 ;
        callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_68110.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_68208, var_headerString_32__68236, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1688)) ;
        var_generatedCode_67312.plusAssign_operation(var_headerString_32__68236, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1689)) ;
      }
    }
    enumerator_68110.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1692)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1693)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1694)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.h"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_generatedCode_67312, GALGAS_string ("\n"
        "\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1695)) ;
      }
    }
  }
  var_generatedCode_67312 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1708))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_69030 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_69030.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_69030.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1710)).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_generatedCode_67312.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_69030.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1711)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1711)) ;
        GALGAS_stringset joker_69221 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1712)) ;
        GALGAS_string var_code_69240 ;
        callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_69030.current_mDeclaration (HERE).ptr (), GALGAS_unifiedTypeMap::constructor_emptyMap (SOURCE_FILE ("semanticGeneration.galgas", 1712)), joker_69221, var_code_69240, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1712)) ;
        var_generatedCode_67312.plusAssign_operation(var_code_69240, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1713)) ;
      }
    }
    enumerator_69030.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1716)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1717)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1718)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.cpp"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_generatedCode_67312, GALGAS_string ("\n"
        "\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1719)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticFileGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticFileGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (C_Compiler * /* inCompiler */,
                                                                                     const GALGAS_string & /* in_COMPONENT_5F_NAME */,
                                                                                     const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#pragma once\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"all-predefined-types.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_330_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_330 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_330.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_330.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_330_.increment () ;
      enumerator_330.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (C_Compiler * /* inCompiler */,
                                                                                             const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#include \"galgas2/C_Compiler.h\"\n"
    "#include \"galgas2/C_galgas_io.h\"\n"
    "#include \"galgas2/C_galgas_CLI_Options.h\"\n"
    "#include \"utilities/C_PrologueEpilogue.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_309_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_309 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_309.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_309.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_309_.increment () ;
      enumerator_309.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedListTypeAST'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPredefinedListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                          const GALGAS_string constinArgument_inElementTypeName,
                                          GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_1470 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 23)) ;
  var_attributeList_1470.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 25))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 25)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 28))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 24)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 31)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 31))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 31)), var_attributeList_1470  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 29))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 29)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 34)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2StringListTypeAST'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_StringListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                    GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_2158 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 43)) ;
  var_attributeList_2158.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 45))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 45)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue0"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 46))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 46)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 48))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 44)) ;
  var_attributeList_2158.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 50))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 50)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue1"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 51))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 51)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 53))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 49)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("2stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 57))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 57)), var_attributeList_2158  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 55))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 55)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2stringlist"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 60)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2LStringListTypeAST'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_LStringListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                     GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_2997 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 69)) ;
  var_attributeList_2997.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 71))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 71)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue0"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 72))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 72)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 74))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 70)) ;
  var_attributeList_2997.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 76))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 76)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue1"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 77))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 77)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 79))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 75)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("2lstringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 83))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 83)), var_attributeList_2997  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 81))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 81)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2lstringlist"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 86)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                 const GALGAS_string constinArgument_inElementTypeName,
                                                 GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_3819 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 96)) ;
  var_attributeList_3819.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 98))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 98)), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 99))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 99)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 101))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 97)) ;
  var_attributeList_3819.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 103))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 103)), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 104))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 104)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 106))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 102)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 109)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 109))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 109)), var_attributeList_3819, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 107))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 107)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 113)) ;
  }
}


