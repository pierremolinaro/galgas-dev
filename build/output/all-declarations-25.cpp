#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFunction (const GALGAS_string constinArgument_inFunctionCppRepresentationName,
                               GALGAS_stringset & ioArgument_ioInclusionSet,
                               const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                               const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                               const GALGAS_string constinArgument_inCompilerTypeName,
                               const GALGAS_unifiedTypeMapEntry constinArgument_inResultType,
                               const GALGAS_string constinArgument_inResultVariableCppName,
                               const GALGAS_bool constinArgument_inIsStatic,
                               const GALGAS_bool constinArgument_inIsConst,
                               GALGAS_string & outArgument_outGeneratedCode,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 355)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_15245 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 357)) ;
  var_unusedVariableCppNameSet_15245.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 358))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 358)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_15448 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_15448.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15448.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 361)) ;
    var_unusedVariableCppNameSet_15245.addAssign_operation (enumerator_15448.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 362)) ;
    enumerator_15448.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_15632 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_15673 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_15673.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 367)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_15733 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_15733.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_15733.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_15632, var_unusedVariableCppNameSet_15245, GALGAS_bool (false), var_routineBody_15673, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 369)) ;
    enumerator_15733.gotoNextObject () ;
  }
  {
  var_routineBody_15673.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 377)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsStatic.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 380)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 383)) ;
  GALGAS_uint var_colRef_16256 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 384)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16357 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_16357.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_16357.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16357.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)) ;
      }
    }
    if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16357.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_15245.getter_hasKey (enumerator_16357.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 392)).boolEnum () ;
      if (kBoolTrue == test_2) {
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_16357.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 397)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16256, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 398)) ;
    }
    enumerator_16357.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 401)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_15245.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)).boolEnum () ;
    if (kBoolTrue == test_3) {
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 407)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16256, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 408)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 409)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsConst.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 411)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 413)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 416)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_15673, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 421)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 421)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 423)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetterNew'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionGetterNew (const GALGAS_string constinArgument_inFunctionCppRepresentationName,
                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                         const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                         const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                         const GALGAS_string constinArgument_inCompilerTypeName,
                                         const GALGAS_unifiedTypeMapEntry constinArgument_inResultType,
                                         const GALGAS_string constinArgument_inResultVariableCppName,
                                         GALGAS_string & outArgument_outGeneratedCode,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 437)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_18661 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 439)) ;
  var_unusedVariableCppNameSet_18661.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 440))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 440)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_18864 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_18864.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18864.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 443)) ;
    var_unusedVariableCppNameSet_18661.addAssign_operation (enumerator_18864.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 444)) ;
    enumerator_18864.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_19048 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_19089 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_19089.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 449)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_19149 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_19149.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_19149.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_19048, var_unusedVariableCppNameSet_18661, GALGAS_bool (false), var_routineBody_19089, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451)) ;
    enumerator_19149.gotoNextObject () ;
  }
  {
  var_routineBody_19089.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 459)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 462)) ;
  GALGAS_uint var_colRef_19611 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 463)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_19712 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_19712.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_19712.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19712.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 467)) ;
      }
    }
    if (kBoolFalse == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19712.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 469)) ;
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_unusedVariableCppNameSet_18661.getter_hasKey (enumerator_19712.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 471)).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" /* ").add_operation (enumerator_19712.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 472)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 472)) ;
      }
    }
    if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_19712.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 476)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19611, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 477)) ;
    }
    enumerator_19712.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_unusedVariableCppNameSet_18661.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 481)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 481)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 486)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19611, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 487)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS) const {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 488)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_19089, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 493)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 495)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 498)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter (const GALGAS_string constinArgument_inClassName,
                                      const GALGAS_string constinArgument_inBaseClassName,
                                      const GALGAS_string constinArgument_inMethodName,
                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      GALGAS_string & outArgument_outGeneratedCode,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet_21886 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 516)) ;
  var_unusedVariableCppNameSet_21886.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 517))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 517)) ;
  var_unusedVariableCppNameSet_21886.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 518)) ;
  cEnumerator_formalParameterListForGeneration enumerator_22021 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_22021.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_21886.addAssign_operation (enumerator_22021.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)) ;
    enumerator_22021.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_22165 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_22198 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_22198.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 525)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_22258 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_22258.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_22258.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_22165, var_unusedVariableCppNameSet_21886, GALGAS_bool (false), var_routineBody_22198, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 527)) ;
    enumerator_22258.gotoNextObject () ;
  }
  {
  var_routineBody_22198.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 535)) ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void extensionSetter_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 537)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 537)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 537)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 537)) ;
  GALGAS_uint var_colRef_22727 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 538)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 540)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 540)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 542)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 542)) ;
  }
  GALGAS_bool var_currentObjectIsUnused_22992 = var_unusedVariableCppNameSet_21886.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 544)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_currentObjectIsUnused_22992.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 546)) ;
    }
  }
  if (kBoolFalse == test_1) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 548)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_23244 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_23244.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 552)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22727, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 553)) ;
    }
    switch (enumerator_23244.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23244.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 556)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 556)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 556)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23244.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 558)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 558)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23244.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 560)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 560)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23244.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 562)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 562)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 562)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_21886.getter_hasKey (enumerator_23244.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 564)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_23244.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_23244.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)) ;
    }
    enumerator_23244.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 571)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22727, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 573)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_21886.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 575)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 575)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 577)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 579)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22727, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 580)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 581)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_currentObjectIsUnused_22992.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 584)).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)) ;
        }
      }
      if (kBoolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)).add_operation (GALGAS_string (" * object = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)).add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_22198, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 594)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethodNew'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionMethodNew (const GALGAS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                         const GALGAS_string constinArgument_inMethodName,
                                         const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                         const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                         GALGAS_string & outArgument_outGeneratedCode,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_string var_className_26054 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 609)).readProperty_mTypeName ().readProperty_string () ;
  GALGAS_stringset var_unusedVariableCppNameSet_26159 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 611)) ;
  var_unusedVariableCppNameSet_26159.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)) ;
  var_unusedVariableCppNameSet_26159.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 613)) ;
  cEnumerator_formalParameterListForGeneration enumerator_26294 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_26294.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_26159.addAssign_operation (enumerator_26294.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 615)) ;
    enumerator_26294.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_26438 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_26479 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_26479.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 620)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_26539 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_26539.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_26539.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_26438, var_unusedVariableCppNameSet_26159, GALGAS_bool (false), var_routineBody_26479, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 622)) ;
    enumerator_26539.gotoNextObject () ;
  }
  {
  var_routineBody_26479.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 630)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_26879 = constinArgument_inReceiverType ;
  GALGAS_bool var_searching_26917 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 634)).isValid ()) {
    uint32_t variant_26936 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 634)).uintValue () ;
    bool loop_26936 = true ;
    while (loop_26936) {
      loop_26936 = var_searching_26917.isValid () ;
      if (loop_26936) {
        loop_26936 = var_searching_26917.boolValue () ;
      }
      if (loop_26936 && (0 == variant_26936)) {
        loop_26936 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 634)) ;
      }
      if (loop_26936) {
        variant_26936 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = extensionGetter_definition (var_baseType_26879, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 635)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticGeneration.galgas", 635)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 635)).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = extensionGetter_definition (extensionGetter_definition (var_baseType_26879, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 636)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 636)).readProperty_mInstanceMethodMap ().getter_hasKey (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 636)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType_26879 = extensionGetter_definition (var_baseType_26879, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 637)).readProperty_mSuperType () ;
              }
            }
            if (kBoolFalse == test_1) {
              var_searching_26917 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          var_searching_26917 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (var_baseType_26879, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 645)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 645)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 645)).add_operation (constinArgument_inMethodName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 645))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 645)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 646)) ;
  cEnumerator_formalParameterListForGeneration enumerator_27511 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_27511.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_27511.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 648)) ;
    enumerator_27511.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("void cPtr_").add_operation (var_className_26054.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 651)).add_operation (GALGAS_string ("::method_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 651)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 651)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 651)) ;
  GALGAS_uint var_colRef_27777 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 652)) ;
  cEnumerator_formalParameterListForGeneration enumerator_27882 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_27882.hasCurrentObject ()) {
    switch (enumerator_27882.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27882.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 657)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 657)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 657)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27882.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 659)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 659)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 659)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27882.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 661)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 661)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 661)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27882.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 663)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 663)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 663)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_26159.getter_hasKey (enumerator_27882.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 665)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_27882.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 666)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 666)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 666)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_27882.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 668)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 670)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_27777, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 671)) ;
    }
    enumerator_27882.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 674)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_26159.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 675)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 675)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 678)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 678)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 680)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_27777, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 681)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 682)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 683)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_26479, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 687)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- File '/galgas-predefined-types.ggs'

const char * gWrapperFileContent_0_typeGenerationTemplate = "\nextern proc %usefull println (let @string inString)\n\nextern proc %usefull print (let @string inString)\n\nlist @2lstringlist %usefull {\n  public var @lstring mValue0\n  public var @lstring mValue1\n}\n" ;

const cRegularFileWrapper gWrapperFile_0_typeGenerationTemplate (
  "galgas-predefined-types.ggs",
  "ggs",
  true, // Text file
  197, // Text length
  gWrapperFileContent_0_typeGenerationTemplate
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeGenerationTemplate_0 [2] = {
  & gWrapperFile_0_typeGenerationTemplate,
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeGenerationTemplate (
  "",
  1,
  gWrapperAllFiles_typeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_typeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (Compiler * inCompiler,
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
                                                                                  const GALGAS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//-- Start of generic part --*\n\n//--------------------------------- Object cloning\n  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;\n\n//--------------------------------- Object extraction\n  public: static GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" extractObject (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_object & inObject,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_CONSTRUCTOR_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 12)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("//--------------------------------- GALGAS constructors\n") ;
    GALGAS_uint index_576_ (0) ;
    if (in_CONSTRUCTOR_5F_MAP.isValid ()) {
      cEnumerator_constructorMap enumerator_576 (in_CONSTRUCTOR_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_576.hasCurrentObject ()) {
        result.addString ("  public: static class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_576.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue ()) ;
        result.addString (" constructor_") ;
        result.addString (enumerator_576.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue ()) ;
        result.addString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_814_IDX (0) ;
        if (enumerator_576.current_mArgumentTypeList (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_814 (enumerator_576.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_814.hasCurrentObject ()) {
            result.addString ("const class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_814.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue ()) ;
            result.addString (" & inOperand") ;
            result.addString (index_814_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue ()) ;
            if (enumerator_814.hasNextObject ()) {
              result.addString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_814_IDX.increment () ;
            enumerator_814.gotoNextObject () ;
          }
        }
        const enumGalgasBool test_1 = enumerator_576.current_mHasCompilerArgument (HERE).operator_and (GALGAS_bool (kIsStrictSup, enumerator_576.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("class Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = enumerator_576.current_mHasCompilerArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("Compiler * inCompiler\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
          }else if (kBoolFalse == test_2) {
            const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, enumerator_576.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              result.addString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            }else if (kBoolFalse == test_3) {
              result.addString ("LOCATION_ARGS) ;\n\n") ;
            }
          }
        }
        index_576_.increment () ;
        enumerator_576.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_4 = in_SUPPORTED_5F_OPERATORS.getter_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).boolEnum () ;
  if (kBoolTrue == test_4) {
    result.addString ("//--------------------------------- Handle copy\n  public: GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" (const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inSource) ;\n  public: GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & operator = (const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inSource) ;\n\n") ;
  }else if (kBoolFalse == test_4) {
  }
  const enumGalgasBool test_5 = in_SUPPORTED_5F_OPERATORS.getter_infixShiftOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)).boolEnum () ;
  if (kBoolTrue == test_5) {
    result.addString ("//--------------------------------- << and >> shift operators\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" left_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_uint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" left_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_bigint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" right_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_uint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" right_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_bigint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_5) {
  }
  const enumGalgasBool test_6 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 56)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result.addString ("//--------------------------------- += operator (with expression)\n  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" inOperand,\n                                                       class Compiler * inCompiler\n                                                       COMMA_LOCATION_ARGS) ;\n\n") ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = in_SUPPORTED_5F_OPERATORS.getter_minusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 63)).boolEnum () ;
  if (kBoolTrue == test_7) {
    result.addString ("//--------------------------------- -= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" inOperand,\n                                                        class Compiler * inCompiler\n                                                        COMMA_LOCATION_ARGS) ;\n\n") ;
  }else if (kBoolFalse == test_7) {
  }
  const enumGalgasBool test_8 = in_SUPPORTED_5F_OPERATORS.getter_mulEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)).boolEnum () ;
  if (kBoolTrue == test_8) {
    result.addString ("//--------------------------------- *= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" inOperand,\n                                                      class Compiler * inCompiler\n                                                      COMMA_LOCATION_ARGS) ;\n\n") ;
  }else if (kBoolFalse == test_8) {
  }
  const enumGalgasBool test_9 = in_SUPPORTED_5F_OPERATORS.getter_divEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)).boolEnum () ;
  if (kBoolTrue == test_9) {
    result.addString ("//--------------------------------- /= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" inOperand,\n                                                      class Compiler * inCompiler\n                                                      COMMA_LOCATION_ARGS) ;\n\n") ;
  }else if (kBoolFalse == test_9) {
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result.addString ("//--------------------------------- += operator (with list of field expressions)\n  public: VIRTUAL_IN_DEBUG void addAssign_operation (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4513_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_functionSignature enumerator_4513 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4513.hasCurrentObject ()) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_4513.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue ()) ;
        result.addString (" & inOperand") ;
        result.addString (index_4513_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue ()) ;
        if (enumerator_4513.hasNextObject ()) {
          result.addString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4513_IDX.increment () ;
        enumerator_4513.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_11 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)).boolEnum () ;
    if (kBoolTrue == test_11) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("Compiler * inCompiler") ;
    }else if (kBoolFalse == test_11) {
    }
    result.addString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) ;\n") ;
  }else if (kBoolFalse == test_10) {
  }
  const enumGalgasBool test_12 = in_SUPPORTED_5F_OPERATORS.getter_infixAndOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)).boolEnum () ;
  if (kBoolTrue == test_12) {
    result.addString ("//--------------------------------- & operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" operator_and (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_12) {
  }
  const enumGalgasBool test_13 = in_SUPPORTED_5F_OPERATORS.getter_infixOrOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 104)).boolEnum () ;
  if (kBoolTrue == test_13) {
    result.addString ("//--------------------------------- | operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" operator_or (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_13) {
  }
  const enumGalgasBool test_14 = in_SUPPORTED_5F_OPERATORS.getter_infixXorOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 110)).boolEnum () ;
  if (kBoolTrue == test_14) {
    result.addString ("//--------------------------------- ^ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" operator_xor (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_14) {
  }
  const enumGalgasBool test_15 = in_SUPPORTED_5F_OPERATORS.getter_prefixNotOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 116)).boolEnum () ;
  if (kBoolTrue == test_15) {
    result.addString ("//--------------------------------- not operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" operator_not (LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_15) {
  }
  const enumGalgasBool test_16 = in_SUPPORTED_5F_OPERATORS.getter_prefixTildeOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 121)).boolEnum () ;
  if (kBoolTrue == test_16) {
    result.addString ("//--------------------------------- ~ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" operator_tilde (LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_16) {
  }
  const enumGalgasBool test_17 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)).boolEnum () ;
  if (kBoolTrue == test_17) {
    result.addString ("//--------------------------------- + operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" add_operation (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_17) {
  }
  const enumGalgasBool test_18 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 133)).boolEnum () ;
  if (kBoolTrue == test_18) {
    result.addString ("//--------------------------------- &+ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" add_operation_no_ovf (const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand) const ;\n\n") ;
  }else if (kBoolFalse == test_18) {
  }
  const enumGalgasBool test_19 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 138)).boolEnum () ;
  if (kBoolTrue == test_19) {
    result.addString ("//--------------------------------- &- operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" substract_operation_no_ovf (const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand) const ;\n\n") ;
  }else if (kBoolFalse == test_19) {
  }
  const enumGalgasBool test_20 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 143)).boolEnum () ;
  if (kBoolTrue == test_20) {
    result.addString ("//--------------------------------- - operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" substract_operation (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_20) {
  }
  const enumGalgasBool test_21 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 150)).boolEnum () ;
  if (kBoolTrue == test_21) {
    result.addString ("//--------------------------------- * operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" multiply_operation (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_21) {
  }
  const enumGalgasBool test_22 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 157)).boolEnum () ;
  if (kBoolTrue == test_22) {
    result.addString ("//--------------------------------- &* operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" multiply_operation_no_ovf (const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand) const ;\n\n") ;
  }else if (kBoolFalse == test_22) {
  }
  const enumGalgasBool test_23 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 162)).boolEnum () ;
  if (kBoolTrue == test_23) {
    result.addString ("//--------------------------------- / operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" divide_operation (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_23) {
  }
  const enumGalgasBool test_24 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 169)).boolEnum () ;
  if (kBoolTrue == test_24) {
    result.addString ("//--------------------------------- &/ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" divide_operation_no_ovf (const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand) const ;\n\n") ;
  }else if (kBoolFalse == test_24) {
  }
  const enumGalgasBool test_25 = in_SUPPORTED_5F_OPERATORS.getter_infixModOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 174)).boolEnum () ;
  if (kBoolTrue == test_25) {
    result.addString ("//--------------------------------- mod operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" modulo_operation (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_25) {
  }
  const enumGalgasBool test_26 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 181)).boolEnum () ;
  if (kBoolTrue == test_26) {
    result.addString ("//--------------------------------- prefix - operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" operator_unary_minus (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
  }else if (kBoolFalse == test_26) {
  }
  const enumGalgasBool test_27 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 187)).boolEnum () ;
  if (kBoolTrue == test_27) {
    result.addString ("//--------------------------------- prefix &- operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" operator_unary_minus_no_ovf (void) const ;\n\n") ;
  }else if (kBoolFalse == test_27) {
  }
  const enumGalgasBool test_28 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 192)).boolEnum () ;
  if (kBoolTrue == test_28) {
    result.addString ("//--------------------------------- ++, -- operators\n  public: VIRTUAL_IN_DEBUG void increment_operation (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) ;\n\n  public: VIRTUAL_IN_DEBUG void decrement_operation (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  }else if (kBoolFalse == test_28) {
  }
  const enumGalgasBool test_29 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 199)).boolEnum () ;
  if (kBoolTrue == test_29) {
    result.addString ("//--------------------------------- &++, &-- operators\n  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;\n\n  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;\n\n") ;
  }else if (kBoolFalse == test_29) {
  }
  const enumGalgasBool test_30 = in_SUPPORTED_5F_OPERATORS.getter_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 204)).boolEnum () ;
  if (kBoolTrue == test_30) {
    result.addString ("//--------------------------------- Implementation of getter 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n") ;
  }else if (kBoolFalse == test_30) {
  }
  const enumGalgasBool test_31 = in_SUPPORTED_5F_OPERATORS.getter_doNotGenererateObjectCompare (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).boolEnum () ;
  if (kBoolTrue == test_31) {
    result.addString ("//--------------------------------- Comparison\n  public: typeComparisonResult objectCompare (const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inOperand) const ;\n") ;
  }else if (kBoolFalse == test_31) {
  }
  result.addString ("\n//--------------------------------- Setters\n") ;
  GALGAS_uint index_10310_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    cEnumerator_setterMap enumerator_10310 (in_MODIFIER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_10310.hasCurrentObject ()) {
      const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, enumerator_10310.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 220)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        const enumGalgasBool test_33 = GALGAS_bool (kIsEqual, enumerator_10310.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_10310.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))).operator_or (GALGAS_bool (kIsEqual, enumerator_10310.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).operator_or (GALGAS_bool (kIsEqual, enumerator_10310.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).boolEnum () ;
        if (kBoolTrue == test_33) {
          result.addString ("  public: VIRTUAL_IN_DEBUG void setter_") ;
          result.addString (enumerator_10310.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 222)).stringValue ()) ;
          result.addString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_10758_IDX (0) ;
          if (enumerator_10310.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_10758 (enumerator_10310.current_mParameterList (HERE), kENUMERATION_UP) ;
            while (enumerator_10758.hasCurrentObject ()) {
              const enumGalgasBool test_34 = GALGAS_bool (kIsEqual, enumerator_10758.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 224)))).boolEnum () ;
              if (kBoolTrue == test_34) {
                result.addString ("class GALGAS_") ;
                result.addString (extensionGetter_identifierRepresentation (enumerator_10758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue ()) ;
                result.addString (" constinArgument") ;
                result.addString (index_10758_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue ()) ;
              }else if (kBoolFalse == test_34) {
                const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_10758.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 226)))).boolEnum () ;
                if (kBoolTrue == test_35) {
                  result.addString ("class GALGAS_") ;
                  result.addString (extensionGetter_identifierRepresentation (enumerator_10758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue ()) ;
                  result.addString (" & ioArgument") ;
                  result.addString (index_10758_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue ()) ;
                }else if (kBoolFalse == test_35) {
                  const enumGalgasBool test_36 = GALGAS_bool (kIsEqual, enumerator_10758.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 228)))).boolEnum () ;
                  if (kBoolTrue == test_36) {
                    result.addString ("class GALGAS_") ;
                    result.addString (extensionGetter_identifierRepresentation (enumerator_10758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue ()) ;
                    result.addString (" & outArgument") ;
                    result.addString (index_10758_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue ()) ;
                  }else if (kBoolFalse == test_36) {
                    result.addString ("class GALGAS_") ;
                    result.addString (extensionGetter_identifierRepresentation (enumerator_10758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue ()) ;
                    result.addString (" inArgument") ;
                    result.addString (index_10758_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue ()) ;
                  }
                }
              }
              if (enumerator_10758.hasNextObject ()) {
                result.addString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_10758_IDX.increment () ;
              enumerator_10758.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_37 = GALGAS_bool (kIsEqual, enumerator_10310.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_37) {
            const enumGalgasBool test_38 = enumerator_10310.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_38) {
              result.addString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.addString ("COMMA_LOCATION_ARGS") ;
            }else if (kBoolFalse == test_38) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result.addString ("LOCATION_ARGS") ;
            }
          }else if (kBoolFalse == test_37) {
            const enumGalgasBool test_39 = enumerator_10310.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_39) {
              result.addString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.addString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.addString ("COMMA_LOCATION_ARGS") ;
            }else if (kBoolFalse == test_39) {
              result.addString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.addString ("COMMA_LOCATION_ARGS") ;
            }
          }
          result.addString (") ;\n\n") ;
        }else if (kBoolFalse == test_33) {
        }
      }else if (kBoolFalse == test_32) {
      }
      index_10310_.increment () ;
      enumerator_10310.gotoNextObject () ;
    }
  }
  result.addString ("\n//--------------------------------- Instance Methods\n") ;
  GALGAS_uint index_12153_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_12153 (in_INSTANCE_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_12153.hasCurrentObject ()) {
      const enumGalgasBool test_40 = GALGAS_bool (kIsEqual, enumerator_12153.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 258)))).boolEnum () ;
      if (kBoolTrue == test_40) {
        const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, enumerator_12153.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_12153.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))).operator_or (GALGAS_bool (kIsEqual, enumerator_12153.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).operator_or (GALGAS_bool (kIsEqual, enumerator_12153.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).boolEnum () ;
        if (kBoolTrue == test_41) {
          result.addString ("  public: VIRTUAL_IN_DEBUG void method_") ;
          result.addString (enumerator_12153.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 260)).stringValue ()) ;
          result.addString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_12601_IDX (0) ;
          if (enumerator_12153.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_12601 (enumerator_12153.current_mParameterList (HERE), kENUMERATION_UP) ;
            while (enumerator_12601.hasCurrentObject ()) {
              const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, enumerator_12601.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 262)))).boolEnum () ;
              if (kBoolTrue == test_42) {
                result.addString ("class GALGAS_") ;
                result.addString (extensionGetter_identifierRepresentation (enumerator_12601.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue ()) ;
                result.addString (" constinArgument") ;
                result.addString (index_12601_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue ()) ;
              }else if (kBoolFalse == test_42) {
                const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, enumerator_12601.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 264)))).boolEnum () ;
                if (kBoolTrue == test_43) {
                  result.addString ("class GALGAS_") ;
                  result.addString (extensionGetter_identifierRepresentation (enumerator_12601.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue ()) ;
                  result.addString (" & ioArgument") ;
                  result.addString (index_12601_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue ()) ;
                }else if (kBoolFalse == test_43) {
                  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, enumerator_12601.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 266)))).boolEnum () ;
                  if (kBoolTrue == test_44) {
                    result.addString ("class GALGAS_") ;
                    result.addString (extensionGetter_identifierRepresentation (enumerator_12601.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue ()) ;
                    result.addString (" & outArgument") ;
                    result.addString (index_12601_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue ()) ;
                  }else if (kBoolFalse == test_44) {
                    result.addString ("class GALGAS_") ;
                    result.addString (extensionGetter_identifierRepresentation (enumerator_12601.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue ()) ;
                    result.addString (" inArgument") ;
                    result.addString (index_12601_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue ()) ;
                  }
                }
              }
              if (enumerator_12601.hasNextObject ()) {
                result.addString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_12601_IDX.increment () ;
              enumerator_12601.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, enumerator_12153.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_45) {
            const enumGalgasBool test_46 = enumerator_12153.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_46) {
              result.addString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.addString ("COMMA_LOCATION_ARGS") ;
            }else if (kBoolFalse == test_46) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result.addString ("LOCATION_ARGS") ;
            }
          }else if (kBoolFalse == test_45) {
            const enumGalgasBool test_47 = enumerator_12153.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_47) {
              result.addString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.addString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.addString ("COMMA_LOCATION_ARGS") ;
            }else if (kBoolFalse == test_47) {
              result.addString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.addString ("COMMA_LOCATION_ARGS") ;
            }
          }
          result.addString (") const ;\n\n") ;
        }else if (kBoolFalse == test_41) {
        }
      }else if (kBoolFalse == test_40) {
      }
      index_12153_.increment () ;
      enumerator_12153.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------- Class Methods\n") ;
  GALGAS_uint index_13943_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_classMethodMap enumerator_13943 (in_CLASS_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_13943.hasCurrentObject ()) {
      result.addString ("  public: static void class_method_") ;
      result.addString (enumerator_13943.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)).stringValue ()) ;
      result.addString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_14144_IDX (0) ;
      if (enumerator_13943.current_mParameterList (HERE).isValid ()) {
        cEnumerator_formalParameterSignature enumerator_14144 (enumerator_13943.current_mParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_14144.hasCurrentObject ()) {
          const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, enumerator_14144.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 297)))).boolEnum () ;
          if (kBoolTrue == test_48) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_14144.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue ()) ;
            result.addString (" constinArgument") ;
            result.addString (index_14144_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue ()) ;
          }else if (kBoolFalse == test_48) {
            const enumGalgasBool test_49 = GALGAS_bool (kIsEqual, enumerator_14144.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 299)))).boolEnum () ;
            if (kBoolTrue == test_49) {
              result.addString ("class GALGAS_") ;
              result.addString (extensionGetter_identifierRepresentation (enumerator_14144.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue ()) ;
              result.addString (" & ioArgument") ;
              result.addString (index_14144_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue ()) ;
            }else if (kBoolFalse == test_49) {
              const enumGalgasBool test_50 = GALGAS_bool (kIsEqual, enumerator_14144.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 301)))).boolEnum () ;
              if (kBoolTrue == test_50) {
                result.addString ("class GALGAS_") ;
                result.addString (extensionGetter_identifierRepresentation (enumerator_14144.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue ()) ;
                result.addString (" & outArgument") ;
                result.addString (index_14144_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue ()) ;
              }else if (kBoolFalse == test_50) {
                result.addString ("class GALGAS_") ;
                result.addString (extensionGetter_identifierRepresentation (enumerator_14144.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue ()) ;
                result.addString (" inArgument") ;
                result.addString (index_14144_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue ()) ;
              }
            }
          }
          if (enumerator_14144.hasNextObject ()) {
            result.addString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_14144_IDX.increment () ;
          enumerator_14144.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_51 = GALGAS_bool (kIsEqual, enumerator_13943.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 308)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_51) {
        const enumGalgasBool test_52 = enumerator_13943.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_52) {
          result.addString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("COMMA_LOCATION_ARGS") ;
        }else if (kBoolFalse == test_52) {
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("LOCATION_ARGS") ;
        }
      }else if (kBoolFalse == test_51) {
        const enumGalgasBool test_53 = enumerator_13943.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_53) {
          result.addString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("COMMA_LOCATION_ARGS") ;
        }else if (kBoolFalse == test_53) {
          result.addString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("COMMA_LOCATION_ARGS") ;
        }
      }
      result.addString (") ;\n\n") ;
      index_13943_.increment () ;
      enumerator_13943.gotoNextObject () ;
    }
  }
  result.addString ("\n//--------------------------------- Getters\n") ;
  GALGAS_uint index_15396_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_15396 (in_GETTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_15396.hasCurrentObject ()) {
      const enumGalgasBool test_54 = GALGAS_bool (kIsEqual, enumerator_15396.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_54) {
        switch (enumerator_15396.current_mKind (HERE).enumValue ()) {
        case GALGAS_methodKind::kNotBuilt :
          break ;
        case GALGAS_methodKind::kEnum_definedAsExtension :
          {
          }
          break ;
        case GALGAS_methodKind::kEnum_definedAsMember :
          {
            const enumGalgasBool test_55 = GALGAS_bool (kIsEqual, enumerator_15396.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)))).operator_or (GALGAS_bool (kIsEqual, enumerator_15396.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)).operator_or (GALGAS_bool (kIsEqual, enumerator_15396.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)).boolEnum () ;
            if (kBoolTrue == test_55) {
              result.addString ("  public: VIRTUAL_IN_DEBUG class GALGAS_") ;
              result.addString (extensionGetter_identifierRepresentation (enumerator_15396.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 334)).stringValue ()) ;
              result.addString (" getter_") ;
              result.addString (enumerator_15396.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 334)).stringValue ()) ;
              result.addString (" (") ;
              columnMarker = result.currentColumn () ;
              GALGAS_uint index_15920_IDX (0) ;
              if (enumerator_15396.current_mArgumentTypeList (HERE).isValid ()) {
                cEnumerator_functionSignature enumerator_15920 (enumerator_15396.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
                while (enumerator_15920.hasCurrentObject ()) {
                  result.addString ("const class GALGAS_") ;
                  result.addString (extensionGetter_identifierRepresentation (enumerator_15920.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 336)).stringValue ()) ;
                  result.addString (" & constinOperand") ;
                  result.addString (index_15920_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 336)).stringValue ()) ;
                  if (enumerator_15920.hasNextObject ()) {
                    result.addString (",\n") ;
                    result.appendSpacesUntilColumn (columnMarker) ;
                  }
                  index_15920_IDX.increment () ;
                  enumerator_15920.gotoNextObject () ;
                }
              }
              const enumGalgasBool test_56 = GALGAS_bool (kIsEqual, enumerator_15396.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 339)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
              if (kBoolTrue == test_56) {
                const enumGalgasBool test_57 = enumerator_15396.current_mHasCompilerArgument (HERE).boolEnum () ;
                if (kBoolTrue == test_57) {
                  result.addString ("Compiler * inCompiler\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.addString ("COMMA_LOCATION_ARGS") ;
                }else if (kBoolFalse == test_57) {
                  result.addString ("LOCATION_ARGS") ;
                }
              }else if (kBoolFalse == test_56) {
                const enumGalgasBool test_58 = enumerator_15396.current_mHasCompilerArgument (HERE).boolEnum () ;
                if (kBoolTrue == test_58) {
                  result.addString (",\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.addString ("Compiler * inCompiler\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.addString ("COMMA_LOCATION_ARGS") ;
                }else if (kBoolFalse == test_58) {
                  result.addString ("\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.addString ("COMMA_LOCATION_ARGS") ;
                }
              }
              result.addString (") const ;\n\n") ;
            }else if (kBoolFalse == test_55) {
            }
          }
          break ;
        }
      }else if (kBoolFalse == test_54) {
      }
      index_15396_.increment () ;
      enumerator_15396.gotoNextObject () ;
    }
  }
  result.addString ("\n//--------------------------------- Optional Methods\n") ;
  GALGAS_uint index_16638_ (0) ;
  if (in_OPTIONAL_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_optionalMethodMap enumerator_16638 (in_OPTIONAL_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_16638.hasCurrentObject ()) {
      result.addString ("  public: VIRTUAL_IN_DEBUG bool optional_") ;
      result.addString (enumerator_16638.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 362)).stringValue ()) ;
      result.addString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_16843_IDX (0) ;
      if (enumerator_16638.current_mArgumentTypeList (HERE).isValid ()) {
        cEnumerator_optionalMethodSignature enumerator_16843 (enumerator_16638.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_16843.hasCurrentObject ()) {
          const enumGalgasBool test_59 = enumerator_16843.current_mInputArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_59) {
            result.addString ("const class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_16843.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 366)).stringValue ()) ;
            result.addString (" & constinOperand") ;
            result.addString (index_16843_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 366)).stringValue ()) ;
          }else if (kBoolFalse == test_59) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_16843.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 368)).stringValue ()) ;
            result.addString (" & outOperand") ;
            result.addString (index_16843_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 368)).stringValue ()) ;
          }
          if (enumerator_16843.hasNextObject ()) {
            result.addString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_16843_IDX.increment () ;
          enumerator_16843.gotoNextObject () ;
        }
      }
      result.addString (") const ;\n\n") ;
      index_16638_.increment () ;
      enumerator_16638.gotoNextObject () ;
    }
  }
  result.addString ("\n//--------------------------------- Introspection\n  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;\n") ;
  const enumGalgasBool test_60 = in_SUPPORTED_5F_OPERATORS.getter_generateEnumerationHelperMethods (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 380)).boolEnum () ;
  if (kBoolTrue == test_60) {
    result.addString ("//--------------------------------- Enumeration helper methods\n  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;\n\n") ;
  }else if (kBoolFalse == test_60) {
  }
  const enumGalgasBool test_61 = in_SUPPORTED_5F_OPERATORS.getter_supportWithAccessor (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 386)).boolEnum () ;
  if (kBoolTrue == test_61) {
    result.addString ("  public: VIRTUAL_IN_DEBUG cMapElement_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" * readWriteAccessForWithInstruction (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const GALGAS_string & inKey\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  }else if (kBoolFalse == test_61) {
  }
  const enumGalgasBool test_62 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 392)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_62) {
    result.addString ("//--------------------------------- Friend\n\n  friend class cEnumerator_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" ;\n") ;
  }else if (kBoolFalse == test_62) {
  }
  result.addString (" \n} ; // End of GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" class\n\n") ;
  const enumGalgasBool test_63 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 399)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_63) {
    result.addString ("//--------------------------------------------------------------------------------------------------\n//   Enumerator declaration                                                                      \n//--------------------------------------------------------------------------------------------------\n\nclass cEnumerator_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" : public cGenericAbstractEnumerator {\n  public: cEnumerator_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("const GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" & inEnumeratedObject,\n     ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const typeEnumerationOrder inOrder) ;\n\n//--- Current element access\n") ;
    GALGAS_uint index_18701_ (0) ;
    if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
      cEnumerator_enumerationDescriptorList enumerator_18701 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_18701.hasCurrentObject ()) {
        result.addString ("  public: class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_18701.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 410)).stringValue ()) ;
        result.addString (" current_") ;
        result.addString (enumerator_18701.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 410)).stringValue ()) ;
        result.addString (" (LOCATION_ARGS) const ;\n") ;
        index_18701_.increment () ;
        enumerator_18701.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_64 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 412)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 412)).boolEnum () ;
    if (kBoolTrue == test_64) {
      result.addString ("//--- Current element access\n  public: class GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 414)).stringValue ()) ;
      result.addString (" current (LOCATION_ARGS) const ;\n") ;
    }else if (kBoolFalse == test_64) {
    }
    result.addString ("} ;\n") ;
  }else if (kBoolFalse == test_63) {
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\nextern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate genericTypeImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (Compiler * inCompiler,
                                                                                    const GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const GALGAS_unifiedTypeMapEntry & in_SUPER_5F_TYPE_5F_INDEX,
                                                                                    const GALGAS_operators & /* in_SUPPORTED_5F_OPERATORS */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//     ") ;
  result.addString (GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" generic code implementation"), inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor\nkTypeDescriptor_GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("\"") ;
  result.addString (in_TYPE_5F_NAME.stringValue ()) ;
  result.addString ("\",\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  const enumGalgasBool test_0 = in_SUPER_5F_TYPE_5F_INDEX.getter_isNull (SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("nullptr") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("& kTypeDescriptor_GALGAS_") ;
    result.addString (extensionGetter_identifierRepresentation (in_SUPER_5F_TYPE_5F_INDEX, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).stringValue ()) ;
  }
  result.addString (") ;\n\n//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::staticTypeDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nAC_GALGAS_root * GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::clonedObject (void) const {\n  AC_GALGAS_root * result = nullptr ;\n  if (isValid ()) {\n    macroMyNew (result, GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (*this)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::extractObject (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_object & inObject,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) inObject.embeddedObject () ;\n  if (nullptr != p) {\n    if (nullptr != dynamic_cast <const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *> (p)) {\n      result = *p ;\n    }else{\n      inCompiler->castError (\"") ;
  result.addString (in_TYPE_5F_NAME.stringValue ()) ;
  result.addString ("\", p->dynamicTypeDescriptor () COMMA_THERE) ;\n    }  \n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate externTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (Compiler * inCompiler,
                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const GALGAS_string & in_PRE_5F_DECLARATION,
                                                                               const GALGAS_string & in_CODE
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" extern type"), inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n//  Predeclarations (from GALGAS extern type declaration\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_PRE_5F_DECLARATION.stringValue ()) ;
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//---\n  public: virtual bool isValid (void) const override ;\n  public: virtual void drop (void) override ;\n\n//--- For log instruction\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--- Code (from GALGAS extern type declaration)\n") ;
  result.addString (in_CODE.stringValue ()) ;
  result.addString ("\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public AC_GALGAS_graph {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (Compiler * inCompiler,
                                                                                          const GALGAS_unifiedTypeMapEntry & /* in_TYPE */,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_unifiedTypeMapEntry & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                          const GALGAS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\nAC_GALGAS_graph () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_emptyGraph (LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  result.makeNewEmptyGraph (THERE) ;\n  return result ;\n}\n\n") ;
  GALGAS_uint index_697_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    cEnumerator_graphInsertModifierList enumerator_697 (in_INSERT_5F_MODIFIER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_697.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::setter_") ;
      result.addString (enumerator_697.current_mInsertModifierName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.addString (" (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_1052_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).readProperty_mAddAssignOperatorArguments ().isValid ()) {
        cEnumerator_functionSignature enumerator_1052 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).readProperty_mAddAssignOperatorArguments (), kENUMERATION_UP) ;
        while (enumerator_1052.hasCurrentObject ()) {
          result.addString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_1052.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue ()) ;
          result.addString (" inArgument_") ;
          result.addString (index_1052_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue ()) ;
          index_1052_IDX.increment () ;
          enumerator_1052.gotoNextObject () ;
        }
      }
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 29)).stringValue ()) ;
      result.addString ("::makeAttributesFromObjects (attributes") ;
      GALGAS_uint index_1492_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).readProperty_mAddAssignOperatorArguments ().isValid ()) {
        cEnumerator_functionSignature enumerator_1492 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).readProperty_mAddAssignOperatorArguments (), kENUMERATION_UP) ;
        while (enumerator_1492.hasCurrentObject ()) {
          result.addString (", inArgument_") ;
          result.addString (index_1492_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).stringValue ()) ;
          index_1492_IDX.increment () ;
          enumerator_1492.gotoNextObject () ;
        }
      }
      result.addString (" COMMA_THERE) ;\n  const char * kErrorMessage = ") ;
      result.addString (enumerator_697.current_mInsertErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 34)).stringValue ()) ;
      result.addString (" ;\n  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;\n}\n\n") ;
      index_697_.increment () ;
      enumerator_697.gotoNextObject () ;
    }
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::method_topologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 43)).stringValue ()) ;
  result.addString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("GALGAS_lstringlist & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.addString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("GALGAS_lstringlist & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray sortedList ;\n  capCollectionElementArray unsortedList ;\n  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.addString (" (sortedList) ;\n  outUnsortedList = GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.addString (" (unsortedList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::method_depthFirstTopologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 58)).stringValue ()) ;
  result.addString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("GALGAS_lstringlist & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 60)).stringValue ()) ;
  result.addString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("GALGAS_lstringlist & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray sortedList ;\n  capCollectionElementArray unsortedList ;\n  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 67)).stringValue ()) ;
  result.addString (" (sortedList) ;\n  outUnsortedList = GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 68)).stringValue ()) ;
  result.addString (" (unsortedList) ;\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_reversedGraph (LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  result.reversedGraphFromGraph (*this COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::method_circularities (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.addString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("GALGAS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 87)).stringValue ()) ;
  result.addString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::method_nodesWithNoSuccessor (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 92)).stringValue ()) ;
  result.addString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("GALGAS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 97)).stringValue ()) ;
  result.addString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::method_nodesWithNoPredecessor (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 102)).stringValue ()) ;
  result.addString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("GALGAS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 107)).stringValue ()) ;
  result.addString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_subgraphFromNodes (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_lstringlist & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const GALGAS_stringset & inKeysToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 123)).stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_nodeList (UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 124)).stringValue ()) ;
  result.addString (" resultingList ;\n  if (isValid ()) {\n    resultingList = graph () ;\n  }\n  return resultingList ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_lstringlist GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_accessibleNodesFrom (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_lstringlist & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const GALGAS_stringset & inNodesToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_lstringlist result ;\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" resultingGraph ;\n  subGraph (resultingGraph,\n            inStartKeyList,\n            inNodesToExclude,\n            inCompiler\n            COMMA_THERE) ;\n  if (resultingGraph.isValid ()) {\n    result = resultingGraph.getter_lkeyList (THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate arrayTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_string & /* in_ELEMENT_5F_TYPE_5F_IDENTIFIER */,
                                                                              const GALGAS_uint & /* in_DIMENSION */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: inline GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\n  mSharedObject (nullptr) {\n  }\n\n//--------------------------------- Virtual destructor\n  public: virtual ~ GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--- Handle copy\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inObject) ;\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & operator = (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inObject) ;\n\n//--- Insulate\n  private: VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;\n\n//--- isValid\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {\n    return nullptr != mSharedObject ;\n  }\n\n//--- Drop\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--- Private attribute\n  private: cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * mSharedObject ;\n\n//--- Drop\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate arrayTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (Compiler * inCompiler,
                                                                                          const GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_uint & in_DIMENSION,
                                                                                          const GALGAS_stringlist & in_DIMENSION_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public SharedObject {\n  private: GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * mObjectArray ;\n") ;
  GALGAS_uint index_389_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_389 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_389.hasCurrentObject ()) {
      result.addString ("  private: uint32_t mSize") ;
      result.addString (enumerator_389.current_mValue (HERE).stringValue ()) ;
      result.addString (" ;\n") ;
      index_389_.increment () ;
      enumerator_389.gotoNextObject () ;
    }
  }
  result.addString ("\n//--- Constructor\n  public: cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_528_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_528 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_528.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const uint32_t inSize") ;
      result.addString (enumerator_528.current_mValue (HERE).stringValue ()) ;
      if (enumerator_528.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_528_.increment () ;
      enumerator_528.gotoNextObject () ;
    }
  }
  result.addString ("\n   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n  public: cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inPointer\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n//--- Destructor\n  public: virtual ~ cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--- No copy\n  private: cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" &) ;\n  private: cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & operator = (const cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" &) ;\n\n//--- Comparison\n  public: VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inOperand) const ;\n\n//--- \n") ;
  GALGAS_uint index_1144_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1144 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1144.hasCurrentObject ()) {
      result.addString ("  public: inline uint32_t size") ;
      result.addString (enumerator_1144.current_mValue (HERE).stringValue ()) ;
      result.addString (" (void) const { return mSize") ;
      result.addString (enumerator_1144.current_mValue (HERE).stringValue ()) ;
      result.addString (" ; }\n") ;
      index_1144_.increment () ;
      enumerator_1144.gotoNextObject () ;
    }
  }
  result.addString ("\n\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" objectAtAbsoluteIndex (const int32_t inIndex) const ;\n\n  public: VIRTUAL_IN_DEBUG void setObjectAtAbsoluteIndex (const GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inObject,\n                                                           const int32_t inIndex) ;\n\n//--- \n  public: VIRTUAL_IN_DEBUG int32_t indexForIndexes (") ;
  GALGAS_uint index_1653_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1653 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_1653 = enumerator_1653.hasCurrentObject () ;
    if (nonEmpty_enumerator_1653) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_1653.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const uint32_t inSize") ;
      result.addString (enumerator_1653.current_mValue (HERE).stringValue ()) ;
      result.addString (",\n") ;
      index_1653_.increment () ;
      enumerator_1653.gotoNextObject () ;
    }
  }
  result.addString (" ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const ;\n\n//--- \n  public: VIRTUAL_IN_DEBUG void setSize (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1847_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1847 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1847.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const uint32_t inSize") ;
      result.addString (enumerator_1847.current_mValue (HERE).stringValue ()) ;
      if (enumerator_1847.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_1847_.increment () ;
      enumerator_1847.gotoNextObject () ;
    }
  }
  result.addString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_2124_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2124 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2124.hasCurrentObject ()) {
      result.addString ("const uint32_t inSize") ;
      result.addString (enumerator_2124.current_mValue (HERE).stringValue ()) ;
      if (enumerator_2124.hasNextObject ()) {
        result.addString (",\n                                                      ") ;
      }
      index_2124_.increment () ;
      enumerator_2124.gotoNextObject () ;
    }
  }
  result.addString ("    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) :\nSharedObject (THERE),\nmObjectArray (nullptr),\n") ;
  GALGAS_uint index_2345_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2345 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2345.hasCurrentObject ()) {
      result.addString ("mSize") ;
      result.addString (enumerator_2345.current_mValue (HERE).stringValue ()) ;
      result.addString (" (inSize") ;
      result.addString (enumerator_2345.current_mValue (HERE).stringValue ()) ;
      result.addString (")") ;
      if (enumerator_2345.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_2345_.increment () ;
      enumerator_2345.gotoNextObject () ;
    }
  }
  result.addString (" {\n  macroMyNewArray (mObjectArray, GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (", ") ;
  GALGAS_uint index_2510_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2510 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2510.hasCurrentObject ()) {
      result.addString (" inSize") ;
      result.addString (enumerator_2510.current_mValue (HERE).stringValue ()) ;
      if (enumerator_2510.hasNextObject ()) {
        result.addString (" * ") ;
      }
      index_2510_.increment () ;
      enumerator_2510.gotoNextObject () ;
    }
  }
  result.addString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inPointer\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) :\nSharedObject (THERE),\nmObjectArray (nullptr),\n") ;
  GALGAS_uint index_2866_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2866 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2866.hasCurrentObject ()) {
      result.addString ("mSize") ;
      result.addString (enumerator_2866.current_mValue (HERE).stringValue ()) ;
      result.addString (" (inPointer->size") ;
      result.addString (enumerator_2866.current_mValue (HERE).stringValue ()) ;
      result.addString (" ())") ;
      if (enumerator_2866.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_2866_.increment () ;
      enumerator_2866.gotoNextObject () ;
    }
  }
  result.addString (" {\n  const uint32_t size = ") ;
  GALGAS_uint index_2999_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2999 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2999.hasCurrentObject ()) {
      result.addString ("mSize") ;
      result.addString (enumerator_2999.current_mValue (HERE).stringValue ()) ;
      if (enumerator_2999.hasNextObject ()) {
        result.addString (" * ") ;
      }
      index_2999_.increment () ;
      enumerator_2999.gotoNextObject () ;
    }
  }
  result.addString (" ;\n  macroMyNewArray (mObjectArray, GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (", size) ;\n  for (uint32_t i=0 ; i<size ; i++) {\n    mObjectArray [i] = inPointer->mObjectArray [i] ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic inline uint32_t ") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_computeIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_3407_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3407 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3407.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const uint32_t inIndex") ;
      result.addString (enumerator_3407.current_mValue (HERE).stringValue ()) ;
      if (enumerator_3407.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_3407_.increment () ;
      enumerator_3407.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3518_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)).isValid ()) {
    cEnumerator_stringlist enumerator_3518 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)), kENUMERATION_UP) ;
    while (enumerator_3518.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const uint32_t inSize") ;
      result.addString (enumerator_3518.current_mValue (HERE).stringValue ()) ;
      index_3518_.increment () ;
      enumerator_3518.gotoNextObject () ;
    }
  }
  result.addString (") {\n  uint32_t idx = inIndex0 ;\n") ;
  GALGAS_uint index_3651_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)).isValid ()) {
    cEnumerator_stringlist enumerator_3651 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)), kENUMERATION_UP) ;
    while (enumerator_3651.hasCurrentObject ()) {
      result.addString ("  idx *= inSize") ;
      result.addString (enumerator_3651.current_mValue (HERE).stringValue ()) ;
      result.addString (" ;\n  idx += inIndex") ;
      result.addString (enumerator_3651.current_mValue (HERE).stringValue ()) ;
      result.addString (" ;\n") ;
      index_3651_.increment () ;
      enumerator_3651.gotoNextObject () ;
    }
  }
  result.addString ("  return idx ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nint32_t cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::indexForIndexes (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_3929_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3929 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3929.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const uint32_t inIndex") ;
      result.addString (enumerator_3929.current_mValue (HERE).stringValue ()) ;
      result.addString (",\n") ;
      index_3929_.increment () ;
      enumerator_3929.gotoNextObject () ;
    }
  }
  result.addString ("  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  int32_t result = -1 ;\n  ") ;
  GALGAS_uint index_4099_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4099 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4099.hasCurrentObject ()) {
      result.addString ("if (inIndex") ;
      result.addString (enumerator_4099.current_mValue (HERE).stringValue ()) ;
      result.addString (" >= size") ;
      result.addString (enumerator_4099.current_mValue (HERE).stringValue ()) ;
      result.addString (" ()) {\n    String s ;\n    s.addString (\"array index ") ;
      result.addString (enumerator_4099.current_mValue (HERE).stringValue ()) ;
      result.addString (" : \") ;\n    s.addUnsigned (inIndex") ;
      result.addString (enumerator_4099.current_mValue (HERE).stringValue ()) ;
      result.addString (") ;\n    s.addString (\" >= size \") ;\n    s.addUnsigned (size") ;
      result.addString (enumerator_4099.current_mValue (HERE).stringValue ()) ;
      result.addString (" ()) ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n") ;
      if (enumerator_4099.hasNextObject ()) {
        result.addString ("  }else ") ;
      }
      index_4099_.increment () ;
      enumerator_4099.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n    result = (int32_t) ") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_computeIndex (") ;
  GALGAS_uint index_4498_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4498 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4498.hasCurrentObject ()) {
      result.addString ("inIndex") ;
      result.addString (enumerator_4498.current_mValue (HERE).stringValue ()) ;
      if (enumerator_4498.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_4498_.increment () ;
      enumerator_4498.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4588_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 142)).isValid ()) {
    cEnumerator_stringlist enumerator_4588 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 142)), kENUMERATION_UP) ;
    while (enumerator_4588.hasCurrentObject ()) {
      result.addString (", size") ;
      result.addString (enumerator_4588.current_mValue (HERE).stringValue ()) ;
      result.addString (" ()") ;
      index_4588_.increment () ;
      enumerator_4588.gotoNextObject () ;
    }
  }
  result.addString (") ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::objectAtAbsoluteIndex (const int32_t inIndex) const {\n  return mObjectArray [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setObjectAtAbsoluteIndex (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inObject,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const int32_t inIndex) {\n  mObjectArray [inIndex] = inObject ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::~ cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) {\n  macroMyDeleteArray (mObjectArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setSize (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5568_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5568 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5568.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const uint32_t inSize") ;
      result.addString (enumerator_5568.current_mValue (HERE).stringValue ()) ;
      if (enumerator_5568.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_5568_.increment () ;
      enumerator_5568.gotoNextObject () ;
    }
  }
  result.addString ("      \n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = nullptr ;\n  macroMyNewArrayThere (p, GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (", ") ;
  GALGAS_uint index_5805_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5805 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5805.hasCurrentObject ()) {
      result.addString ("inSize") ;
      result.addString (enumerator_5805.current_mValue (HERE).stringValue ()) ;
      if (enumerator_5805.hasNextObject ()) {
        result.addString (" * ") ;
      }
      index_5805_.increment () ;
      enumerator_5805.gotoNextObject () ;
    }
  }
  result.addString (") ;\n") ;
  GALGAS_uint index_5880_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5880 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5880.hasCurrentObject ()) {
      result.addString ("  uint32_t min") ;
      result.addString (enumerator_5880.current_mValue (HERE).stringValue ()) ;
      result.addString (" = uimin32 (size") ;
      result.addString (enumerator_5880.current_mValue (HERE).stringValue ()) ;
      result.addString (" (), inSize") ;
      result.addString (enumerator_5880.current_mValue (HERE).stringValue ()) ;
      result.addString (") ;\n") ;
      index_5880_.increment () ;
      enumerator_5880.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5994_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5994 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5994.hasCurrentObject ()) {
      result.addString ("  for (uint32_t i") ;
      result.addString (enumerator_5994.current_mValue (HERE).stringValue ()) ;
      result.addString ("=0 ; i") ;
      result.addString (enumerator_5994.current_mValue (HERE).stringValue ()) ;
      result.addString ("<min") ;
      result.addString (enumerator_5994.current_mValue (HERE).stringValue ()) ;
      result.addString (" ; i") ;
      result.addString (enumerator_5994.current_mValue (HERE).stringValue ()) ;
      result.addString ("++) {\n") ;
      index_5994_.increment () ;
      enumerator_5994.gotoNextObject () ;
    }
  }
  result.addString ("        const uint32_t idxSource = ") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_computeIndex (") ;
  GALGAS_uint index_6179_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6179 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6179.hasCurrentObject ()) {
      result.addString ("i") ;
      result.addString (enumerator_6179.current_mValue (HERE).stringValue ()) ;
      if (enumerator_6179.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_6179_.increment () ;
      enumerator_6179.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6263_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 183)).isValid ()) {
    cEnumerator_stringlist enumerator_6263 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 183)), kENUMERATION_UP) ;
    while (enumerator_6263.hasCurrentObject ()) {
      result.addString (", size") ;
      result.addString (enumerator_6263.current_mValue (HERE).stringValue ()) ;
      result.addString (" ()") ;
      index_6263_.increment () ;
      enumerator_6263.gotoNextObject () ;
    }
  }
  result.addString (") ;\n        const uint32_t idxTarget = ") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_computeIndex (") ;
  GALGAS_uint index_6396_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6396 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6396.hasCurrentObject ()) {
      result.addString ("i") ;
      result.addString (enumerator_6396.current_mValue (HERE).stringValue ()) ;
      if (enumerator_6396.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_6396_.increment () ;
      enumerator_6396.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6480_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 184)).isValid ()) {
    cEnumerator_stringlist enumerator_6480 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 184)), kENUMERATION_UP) ;
    while (enumerator_6480.hasCurrentObject ()) {
      result.addString (", inSize") ;
      result.addString (enumerator_6480.current_mValue (HERE).stringValue ()) ;
      index_6480_.increment () ;
      enumerator_6480.gotoNextObject () ;
    }
  }
  result.addString (") ;\n        p [idxTarget] = mObjectArray [idxSource] ;\n") ;
  GALGAS_uint index_6594_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6594 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6594.hasCurrentObject ()) {
      result.addString ("  }\n") ;
      index_6594_.increment () ;
      enumerator_6594.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6640_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6640 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6640.hasCurrentObject ()) {
      result.addString ("  mSize") ;
      result.addString (enumerator_6640.current_mValue (HERE).stringValue ()) ;
      result.addString (" = inSize") ;
      result.addString (enumerator_6640.current_mValue (HERE).stringValue ()) ;
      result.addString (" ;\n") ;
      index_6640_.increment () ;
      enumerator_6640.gotoNextObject () ;
    }
  }
  result.addString ("  macroMyDeleteArray (mObjectArray) ;\n  mObjectArray = p ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::~ GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) {\n  macroDetachSharedObject (mSharedObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::drop (void) {\n  macroDetachSharedObject (mSharedObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSourceObject) :\nAC_GALGAS_root (),\nmSharedObject (nullptr) {\n  macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::operator = (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSourceObject) {\n  if (this != & inSourceObject) {\n    macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n  }\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_new (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8052_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8052 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8052.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_uint & inSize") ;
      result.addString (enumerator_8052.current_mValue (HERE).stringValue ()) ;
      if (enumerator_8052.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_8052_.increment () ;
      enumerator_8052.gotoNextObject () ;
    }
  }
  result.addString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  if (") ;
  GALGAS_uint index_8219_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8219 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8219.hasCurrentObject ()) {
      result.addString ("inSize") ;
      result.addString (enumerator_8219.current_mValue (HERE).stringValue ()) ;
      result.addString (".isValid ()") ;
      if (enumerator_8219.hasNextObject ()) {
        result.addString (" && ") ;
      }
      index_8219_.increment () ;
      enumerator_8219.gotoNextObject () ;
    }
  }
  result.addString (") {\n    macroMyNew (result.mSharedObject, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_8371_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8371 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8371.hasCurrentObject ()) {
      result.addString ("inSize") ;
      result.addString (enumerator_8371.current_mValue (HERE).stringValue ()) ;
      result.addString (".uintValue ()") ;
      if (enumerator_8371.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_8371_.increment () ;
      enumerator_8371.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("String & ioString,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const int32_t /* inIndentation */) const {\n  ioString.addString (\"<@ptrint:\") ;\n  if (nullptr == mSharedObject) {\n    ioString.addString (\"NULL\") ;\n  }else{\n    macroValidSharedObject (mSharedObject, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n    ioString.addString (\"array [\") ;\n") ;
  GALGAS_uint index_8944_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8944 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8944.hasCurrentObject ()) {
      result.addString ("    ioString.addUnsigned (mSharedObject->size") ;
      result.addString (enumerator_8944.current_mValue (HERE).stringValue ()) ;
      result.addString (" ())\n") ;
      if (enumerator_8944.hasNextObject ()) {
        result.addString ("    ioString.addString (\", \")") ;
      }
      index_8944_.increment () ;
      enumerator_8944.gotoNextObject () ;
    }
  }
  result.addString ("    ioString.addString (\"] of @uint\") ;\n  }\n  ioString.addString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_uint GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_axisCount (UNUSED_LOCATION_ARGS) const {\n  GALGAS_uint result ;\n  if (isValid ()) {\n    result = GALGAS_uint (") ;
  result.addString (in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 266)).stringValue ()) ;
  result.addString (") ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_range GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_rangeForAxis (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_uint & inAxisIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_range result ;\n  if (isValid () && inAxisIndex.isValid ()) {\n    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n    if (axisIndex >= ") ;
  result.addString (in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 279)).stringValue ()) ;
  result.addString (") {\n      String s ;\n      s << \"getter @ptrint sizeForAxis: argument >= dimension\" ;\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n") ;
  GALGAS_uint index_10074_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_10074 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10074.hasCurrentObject ()) {
      result.addString ("    }else if (") ;
      result.addString (enumerator_10074.current_mValue (HERE).stringValue ()) ;
      result.addString (" == axisIndex) {\n      result = GALGAS_range (GALGAS_uint (0), GALGAS_uint (mSharedObject->size") ;
      result.addString (enumerator_10074.current_mValue (HERE).stringValue ()) ;
      result.addString (" ())) ;\n") ;
      index_10074_.increment () ;
      enumerator_10074.gotoNextObject () ;
    }
  }
  result.addString ("    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_uint GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_sizeForAxis (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_uint & inAxisIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_uint result ;\n  if (isValid () && inAxisIndex.isValid ()) {\n    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n    if (axisIndex >= ") ;
  result.addString (in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 300)).stringValue ()) ;
  result.addString (") {\n      String s ;\n      s << \"getter @ptrint sizeForAxis: argument >= dimension\" ;\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n") ;
  GALGAS_uint index_10888_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_10888 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10888.hasCurrentObject ()) {
      result.addString ("    }else if (") ;
      result.addString (enumerator_10888.current_mValue (HERE).stringValue ()) ;
      result.addString (" == axisIndex) {\n      result = GALGAS_uint (mSharedObject->size") ;
      result.addString (enumerator_10888.current_mValue (HERE).stringValue ()) ;
      result.addString (" ()) ;\n") ;
      index_10888_.increment () ;
      enumerator_10888.gotoNextObject () ;
    }
  }
  result.addString ("    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_isValueValidAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11243_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11243 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11243.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_uint & inIndex") ;
      result.addString (enumerator_11243.current_mValue (HERE).stringValue ()) ;
      result.addString (",\n") ;
      index_11243_.increment () ;
      enumerator_11243.gotoNextObject () ;
    }
  }
  result.addString ("  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (isValid ()") ;
  GALGAS_uint index_11432_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11432 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11432.hasCurrentObject ()) {
      result.addString (" && inIndex") ;
      result.addString (enumerator_11432.current_mValue (HERE).stringValue ()) ;
      result.addString (".isValid ()") ;
      index_11432_.increment () ;
      enumerator_11432.gotoNextObject () ;
    }
  }
  result.addString (") {\n    macroValidSharedObject (mSharedObject, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n    const int32_t idx = mSharedObject->indexForIndexes (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11638_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11638 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11638.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("inIndex") ;
      result.addString (enumerator_11638.current_mValue (HERE).stringValue ()) ;
      result.addString (".uintValue (),\n") ;
      index_11638_.increment () ;
      enumerator_11638.gotoNextObject () ;
    }
  }
  result.addString ("                                                         inCompiler\n                                                         COMMA_THERE) ;\n    if (idx >= 0) {\n      result = GALGAS_bool (mSharedObject->objectAtAbsoluteIndex (idx).isValid ()) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_valueAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12179_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12179 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12179.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_uint & inIndex") ;
      result.addString (enumerator_12179.current_mValue (HERE).stringValue ()) ;
      result.addString (",\n") ;
      index_12179_.increment () ;
      enumerator_12179.gotoNextObject () ;
    }
  }
  result.addString ("  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  if (isValid ()") ;
  GALGAS_uint index_12390_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12390 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12390.hasCurrentObject ()) {
      result.addString (" && inIndex") ;
      result.addString (enumerator_12390.current_mValue (HERE).stringValue ()) ;
      result.addString (".isValid ()") ;
      index_12390_.increment () ;
      enumerator_12390.gotoNextObject () ;
    }
  }
  result.addString (") {\n    macroValidSharedObject (mSharedObject, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n    const int32_t idx = mSharedObject->indexForIndexes (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12596_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12596 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12596.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("inIndex") ;
      result.addString (enumerator_12596.current_mValue (HERE).stringValue ()) ;
      result.addString (".uintValue (),\n") ;
      index_12596_.increment () ;
      enumerator_12596.gotoNextObject () ;
    }
  }
  result.addString ("                                                         inCompiler\n                                                         COMMA_THERE) ;\n    if (idx >= 0) {\n      result = mSharedObject->objectAtAbsoluteIndex (idx) ;\n      if (! result.isValid ()) {\n        String s ;\n        s.addString (\"getter @ptrint valueAtIndex: object at index (\") ;\n") ;
  GALGAS_uint index_13020_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13020 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13020.hasCurrentObject ()) {
      result.addString ("        s.addUnsigned (mSharedObject->size") ;
      result.addString (enumerator_13020.current_mValue (HERE).stringValue ()) ;
      result.addString (" ())\n") ;
      index_13020_.increment () ;
      enumerator_13020.gotoNextObject () ;
    }
  }
  result.addString ("        s.addString (\") is invalid\") ;\n        inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n      }\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::insulate (LOCATION_ARGS) {\n  if (isValid () && !mSharedObject->isUniquelyReferenced ()) {\n    cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = nullptr ;\n    macroMyNew (p, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (mSharedObject COMMA_THERE)) ;\n    macroAssignSharedObject (mSharedObject, p) ;\n    macroDetachSharedObject (p) ;\n    macroAssert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_setValueAtIndex (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" inValue,\n") ;
  GALGAS_uint index_13997_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13997 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13997.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("GALGAS_uint inIndex") ;
      result.addString (enumerator_13997.current_mValue (HERE).stringValue ()) ;
      result.addString (",\n") ;
      index_13997_.increment () ;
      enumerator_13997.gotoNextObject () ;
    }
  }
  result.addString ("       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inValue.isValid ()") ;
  GALGAS_uint index_14180_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14180 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14180.hasCurrentObject ()) {
      result.addString (" && inIndex") ;
      result.addString (enumerator_14180.current_mValue (HERE).stringValue ()) ;
      result.addString (".isValid ()") ;
      index_14180_.increment () ;
      enumerator_14180.gotoNextObject () ;
    }
  }
  result.addString (") {\n    insulate (THERE) ;\n    macroValidSharedObject (mSharedObject, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n    macroAssert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n    const int32_t idx = mSharedObject->indexForIndexes (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14510_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14510 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14510.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("inIndex") ;
      result.addString (enumerator_14510.current_mValue (HERE).stringValue ()) ;
      result.addString (".uintValue (),\n") ;
      index_14510_.increment () ;
      enumerator_14510.gotoNextObject () ;
    }
  }
  result.addString ("                                                         inCompiler\n                                                         COMMA_THERE) ;\n    if (idx >= 0) {\n      mSharedObject->setObjectAtAbsoluteIndex (inValue, idx) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_forceValueAtIndex (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" inValue,\n") ;
  GALGAS_uint index_15031_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15031 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15031.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_uint inIndex") ;
      result.addString (enumerator_15031.current_mValue (HERE).stringValue ()) ;
      result.addString (",\n") ;
      index_15031_.increment () ;
      enumerator_15031.gotoNextObject () ;
    }
  }
  result.addString (" ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inValue.isValid ()") ;
  GALGAS_uint index_15209_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15209 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15209.hasCurrentObject ()) {
      result.addString (" && inIndex") ;
      result.addString (enumerator_15209.current_mValue (HERE).stringValue ()) ;
      result.addString (".isValid ()") ;
      index_15209_.increment () ;
      enumerator_15209.gotoNextObject () ;
    }
  }
  result.addString (") {\n    insulate (THERE) ;\n    macroValidSharedObject (mSharedObject, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n    macroAssert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n  //--- Resize \?\n    const bool resize = ") ;
  GALGAS_uint index_15521_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15521 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15521.hasCurrentObject ()) {
      result.addString ("(inIndex") ;
      result.addString (enumerator_15521.current_mValue (HERE).stringValue ()) ;
      result.addString (".uintValue () >= mSharedObject->size") ;
      result.addString (enumerator_15521.current_mValue (HERE).stringValue ()) ;
      result.addString (" ())") ;
      if (enumerator_15521.hasNextObject ()) {
        result.addString (" || ") ;
      }
      index_15521_.increment () ;
      enumerator_15521.gotoNextObject () ;
    }
  }
  result.addString (" ;\n    if (resize) {\n") ;
  GALGAS_uint index_15666_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15666 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15666.hasCurrentObject ()) {
      result.addString ("      const uint32_t newSize") ;
      result.addString (enumerator_15666.current_mValue (HERE).stringValue ()) ;
      result.addString (" = uimax32 (mSharedObject->size") ;
      result.addString (enumerator_15666.current_mValue (HERE).stringValue ()) ;
      result.addString (" (), inIndex") ;
      result.addString (enumerator_15666.current_mValue (HERE).stringValue ()) ;
      result.addString (".uintValue () + 1) ;\n") ;
      index_15666_.increment () ;
      enumerator_15666.gotoNextObject () ;
    }
  }
  result.addString ("      mSharedObject->setSize (") ;
  GALGAS_uint index_15859_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15859 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15859.hasCurrentObject ()) {
      result.addString ("newSize") ;
      result.addString (enumerator_15859.current_mValue (HERE).stringValue ()) ;
      if (enumerator_15859.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_15859_.increment () ;
      enumerator_15859.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE) ;\n    }\n  //---\n    const int32_t idx = mSharedObject->indexForIndexes (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_16017_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16017 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16017.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("inIndex") ;
      result.addString (enumerator_16017.current_mValue (HERE).stringValue ()) ;
      result.addString (".uintValue (),\n") ;
      index_16017_.increment () ;
      enumerator_16017.gotoNextObject () ;
    }
  }
  result.addString ("                                                         inCompiler\n                                                         COMMA_THERE) ;\n    if (idx >= 0) {\n      mSharedObject->setObjectAtAbsoluteIndex (inValue, idx) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_setSizeForAxis (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("GALGAS_uint inNewSize,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("GALGAS_uint inAxisIndex,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inNewSize.isValid () && inAxisIndex.isValid ()) {\n    insulate (THERE) ;\n    macroValidSharedObject (mSharedObject, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n    macroAssert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n  //--- \n    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n    if (axisIndex >= ") ;
  result.addString (in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 453)).stringValue ()) ;
  result.addString (") {\n      String s ;\n      s.addString (\"setter @ptrint setSizeForAxis: axis index (\") ;\n      s.addUnsigned (axisIndex) ;\n      s.addString (\") >= dimension (") ;
  result.addString (in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 457)).stringValue ()) ;
  result.addString (")\") ;\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n    }else{\n") ;
  GALGAS_uint index_17248_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17248 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17248.hasCurrentObject ()) {
      result.addString ("      const uint32_t newSize") ;
      result.addString (enumerator_17248.current_mValue (HERE).stringValue ()) ;
      result.addString (" = (") ;
      result.addString (enumerator_17248.current_mValue (HERE).stringValue ()) ;
      result.addString (" == axisIndex) \? inNewSize.uintValue () : mSharedObject->size") ;
      result.addString (enumerator_17248.current_mValue (HERE).stringValue ()) ;
      result.addString (" () ;\n") ;
      index_17248_.increment () ;
      enumerator_17248.gotoNextObject () ;
    }
  }
  result.addString ("      mSharedObject->setSize (") ;
  GALGAS_uint index_17449_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17449 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17449.hasCurrentObject ()) {
      result.addString ("newSize") ;
      result.addString (enumerator_17449.current_mValue (HERE).stringValue ()) ;
      if (enumerator_17449.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_17449_.increment () ;
      enumerator_17449.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_invalidateValueAtIndex (") ;
  GALGAS_uint index_17726_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17726 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_17726 = enumerator_17726.hasCurrentObject () ;
    if (nonEmpty_enumerator_17726) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_17726.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("GALGAS_uint inIndex") ;
      result.addString (enumerator_17726.current_mValue (HERE).stringValue ()) ;
      result.addString (",\n") ;
      index_17726_.increment () ;
      enumerator_17726.gotoNextObject () ;
    }
  }
  result.addString ("        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()") ;
  GALGAS_uint index_17889_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17889 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17889.hasCurrentObject ()) {
      result.addString (" && inIndex") ;
      result.addString (enumerator_17889.current_mValue (HERE).stringValue ()) ;
      result.addString (".isValid ()") ;
      index_17889_.increment () ;
      enumerator_17889.gotoNextObject () ;
    }
  }
  result.addString (") {\n    insulate (THERE) ;\n    macroValidSharedObject (mSharedObject, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n    macroAssert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n    const int32_t idx = mSharedObject->indexForIndexes (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_18219_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18219 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18219.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("inIndex") ;
      result.addString (enumerator_18219.current_mValue (HERE).stringValue ()) ;
      result.addString (".uintValue (),\n") ;
      index_18219_.increment () ;
      enumerator_18219.gotoNextObject () ;
    }
  }
  result.addString ("                                                         inCompiler\n                                                         COMMA_THERE) ;\n    if (idx >= 0) {\n      mSharedObject->setObjectAtAbsoluteIndex (GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (), idx) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_setSize (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_18714_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18714 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18714.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_uint inNewSize") ;
      result.addString (enumerator_18714.current_mValue (HERE).stringValue ()) ;
      result.addString (",\n") ;
      index_18714_.increment () ;
      enumerator_18714.gotoNextObject () ;
    }
  }
  result.addString ("  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * /* inCompiler */\n   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()") ;
  GALGAS_uint index_18879_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18879 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18879.hasCurrentObject ()) {
      result.addString (" && inNewSize") ;
      result.addString (enumerator_18879.current_mValue (HERE).stringValue ()) ;
      result.addString (".isValid ()") ;
      index_18879_.increment () ;
      enumerator_18879.gotoNextObject () ;
    }
  }
  result.addString (") {\n    insulate (THERE) ;\n    macroValidSharedObject (mSharedObject, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n    macroAssert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n    mSharedObject->setSize (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_19183_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19183 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19183.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("inNewSize") ;
      result.addString (enumerator_19183.current_mValue (HERE).stringValue ()) ;
      result.addString (".uintValue ()") ;
      if (enumerator_19183.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_19183_.increment () ;
      enumerator_19183.gotoNextObject () ;
    }
  }
  result.addString ("\n                            COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::objectCompare (const cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inOperand) const {\n  typeComparisonResult result =  kOperandEqual ;\n") ;
  GALGAS_uint index_19588_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19588 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19588.hasCurrentObject ()) {
      result.addString ("  if (kOperandEqual == result) {\n    if (mSize") ;
      result.addString (enumerator_19588.current_mValue (HERE).stringValue ()) ;
      result.addString (" < inOperand->mSize") ;
      result.addString (enumerator_19588.current_mValue (HERE).stringValue ()) ;
      result.addString (") {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (mSize") ;
      result.addString (enumerator_19588.current_mValue (HERE).stringValue ()) ;
      result.addString (" > inOperand->mSize") ;
      result.addString (enumerator_19588.current_mValue (HERE).stringValue ()) ;
      result.addString (") {\n      result = kFirstOperandGreaterThanSecond ;\n    }\n  }\n") ;
      index_19588_.increment () ;
      enumerator_19588.gotoNextObject () ;
    }
  }
  result.addString ("  for (uint32_t i=0 ; (i<(") ;
  GALGAS_uint index_19909_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19909 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19909.hasCurrentObject ()) {
      result.addString ("mSize") ;
      result.addString (enumerator_19909.current_mValue (HERE).stringValue ()) ;
      if (enumerator_19909.hasNextObject ()) {
        result.addString ("*") ;
      }
      index_19909_.increment () ;
      enumerator_19909.gotoNextObject () ;
    }
  }
  result.addString (")) && (result == kOperandEqual) ; i++) {\n    GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * ptrObject1 = & (mObjectArray [i]) ;\n    GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * ptrObject2 = & (inOperand->mObjectArray [i]) ;\n    if ((! ptrObject1->isValid ()) && ptrObject2->isValid ()) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (ptrObject1->isValid () && ! ptrObject2->isValid ()) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else if (ptrObject1->isValid () && ptrObject2->isValid ()) {\n      result = ptrObject1->objectCompare (* ptrObject2) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::objectCompare (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand) const {\n  typeComparisonResult result = (isValid () && inOperand.isValid ()) \? kOperandEqual : kOperandNotValid ;\n  if (kOperandEqual == result) {\n    result = mSharedObject->objectCompare (inOperand.mSharedObject) ;\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate listmapTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (Compiler * inCompiler,
                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public AC_GALGAS_listmap {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate listmapTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (Compiler * inCompiler,
                                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\nAC_GALGAS_listmap () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_emptyMap (LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  result.makeNewEmptyListMap (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_string & inKey") ;
  GALGAS_uint index_728_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_728 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_728.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_728.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue ()) ;
      result.addString (" & inOperand") ;
      result.addString (index_728_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue ()) ;
      index_728_IDX.increment () ;
      enumerator_728.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()") ;
  GALGAS_uint index_949_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_949 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_949.hasCurrentObject ()) {
      result.addString (" && inOperand") ;
      result.addString (index_949_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.addString (".isValid ()") ;
      index_949_IDX.increment () ;
      enumerator_949.gotoNextObject () ;
    }
  }
  result.addString (") {\n    capCollectionElement attributes ;\n    GALGAS_") ;
  result.addString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::makeAttributesFromObjects (attributes") ;
  GALGAS_uint index_1237_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1237 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1237.hasCurrentObject ()) {
      result.addString (", inOperand") ;
      result.addString (index_1237_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 30)).stringValue ()) ;
      index_1237_IDX.increment () ;
      enumerator_1237.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE) ;\n    addObjectInListMap (inKey.stringValue (), attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_string inKey") ;
  GALGAS_uint index_1604_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1604 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1604.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_1604.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 41)).stringValue ()) ;
      result.addString (" inOperand") ;
      result.addString (index_1604_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 41)).stringValue ()) ;
      index_1604_IDX.increment () ;
      enumerator_1604.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * /* inCompiler */\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()") ;
  GALGAS_uint index_1912_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1912 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1912.hasCurrentObject ()) {
      result.addString (" && inOperand") ;
      result.addString (index_1912_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.addString (".isValid ()") ;
      index_1912_IDX.increment () ;
      enumerator_1912.gotoNextObject () ;
    }
  }
  result.addString (") {\n    capCollectionElement attributes ;\n    GALGAS_") ;
  result.addString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::makeAttributesFromObjects (attributes") ;
  GALGAS_uint index_2146_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2146 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2146.hasCurrentObject ()) {
      result.addString (", inOperand") ;
      result.addString (index_2146_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 53)).stringValue ()) ;
      index_2146_IDX.increment () ;
      enumerator_2146.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE) ;\n    addObjectInListMap (inKey.stringValue (), attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_listForKey (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_string & inKey\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  return GALGAS_") ;
  result.addString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (listForKey (inKey)) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inEnumeratedObject,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::current (LOCATION_ARGS) const {\n  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cListMapElement) ;\n  return GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element (p->mKey, p->mSharedListMapList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_string cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::current_key (LOCATION_ARGS) const {\n  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cListMapElement) ;\n  return GALGAS_string (p->mKey) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::current_mList (LOCATION_ARGS) const {\n  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cListMapElement) ;\n  return GALGAS_") ;
  result.addString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (p->mSharedListMapList) ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                            const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" ;\n\n") ;
  GALGAS_uint index_351_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_351 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_351.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nextern const char * kSearchErrorMessage_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_351.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 12)).stringValue ()) ;
      result.addString (" ;\n\n") ;
      index_351_.increment () ;
      enumerator_351.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public AC_GALGAS_map {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) ;\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & operator = (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) ;\n  \n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeHeader2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 2: class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public cMapElement {\n//--- Map attributes\n") ;
  GALGAS_uint index_453_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_453 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_453.hasCurrentObject ()) {
      result.addString ("  public: GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_453.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue ()) ;
      result.addString (" mProperty_") ;
      result.addString (enumerator_453.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_453_.increment () ;
      enumerator_453.gotoNextObject () ;
    }
  }
  result.addString ("\n//--- Constructor\n  public: cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_780_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_780 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_780.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_780.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_780.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue ()) ;
      index_780_.increment () ;
      enumerator_780.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cMapElement * copy (void) ;\n\n//--- Description\n public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (Compiler * inCompiler,
                                                                                        const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                        const GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapRemoveMethodListAST & in_REMOVE_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n\ncMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_287_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_287 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_287.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_287.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_287.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue ()) ;
      index_287_.increment () ;
      enumerator_287.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) :\ncMapElement (inKey COMMA_THERE)") ;
  GALGAS_uint index_561_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_561 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_561.hasCurrentObject ()) {
      result.addString (",\nmProperty_") ;
      result.addString (enumerator_561.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.addString (" (in_") ;
      result.addString (enumerator_561.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.addString (")") ;
      index_561_.increment () ;
      enumerator_561.gotoNextObject () ;
    }
  }
  result.addString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::isValid (void) const {\n  return mProperty_lkey.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement * cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::copy (void) {\n  cMapElement * result = nullptr ;\n  macroMyNew (result, cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (mProperty_lkey") ;
  GALGAS_uint index_1209_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1209 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1209.hasCurrentObject ()) {
      result.addString (", mProperty_") ;
      result.addString (enumerator_1209.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 28)).stringValue ()) ;
      index_1209_.increment () ;
      enumerator_1209.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 36)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("void cMapElement_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::description (String & /* ioString */, const int32_t /* inIndentation */) const {\n") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("void cMapElement_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
    GALGAS_uint index_1779_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1779 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1779.hasCurrentObject ()) {
        result.addString ("  ioString.addNL () ;\n  ioString.addStringMultiple (\"| \", inIndentation) ;\n  ioString.addString (") ;
        result.addString (enumerator_1779.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 43)).stringValue ()) ;
        result.addString (" \":\") ;\n  mProperty_") ;
        result.addString (enumerator_1779.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 44)).stringValue ()) ;
        result.addString (".description (ioString, inIndentation) ;\n") ;
        index_1779_.increment () ;
        enumerator_1779.gotoNextObject () ;
      }
    }
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::compare (const cCollectionElement * inOperand) const {\n  cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * operand = (cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) inOperand ;\n  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;\n") ;
  GALGAS_uint index_2561_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2561 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2561.hasCurrentObject ()) {
      result.addString ("  if (kOperandEqual == result) {\n    result = mProperty_") ;
      result.addString (enumerator_2561.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 56)).stringValue ()) ;
      result.addString (".objectCompare (operand->mProperty_") ;
      result.addString (enumerator_2561.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 56)).stringValue ()) ;
      result.addString (") ;\n  }\n") ;
      index_2561_.increment () ;
      enumerator_2561.gotoNextObject () ;
    }
  }
  result.addString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\nAC_GALGAS_map () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) :\nAC_GALGAS_map (inSource) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::operator = (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) {\n  * ((AC_GALGAS_map *) this) = inSource ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_emptyMap (LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  result.makeNewEmptyMap (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_mapWithMapToOverride (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inMapToOverride\n                                                   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_overriddenMap (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  getOverridenMap (result, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_4874_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4874 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4874.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_4874.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 111)).stringValue ()) ;
      result.addString (" & inArgument") ;
      result.addString (index_4874_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 111)).stringValue ()) ;
      index_4874_IDX.increment () ;
      enumerator_4874.gotoNextObject () ;
    }
  }
  result.addString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (inKey") ;
  GALGAS_uint index_5243_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5243 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5243.hasCurrentObject ()) {
      result.addString (", inArgument") ;
      result.addString (index_5243_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 118)).stringValue ()) ;
      index_5243_IDX.increment () ;
      enumerator_5243.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n") ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).uintValue ())) ;
  }
  result.addString ("const char * kInsertErrorMessage = \"@") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" insert error: '%K' already in map\" ;\nconst char * kShadowErrorMessage = \"\" ;\nperformInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n") ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).uintValue ())) ;
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result = *this ;\n  cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" enumerator (inOperand, kENUMERATION_UP) ;\n  while (enumerator.hasCurrentObject ()) {\n    result.addAssign_operation (enumerator.current_lkey (HERE)") ;
  GALGAS_uint index_6276_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6276 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6276.hasCurrentObject ()) {
      result.addString (", enumerator.current_") ;
      result.addString (enumerator_6276.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 141)).stringValue ()) ;
      result.addString (" (HERE)") ;
      index_6276_.increment () ;
      enumerator_6276.gotoNextObject () ;
    }
  }
  result.addString (", inCompiler COMMA_THERE) ;\n    enumerator.gotoNextObject () ;\n  }\n  return result ;\n}\n\n") ;
  GALGAS_uint index_6524_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_6524 (in_INSERT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6524.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::setter_") ;
      result.addString (enumerator_6524.current_mInsertMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 151)).stringValue ()) ;
      result.addString (" (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_6814_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6814 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_6814.hasCurrentObject ()) {
          result.addString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_6814.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue ()) ;
          result.addString (" inArgument") ;
          result.addString (index_6814_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue ()) ;
          index_6814_IDX.increment () ;
          enumerator_6814.gotoNextObject () ;
        }
      }
      result.addString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_LOCATION_ARGS) {\n  cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" (inKey") ;
      GALGAS_uint index_7198_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_7198 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_7198.hasCurrentObject ()) {
          result.addString (", inArgument") ;
          result.addString (index_7198_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 160)).stringValue ()) ;
          index_7198_IDX.increment () ;
          enumerator_7198.gotoNextObject () ;
        }
      }
      result.addString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n") ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).isValid ()) {
        result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).uintValue ())) ;
      }
      result.addString ("const char * kInsertErrorMessage = ") ;
      result.addString (enumerator_6524.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 167)).stringValue ()) ;
      result.addString (" ;\nconst char * kShadowErrorMessage = ") ;
      result.addString (enumerator_6524.current_mShadowErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 168)).stringValue ()) ;
      result.addString (" ;\nperformInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n") ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).isValid ()) {
        result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).uintValue ())) ;
      }
      result.addString ("}\n\n") ;
      index_6524_.increment () ;
      enumerator_6524.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7781_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_7781 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7781.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nconst char * kSearchErrorMessage_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_7781.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.addString (" = ") ;
      result.addString (enumerator_7781.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.addString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::method_") ;
      result.addString (enumerator_7781.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 178)).stringValue ()) ;
      result.addString (" (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_8380_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8380 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8380.hasCurrentObject ()) {
          result.addString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_8380.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 180)).stringValue ()) ;
          result.addString (" & outArgument") ;
          result.addString (index_8380_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 180)).stringValue ()) ;
          index_8380_IDX.increment () ;
          enumerator_8380.gotoNextObject () ;
        }
      }
      result.addString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_LOCATION_ARGS) const {\n  const cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = (const cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" *) performSearch (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("inKey,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("inCompiler,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("kSearchErrorMessage_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_7781.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 186)).stringValue ()) ;
      result.addString ("\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_THERE) ;\n  if (nullptr == p) {\n") ;
      GALGAS_uint index_8969_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8969 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8969.hasCurrentObject ()) {
          result.addString ("    outArgument") ;
          result.addString (index_8969_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 190)).stringValue ()) ;
          result.addString (".drop () ;\n") ;
          index_8969_IDX.increment () ;
          enumerator_8969.gotoNextObject () ;
        }
      }
      result.addString ("  }else{\n    macroValidSharedObject (p, cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n") ;
      GALGAS_uint index_9202_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9202 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9202.hasCurrentObject ()) {
          result.addString ("    outArgument") ;
          result.addString (index_9202_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 195)).stringValue ()) ;
          result.addString (" = p->mProperty_") ;
          result.addString (enumerator_9202.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 195)).stringValue ()) ;
          result.addString (" ;\n") ;
          index_9202_IDX.increment () ;
          enumerator_9202.gotoNextObject () ;
        }
      }
      result.addString ("  }\n}\n\n") ;
      index_7781_.increment () ;
      enumerator_7781.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9393_ (0) ;
  if (in_REMOVE_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapRemoveMethodListAST enumerator_9393 (in_REMOVE_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9393.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::setter_") ;
      result.addString (enumerator_9393.current_mMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 204)).stringValue ()) ;
      result.addString (" (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_9707_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9707 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9707.hasCurrentObject ()) {
          result.addString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_9707.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 206)).stringValue ()) ;
          result.addString (" & outArgument") ;
          result.addString (index_9707_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 206)).stringValue ()) ;
          index_9707_IDX.increment () ;
          enumerator_9707.gotoNextObject () ;
        }
      }
      result.addString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_LOCATION_ARGS) {\n  const char * kRemoveErrorMessage = ") ;
      result.addString (enumerator_9393.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 210)).stringValue ()) ;
      result.addString (" ;\n  capCollectionElement attributes ;\n  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;\n  cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = (cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
      GALGAS_uint index_10329_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10329 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_10329.hasCurrentObject ()) {
          result.addString ("    outArgument") ;
          result.addString (index_10329_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 216)).stringValue ()) ;
          result.addString (".drop () ;\n") ;
          index_10329_IDX.increment () ;
          enumerator_10329.gotoNextObject () ;
        }
      }
      result.addString ("  }else{\n    macroValidSharedObject (p, cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n") ;
      GALGAS_uint index_10564_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10564 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_10564.hasCurrentObject ()) {
          result.addString ("    outArgument") ;
          result.addString (index_10564_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 221)).stringValue ()) ;
          result.addString (" = p->mProperty_") ;
          result.addString (enumerator_10564.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 221)).stringValue ()) ;
          result.addString (" ;\n") ;
          index_10564_IDX.increment () ;
          enumerator_10564.gotoNextObject () ;
        }
      }
      result.addString ("  }\n}\n\n") ;
      index_9393_.increment () ;
      enumerator_9393.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  if (kBoolTrue == test_1) {
    result.addString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::setter_insertOrReplace (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("GALGAS_lstring inKey") ;
    GALGAS_uint index_11016_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_11016 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_11016.hasCurrentObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_11016.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 232)).stringValue ()) ;
        result.addString (" inArgument") ;
        result.addString (index_11016_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 232)).stringValue ()) ;
        index_11016_IDX.increment () ;
        enumerator_11016.gotoNextObject () ;
      }
    }
    result.addString ("\n ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_UNUSED_LOCATION_ARGS) {\n  cMapElement_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" (inKey") ;
    GALGAS_uint index_11364_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_11364 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_11364.hasCurrentObject ()) {
        result.addString (", inArgument") ;
        result.addString (index_11364_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 238)).stringValue ()) ;
        index_11364_IDX.increment () ;
        enumerator_11364.gotoNextObject () ;
      }
    }
    result.addString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  performInsertOrReplace (attributes) ;\n}\n\n") ;
  }else if (kBoolFalse == test_1) {
  }
  GALGAS_uint index_11687_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11687 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11687.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_11687.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 250)).stringValue ()) ;
      result.addString (" GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::getter_") ;
      result.addString (enumerator_11687.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 250)).stringValue ()) ;
      result.addString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("const GALGAS_string & inKey,\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("Compiler * inCompiler\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_LOCATION_ARGS) const {\n  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;\n  const cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = (const cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" *) attributes ;\n  GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_11687.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 255)).stringValue ()) ;
      result.addString (" result ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n    result = p->mProperty_") ;
      result.addString (enumerator_11687.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 258)).stringValue ()) ;
      result.addString (" ;\n  }\n  return result ;\n}\n\n") ;
      index_11687_IDX.increment () ;
      enumerator_11687.gotoNextObject () ;
    }
  }
  GALGAS_uint index_12744_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12744 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12744.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::setter_set") ;
      result.addString (enumerator_12744.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 266)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 266)).stringValue ()) ;
      result.addString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_12744.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 266)).stringValue ()) ;
      result.addString (" inAttributeValue,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("GALGAS_string inKey,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("Compiler * inCompiler\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;\n  cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = (cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" *) attributes ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n    p->mProperty_") ;
      result.addString (enumerator_12744.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 274)).stringValue ()) ;
      result.addString (" = inAttributeValue ;\n  }\n}\n\n") ;
      index_12744_IDX.increment () ;
      enumerator_12744.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n\ncMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::readWriteAccessForWithInstruction (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("Compiler * inCompiler,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const GALGAS_string & inKey\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * result = (cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;\n  macroNullOrValidSharedObject (result, cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inEnumeratedObject,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::current (LOCATION_ARGS) const {\n  const cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (const cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n  return GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element (p->mProperty_lkey") ;
  GALGAS_uint index_15151_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15151 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15151.hasCurrentObject ()) {
      result.addString (", p->mProperty_") ;
      result.addString (enumerator_15151.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 306)).stringValue ()) ;
      index_15151_.increment () ;
      enumerator_15151.gotoNextObject () ;
    }
  }
  result.addString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_lstring cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::current_lkey (LOCATION_ARGS) const {\n  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement) ;\n  return p->mProperty_lkey ;\n}\n\n") ;
  GALGAS_uint index_15650_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15650 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15650.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_15650.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 321)).stringValue ()) ;
      result.addString (" cEnumerator_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::current_") ;
      result.addString (enumerator_15650.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 321)).stringValue ()) ;
      result.addString (" (LOCATION_ARGS) const {\n  const cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = (const cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n  return p->mProperty_") ;
      result.addString (enumerator_15650.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.addString (" ;\n}\n\n") ;
      index_15650_IDX.increment () ;
      enumerator_15650.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::optional_searchKey (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_string & inKey") ;
  GALGAS_uint index_16491_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16491 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16491.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_16491.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 331)).stringValue ()) ;
      result.addString (" & outArgument") ;
      result.addString (index_16491_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 331)).stringValue ()) ;
      index_16491_IDX.increment () ;
      enumerator_16491.gotoNextObject () ;
    }
  }
  result.addString (") const {\n  const cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (const cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) searchForKey (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("inKey) ;\n  const bool result = nullptr != p ;\n  if (result) {\n    macroValidSharedObject (p, cMapElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_16938_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16938 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16938.hasCurrentObject ()) {
      result.addString ("    outArgument") ;
      result.addString (index_16938_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 339)).stringValue ()) ;
      result.addString (" = p->mProperty_") ;
      result.addString (enumerator_16938.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 339)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_16938_IDX.increment () ;
      enumerator_16938.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n") ;
  GALGAS_uint index_17143_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17143 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17143.hasCurrentObject ()) {
      result.addString ("    outArgument") ;
      result.addString (index_17143_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 343)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_17143_IDX.increment () ;
      enumerator_17143.gotoNextObject () ;
    }
  }
  result.addString ("  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate dictTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" dict"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public AC_GALGAS_root {\n//--------------------------------- Attributes\n  private: cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * mSharedDict ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) ;\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & operator = (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) ;\n\n//--- isValid\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedDict != nullptr ; }\n\n//--- drop\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--- Implementation of reader 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n\n//--- Insulate\n  private: void insulate (LOCATION_ARGS) ;\n\n//--- Object compare\n  public: VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand) const ;\n\n//--- Enumeration\n  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate dictTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                         const GALGAS_string & in_KEY_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n\nclass cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element {\n  public: cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * mInfPtr ;\n  public: cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * mSupPtr ;\n  public: int32_t mBalance ;\n\n  public: cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & in_key") ;
  GALGAS_uint index_458_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_458 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_458.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_458.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue ()) ;
      result.addString (" & inProperty_") ;
      result.addString (enumerator_458.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue ()) ;
      index_458_.increment () ;
      enumerator_458.gotoNextObject () ;
    }
  }
  result.addString (") :\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element (in_key") ;
  GALGAS_uint index_693_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_693 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_693.hasCurrentObject ()) {
      result.addString (", inProperty_") ;
      result.addString (enumerator_693.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 15)).stringValue ()) ;
      index_693_.increment () ;
      enumerator_693.gotoNextObject () ;
    }
  }
  result.addString ("),\n  mInfPtr (nullptr),\n  mSupPtr (nullptr),\n  mBalance (0) {\n  }\n\n  public: cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inNode) ;\n\n  public: cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" &) = delete ;\n\n  public: cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("& operator = (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" &) = delete ;\n\n  public: virtual ~ cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) {\n    macroMyDelete (mInfPtr) ;\n    macroMyDelete (mSupPtr) ;\n  }\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public SharedObject {\n//--------------------------------- Attributes\n  private: cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * mRoot ;\n  private: uint32_t mCount ;\n\n//--------------------------------- Constructor\n  protected: cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (LOCATION_ARGS) :\n  SharedObject (THERE),\n  mRoot (nullptr),\n  mCount (0) {\n  }\n\n//--------------------------------- Virtual destructor\n  protected: virtual ~ cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) {\n    macroMyDelete (mRoot) ;\n  }\n\n//--------------------------------- No copy\n  private: cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" &) ;\n  private: cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & operator = (const cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" &) ;\n\n//--------------------------------- Copy a map\n  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inSource) ;\n\n//--------------------------------- Insert\n  protected: VIRTUAL_IN_DEBUG void performInsert (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element & inNewNode,\n                                                  const bool inEntryOverrideAllowed) {\n    macroUniqueSharedObject (this) ;\n    bool extension = false ;\n    bool entryAlreadyInDict = false ;\n    recursiveAddEntry (mRoot, inNewNode, entryAlreadyInDict, extension, inEntryOverrideAllowed) ;\n    if (!entryAlreadyInDict) {\n      mCount ++ ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      checkDict (HERE) ;\n    #endif\n  }\n\n  protected: static void rotateLeft (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * & ioRootPtr) {\n    cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * ptr = ioRootPtr->mSupPtr ;\n    ioRootPtr->mSupPtr = ptr->mInfPtr ;\n    ptr->mInfPtr = ioRootPtr;\n\n    if (ptr->mBalance >= 0) {\n      ioRootPtr->mBalance ++ ;\n    }else{\n      ioRootPtr->mBalance += 1 - ptr->mBalance ;\n    }\n\n    if (ioRootPtr->mBalance > 0) {\n      ptr->mBalance += ioRootPtr->mBalance + 1 ;\n    }else{\n      ptr->mBalance ++ ;\n    }\n    ioRootPtr = ptr ;\n  }\n\n  protected: static void rotateRight (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * & ioRootPtr) {\n    cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * ptr = ioRootPtr->mInfPtr ;\n    ioRootPtr->mInfPtr = ptr->mSupPtr ;\n    ptr->mSupPtr = ioRootPtr ;\n   \n    if (ptr->mBalance > 0) {\n      ioRootPtr->mBalance += -ptr->mBalance - 1 ;\n    }else{\n      ioRootPtr->mBalance -- ;\n    }\n    if (ioRootPtr->mBalance >= 0) {\n      ptr->mBalance -- ;\n    }else{\n      ptr->mBalance += ioRootPtr->mBalance - 1 ;\n    }\n    ioRootPtr = ptr ;\n  }\n\n  protected: static void recursiveAddEntry (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * & ioRootPtr,\n                                            const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element & inNewNode,\n                                            bool & outEntryAlreadyPresent,\n                                            bool & ioExtension,\n                                            const bool inEntryOverrideAllowed) {\n    if (ioRootPtr == nullptr) {\n      macroMyNew (ioRootPtr, cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (inNewNode.mProperty_key") ;
  GALGAS_uint index_4321_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4321 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4321.hasCurrentObject ()) {
      result.addString (", inNewNode.mProperty_") ;
      result.addString (enumerator_4321.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 121)).stringValue ()) ;
      index_4321_.increment () ;
      enumerator_4321.gotoNextObject () ;
    }
  }
  result.addString (")) ;\n      ioExtension = true ;\n      outEntryAlreadyPresent = false ;\n    }else{\n      macroValidPointer (ioRootPtr) ;\n      const typeComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;\n      if (comparaison == kFirstOperandGreaterThanSecond) {\n        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;\n        if (ioExtension) {\n          ioRootPtr->mBalance++;\n          if (ioRootPtr->mBalance == 0) {\n            ioExtension = false;\n          }else if (ioRootPtr->mBalance == 2) {\n            if (ioRootPtr->mInfPtr->mBalance == -1) {\n              rotateLeft (ioRootPtr->mInfPtr) ;\n            }\n            rotateRight (ioRootPtr) ;\n            ioExtension = false;\n          }\n        }\n      }else if (comparaison == kFirstOperandLowerThanSecond) {\n        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;\n        if (ioExtension) {\n          ioRootPtr->mBalance-- ;\n          if (ioRootPtr->mBalance == 0) {\n            ioExtension = false ;\n          }else if (ioRootPtr->mBalance == -2) {\n            if (ioRootPtr->mSupPtr->mBalance == 1) {\n              rotateRight (ioRootPtr->mSupPtr) ;\n            }\n            rotateLeft (ioRootPtr) ;\n            ioExtension = false;\n          }\n        }\n      }else{  // Found\n        ioExtension = false ;\n        outEntryAlreadyPresent = true ;\n        if (inEntryOverrideAllowed) {\n") ;
  GALGAS_uint index_5968_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5968 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5968.hasCurrentObject ()) {
      result.addString ("          ioRootPtr->mProperty_") ;
      result.addString (enumerator_5968.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 163)).stringValue ()) ;
      result.addString (" = inNewNode.mProperty_") ;
      result.addString (enumerator_5968.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 163)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_5968_.increment () ;
      enumerator_5968.gotoNextObject () ;
    }
  }
  result.addString ("        }\n      }\n    }\n  }\n\n//--------------------------------- Search\n  private: VIRTUAL_IN_DEBUG cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * findEntryInDict (const GALGAS_") ;
  result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inKey) const {\n    cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * result = nullptr ;\n    cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * currentNode = mRoot ;\n    while ((currentNode != nullptr) && (nullptr == result)) {\n      macroValidPointer (currentNode) ;\n      const typeComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;\n      if (comparaison == kFirstOperandGreaterThanSecond) {\n        currentNode = currentNode->mInfPtr ;\n      }else if (comparaison == kFirstOperandLowerThanSecond) {\n        currentNode = currentNode->mSupPtr ;\n      }else{ // Found\n        result = currentNode ;\n      }\n    }\n    return result ;\n  }\n\n//--------------------------------- Remove\n  protected: VIRTUAL_IN_DEBUG void performRemove (const GALGAS_") ;
  result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inKey, cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * & outRemovedNodePtr) {\n    bool branchHasBeenRemoved = false ; // Unused here\n    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;\n    if (nullptr != outRemovedNodePtr) {\n      mCount -- ;\n    }\n  }\n\n  protected: static void supBranchDecreased (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * & ioRoot,\n                                              bool & ioBranchHasBeenRemoved) {\n    ioRoot->mBalance ++ ;\n    switch (ioRoot->mBalance) {\n    case 0:\n      break;\n    case 1:\n      ioBranchHasBeenRemoved = false;\n      break;\n    case 2:\n      switch (ioRoot->mInfPtr->mBalance) {\n      case -1:\n        rotateLeft (ioRoot->mInfPtr) ;\n        rotateRight (ioRoot) ;\n        break;\n      case 0:\n        rotateRight (ioRoot) ;\n        ioBranchHasBeenRemoved = false;\n        break;\n      case 1:\n        rotateRight (ioRoot) ;\n        break;\n      }\n      break;\n    }\n  }\n\n  protected: static void infBranchDecreased (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * & ioRoot,\n                                              bool & ioBranchHasBeenRemoved) {\n    ioRoot->mBalance -- ;\n    switch (ioRoot->mBalance) {\n    case 0:\n      break;\n    case -1:\n      ioBranchHasBeenRemoved = false;\n      break;\n    case -2:\n      switch (ioRoot->mSupPtr->mBalance) {\n      case 1:\n        rotateRight (ioRoot->mSupPtr) ;\n        rotateLeft (ioRoot) ;\n        break;\n      case 0:\n        rotateLeft (ioRoot) ;\n        ioBranchHasBeenRemoved = false;\n        break;\n      case -1:\n        rotateLeft (ioRoot) ;\n        break;\n      }\n      break;\n    }\n  }\n\n  protected: static void getPreviousElement (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * & ioRoot,\n                                             cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * & ioElement,\n                                             bool & ioBranchHasBeenRemoved) {\n    if (ioRoot->mSupPtr == nullptr) {\n      ioElement = ioRoot ;\n      ioRoot = ioRoot->mInfPtr ;\n      ioBranchHasBeenRemoved = true ;\n    }else{\n      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;\n      if (ioBranchHasBeenRemoved) {\n        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n      }\n    }\n  }\n\n  protected: static void internalRemoveRecursively (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * & ioRoot,\n                                                     const GALGAS_") ;
  result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inKeyToRemove,\n                                                     cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * & outRemovedNode,\n                                                     bool & ioBranchHasBeenRemoved) {\n    if (ioRoot != nullptr) {\n      const typeComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;\n      if (comparaison == kFirstOperandGreaterThanSecond) {\n        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n        if (ioBranchHasBeenRemoved) {\n          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n        }\n      }else if (comparaison == kFirstOperandLowerThanSecond) {\n        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n        if (ioBranchHasBeenRemoved) {\n          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);\n        }\n      }else{\n        cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = ioRoot ;\n        if (p->mInfPtr == nullptr) {\n          ioRoot = p->mSupPtr;\n          p->mSupPtr = nullptr;\n          ioBranchHasBeenRemoved = true;\n        }else if (p->mSupPtr == nullptr) {\n          ioRoot = p->mInfPtr;\n          p->mInfPtr = nullptr;\n          ioBranchHasBeenRemoved = true;\n        }else{\n          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;\n          ioRoot->mSupPtr = p->mSupPtr;\n          p->mSupPtr = nullptr;\n          ioRoot->mInfPtr = p->mInfPtr;\n          p->mInfPtr = nullptr;\n          ioRoot->mBalance = p->mBalance;\n          p->mBalance = 0;\n          if (ioBranchHasBeenRemoved) {\n            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n          }\n        }\n        outRemovedNode = p ;\n      }\n    }\n  }\n\n//--------------------------------- Internal method for enumeration\n  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n\n//--------------------------------- Check Dictionary\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n      private: VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {\n      uint32_t n = 0 ;\n      checkNode (mRoot, n) ;\n      macroAssertThere (n == mCount, \"n (%lld) != mCount (%lld)\", n, mCount) ;\n    }\n  #endif\n\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    private: static void checkNode (const cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inNode,\n                                     uint32_t & ioCount) {\n      if (nullptr != inNode) {\n        checkNode (inNode->mInfPtr, ioCount) ;\n        ioCount ++ ;\n        checkNode (inNode->mSupPtr, ioCount) ;\n      }\n    }\n  #endif\n\n//--------------------------------- Compare Dictionaries\n  public: typeComparisonResult compare (const cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inOperand) const {\n    typeComparisonResult result = kOperandEqual ;\n    if (mCount < inOperand->mCount) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (mCount > inOperand->mCount) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else{\n      capCollectionElementArray enumerationArray ;\n      populateEnumerationArray (enumerationArray) ;\n      capCollectionElementArray operandEnumerationArray ;\n      inOperand->populateEnumerationArray (operandEnumerationArray) ;\n      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;\n    }\n    return result ;\n  }\n\n//--------------------------------- Friend\n  friend class GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" ;\n} ;\n\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\nAC_GALGAS_root (),\nmSharedDict (nullptr) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::~ GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) {\n  macroDetachSharedObject (mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) :\nAC_GALGAS_root (),\nmSharedDict (nullptr) {\n  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::operator = (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) {\n  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::drop (void) {\n  macroDetachSharedObject (mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_emptyDict (LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  macroMyNew (result.mSharedDict, cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Description\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void internalDescription_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inNode,\n                                 String & ioString,\n                                 const int32_t inIndentation) {\n  if (nullptr != inNode) {\n    internalDescription_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (inNode->mInfPtr, ioString, inIndentation) ;\n    ioString.addNL () ;\n    inNode->description (ioString, inIndentation) ;\n    internalDescription_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (inNode->mSupPtr, ioString, inIndentation) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::description (String & ioString,\n                                             const int32_t inIndentation) const {\n  ioString.addString (\"<dict @\") ;\n  ioString.addString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.addString (\":\") ;\n  if (isValid ()) {\n    internalDescription_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (mSharedDict->mRoot, ioString, inIndentation) ;\n  }else{\n    ioString.addString (\" not built\") ;\n  }\n  ioString.addString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_uint GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GALGAS_uint result ;\n  if (isValid ()) {\n    result = GALGAS_uint (mSharedDict->mCount) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Insulate\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\ncNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inNode) :\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element (inNode->mProperty_key") ;
  GALGAS_uint index_16459_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16459 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16459.hasCurrentObject ()) {
      result.addString (", inNode->mProperty_") ;
      result.addString (enumerator_16459.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 452)).stringValue ()) ;
      index_16459_.increment () ;
      enumerator_16459.gotoNextObject () ;
    }
  }
  result.addString ("),\nmInfPtr (nullptr),\nmSupPtr (nullptr),\nmBalance (inNode->mBalance) {\n  if (inNode->mInfPtr != nullptr) {\n    macroMyNew (mInfPtr, cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (inNode->mInfPtr)) ;\n  }\n  if (inNode->mSupPtr != nullptr) {\n    macroMyNew (mSupPtr, cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (inNode->mSupPtr)) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::copyFrom (const cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inSource) {\n  macroUniqueSharedObject (this) ;\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    inSource->checkDict (HERE) ;\n  #endif\n  macroValidSharedObject (inSource, cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n  mCount = inSource->mCount ;\n  if (nullptr != inSource->mRoot) {\n    macroMyNew (mRoot, cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (inSource->mRoot)) ;\n  }\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkDict (HERE) ;\n  #endif\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::insulate (LOCATION_ARGS) {\n  if ((nullptr != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {\n    cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = nullptr ;\n    macroMyNew (p, cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (THERE)) ;\n    p->copyFrom (mSharedDict) ;\n    macroAssignSharedObject (mSharedDict, p) ;\n    macroDetachSharedObject (p) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Insert\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inKey") ;
  GALGAS_uint index_18328_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18328 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18328.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_18328.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 505)).stringValue ()) ;
      result.addString (" & inArgument") ;
      result.addString (index_18328_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 505)).stringValue ()) ;
      index_18328_IDX.increment () ;
      enumerator_18328.gotoNextObject () ;
    }
  }
  result.addString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element newElement (inKey") ;
  GALGAS_uint index_18604_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18604 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18604.hasCurrentObject ()) {
      result.addString (", inArgument") ;
      result.addString (index_18604_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 511)).stringValue ()) ;
      index_18604_IDX.increment () ;
      enumerator_18604.gotoNextObject () ;
    }
  }
  result.addString (") ;\n  if (isValid () && newElement.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    const bool entryOverrideAllowed = true ;\n    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" inKey") ;
  GALGAS_uint index_19132_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19132 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19132.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_19132.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 526)).stringValue ()) ;
      result.addString (" inArgument") ;
      result.addString (index_19132_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 526)).stringValue ()) ;
      index_19132_IDX.increment () ;
      enumerator_19132.gotoNextObject () ;
    }
  }
  result.addString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element newElement (inKey") ;
  GALGAS_uint index_19406_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19406 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19406.hasCurrentObject ()) {
      result.addString (", inArgument") ;
      result.addString (index_19406_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 532)).stringValue ()) ;
      index_19406_IDX.increment () ;
      enumerator_19406.gotoNextObject () ;
    }
  }
  result.addString (") ;\n  if (isValid () && newElement.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    const bool entryOverrideAllowed = true ;\n    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_hasKey (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inKey\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    const cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = mSharedDict->findEntryInDict (inKey) ;\n    result = GALGAS_bool (p != nullptr) ;\n   }\n   return result ;\n }\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::method_searchKey (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("GALGAS_") ;
  result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" inKey") ;
  GALGAS_uint index_20393_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20393 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20393.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_20393.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 559)).stringValue ()) ;
      result.addString (" & outArgument") ;
      result.addString (index_20393_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 559)).stringValue ()) ;
      index_20393_IDX.increment () ;
      enumerator_20393.gotoNextObject () ;
    }
  }
  result.addString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  const cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = nullptr ;\n  if (isValid () && inKey.isValid ()) {\n    p = mSharedDict->findEntryInDict (inKey) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot search in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_20990_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20990 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20990.hasCurrentObject ()) {
      result.addString ("    outArgument") ;
      result.addString (index_20990_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 576)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_20990_IDX.increment () ;
      enumerator_20990.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n    macroValidSharedObject (p, cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_21170_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21170 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21170.hasCurrentObject ()) {
      result.addString ("    outArgument") ;
      result.addString (index_21170_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 582)).stringValue ()) ;
      result.addString (" = p->mProperty_") ;
      result.addString (enumerator_21170.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 582)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_21170_IDX.increment () ;
      enumerator_21170.gotoNextObject () ;
    }
  }
  result.addString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_removeKey (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("GALGAS_") ;
  result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" inKey") ;
  GALGAS_uint index_21540_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21540 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21540.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_21540.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 590)).stringValue ()) ;
      result.addString (" & outArgument") ;
      result.addString (index_21540_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 590)).stringValue ()) ;
      index_21540_IDX.increment () ;
      enumerator_21540.gotoNextObject () ;
    }
  }
  result.addString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = nullptr ;\n  if (isValid () && inKey.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    mSharedDict->performRemove (inKey, p) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot remove in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_22189_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22189 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22189.hasCurrentObject ()) {
      result.addString ("    outArgument") ;
      result.addString (index_22189_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 609)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_22189_IDX.increment () ;
      enumerator_22189.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n    macroValidSharedObject (p, cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_22369_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22369 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22369.hasCurrentObject ()) {
      result.addString ("    outArgument") ;
      result.addString (index_22369_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 615)).stringValue ()) ;
      result.addString (" = p->mProperty_") ;
      result.addString (enumerator_22369.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 615)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_22369_IDX.increment () ;
      enumerator_22369.gotoNextObject () ;
    }
  }
  result.addString ("  }\n}\n\n") ;
  GALGAS_uint index_22549_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22549 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22549.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_22549.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 622)).stringValue ()) ;
      result.addString (" GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::getter_") ;
      result.addString (enumerator_22549.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 622)).stringValue ()) ;
      result.addString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("const GALGAS_") ;
      result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" & inKey,\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("Compiler * inCompiler\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_22549.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 625)).stringValue ()) ;
      result.addString (" result ;\n  if (isValid () && inKey.isValid ()) {\n  const cNode_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = mSharedDict->findEntryInDict (inKey) ;\n   if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot get ") ;
      result.addString (enumerator_22549.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 630)).stringValue ()) ;
      result.addString (" ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      macroValidSharedObject (p, cNode_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n      result = p->mProperty_") ;
      result.addString (enumerator_22549.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 635)).stringValue ()) ;
      result.addString ("  ;\n    }\n  }\n  return result ;\n}\n\n") ;
      index_22549_.increment () ;
      enumerator_22549.gotoNextObject () ;
    }
  }
  GALGAS_uint index_23810_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_23810 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_23810.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::setter_set") ;
      result.addString (enumerator_23810.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 645)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 645)).stringValue ()) ;
      result.addString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_23810.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 645)).stringValue ()) ;
      result.addString (" inPropertyValue,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("GALGAS_") ;
      result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" inKey,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("Compiler * inCompiler\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    cNode_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = mSharedDict->findEntryInDict (inKey) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot set") ;
      result.addString (enumerator_23810.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 655)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 655)).stringValue ()) ;
      result.addString ("ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      p->mProperty_") ;
      result.addString (enumerator_23810.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 659)).stringValue ()) ;
      result.addString (" = inPropertyValue ;\n    }\n  }\n}\n\n") ;
      index_23810_.increment () ;
      enumerator_23810.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Object compare\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::objectCompare (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand) const {\n  typeComparisonResult result = kOperandNotValid ;\n  if (isValid () && inOperand.isValid ()) {\n    result = mSharedDict->compare (inOperand.mSharedDict) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark map Enumeration\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nclass cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public cCollectionElement {\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element mElement ;\n\n//--- Constructor\n  public: cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element & inElement) :\n  cCollectionElement (HERE),\n  mElement (inElement) {\n  }\n\n//--- No copy\n  private: cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" &) ;\n  private: cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & operator = (const cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" &) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const { return mElement.isValid () ; }\n\n//--- Virtual method for comparing elements\n  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const {\n    const cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (const cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) inOperand ;\n    return mElement.objectCompare (p->mElement) ;\n  }\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (mElement)) ;\n    return p ;\n  }\n\n//--- Description\n  public: virtual void description (String & ioString, const int32_t inIndentation) const {\n    mElement.description (ioString, inIndentation) ;\n  }\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void enterAscendingEnumeration_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inNode,\n                                                       capCollectionElementArray & ioEnumerationArray) {\n  if (inNode != nullptr) {\n    enterAscendingEnumeration_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (inNode->mInfPtr, ioEnumerationArray) ;\n    cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (*inNode)) ;\n    capCollectionElement element ;\n    element.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    ioEnumerationArray.appendObject (element) ;\n    enterAscendingEnumeration_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (inNode->mSupPtr, ioEnumerationArray) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSharedDictRoot_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkDict (HERE) ;\n  #endif\n  ioEnumerationArray.setCapacity (mCount) ;\n  enterAscendingEnumeration_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (mRoot, ioEnumerationArray) ;\n  macroAssert (mCount == ioEnumerationArray.count (), \"mCount (%lld) != ioEnumerationArray.count () (%lld)\", mCount, ioEnumerationArray.count ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n  if (nullptr != mSharedDict) {\n    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inEnumeratedObject,\n                                                        const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::current (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("* p = dynamic_cast  <const cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n  return GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element (p->mElement) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::current_key (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("* p = dynamic_cast  <const cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n  return p->mElement.mProperty_key ;\n}\n\n") ;
  GALGAS_uint index_30344_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_30344 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_30344.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_30344.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 785)).stringValue ()) ;
      result.addString (" cEnumerator_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::current_") ;
      result.addString (enumerator_30344.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 785)).stringValue ()) ;
      result.addString (" (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("* p = dynamic_cast  <const cCollectionElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n  return p->mElement.mProperty_") ;
      result.addString (enumerator_30344.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 788)).stringValue ()) ;
      result.addString (" ;\n}\n\n") ;
      index_30344_IDX.increment () ;
      enumerator_30344.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::optional_searchKey (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inKey") ;
  GALGAS_uint index_31213_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31213 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_31213.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_31213.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 794)).stringValue ()) ;
      result.addString (" & outArgument") ;
      result.addString (index_31213_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 794)).stringValue ()) ;
      index_31213_IDX.increment () ;
      enumerator_31213.gotoNextObject () ;
    }
  }
  result.addString (") const {\n  const cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = nullptr ;\n  if ((mSharedDict != nullptr) && inKey.isValid ()) {\n    p = (const cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) mSharedDict->findEntryInDict (inKey) ;\n  }\n  const bool result = nullptr != p ;\n  if (result) {\n    macroValidSharedObject (p, cNode_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_31744_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31744 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_31744.hasCurrentObject ()) {
      result.addString ("    outArgument") ;
      result.addString (index_31744_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 805)).stringValue ()) ;
      result.addString (" = p->mProperty_") ;
      result.addString (enumerator_31744.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 805)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_31744_IDX.increment () ;
      enumerator_31744.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n") ;
  GALGAS_uint index_31951_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31951 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_31951.hasCurrentObject ()) {
      result.addString ("    outArgument") ;
      result.addString (index_31951_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 809)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_31951_IDX.increment () ;
      enumerator_31951.gotoNextObject () ;
    }
  }
  result.addString ("  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                   const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                   const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                   const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                   const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                   const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("  value class\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("AC_GALGAS_value_class") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("GALGAS_") ;
    result.addString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--------------------------------- Embedded object pointer\n  public: inline const class cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * ptr (void) const {\n    return (const cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) mObjectPtr ;\n  }\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inSourcePtr) ;\n\n//--------------------------------- Property read access\n") ;
  GALGAS_uint index_1006_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1006 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1006.hasCurrentObject ()) {
      result.addString ("  public: class GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_1006.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 26)).stringValue ()) ;
      result.addString (" readProperty_") ;
      result.addString (enumerator_1006.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 26)).stringValue ()) ;
      result.addString (" (void) const ;\n\n") ;
      index_1006_.increment () ;
      enumerator_1006.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (Compiler * inCompiler,
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("acPtr_class") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("cPtr_") ;
    result.addString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" {\n\n") ;
  GALGAS_uint index_511_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_511 (in_GETTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_511.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_511.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        result.addString (function_generateClassGetterDeclaration (enumerator_511.current_lkey (HERE), enumerator_511.current_mArgumentTypeList (HERE), enumerator_511.current_mHasCompilerArgument (HERE), enumerator_511.current_mReturnedType (HERE), enumerator_511.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 12)).stringValue ()) ;
      }else if (kBoolFalse == test_1) {
      }
      index_511_.increment () ;
      enumerator_511.gotoNextObject () ;
    }
  }
  GALGAS_uint index_753_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_753 (in_INSTANCE_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_753.hasCurrentObject ()) {
      result.addString (function_generateClassInstanceMethodDeclaration (enumerator_753.current_lkey (HERE), enumerator_753.current_mParameterList (HERE), enumerator_753.current_mHasCompilerArgument (HERE), enumerator_753.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 16)).stringValue ()) ;
      index_753_.increment () ;
      enumerator_753.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (Compiler * inCompiler,
                                                                                           const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                           const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                           const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                           const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                           const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--- Properties\n") ;
  GALGAS_uint index_109_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_109 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_109.hasCurrentObject ()) {
      result.addString ("  public: GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_109.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.addString (" mProperty_") ;
      result.addString (enumerator_109.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_109_.increment () ;
      enumerator_109.gotoNextObject () ;
    }
  }
  result.addString ("\n//--- Constructor\n  public: cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_397_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_397 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_397.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_397.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_397.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      if (enumerator_397.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_397_.increment () ;
      enumerator_397.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("LOCATION_ARGS") ;
  }
  result.addString (") ;\n\n") ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result.addString ("//--- Duplication\n  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;\n\n") ;
  }else if (kBoolFalse == test_1) {
  }
  result.addString ("//--- Attribute accessors\n") ;
  GALGAS_uint index_892_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_892 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_892.hasCurrentObject ()) {
      result.addString ("  public: VIRTUAL_IN_DEBUG GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_892.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue ()) ;
      result.addString (" getter_") ;
      result.addString (enumerator_892.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue ()) ;
      result.addString (" (LOCATION_ARGS) const ;\n") ;
      const enumGalgasBool test_2 = enumerator_892.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        result.addString ("  public: VIRTUAL_IN_DEBUG void setter_set") ;
        result.addString (enumerator_892.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue ()) ;
        result.addString (" (GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_892.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue ()) ;
        result.addString (" inValue COMMA_LOCATION_ARGS) ;\n") ;
      }else if (kBoolFalse == test_2) {
      }
      index_892_.increment () ;
      enumerator_892.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_3 = in_IS_5F_ABSTRACT.boolEnum () ;
  if (kBoolTrue == test_3) {
    result.addString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const int32_t inIndentation) const override = 0 ;\n\n  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;\n") ;
  }else if (kBoolFalse == test_3) {
    result.addString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const int32_t inIndentation) const override ;\n\n  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;\n") ;
  }
  result.addString ("\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (Compiler * inCompiler,
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//   Object comparison                                                                           \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("typeComparisonResult cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n  return kOperandEqual ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result.addString ("typeComparisonResult cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n  typeComparisonResult result = kOperandEqual ;\n  const cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" * p = (const cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" *) inOperandPtr ;\n  macroValidSharedObject (p, cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (") ;\n") ;
    GALGAS_uint index_1064_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1064 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1064.hasCurrentObject ()) {
        result.addString ("  if (kOperandEqual == result) {\n    result = mProperty_") ;
        result.addString (enumerator_1064.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue ()) ;
        result.addString (".objectCompare (p->mProperty_") ;
        result.addString (enumerator_1064.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue ()) ;
        result.addString (") ;\n  }\n") ;
        index_1064_.increment () ;
        enumerator_1064.gotoNextObject () ;
      }
    }
    result.addString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  }else if (kBoolFalse == test_1) {
  }
  result.addString ("\n\ntypeComparisonResult GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::objectCompare (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand) const {\n  typeComparisonResult result = kOperandNotValid ;\n  if (isValid () && inOperand.isValid ()) {\n    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;\n    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;\n    if (mySlot < operandSlot) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (mySlot > operandSlot) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else{\n      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    result.addString ("AC_GALGAS_value_class") ;
  }else if (kBoolFalse == test_2) {
    result.addString ("GALGAS_") ;
    result.addString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inSourcePtr) :\n") ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    result.addString ("AC_GALGAS_value_class") ;
  }else if (kBoolFalse == test_3) {
    result.addString ("GALGAS_") ;
    result.addString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" (inSourcePtr) {\n  macroNullOrValidSharedObject (inSourcePtr, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n}\n") ;
  const enumGalgasBool test_4 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).boolEnum () ;
  if (kBoolTrue == test_4) {
    result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::constructor_new (LOCATION_ARGS) {\n  GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" result ;\n  macroMyNew (result.mObjectPtr, cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" (THERE)) ;\n  return result ;\n}\n\n") ;
  }else if (kBoolFalse == test_4) {
  }
  const enumGalgasBool test_5 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).boolEnum () ;
  if (kBoolTrue == test_5) {
    result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::constructor_new (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_3492_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3492 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3492.hasCurrentObject ()) {
        result.addString ("const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_3492.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.addString (" & inAttribute_") ;
        result.addString (enumerator_3492.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        if (enumerator_3492.hasNextObject ()) {
          result.addString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_3492_.increment () ;
        enumerator_3492.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 81)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      result.addString ("LOCATION_ARGS") ;
    }else if (kBoolFalse == test_6) {
      result.addString ("\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_LOCATION_ARGS") ;
    }
    result.addString (") {\n  GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" result ;\n  if (") ;
    GALGAS_uint index_3895_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3895 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3895.hasCurrentObject ()) {
        result.addString ("inAttribute_") ;
        result.addString (enumerator_3895.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 90)).stringValue ()) ;
        result.addString (".isValid ()") ;
        if (enumerator_3895.hasNextObject ()) {
          result.addString (" && ") ;
        }
        index_3895_.increment () ;
        enumerator_3895.gotoNextObject () ;
      }
    }
    result.addString (") {\n    macroMyNew (result.mObjectPtr, cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" (") ;
    GALGAS_uint index_4159_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4159 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4159.hasCurrentObject ()) {
        result.addString ("inAttribute_") ;
        result.addString (enumerator_4159.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 96)).stringValue ()) ;
        if (enumerator_4159.hasNextObject ()) {
          result.addString (", ") ;
        }
        index_4159_.increment () ;
        enumerator_4159.gotoNextObject () ;
      }
    }
    result.addString (" COMMA_THERE)) ;\n  }\n  return result ;\n}\n\n") ;
  }else if (kBoolFalse == test_5) {
  }
  GALGAS_uint index_4407_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4407 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4407.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_4407.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue ()) ;
      result.addString (" GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::readProperty_") ;
      result.addString (enumerator_4407.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue ()) ;
      result.addString (" (void) const {\n  if (nullptr == mObjectPtr) {\n    return GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_4407.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 109)).stringValue ()) ;
      result.addString (" () ;\n  }else{\n    const cPtr_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = (const cPtr_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n    return p->mProperty_") ;
      result.addString (enumerator_4407.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 113)).stringValue ()) ;
      result.addString (" ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_4407.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.addString (" cPtr_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::getter_") ;
      result.addString (enumerator_4407.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.addString (" (UNUSED_LOCATION_ARGS) const {\n  return mProperty_") ;
      result.addString (enumerator_4407.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 118)).stringValue ()) ;
      result.addString (" ;\n}\n\n") ;
      index_4407_.increment () ;
      enumerator_4407.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5515_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5515 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5515.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_5515.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_7) {
        result.addString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("::setter_set") ;
        result.addString (enumerator_5515.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).stringValue ()) ;
        result.addString (" (") ;
        columnMarker = result.currentColumn () ;
        result.addString ("GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_5515.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).stringValue ()) ;
        result.addString (" inValue\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("COMMA_LOCATION_ARGS) {\n  if (nullptr != mObjectPtr) {\n    insulate (THERE) ;\n    cPtr_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString (" * p = (cPtr_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString (") ;\n    p->mProperty_") ;
        result.addString (enumerator_5515.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 131)).stringValue ()) ;
        result.addString (" = inValue ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("::setter_set") ;
        result.addString (enumerator_5515.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.addString (" (") ;
        columnMarker = result.currentColumn () ;
        result.addString ("GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_5515.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.addString (" inValue\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("COMMA_UNUSED_LOCATION_ARGS) {\n  mProperty_") ;
        result.addString (enumerator_5515.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 137)).stringValue ()) ;
        result.addString (" = inValue ;\n}\n\n") ;
      }else if (kBoolFalse == test_7) {
      }
      index_5515_.increment () ;
      enumerator_5515.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.addString (GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 143)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 143)).stringValue ()) ;
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7089_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7089 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7089.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_7089.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_7089.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue ()) ;
      if (enumerator_7089.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7089_.increment () ;
      enumerator_7089.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 151)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result.addString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS") ;
  }else if (kBoolFalse == test_8) {
    result.addString ("LOCATION_ARGS") ;
  }
  result.addString (") :\n") ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_9) {
    result.addString ("acPtr_class") ;
  }else if (kBoolFalse == test_9) {
    result.addString ("cPtr_") ;
    result.addString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" (") ;
  GALGAS_uint index_7530_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7530 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7530.hasCurrentObject ()) {
      result.addString ("in_") ;
      result.addString (enumerator_7530.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 159)).stringValue ()) ;
      if (enumerator_7530.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_7530_.increment () ;
      enumerator_7530.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 162)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result.addString (" COMMA_THERE") ;
  }else if (kBoolFalse == test_10) {
    result.addString ("THERE") ;
  }
  result.addString (")") ;
  GALGAS_uint index_7792_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7792 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7792.hasCurrentObject ()) {
      result.addString (",\nmProperty_") ;
      result.addString (enumerator_7792.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.addString (" (in_") ;
      result.addString (enumerator_7792.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.addString (")") ;
      index_7792_.increment () ;
      enumerator_7792.gotoNextObject () ;
    }
  }
  result.addString (" {\n}\n\n") ;
  const enumGalgasBool test_11 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 175)).boolEnum () ;
  if (kBoolTrue == test_11) {
    result.addString ("//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" ;\n}\n\n") ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 180)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      result.addString ("void cPtr_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const int32_t /* inIndentation */) const {\n  ioString.addString (\"[@") ;
      result.addString (in_TYPE_5F_NAME.stringValue ()) ;
      result.addString ("]\") ;\n}\n\n") ;
    }else if (kBoolFalse == test_12) {
      result.addString ("void cPtr_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const int32_t inIndentation) const {\n  ioString.addString (\"[@") ;
      result.addString (in_TYPE_5F_NAME.stringValue ()) ;
      result.addString (":\") ;\n") ;
      GALGAS_uint index_8778_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8778 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8778.hasCurrentObject ()) {
          result.addString ("  mProperty_") ;
          result.addString (enumerator_8778.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 190)).stringValue ()) ;
          result.addString (".description (ioString, inIndentation+1) ;\n") ;
          if (enumerator_8778.hasNextObject ()) {
            result.addString ("  ioString.addString (\", \") ;\n") ;
          }
          index_8778_.increment () ;
          enumerator_8778.gotoNextObject () ;
        }
      }
      result.addString ("  ioString.addString (\"]\") ;\n}\n\n") ;
    }
  }else if (kBoolFalse == test_11) {
  }
  const enumGalgasBool test_13 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 198)).boolEnum () ;
  if (kBoolTrue == test_13) {
    result.addString ("//--------------------------------------------------------------------------------------------------\n\nacPtr_class * cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::duplicate (LOCATION_ARGS) const {\n  acPtr_class * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" (") ;
    GALGAS_uint index_9365_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9365 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_9365 = enumerator_9365.hasCurrentObject () ;
      while (enumerator_9365.hasCurrentObject ()) {
        result.addString ("mProperty_") ;
        result.addString (enumerator_9365.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 205)).stringValue ()) ;
        if (enumerator_9365.hasNextObject ()) {
          result.addString (", ") ;
        }
        index_9365_.increment () ;
        enumerator_9365.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9365) {
        result.addString (" COMMA_") ;
      }
    }
    result.addString ("THERE)) ;\n  return ptr ;\n}\n\n") ;
  }else if (kBoolFalse == test_13) {
  }
  result.addString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                       const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                       const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                       const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString (" reference class\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("AC_GALGAS_reference_class") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("GALGAS_") ;
    result.addString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const class cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inSourcePtr) ;\n\n//--------------------------------- Property read access\n") ;
  GALGAS_uint index_822_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_822 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_822.hasCurrentObject ()) {
      result.addString ("  public: class GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_822.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue ()) ;
      result.addString (" readProperty_") ;
      result.addString (enumerator_822.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue ()) ;
      result.addString (" (void) const ;\n\n") ;
      index_822_.increment () ;
      enumerator_822.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (Compiler * inCompiler,
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("acStrongPtr_class") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("cPtr_") ;
    result.addString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" {\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (void) const override ;\n  #endif\n") ;
  GALGAS_uint index_647_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_647 (in_GETTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_647.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_647.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        result.addString (function_generateClassGetterDeclaration (enumerator_647.current_lkey (HERE), enumerator_647.current_mArgumentTypeList (HERE), enumerator_647.current_mHasCompilerArgument (HERE), enumerator_647.current_mReturnedType (HERE), enumerator_647.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 15)).stringValue ()) ;
      }else if (kBoolFalse == test_1) {
      }
      index_647_.increment () ;
      enumerator_647.gotoNextObject () ;
    }
  }
  GALGAS_uint index_889_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_889 (in_INSTANCE_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_889.hasCurrentObject ()) {
      result.addString (function_generateClassInstanceMethodDeclaration (enumerator_889.current_lkey (HERE), enumerator_889.current_mParameterList (HERE), enumerator_889.current_mHasCompilerArgument (HERE), enumerator_889.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 19)).stringValue ()) ;
      index_889_.increment () ;
      enumerator_889.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (Compiler * inCompiler,
                                                                                               const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                               const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--- Properties\n") ;
  GALGAS_uint index_109_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_109 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_109.hasCurrentObject ()) {
      result.addString ("  public: GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_109.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.addString (" mProperty_") ;
      result.addString (enumerator_109.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_109_.increment () ;
      enumerator_109.gotoNextObject () ;
    }
  }
  result.addString ("\n//--- Constructor\n  public: cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_397_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_397 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_397.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_397.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_397.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      if (enumerator_397.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_397_.increment () ;
      enumerator_397.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("LOCATION_ARGS") ;
  }
  result.addString (") ;\n\n") ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result.addString ("//--- Duplication\n  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;\n\n") ;
  }else if (kBoolFalse == test_1) {
  }
  result.addString ("//--- Attribute accessors\n") ;
  const enumGalgasBool test_2 = in_IS_5F_ABSTRACT.boolEnum () ;
  if (kBoolTrue == test_2) {
    result.addString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const int32_t inIndentation) const override = 0 ;\n\n  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;\n") ;
  }else if (kBoolFalse == test_2) {
    result.addString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const int32_t inIndentation) const override ;\n\n  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;\n") ;
  }
  result.addString ("\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (Compiler * inCompiler,
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.addString (GALGAS_string (" @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.addString (" reference class\n//--------------------------------------------------------------------------------------------------\n\n#ifndef DO_NOT_GENERATE_CHECKINGS\n  void cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::printNonNullClassInstanceProperties (void) const {\n  ") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("  acStrongPtr_class::printNonNullClassInstanceProperties () ;\n") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("  cPtr_") ;
    result.addString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::printNonNullClassInstanceProperties () ;\n") ;
  }
  GALGAS_uint index_621_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_621 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_621.hasCurrentObject ()) {
      result.addString ("    mProperty_") ;
      result.addString (enumerator_621.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.addString (".printNonNullClassInstanceProperties (\"") ;
      result.addString (enumerator_621.current_mPropertyName (HERE).readProperty_string ().stringValue ()) ;
      result.addString ("\") ;\n") ;
      index_621_.increment () ;
      enumerator_621.gotoNextObject () ;
    }
  }
  result.addString ("  }\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 20)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 20)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result.addString ("typeComparisonResult cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n  return kOperandEqual ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  }else if (kBoolFalse == test_1) {
  }
  const enumGalgasBool test_2 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 28)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 28)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 28)).boolEnum () ;
  if (kBoolTrue == test_2) {
    result.addString ("typeComparisonResult cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n  typeComparisonResult result = kOperandEqual ;\n  const cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" * p = (const cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" *) inOperandPtr ;\n  macroValidSharedObject (p, cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (") ;\n") ;
    GALGAS_uint index_1637_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1637 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1637.hasCurrentObject ()) {
        result.addString ("  if (kOperandEqual == result) {\n    result = mProperty_") ;
        result.addString (enumerator_1637.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 35)).stringValue ()) ;
        result.addString (".objectCompare (p->mProperty_") ;
        result.addString (enumerator_1637.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 35)).stringValue ()) ;
        result.addString (") ;\n  }\n") ;
        index_1637_.increment () ;
        enumerator_1637.gotoNextObject () ;
      }
    }
    result.addString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  }else if (kBoolFalse == test_2) {
  }
  result.addString ("\n\ntypeComparisonResult GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::objectCompare (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand) const {\n  typeComparisonResult result = kOperandNotValid ;\n  if (isValid () && inOperand.isValid ()) {\n    const size_t myObjectPtr = size_t (mObjectPtr) ;\n    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else{\n      result = kOperandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\n") ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    result.addString ("AC_GALGAS_reference_class") ;
  }else if (kBoolFalse == test_3) {
    result.addString ("GALGAS_") ;
    result.addString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * inSourcePtr) :\n") ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    result.addString ("AC_GALGAS_reference_class") ;
  }else if (kBoolFalse == test_4) {
    result.addString ("GALGAS_") ;
    result.addString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" (inSourcePtr) {\n  macroNullOrValidSharedObject (inSourcePtr, cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n}\n") ;
  const enumGalgasBool test_5 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 79)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 79)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 79)).boolEnum () ;
  if (kBoolTrue == test_5) {
    result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::constructor_new (LOCATION_ARGS) {\n  GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" result ;\n  macroMyNew (result.mObjectPtr, cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" (THERE)) ;\n  return result ;\n}\n\n") ;
  }else if (kBoolFalse == test_5) {
  }
  const enumGalgasBool test_6 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 88)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 88)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 88)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::constructor_new (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4019_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4019 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4019.hasCurrentObject ()) {
        result.addString ("const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_4019.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 92)).stringValue ()) ;
        result.addString (" & inAttribute_") ;
        result.addString (enumerator_4019.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 92)).stringValue ()) ;
        if (enumerator_4019.hasNextObject ()) {
          result.addString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4019_.increment () ;
        enumerator_4019.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 95)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      result.addString ("LOCATION_ARGS") ;
    }else if (kBoolFalse == test_7) {
      result.addString ("\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_LOCATION_ARGS") ;
    }
    result.addString (") {\n  GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" result ;\n  if (") ;
    GALGAS_uint index_4422_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4422 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4422.hasCurrentObject ()) {
        result.addString ("inAttribute_") ;
        result.addString (enumerator_4422.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 104)).stringValue ()) ;
        result.addString (".isValid ()") ;
        if (enumerator_4422.hasNextObject ()) {
          result.addString (" && ") ;
        }
        index_4422_.increment () ;
        enumerator_4422.gotoNextObject () ;
      }
    }
    result.addString (") {\n    macroMyNew (result.mObjectPtr, cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" (") ;
    GALGAS_uint index_4686_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4686 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4686.hasCurrentObject ()) {
        result.addString ("inAttribute_") ;
        result.addString (enumerator_4686.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 110)).stringValue ()) ;
        if (enumerator_4686.hasNextObject ()) {
          result.addString (", ") ;
        }
        index_4686_.increment () ;
        enumerator_4686.gotoNextObject () ;
      }
    }
    result.addString (" COMMA_THERE)) ;\n  }\n  return result ;\n}\n\n") ;
  }else if (kBoolFalse == test_6) {
  }
  GALGAS_uint index_4935_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4935 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4935.hasCurrentObject ()) {
      const enumGalgasBool test_8 = enumerator_4935.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_8) {
        result.addString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("::setter_set") ;
        result.addString (enumerator_4935.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 122)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 122)).stringValue ()) ;
        result.addString (" (") ;
        columnMarker = result.currentColumn () ;
        result.addString ("GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_4935.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 122)).stringValue ()) ;
        result.addString (" inValue\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (nullptr != mObjectPtr) {\n    cPtr_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString (" * p = (cPtr_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString (") ;\n    p->mProperty_") ;
        result.addString (enumerator_4935.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 127)).stringValue ()) ;
        result.addString (" = inValue ;\n  }\n}\n\n") ;
      }else if (kBoolFalse == test_8) {
      }
      index_4935_.increment () ;
      enumerator_4935.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5717_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5717 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5717.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_5717.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 136)).stringValue ()) ;
      result.addString (" GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::readProperty_") ;
      result.addString (enumerator_5717.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 136)).stringValue ()) ;
      result.addString (" (void) const {\n  if (nullptr == mObjectPtr) {\n    return GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_5717.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.addString (" () ;\n  }else{\n    cPtr_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = (cPtr_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n    return p->mProperty_") ;
      result.addString (enumerator_5717.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 142)).stringValue ()) ;
      result.addString (" ;\n  }\n}\n\n") ;
      index_5717_.increment () ;
      enumerator_5717.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.addString (GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 148)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 148)).stringValue ()) ;
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cPtr_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6776_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6776 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6776.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_6776.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 153)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_6776.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 153)).stringValue ()) ;
      if (enumerator_6776.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6776_.increment () ;
      enumerator_6776.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result.addString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS") ;
  }else if (kBoolFalse == test_9) {
    result.addString ("LOCATION_ARGS") ;
  }
  result.addString (") :\n") ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_10) {
    result.addString ("acStrongPtr_class") ;
  }else if (kBoolFalse == test_10) {
    result.addString ("cPtr_") ;
    result.addString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" (") ;
  GALGAS_uint index_7223_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7223 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7223.hasCurrentObject ()) {
      result.addString ("in_") ;
      result.addString (enumerator_7223.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 164)).stringValue ()) ;
      if (enumerator_7223.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_7223_.increment () ;
      enumerator_7223.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 167)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    result.addString (" COMMA_THERE") ;
  }else if (kBoolFalse == test_11) {
    result.addString ("THERE") ;
  }
  result.addString (")") ;
  GALGAS_uint index_7485_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7485 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7485.hasCurrentObject ()) {
      result.addString (",\nmProperty_") ;
      result.addString (enumerator_7485.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 174)).stringValue ()) ;
      result.addString (" (in_") ;
      result.addString (enumerator_7485.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 174)).stringValue ()) ;
      result.addString (")") ;
      index_7485_.increment () ;
      enumerator_7485.gotoNextObject () ;
    }
  }
  result.addString (" {\n}\n\n") ;
  const enumGalgasBool test_12 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 180)).boolEnum () ;
  if (kBoolTrue == test_12) {
    result.addString ("//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" ;\n}\n\n") ;
    const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 185)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      result.addString ("void cPtr_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const int32_t /* inIndentation */) const {\n  ioString.addString (\"[@") ;
      result.addString (in_TYPE_5F_NAME.stringValue ()) ;
      result.addString ("]\") ;\n}\n\n") ;
    }else if (kBoolFalse == test_13) {
      result.addString ("void cPtr_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const int32_t inIndentation) const {\n  ioString.addString (\"[@") ;
      result.addString (in_TYPE_5F_NAME.stringValue ()) ;
      result.addString (":\") ;\n") ;
      GALGAS_uint index_8471_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8471 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8471.hasCurrentObject ()) {
          result.addString ("  mProperty_") ;
          result.addString (enumerator_8471.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 195)).stringValue ()) ;
          result.addString (".description (ioString, inIndentation+1) ;\n") ;
          if (enumerator_8471.hasNextObject ()) {
            result.addString ("  ioString.addString (\", \") ;\n") ;
          }
          index_8471_.increment () ;
          enumerator_8471.gotoNextObject () ;
        }
      }
      result.addString ("  ioString.addString (\"]\") ;\n}\n\n") ;
    }
  }else if (kBoolFalse == test_12) {
  }
  const enumGalgasBool test_14 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 203)).boolEnum () ;
  if (kBoolTrue == test_14) {
    result.addString ("//--------------------------------------------------------------------------------------------------\n\nacPtr_class * cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString ("::duplicate (LOCATION_ARGS) const {\n  acPtr_class * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_") ;
    result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.addString (" (") ;
    GALGAS_uint index_9058_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9058 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_9058 = enumerator_9058.hasCurrentObject () ;
      while (enumerator_9058.hasCurrentObject ()) {
        result.addString ("mProperty_") ;
        result.addString (enumerator_9058.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 210)).stringValue ()) ;
        if (enumerator_9058.hasNextObject ()) {
          result.addString (", ") ;
        }
        index_9058_.increment () ;
        enumerator_9058.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9058) {
        result.addString (" COMMA_") ;
      }
    }
    result.addString ("THERE)) ;\n  return ptr ;\n}\n\n") ;
  }else if (kBoolFalse == test_14) {
  }
  result.addString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate weakReferenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                           const GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" weak reference class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("AC_GALGAS_weak_reference") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("GALGAS_") ;
    result.addString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--------------------------------- Constructor and assignment from strong reference\n  public: GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const class GALGAS_") ;
  result.addString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) ;\n\n  public: GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & operator = (const class GALGAS_") ;
  result.addString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) ;\n\n//--------------------------------- Bang operator\n  public: GALGAS_") ;
  result.addString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" bang_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate weakReferenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                                       const GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                                       const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                                       const GALGAS_typedPropertyList & /* in_INHERITED_5F_ATTRIBUTE_5F_LIST */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::objectCompare (const GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand) const {\n  typeComparisonResult result = kOperandNotValid ;\n  if (isValid () && inOperand.isValid ()) {\n    cPtr_weakReference_proxy * myPtr = mProxyPtr ;\n    const size_t myObjectPtr = size_t (myPtr) ;\n    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;\n    const size_t operandObjectPtr = size_t (operandPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else{\n      result = kOperandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("AC_GALGAS_weak_reference") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("GALGAS_") ;
    result.addString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::operator = (const GALGAS_") ;
  result.addString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) {\n  cPtr_weakReference_proxy * proxyPtr = nullptr ;\n  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;\n  if (p != nullptr) {\n    proxyPtr = p->getProxy () ;\n  }\n  macroAssignSharedObject (mProxyPtr, proxyPtr) ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const GALGAS_") ;
  result.addString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inSource) :\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result.addString ("AC_GALGAS_weak_reference") ;
  }else if (kBoolFalse == test_1) {
    result.addString ("GALGAS_") ;
    result.addString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  }
  result.addString (" (inSource) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_nil (LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::bang_") ;
  result.addString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  if (mProxyPtr != nullptr) {\n    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;\n    if (strongPtr == nullptr) {\n      inCompiler->onTheFlySemanticError (\"weak reference is nil\" COMMA_THERE) ;\n    }else{\n      macroValidSharedObject (strongPtr, cPtr_") ;
  result.addString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n      result = GALGAS_") ;
  result.addString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" ((cPtr_") ;
  result.addString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) strongPtr) ;\n    }\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate typeAliasTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_typeAliasTypeHeader_31_ (Compiler * inCompiler,
                                                                                  const GALGAS_string & in_ALIAS_5F_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_string & in_REFERENCED_5F_TYPE_5F_IDENTIFIER
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_ALIAS_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_type_alias.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString (" type alias\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef GALGAS_") ;
  result.addString (in_REFERENCED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_ALIAS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticComponentGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticComponentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticComponentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticComponentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticComponentGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticComponentGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" callExtensionGetter_") ;
  result.addString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const class cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_599_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_599 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_599.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_599.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        result.addString ("class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        result.addString (" in_") ;
        result.addString (enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
      }
      index_599_.increment () ;
      enumerator_599.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                             const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                             const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                             const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" callExtensionGetter_") ;
  result.addString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_587_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_587 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_587.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_587.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_587.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.addString (" in_") ;
        result.addString (enumerator_587.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        result.addString ("GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_587.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.addString (" in_") ;
        result.addString (enumerator_587.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue ()) ;
      }
      index_587_.increment () ;
      enumerator_587.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.addString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.addString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_1239_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1239 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1239.hasCurrentObject ()) {
      result.addString ("in_") ;
      result.addString (enumerator_1239.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.addString (", ") ;
      index_1239_.increment () ;
      enumerator_1239.gotoNextObject () ;
    }
  }
  result.addString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" callExtensionGetter_") ;
  result.addString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_584_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_584 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_584.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_584.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        result.addString ("class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        result.addString (" in_") ;
        result.addString (enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
      }
      index_584_.increment () ;
      enumerator_584.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                     const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                     const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.addString (" callExtensionGetter_") ;
  result.addString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_706_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_706 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_706.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_706.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_706.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue ()) ;
        result.addString (" in_") ;
        result.addString (enumerator_706.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        result.addString ("GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_706.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue ()) ;
        result.addString (" in_") ;
        result.addString (enumerator_706.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue ()) ;
      }
      index_706_.increment () ;
      enumerator_706.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.addString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.addString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_1358_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1358 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1358.hasCurrentObject ()) {
      result.addString ("in_") ;
      result.addString (enumerator_1358.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.addString (", ") ;
      index_1358_.increment () ;
      enumerator_1358.gotoNextObject () ;
    }
  }
  result.addString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                               const GALGAS_unifiedTypeMapEntry & /* in_RETURN_5F_TYPE */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Overriding extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (") (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("class cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_624_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_624 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_624.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.addString (" constinArgument") ;
        result.addString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString ("class GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.addString (" & ioArgument") ;
          result.addString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.addString (" & outArgument") ;
            result.addString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
          }else if (kBoolFalse == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.addString (" inArgument") ;
            result.addString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
          }
        }
      }
      index_624_IDX.increment () ;
      enumerator_624.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 26)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const int32_t inClassIndex,\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("extensionSetterSignature_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.addString (" inModifier) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("class cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_2145_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2145 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2145.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result.addString ("const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result.addString ("GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.addString (" & io_") ;
          result.addString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.addString (" & out_") ;
            result.addString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
          }else if (kBoolFalse == test_5) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.addString (" in_") ;
            result.addString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
          }
        }
      }
      index_2145_.increment () ;
      enumerator_2145.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (Compiler * inCompiler,
                                                                                                             const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                             const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic TC_UniqueArray <extensionSetterSignature_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString ("> gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("extensionSetterSignature_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.addString (" inModifier) {\n  gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.addString (".forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void freeExtensionModifier_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.addString (" (void) {\n  gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue ()) ;
  result.addString (".removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nC_PrologueEpilogue gSetter_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("nullptr,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("freeExtensionModifier_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue ()) ;
  result.addString (") ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_2143_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2143 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2143.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2143.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 32)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_2143.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_2143.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2143.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 34)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString ("GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_2143.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue ()) ;
          result.addString (" & io_") ;
          result.addString (enumerator_2143.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue ()) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2143.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_2143.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
            result.addString (" & out_") ;
            result.addString (enumerator_2143.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
          }else if (kBoolFalse == test_2) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_2143.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue ()) ;
            result.addString (" in_") ;
            result.addString (enumerator_2143.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue ()) ;
          }
        }
      }
      index_2143_.increment () ;
      enumerator_2143.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GALGAS_uint index_3180_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3180 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3180.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3180.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result.addString ("  out_") ;
        result.addString (enumerator_3180.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 48)).stringValue ()) ;
        result.addString (".drop () ;\n") ;
      }else if (kBoolFalse == test_3) {
      }
      index_3180_.increment () ;
      enumerator_3180.gotoNextObject () ;
    }
  }
  result.addString ("//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.addString (") ;\n    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue ()) ;
  result.addString (" f = nullptr ;\n    if (classIndex < gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.addString (".count ()) {\n      f = gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue ()) ;
  result.addString (" (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue ()) ;
  result.addString (".count ()) {\n           f = gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
  result.addString (" (p->mSlotID COMMA_HERE) ;\n         }\n         p = p->mSuperclassDescriptor ;\n       }\n       gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
  result.addString (".forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;\n    }\n    f (inObject, ") ;
  GALGAS_uint index_4880_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4880 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4880.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4880.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 72)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result.addString ("constin_") ;
        result.addString (enumerator_4880.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 73)).stringValue ()) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4880.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 74)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result.addString ("io_") ;
          result.addString (enumerator_4880.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 75)).stringValue ()) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4880.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 76)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result.addString ("out_") ;
            result.addString (enumerator_4880.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 77)).stringValue ()) ;
          }else if (kBoolFalse == test_6) {
            result.addString ("in_") ;
            result.addString (enumerator_4880.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 79)).stringValue ()) ;
          }
        }
      }
      result.addString (", ") ;
      index_4880_.increment () ;
      enumerator_4880.gotoNextObject () ;
    }
  }
  result.addString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                  const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (") (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("class cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_615_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_615 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_615.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.addString (" constinArgument") ;
        result.addString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString ("class GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.addString (" & ioArgument") ;
          result.addString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.addString (" & outArgument") ;
            result.addString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
          }else if (kBoolFalse == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.addString (" inArgument") ;
            result.addString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
          }
        }
      }
      index_615_IDX.increment () ;
      enumerator_615.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 26)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("extensionSetterSignature_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.addString (" inModifier) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("class cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_2149_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2149 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2149.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result.addString ("const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result.addString ("GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.addString (" & io_") ;
          result.addString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.addString (" & out_") ;
            result.addString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
          }else if (kBoolFalse == test_5) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.addString (" in_") ;
            result.addString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
          }
        }
      }
      index_2149_.increment () ;
      enumerator_2149.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionsetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                     const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic TC_UniqueArray <extensionSetterSignature_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString ("> gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("extensionSetterSignature_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.addString (" inModifier) {\n  gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.addString (".forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_1425_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1425 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1425.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 21)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 23)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString ("GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          result.addString (" & io_") ;
          result.addString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 25)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            result.addString (" & out_") ;
            result.addString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
          }else if (kBoolFalse == test_2) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
            result.addString (" in_") ;
            result.addString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
          }
        }
      }
      index_1425_.increment () ;
      enumerator_1425.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GALGAS_uint index_2462_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2462 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2462.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2462.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result.addString ("  out_") ;
        result.addString (enumerator_2462.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.addString (".drop () ;\n") ;
      }else if (kBoolFalse == test_3) {
      }
      index_2462_.increment () ;
      enumerator_2462.gotoNextObject () ;
    }
  }
  result.addString ("//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.addString (") ;\n    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.addString (" f = nullptr ;\n    if (classIndex < gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue ()) ;
  result.addString (".count ()) {\n      f = gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue ()) ;
  result.addString (" (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.addString (".count ()) {\n           f = gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.addString (" (p->mSlotID COMMA_HERE) ;\n         }\n         p = p->mSuperclassDescriptor ;\n       }\n       gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.addString (".forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;\n    }\n    f (inObject, ") ;
  GALGAS_uint index_4162_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4162 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4162.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4162.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 61)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result.addString ("constin_") ;
        result.addString (enumerator_4162.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 62)).stringValue ()) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4162.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 63)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result.addString ("io_") ;
          result.addString (enumerator_4162.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4162.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 65)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result.addString ("out_") ;
            result.addString (enumerator_4162.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 66)).stringValue ()) ;
          }else if (kBoolFalse == test_6) {
            result.addString ("in_") ;
            result.addString (enumerator_4162.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
          }
        }
      }
      result.addString (", ") ;
      index_4162_.increment () ;
      enumerator_4162.gotoNextObject () ;
    }
  }
  result.addString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_MODIFIER_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\nstatic void defineExtensionSetter_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.addString (" (void) {\n  enterExtensionSetter_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("kTypeDescriptor_GALGAS_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.addString (".mSlotID,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("extensionSetter_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.addString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void freeExtensionModifier_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue ()) ;
  result.addString (" (void) {\n  gExtensionModifierTable_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue ()) ;
  result.addString (".removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nC_PrologueEpilogue gSetter_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("defineExtensionSetter_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.addString (",\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("freeExtensionModifier_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.addString (") ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                               const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Overriding extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_MODIFIER_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\nstatic void defineExtensionSetter_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue ()) ;
  result.addString (" (void) {\n  enterExtensionSetter_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("kTypeDescriptor_GALGAS_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.addString (".mSlotID,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("extensionSetter_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.addString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nC_PrologueEpilogue gSetter_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.addString (" (defineExtensionSetter_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.addString (", nullptr) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Abstract extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.addString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("class cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_558_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_558 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_558.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString ("class GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          result.addString (" & io_") ;
          result.addString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue ()) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            result.addString (" & out_") ;
            result.addString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue ()) ;
          }else if (kBoolFalse == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            result.addString (" in_") ;
            result.addString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue ()) ;
          }
        }
      }
      index_558_.increment () ;
      enumerator_558.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                             const GALGAS_unifiedTypeMapEntry & in_RECEIVER_5F_TYPE,
                                                                                                             const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                             const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Abstract extension method '@").add_operation (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.addString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("cPtr_") ;
  result.addString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_618_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_618 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_618.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_618.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_618.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_618.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_618.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString ("GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_618.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
          result.addString (" & io_") ;
          result.addString (enumerator_618.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_618.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_618.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
            result.addString (" & out_") ;
            result.addString (enumerator_618.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
          }else if (kBoolFalse == test_2) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_618.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.addString (" in_") ;
            result.addString (enumerator_618.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
          }
        }
      }
      index_618_.increment () ;
      enumerator_618.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GALGAS_uint index_1655_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1655 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1655.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1655.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 25)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result.addString ("  out_") ;
        result.addString (enumerator_1655.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 26)).stringValue ()) ;
        result.addString (".drop () ;\n") ;
      }else if (kBoolFalse == test_3) {
      }
      index_1655_.increment () ;
      enumerator_1655.gotoNextObject () ;
    }
  }
  result.addString ("//--- Find method\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.addString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.addString (") ;\n    inObject->method_") ;
  result.addString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_2208_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2208 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2208.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2208.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result.addString ("constin_") ;
        result.addString (enumerator_2208.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 35)).stringValue ()) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2208.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result.addString ("io_") ;
          result.addString (enumerator_2208.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 37)).stringValue ()) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2208.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result.addString ("out_") ;
            result.addString (enumerator_2208.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 39)).stringValue ()) ;
          }else if (kBoolFalse == test_6) {
            result.addString ("in_") ;
            result.addString (enumerator_2208.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 41)).stringValue ()) ;
          }
        }
      }
      result.addString (", ") ;
      index_2208_.increment () ;
      enumerator_2208.gotoNextObject () ;
    }
  }
  result.addString ("inCompiler COMMA_THERE) ;\n  }\n}\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                  const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.addString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("class cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_549.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString ("class GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          result.addString (" & io_") ;
          result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue ()) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            result.addString (" & out_") ;
            result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue ()) ;
          }else if (kBoolFalse == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            result.addString (" in_") ;
            result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue ()) ;
          }
        }
      }
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                     const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.addString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.addString (" * inObject") ;
  GALGAS_uint index_671_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_671 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_671.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 16)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString ("GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
          result.addString (" & io_") ;
          result.addString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 18)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue ()) ;
            result.addString (" & out_") ;
            result.addString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue ()) ;
          }else if (kBoolFalse == test_2) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)).stringValue ()) ;
            result.addString (" in_") ;
            result.addString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)).stringValue ()) ;
          }
        }
      }
      index_671_.increment () ;
      enumerator_671.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n") ;
  GALGAS_uint index_1680_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1680 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1680.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1680.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 28)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result.addString ("  out_") ;
        result.addString (enumerator_1680.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 29)).stringValue ()) ;
        result.addString (".drop () ;\n") ;
      }else if (kBoolFalse == test_3) {
      }
      index_1680_.increment () ;
      enumerator_1680.gotoNextObject () ;
    }
  }
  result.addString ("  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.addString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 33)).stringValue ()) ;
  result.addString (") ;\n    inObject->method_") ;
  result.addString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 34)).stringValue ()) ;
  result.addString ("  (") ;
  GALGAS_uint index_2183_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2183 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2183.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result.addString ("constin_") ;
        result.addString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 37)).stringValue ()) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result.addString ("io_") ;
          result.addString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 39)).stringValue ()) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 40)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result.addString ("out_") ;
            result.addString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 41)).stringValue ()) ;
          }else if (kBoolFalse == test_6) {
            result.addString ("in_") ;
            result.addString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 43)).stringValue ()) ;
          }
        }
      }
      result.addString (", ") ;
      index_2183_.increment () ;
      enumerator_2183.gotoNextObject () ;
    }
  }
  result.addString ("inCompiler COMMA_THERE) ;\n  }\n}\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Overriding extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (Compiler * inCompiler,
                                                                                              const GALGAS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_string & in_FILEWRAPPER_5F_NAME
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_307_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_307 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_307.hasCurrentObject ()) {
      result.addString ("extern const char * gWrapperFileContent_") ;
      result.addString (enumerator_307.current_mValue (HERE).stringValue ()) ;
      result.addString ("_") ;
      result.addString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_307_idx.increment () ;
      enumerator_307.gotoNextObject () ;
    }
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_577_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_577 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_577.hasCurrentObject ()) {
      result.addString ("extern const uint8_t gWrapperFileContent_") ;
      result.addString (enumerator_577.current_mValue (HERE).stringValue ()) ;
      result.addString ("_") ;
      result.addString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue ()) ;
      result.addString (" [] ;\n") ;
      index_577_idx.increment () ;
      enumerator_577.gotoNextObject () ;
    }
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_841_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_841 (in_FILE_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_841.hasCurrentObject ()) {
      result.addString ("extern const cRegularFileWrapper gWrapperFile_") ;
      result.addString (enumerator_841.current_mValue (HERE).stringValue ()) ;
      result.addString ("_") ;
      result.addString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_841_idx.increment () ;
      enumerator_841.gotoNextObject () ;
    }
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1108_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1108 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1108.hasCurrentObject ()) {
      result.addString ("extern const cDirectoryWrapper gWrapperDirectory_") ;
      result.addString (enumerator_1108.current_mValue (HERE).stringValue ()) ;
      result.addString ("_") ;
      result.addString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_1108_.increment () ;
      enumerator_1108.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (Compiler * inCompiler,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                            const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                            const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Extension getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" extensionGetter_") ;
  result.addString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const class GALGAS_") ;
  result.addString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" & inObject") ;
  GALGAS_uint index_588_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_588 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_588.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_588.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_588.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        result.addString (" & constinArgument") ;
        result.addString (index_588_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        result.addString ("class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_588.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        result.addString (" inArgument") ;
        result.addString (index_588_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
      }
      index_588_IDX.increment () ;
      enumerator_588.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Extension Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionMethod_") ;
  result.addString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const class GALGAS_") ;
  result.addString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" inObject") ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_549.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString ("class GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.addString (" & io_") ;
          result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue ()) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.addString (" & out_") ;
            result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue ()) ;
          }else if (kBoolFalse == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.addString (" in_") ;
            result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue ()) ;
          }
        }
      }
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Extension setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionSetter_") ;
  result.addString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("class GALGAS_") ;
  result.addString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" & ioObject") ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_549.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.addString (" constin_") ;
        result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString ("class GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.addString (" & io_") ;
          result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.addString (" & out_") ;
            result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
          }else if (kBoolFalse == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.addString (" in_") ;
            result.addString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
          }
        }
      }
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (Compiler * inCompiler,
                                                                                           const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                           const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" function_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_473_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_473 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_473.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_473.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_473.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.addString (" & constinArgument") ;
        result.addString (index_473_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_0) {
        result.addString ("class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_473.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.addString (" inArgument") ;
        result.addString (index_473_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_473_IDX.increment () ;
      enumerator_473.gotoNextObject () ;
    }
  }
  result.addString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (Compiler * inCompiler,
                                                                                              const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                              const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                              const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                              const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const C_galgas_type_descriptor * functionArgs_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.addString (" [") ;
  result.addString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.addString ("] = {\n") ;
  GALGAS_uint index_850_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_850 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_850.hasCurrentObject ()) {
      result.addString ("  & kTypeDescriptor_GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_850.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 15)).stringValue ()) ;
      result.addString (",\n") ;
      index_850_.increment () ;
      enumerator_850.gotoNextObject () ;
    }
  }
  result.addString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 23)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("static GALGAS_object functionWithGenericHeader_") ;
    result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 24)).stringValue ()) ;
    result.addString (" (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const cObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const GALGAS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 28)).stringValue ()) ;
    result.addString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("static GALGAS_object functionWithGenericHeader_") ;
    result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 31)).stringValue ()) ;
    result.addString (" (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const cObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const GALGAS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) {\n") ;
    GALGAS_uint index_2160_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2160 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2160.hasCurrentObject ()) {
        result.addString ("  const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_2160.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.addString (" operand") ;
        result.addString (index_2160_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.addString (" = GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_2160.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.addString ("::extractObject (") ;
        columnMarker = result.currentColumn () ;
        result.addString ("inEffectiveParameterArray.objectAtIndex (") ;
        result.addString (index_2160_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.addString (" COMMA_HERE),\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("inCompiler\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("COMMA_THERE) ;\n") ;
        index_2160_IDX.increment () ;
        enumerator_2160.gotoNextObject () ;
      }
    }
    result.addString ("  return function_") ;
    result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 41)).stringValue ()) ;
    result.addString (" (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_2656_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2656 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2656.hasCurrentObject ()) {
        result.addString ("operand") ;
        result.addString (index_2656_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 43)).stringValue ()) ;
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_2656_IDX.increment () ;
        enumerator_2656.gotoNextObject () ;
      }
    }
    result.addString ("inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_THERE).getter_object (THERE) ;\n}\n") ;
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\nC_galgas_function_descriptor functionDescriptor_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString (in_FUNCTION_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue ()) ;
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("functionWithGenericHeader_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("& kTypeDescriptor_GALGAS_") ;
  result.addString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).stringValue ()) ;
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("functionArgs_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 55)).stringValue ()) ;
  result.addString (") ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (Compiler * inCompiler,
                                                                                          const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid routine_") ;
  result.addString (in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_450_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_450 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_450.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result.addString ("const class GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.addString (" constinArgument") ;
        result.addString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result.addString ("class GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          result.addString (" & ioArgument") ;
          result.addString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            result.addString (" & outArgument") ;
            result.addString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
          }else if (kBoolFalse == test_2) {
            result.addString ("class GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            result.addString (" inArgument") ;
            result.addString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
          }
        }
      }
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_450_IDX.increment () ;
      enumerator_450.gotoNextObject () ;
    }
  }
  result.addString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (Compiler * inCompiler,
                                                                                             const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                             const GALGAS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_ROUTINE_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.addString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.addString ("\n\n//--------------------------------------------------------------------------------------------------\n//  Function implementation                                                                      \n//--------------------------------------------------------------------------------------------------\n\nstatic bool gOnceFunctionResultAvailable_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.addString (" = false ;\nstatic GALGAS_") ;
  result.addString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" gOnceFunctionResult_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 14)).stringValue ()) ;
  result.addString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" function_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.addString (" (") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("class Compiler * inCompiler\n              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (! gOnceFunctionResultAvailable_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.addString (") {\n    gOnceFunctionResult_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue ()) ;
  result.addString (" = onceFunction_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue ()) ;
  result.addString (" (inCompiler COMMA_THERE) ;\n    gOnceFunctionResultAvailable_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.addString (" = true ;\n  }\n  return gOnceFunctionResult_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.addString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void releaseOnceFunctionResult_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.addString (" (void) {\n  gOnceFunctionResult_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 30)).stringValue ()) ;
  result.addString (".drop () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nC_PrologueEpilogue gEpilogueForOnceFunction_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 35)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("nullptr,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("releaseOnceFunctionResult_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
  result.addString (") ;\n\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const C_galgas_type_descriptor * functionArgs_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.addString (" [") ;
  result.addString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.addString ("] = {\n") ;
  GALGAS_uint index_2589_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_2589 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2589.hasCurrentObject ()) {
      result.addString ("  & kTypeDescriptor_GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_2589.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 45)).stringValue ()) ;
      result.addString (",\n") ;
      index_2589_.increment () ;
      enumerator_2589.gotoNextObject () ;
    }
  }
  result.addString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 53)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("static GALGAS_object functionWithGenericHeader_") ;
    result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 54)).stringValue ()) ;
    result.addString (" (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const cObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const GALGAS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 58)).stringValue ()) ;
    result.addString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
  }else if (kBoolFalse == test_0) {
    result.addString ("static GALGAS_object functionWithGenericHeader_") ;
    result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 61)).stringValue ()) ;
    result.addString (" (") ;
    columnMarker = result.currentColumn () ;
    result.addString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const cObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("const GALGAS_location & /* inErrorLocation*/\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_LOCATION_ARGS) {\n") ;
    GALGAS_uint index_3898_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_3898 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3898.hasCurrentObject ()) {
        result.addString ("  const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_3898.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.addString (" operand") ;
        result.addString (index_3898_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.addString (" = GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_3898.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.addString ("::extractObject (inEffectiveParameterArray.objectAtIndex (") ;
        result.addString (index_3898_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.addString (" COMMA_HERE), inCompiler COMMA_THERE) ;\n") ;
        index_3898_IDX.increment () ;
        enumerator_3898.gotoNextObject () ;
      }
    }
    result.addString ("  return function_") ;
    result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 68)).stringValue ()) ;
    result.addString (" (") ;
    GALGAS_uint index_4371_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_4371 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4371.hasCurrentObject ()) {
        result.addString ("operand") ;
        result.addString (index_4371_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 70)).stringValue ()) ;
        result.addString (", ") ;
        index_4371_IDX.increment () ;
        enumerator_4371.gotoNextObject () ;
      }
    }
    result.addString ("inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\nC_galgas_function_descriptor functionDescriptor_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString (in_FUNCTION_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue ()) ;
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("functionWithGenericHeader_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 79)).stringValue ()) ;
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("& kTypeDescriptor_GALGAS_") ;
  result.addString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.addString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("functionArgs_") ;
  result.addString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.addString (") ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (Compiler * inCompiler,
                                                                                                      const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_string filewrapperTemplate_") ;
  result.addString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("class Compiler * inCompiler") ;
  GALGAS_uint index_568_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_568 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_568.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const class GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_568.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue ()) ;
      result.addString (" & ") ;
      result.addString (enumerator_568.current_mFormalArgumentCppName (HERE).stringValue ()) ;
      index_568_.increment () ;
      enumerator_568.gotoNextObject () ;
    }
  }
  result.addString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (Compiler * inCompiler,
                                                                                                         const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                         const GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                         const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const GALGAS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                         const GALGAS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                         const GALGAS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_string filewrapperTemplate_") ;
  result.addString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString ("_") ;
  result.addString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("Compiler * ") ;
  const enumGalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result.addString ("/* ") ;
    result.addString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 9)).stringValue ()) ;
    result.addString (" */") ;
  }else if (kBoolFalse == test_0) {
    result.addString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 11)).stringValue ()) ;
  }
  GALGAS_uint index_677_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_677 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_677.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_677.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue ()) ;
      result.addString (" & ") ;
      const enumGalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (enumerator_677.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result.addString ("/* ") ;
        result.addString (enumerator_677.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        result.addString (" */") ;
      }else if (kBoolFalse == test_1) {
        result.addString (enumerator_677.current_mFormalArgumentCppName (HERE).stringValue ()) ;
      }
      index_677_.increment () ;
      enumerator_677.gotoNextObject () ;
    }
  }
  result.addString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_UNUSED_LOCATION_ARGS) {\n  String result ;\n") ;
  const enumGalgasBool test_2 = in_USES_5F_COLUMN_5F_MARKER.boolEnum () ;
  if (kBoolTrue == test_2) {
    result.addString ("  uint32_t columnMarker = 0 ;\n") ;
  }else if (kBoolFalse == test_2) {
  }
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.addString (in_GENERATED_5F_INSTRUCTION_5F_STRING.stringValue ()) ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.addString ("  return GALGAS_string (result) ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@routinePrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_routinePrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1068)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routinePrototypeDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routinePrototypeDeclarationForGeneration temp_0 = this ;
  const GALGAS_routinePrototypeDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, temp_0.readProperty_mRoutineName (), temp_1.readProperty_mFormalArgumentList () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1076))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_functionPrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1087)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_string & outArgument_outHeader,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionPrototypeDeclarationForGeneration temp_0 = this ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), temp_1.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1098)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1095))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_onceFunctionDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1105)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1115)), extensionGetter_identifierRepresentation (temp_1.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1116)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1113))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticTypeForGeneration::getter_appendTypeGenericImplementation (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_semanticTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_45925 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1125)) ;
  const GALGAS_semanticTypeForGeneration temp_1 = this ;
  result_result = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, var_selfTypeDefinition_45925.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1128)), var_selfTypeDefinition_45925.readProperty_mSuperType (), var_selfTypeDefinition_45925.readProperty_mHandledOperatorFlags () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1126))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routineImplementationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineImplementationForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasHeader ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_2.readProperty_mRoutineName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1144)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1144))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1144)) ;
    }
  }
  GALGAS_string var_code_47227 ;
  {
  const GALGAS_routineImplementationForGeneration temp_3 = this ;
  const GALGAS_routineImplementationForGeneration temp_4 = this ;
  const GALGAS_routineImplementationForGeneration temp_5 = this ;
  const GALGAS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure (temp_3.readProperty_mGenerateStatic (), GALGAS_string ("routine_").add_operation (temp_4.readProperty_mRoutineName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1148)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1148)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_47227, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1146)) ;
  }
  const GALGAS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.readProperty_mRoutineName (), var_code_47227 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1159))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionImplementationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionImplementationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1171)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1171))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1171)) ;
  GALGAS_string var_code_48063 ;
  {
  const GALGAS_functionImplementationForGeneration temp_1 = this ;
  const GALGAS_functionImplementationForGeneration temp_2 = this ;
  const GALGAS_functionImplementationForGeneration temp_3 = this ;
  const GALGAS_functionImplementationForGeneration temp_4 = this ;
  const GALGAS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction (GALGAS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1173)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1173)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GALGAS_string ("Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_48063, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1172)) ;
  }
  const GALGAS_functionImplementationForGeneration temp_6 = this ;
  const GALGAS_functionImplementationForGeneration temp_7 = this ;
  const GALGAS_functionImplementationForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.readProperty_mFunctionName (), var_code_48063, temp_7.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_8.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1188)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1184))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1199)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1199))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1199)) ;
  GALGAS_string var_code_48997 ;
  {
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction (GALGAS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1201)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1201)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1203)), temp_2.readProperty_mFunctionInstructionList (), GALGAS_string ("Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GALGAS_bool (true), GALGAS_bool (false), var_code_48997, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1200)) ;
  }
  const GALGAS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.readProperty_mFunctionName (), var_code_48997, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1215)), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1216)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1212))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1225)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  outArgument_outHeader = temp_0.readProperty_mHeaderContents () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexiqueDeclarationForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperLexiqueName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexiqueDeclarationForGeneration temp_3 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1235)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1235))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1235)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1245)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1245))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1245)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GALGAS_string constinArgument_inProductDirectory,
                                                                       GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1256)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1256)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1256))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1256)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_2 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1259)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1259)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1259)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_2.readProperty_mObjcCocoaHeader (), GALGAS_string ("\n\n"), GALGAS_string ("\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1257)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_3 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1269)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_4 = this ;
  ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_4.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1270)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1270)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1270))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1270)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_5 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_6 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_5.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1273)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1273)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1273)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_6.readProperty_mObjcCocoaImplementation (), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1271)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_7 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_7.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1283)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1283)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1283))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1283)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_8 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_9 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_8.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1286)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1286)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1286)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_9.readProperty_mSwiftCocoaImplementation (), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1284)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@programComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_programComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1302)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@programComponentForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_programComponentForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusAssign_operation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)) ;
  const GALGAS_programComponentForGeneration temp_1 = this ;
  outArgument_outImplementation = temp_1.readProperty_mImplementationString () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_filewrapperDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1322)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile (const GALGAS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                             const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                             GALGAS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1334)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1334))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)) ;
  cEnumerator_wrapperFileMap enumerator_54143 (constinArgument_inFilewrapperFileMap, kENUMERATION_UP) ;
  while (enumerator_54143.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1336)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1336))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_54143.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_54143.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1338))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1338)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_54143.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1340))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1340)) ;
    }
    enumerator_54143.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_54506 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_54506.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile (enumerator_54506.current_mRegularFileMap (HERE), enumerator_54506.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1344)) ;
    }
    enumerator_54506.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_regularFileIndexStringList_55059 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1360)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList_55109 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1361)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList_55168 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1362)) ;
  GALGAS_stringlist var_directoryIndexStringList_55225 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1363)) ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_55059, var_directoryIndexStringList_55225, var_regularTextContentIndexStringList_55168, var_regularBinaryContentIndexStringList_55109, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1364)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_55059, var_directoryIndexStringList_55225, var_regularTextContentIndexStringList_55168, var_regularBinaryContentIndexStringList_55109, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1372))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_55876 (temp_3.readProperty_mFilewrapperTemplateListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_55876.hasCurrentObject ()) {
    const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_55876.current_mFilewrapperTemplateName (HERE), enumerator_55876.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1381))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1381)) ;
    enumerator_55876.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents (const GALGAS_string constinArgument_inFilewrapperName,
                                      const GALGAS_string constinArgument_inFilewrapperDirectory,
                                      const GALGAS_uint constinArgument_inFilewrapperDirectoryIndex,
                                      const GALGAS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                      const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                      GALGAS_string & ioArgument_ioImplementation,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_wrapperFileMap enumerator_56621 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_56621.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_56621.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_contents_56716 = GALGAS_string::constructor_stringWithContentsOfFile (enumerator_56621.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1401)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402)).add_operation (enumerator_56621.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402)).add_operation (GALGAS_string ("const char * gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402)).add_operation (enumerator_56621.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1404)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1404)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1404)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1405)).add_operation (var_contents_56716.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1406)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1405)).add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1406)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1406)).add_operation (enumerator_56621.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1407)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1407)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1407)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1408)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1407)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (enumerator_56621.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1409)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)).add_operation (enumerator_56621.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1410)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1410)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (GALGAS_string ("  true, // Text file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (var_contents_56716.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1412)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)).add_operation (GALGAS_string (", // Text length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)).add_operation (GALGAS_string ("  gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)).add_operation (enumerator_56621.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1413)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1413)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_data var_contents_57639 = GALGAS_data::constructor_dataWithContentsOfFile (enumerator_56621.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)) ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)).add_operation (enumerator_56621.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)).add_operation (GALGAS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)).add_operation (enumerator_56621.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1420)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1420)).add_operation (var_contents_57639.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1420)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1420)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1420)).add_operation (GALGAS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1420)).add_operation (var_contents_57639.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1421)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1420)).add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)).add_operation (enumerator_56621.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1422)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1422)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1422)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1423)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1422)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1423)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1423)).add_operation (enumerator_56621.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1424)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1424)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1424)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1424)).add_operation (enumerator_56621.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1425)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1425)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)).add_operation (GALGAS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1426)).add_operation (var_contents_57639.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1427)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1427)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)).add_operation (GALGAS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)).add_operation (GALGAS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)).add_operation (enumerator_56621.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1428)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1428)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)) ;
    }
    enumerator_56621.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_58645 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_58645.hasCurrentObject ()) {
    {
    routine_generateWrapperContents (constinArgument_inFilewrapperName, enumerator_58645.current_lkey (HERE).readProperty_string (), enumerator_58645.current_mWrapperDirectoryIndex (HERE), enumerator_58645.current_mRegularFileMap (HERE), enumerator_58645.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1434)) ;
    }
    enumerator_58645.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1444)).add_operation (GALGAS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1444)).add_operation (GALGAS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1444)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1446)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1445)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1446)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1446)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1446)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1446)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1447)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1447)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1444)) ;
  cEnumerator_wrapperFileMap enumerator_59251 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_59251.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperFile_").add_operation (enumerator_59251.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1449)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1449)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1449)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1449)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1449)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1449)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1449)) ;
    enumerator_59251.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  nullptr\n").add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1451)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1451)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)).add_operation (GALGAS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)).add_operation (GALGAS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1456)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1456)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1456)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1456)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1456)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1457)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1457)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)) ;
  cEnumerator_wrapperDirectoryMap enumerator_59876 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_59876.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperDirectory_").add_operation (enumerator_59876.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1459)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1459)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)) ;
    enumerator_59876.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  nullptr\n").add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)).add_operation (GALGAS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1465)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1466)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1466)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1466)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1467)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1468)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1468)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1468)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1468)).add_operation (GALGAS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1468)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1469)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1469)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1470)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1470)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)).add_operation (GALGAS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1471)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1471)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1471)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1471)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1471)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1471)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1471)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1481))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1481)) ;
  GALGAS_string var_filewrapperImplementation_61257 = GALGAS_string::makeEmptyString () ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents (temp_1.readProperty_mFilewrapperName (), GALGAS_string::makeEmptyString (), GALGAS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_61257, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1483)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_61257 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1491))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_5 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_61717 (temp_5.readProperty_mFilewrapperTemplateListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_61717.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList_61870 = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex_61921 = GALGAS_uint (uint32_t (0U)) ;
    GALGAS_stringset var_unusedVariableCppNameSet_61967 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1500)) ;
    var_unusedVariableCppNameSet_61967.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1501))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1501)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_62087 (enumerator_61717.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
    while (enumerator_62087.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_61967.addAssign_operation (enumerator_62087.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1503)) ;
      enumerator_62087.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker_62218 = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction (enumerator_61717.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_61870, ioArgument_ioInclusionSet, var_temporaryVariableIndex_61921, var_unusedVariableCppNameSet_61967, var_useColumnMarker_62218, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)) ;
    }
    const GALGAS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_61717.current_mFilewrapperTemplateName (HERE), enumerator_61717.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_61967, var_useColumnMarker_62218, var_generatedCodeForInstructionList_61870 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1515))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1515)) ;
    enumerator_61717.gotoNextObject () ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n#include \"galgas2/cCollectionElement.h\"\n#include \"galgas2/cSortedListElement.h\"\n#include \"galgas2/capSortedListElement.h\"\n#include \"galgas2/Compiler.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement::cMapElement (const GALGAS_lstring & inLKey\n                          COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmProperty_lkey (inLKey) {\n}\n\n") ;
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
  result.addString ("\n#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"strings/String-class.h\"\n#include \"time/C_Timer.h\"\n#include \"galgas2/AC_GALGAS_root.h\"\n#include \"galgas2/C_galgas_type_descriptor.h\"\n#include \"galgas2/typeComparisonResult.h\"\n#include \"galgas2/cGenericAbstractEnumerator.h\"\n#include \"galgas2/cEnumerator_range.h\"\n#include \"galgas2/AC_GALGAS_list.h\"\n#include \"galgas2/AC_GALGAS_sortedlist.h\"\n#include \"galgas2/AC_GALGAS_map.h\"\n#include \"galgas2/AC_GALGAS_reference_class.h\"\n#include \"galgas2/AC_GALGAS_value_class.h\"\n#include \"galgas2/AC_GALGAS_enumAssociatedValues.h\"\n#include \"galgas2/AC_GALGAS_graph.h\"\n#include \"galgas2/acStrongPtr_class.h\"\n#include \"galgas2/cPtr_weakReference_proxy.h\"\n#include \"galgas2/AC_GALGAS_weak_reference.h\"\n#include \"command_line_interface/C_BoolCommandLineOption.h\"\n#include \"command_line_interface/C_UIntCommandLineOption.h\"\n#include \"command_line_interface/C_StringCommandLineOption.h\"\n#include \"command_line_interface/C_StringListCommandLineOption.h\"\n#include \"utilities/C_PrologueEpilogue.h\"\n#include \"big-integers/BigSigned.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass Compiler ;\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n\n#include \"galgas2/cCollectionElement.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement : public cCollectionElement {\n//--- Attribut\n  public: GALGAS_lstring mProperty_lkey ;\n\n//--- Default constructor\n  public: cMapElement (const GALGAS_lstring & inLKey\n                        COMMA_LOCATION_ARGS) ;\n\n//--- No copy\n  private: cMapElement (const cMapElement &) ;\n  private: cMapElement & operator = (const cMapElement &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"galgas2/cSortedListElement.h\"\n#include \"galgas2/capSortedListElement.h\"\n#include \"galgas2/C_galgas_function_descriptor.h\"\n#include \"galgas2/cObjectArray.h\"\n\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @sint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int32_t mSIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int32_t intValue (void) const { return mSIntValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint (const int32_t inValue) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @sint64 type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int64_t mSInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int64_t int64Value (void) const { return mSInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint_36__34_ (const int64_t inValue) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @object type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_object ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_object : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: cPtr_object * mSharedObject ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedObject != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_object (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_object (AC_GALGAS_root * inObjectPointer\n                          COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_object (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_object (const GALGAS_object & inSource) ;\n  public: GALGAS_object & operator = (const GALGAS_object & inSource) ;\n\n//--------------------------------- Embedded Object\n  public: const AC_GALGAS_root * embeddedObject (void) const ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @uint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint32_t mUIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n  public: inline void increment (void) { mUIntValue ++ ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_uint (const uint32_t inValue) ;\n  public: GALGAS_uint (const bool inValid, const uint32_t inValue) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//  @uint64 type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint64_t mUInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_uint_36__34_ (const uint64_t inValue) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("@bool type").stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef enum {kBoolNotValid, kBoolFalse, kBoolTrue} enumGalgasBool ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_bool : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: bool mBoolValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n  public: inline bool boolValue (void) const { return mBoolValue ; }\n  public: enumGalgasBool boolEnum (void) const ;\n\n//--------------------------------- Drop\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_bool (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_bool (const bool inValue) ; // Is built\n  public: GALGAS_bool (const bool inBuilt, const bool inValue) ;\n\n//--------------------------------- Constructor for comparison result\n  public: GALGAS_bool (const typeComparisonKind inComparisonKind,\n                        const typeComparisonResult inComparisonResult) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n// @binaryset type\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"bdd/C_BDD.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_binaryset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: C_BDD mBDD ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline C_BDD bddValue (void) const { return mBDD ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_binaryset (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_binaryset (const C_BDD & inValue) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @function type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass C_galgas_function_descriptor ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_function : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: const C_galgas_function_descriptor * mFunctionDescriptor ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mFunctionDescriptor ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mFunctionDescriptor = nullptr ; }\n  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_function (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_function (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_function (const GALGAS_function & inSource) ;\n  public: GALGAS_function & operator = (const GALGAS_function & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_function (const C_galgas_function_descriptor * inValue) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @type type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_type : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const C_galgas_type_descriptor * mTypeDescriptor ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return nullptr != mTypeDescriptor ; }\n  public: inline void drop (void) override { mTypeDescriptor = nullptr ; }\n  public: inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_type (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_type (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_type (const GALGAS_type & inSource) ;\n  public: GALGAS_type & operator = (const GALGAS_type & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_type (const C_galgas_type_descriptor * inValue) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @location type\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"galgas2/LocationInSource.h\"\n#include \"galgas2/SourceTextInString.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_location : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: class InternalLocation * mInternalLocation ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: LocationInSource startLocation (void) const ;\n  public: LocationInSource endLocation (void) const ;\n  public: SourceTextInString sourceText (void) const ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_location (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_location (const GALGAS_location & inSource) ;\n  public: GALGAS_location & operator = (const GALGAS_location & inSource) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_location (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_location (const LocationInSource & inStartLocationInSource,\n                           const LocationInSource & inEndLocationInSource,\n                           const SourceTextInString & inSourceText) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @data type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_data : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: C_Data mData ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline C_Data dataValue (void) const { return mData ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_data (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_data (const C_Data & inData) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @char type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_char : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: utf32 mCharValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline utf32 charValue (void) const { return mCharValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_char (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_char (const utf32 inValue) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//  @double type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_double : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: double mDoubleValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline double doubleValue (void) const { return mDoubleValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_double (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_double (const double inValue) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @string type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_string : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: String mString ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: inline String stringValue (void) const { return mString ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_string (void) ;\n\n//--------------------------------- Constructor for making an empty string\n  public: static GALGAS_string makeEmptyString (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_string (const String & inValue) ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const override ;\n  #endif\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @stringset type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_stringset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: class cSharedStringsetRoot * mSharedRoot ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedRoot != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_stringset (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_stringset (void) ;\n\n//--------------------------------- In debug mode : check method\n  protected: void checkStringset (LOCATION_ARGS) const ;\n\n//--------------------------------- Insulate\n  protected: void insulate (LOCATION_ARGS) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @filewrapper type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cRegularFileWrapper {\n  public: const char * mName ;\n  public: const char * mExtension ;\n  public: const bool mIsTextFile ; // True: text file, false: binary file\n  public: const uint32_t mFileLength ;\n  public: const char * mContents ;\n\n//--- Constructor\n  public: cRegularFileWrapper (const char * inName,\n                                const char * inExtension,\n                                const bool inIsTextFile,\n                                const uint32_t inFileLength,\n                                const char * inContents) ;\n\n//--- No copy\n  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cDirectoryWrapper {\n  public: const char * mDirectoryName ;\n  public: const uint32_t mFileCount ;\n  public: const cRegularFileWrapper * * const mFiles ;\n  public: const uint32_t mDirectoryCount ;\n  public: const cDirectoryWrapper * * mDirectories ;\n\n//--- Constructor\n  public: cDirectoryWrapper (const char * inDirectoryName,\n                              const uint32_t inFileCount,\n                              const cRegularFileWrapper * * const inFiles,\n                              const uint32_t inDirectoryCount,\n                              const cDirectoryWrapper * * inDirectories) ;\n\n//--- No copy\n  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_filewrapper : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n  private: String mCurrentDirectory ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mRootDirectoryPtr ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mRootDirectoryPtr = nullptr ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_filewrapper (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_filewrapper (const GALGAS_filewrapper & inSource) ;\n  public: GALGAS_filewrapper & operator = (const GALGAS_filewrapper & inSource) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("@application type").stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_application : public AC_GALGAS_root {\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return false ; }\n  public: inline void drop (void) override { }\n\n//--------------------------------- Default constructor\n  public: GALGAS_application (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_application (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_application (const GALGAS_application & inSource) ;\n  public: GALGAS_application & operator = (const GALGAS_application & inSource) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @bigint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_bigint : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: BigSigned mValue ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: inline BigSigned bigintValue (void) const { return mValue ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_bigint (void) ;\n\n//--------------------------------- Constructor\n  public: GALGAS_bigint (const BigSigned & inValue) ;\n  public: GALGAS_bigint (const char * inDecimalString, Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_bigint (void) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//   @timer type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_timer : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: C_Timer mTimer ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_timer (void) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outHeader ; // Returned variable
  const GALGAS_primitiveTypeForGeneration temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_predefinedTypeKindEnum::kNotBuilt:
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1585))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1587))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1589))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1591))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1593))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1595))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1597))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1599))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1601))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1603))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1605))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1607))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1609))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1611))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1613))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1615))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1617))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bigint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1619))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_timer:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1621))) ;
    }
    break ;
  }
  const GALGAS_primitiveTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_66912 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1623)) ;
  const GALGAS_primitiveTypeForGeneration temp_2 = this ;
  result_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_66912.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1626)), var_selfTypeDefinition_66912.readProperty_mIsConcrete (), var_selfTypeDefinition_66912.readProperty_mConstructorMap (), var_selfTypeDefinition_66912.readProperty_mGetterMap (), var_selfTypeDefinition_66912.readProperty_mSetterMap (), var_selfTypeDefinition_66912.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_66912.readProperty_mClassMethodMap (), var_selfTypeDefinition_66912.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_66912.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_66912.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_66912.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_66912.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1624))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1624)) ;
//---
  return result_outHeader ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::method_appendPrimitiveTypePreDeclaration (GALGAS_string & ioArgument_ioHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_primitiveTypeForGeneration temp_0 = this ;
  ioArgument_ioHeader.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1645)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1645)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1645)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles (const GALGAS_string constinArgument_inDirectory,
                                          const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationListForGeneration,
                                          GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                          GALGAS_stringlist & ioArgument_ioToolCppFileList,
                                          GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_generatedCode_68572 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1660))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_68673 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_68673.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_68673.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1662)).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((cPtr_semanticDeclarationForGeneration *) enumerator_68673.current_mDeclaration (HERE).ptr (), var_generatedCode_68572, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1663)) ;
      }
    }
    enumerator_68673.gotoNextObject () ;
  }
  var_generatedCode_68572.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1666)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_68890 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_68890.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_68890.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1668)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generatedCode_68572.plusAssign_operation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_68890.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1669)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1669)) ;
      }
    }
    enumerator_68890.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_69081 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_69081.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_69081.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1673)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_stringset joker_69219 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1674)) ;
        GALGAS_string var_code_69236 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_69081.current_mDeclaration (HERE).ptr (), joker_69219, var_code_69236, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1674)) ;
        var_generatedCode_68572.plusAssign_operation(var_code_69236, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1675)) ;
      }
    }
    enumerator_69081.gotoNextObject () ;
  }
  var_generatedCode_68572.plusAssign_operation(GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1678))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1678)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_69384 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_69384.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_69384.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1680)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_stringset joker_69535 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1681)) ;
        GALGAS_string var_headerString_32__69552 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_69384.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_69535, var_headerString_32__69552, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1681)) ;
        var_generatedCode_68572.plusAssign_operation(var_headerString_32__69552, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1682)) ;
      }
    }
    enumerator_69384.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1685)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1686)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1687)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.h"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_generatedCode_68572, GALGAS_string ("\n\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1688)) ;
      }
    }
  }
  var_generatedCode_68572 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1701))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_70318 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_70318.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_70318.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1703)).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_generatedCode_68572.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_70318.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1704)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1704)) ;
        GALGAS_stringset joker_70547 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1705)) ;
        GALGAS_string var_code_70564 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_70318.current_mDeclaration (HERE).ptr (), GALGAS_unifiedTypeMap::constructor_emptyMap (SOURCE_FILE ("semanticGeneration.galgas", 1705)), joker_70547, var_code_70564, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1705)) ;
        var_generatedCode_68572.plusAssign_operation(var_code_70564, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1706)) ;
      }
    }
    enumerator_70318.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1709)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1710)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1711)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.cpp"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_generatedCode_68572, GALGAS_string ("\n\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1712)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticFileGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (Compiler * /* inCompiler */,
                                                                                     const GALGAS_string & /* in_COMPONENT_5F_NAME */,
                                                                                     const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_295_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_295 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_295.hasCurrentObject ()) {
      result.addString ("#include \"") ;
      result.addString (enumerator_295.current_mValue (HERE).stringValue ()) ;
      result.addString (".h\"\n") ;
      index_295_.increment () ;
      enumerator_295.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (Compiler * /* inCompiler */,
                                                                                             const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("#include \"galgas2/Compiler.h\"\n#include \"galgas2/C_galgas_io.h\"\n#include \"galgas2/C_galgas_CLI_Options.h\"\n#include \"utilities/C_PrologueEpilogue.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_292_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_292 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_292.hasCurrentObject ()) {
      result.addString ("#include \"") ;
      result.addString (enumerator_292.current_mValue (HERE).stringValue ()) ;
      result.addString (".h\"\n") ;
      index_292_.increment () ;
      enumerator_292.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedListTypeAST'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                          const GALGAS_string constinArgument_inElementTypeName,
                                          GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_1306 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 23)) ;
  var_attributeList_1306.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 27)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 28)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 30))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 24)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 33)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 33)), var_attributeList_1306, GALGAS_bool (true)  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 31))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 31)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 37)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2StringListTypeAST'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_StringListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                    GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_2074 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 46)) ;
  var_attributeList_2074.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 49)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue0"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 50)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 51)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 53))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 47)) ;
  var_attributeList_2074.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 56)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue1"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 57)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 58)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 60))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 54)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("2stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 64)), var_attributeList_2074, GALGAS_bool (true)  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 62))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 62)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2stringlist"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 68)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                 const GALGAS_string constinArgument_inElementTypeName,
                                                 GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_4016 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 107)) ;
  var_attributeList_4016.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 110)), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 111)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 112)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 114))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 108)) ;
  var_attributeList_4016.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 117)), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 118)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 119)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 121))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 115)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 124)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 124)), var_attributeList_4016, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 122))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 122)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 128)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                          GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_5014 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 137)) ;
  var_attributeList_5014.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 140)), GALGAS_lstring::constructor_new (GALGAS_string ("start"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 141)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 142)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 144))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 138)) ;
  var_attributeList_5014.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 147)), GALGAS_lstring::constructor_new (GALGAS_string ("length"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 148)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("predefinedTypes.galgas", 149)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("predefinedTypes.galgas", 151))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 145)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("range"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 154)), var_attributeList_5014, GALGAS_string ("uint")  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 152))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 152)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("range"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 158)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'insertInUsefulnessEntities'
//
//--------------------------------------------------------------------------------------------------

void routine_insertInUsefulnessEntities (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                         const GALGAS_string constinArgument_inTypeName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_typeUsefulnessName_5865 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (constinArgument_inTypeName, GALGAS_location::constructor_nowhere (SOURCE_FILE ("predefinedTypes.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 164)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_typeUsefulnessName_5865  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 165)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                        GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_applicationPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("application"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_application (SOURCE_FILE ("predefinedTypes.galgas", 174))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 174))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 174)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("application"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 175)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_bigintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("bigint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bigint (SOURCE_FILE ("predefinedTypes.galgas", 176))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 176))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 176)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bigint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 177)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_binarysetPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("binaryset"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_binaryset (SOURCE_FILE ("predefinedTypes.galgas", 178))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 178))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 178)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("binaryset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 179)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_boolPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("bool"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bool (SOURCE_FILE ("predefinedTypes.galgas", 180))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 180))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 180)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bool"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 181)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_charPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("char"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_char (SOURCE_FILE ("predefinedTypes.galgas", 182))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 182))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 182)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("char"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 183)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_dataPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("data"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_data (SOURCE_FILE ("predefinedTypes.galgas", 184))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 184))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 184)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("data"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 185)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_doublePredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("double"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_double (SOURCE_FILE ("predefinedTypes.galgas", 186))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 186))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 186)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("double"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 187)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_filewrapperPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_filewrapper (SOURCE_FILE ("predefinedTypes.galgas", 188))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 188))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 188)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("filewrapper"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 189)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_functionPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("function"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_function (SOURCE_FILE ("predefinedTypes.galgas", 190))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 190))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 190)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("function"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 191)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_locationPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("location"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_location (SOURCE_FILE ("predefinedTypes.galgas", 192))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 192))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 192)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("location"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 193)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_objectPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("object"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_object (SOURCE_FILE ("predefinedTypes.galgas", 194))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 194))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 194)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("object"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 195)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("sint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint (SOURCE_FILE ("predefinedTypes.galgas", 196))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 196))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 196)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 197)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sint_36__34_PredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("sint64"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint_36__34_ (SOURCE_FILE ("predefinedTypes.galgas", 198))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 198))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 198)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 199)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("string"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_string (SOURCE_FILE ("predefinedTypes.galgas", 200))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 200))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 200)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 201)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringsetPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("stringset"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_stringset (SOURCE_FILE ("predefinedTypes.galgas", 202))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 202))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 202)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("stringset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 203)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_timerPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("timer"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_timer (SOURCE_FILE ("predefinedTypes.galgas", 204))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 204))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 204)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("timer"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 205)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_typePredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("type"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_type (SOURCE_FILE ("predefinedTypes.galgas", 206))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 206))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 206)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("type"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 207)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("uint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint (SOURCE_FILE ("predefinedTypes.galgas", 208))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 208))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 208)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 209)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uint_36__34_PredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("uint64"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint_36__34_ (SOURCE_FILE ("predefinedTypes.galgas", 210))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 210))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 210)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 211)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("function"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 213)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("luint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 214)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("lstring"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 215)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("object"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 216)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 217)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("type"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 218)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 219)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 220)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 221)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("lbigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 222)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("bool"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 224)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 225)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("char"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 226)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("double"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 227)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 228)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 229)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 230)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 231)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 232)) ;
  }
  {
  routine_appendPredefined_32_StringListTypeAST (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 234)) ;
  }
  {
  routine_appendStructASTForRangeType (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 237)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_predefinedTypeAST temp_0 = this ;
  GALGAS_lstring var_key_12226 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 251)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 251)) ;
  {
  const GALGAS_predefinedTypeAST temp_1 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_12226, temp_1, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 252)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_13012 ;
  const GALGAS_predefinedTypeAST temp_0 = this ;
  callExtensionMethod_getOptionalMethodMap ((cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioTypeMap, var_optionalMethodMap_13012, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 265)) ;
  GALGAS_constructorMap var_constructorMap_13090 ;
  const GALGAS_predefinedTypeAST temp_1 = this ;
  callExtensionMethod_getConstructorMap ((cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioTypeMap, var_constructorMap_13090, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 266)) ;
  GALGAS_getterMap var_getterMap_13155 ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  callExtensionMethod_getGetterMap ((cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioTypeMap, var_getterMap_13155, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 267)) ;
  GALGAS_setterMap var_setterMap_13215 ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  callExtensionMethod_getSetterMap ((cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioTypeMap, var_setterMap_13215, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 268)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_13291 ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  callExtensionMethod_getInstanceMethodMap ((cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioTypeMap, var_instanceMethodMap_13291, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 269)) ;
  GALGAS_classMethodMap var_classMethodMap_13369 ;
  const GALGAS_predefinedTypeAST temp_5 = this ;
  callExtensionMethod_getClassMethodMap ((cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioTypeMap, var_classMethodMap_13369, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 270)) ;
  GALGAS_functionSignature var_addAssignArgumentList_13454 ;
  const GALGAS_predefinedTypeAST temp_6 = this ;
  callExtensionMethod_getAddAssignArgumentList ((cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioTypeMap, var_addAssignArgumentList_13454, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 271)) ;
  GALGAS_enumerationDescriptorList var_enumerationList_13556 ;
  GALGAS_string var_enumeratedTypeName_13589 ;
  const GALGAS_predefinedTypeAST temp_7 = this ;
  callExtensionMethod_getEnumerationList ((cPtr_predefinedTypeAST *) temp_7.ptr (), ioArgument_ioTypeMap, var_enumerationList_13556, var_enumeratedTypeName_13589, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 272)) ;
  {
  const GALGAS_predefinedTypeAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry joker_13681 ; // Joker input parameter
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_8.readProperty_mPredefinedTypeName (), joker_13681, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 277)) ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedTypeEntry_13772 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_enumeratedTypeName_13589.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_enumeratedTypeEntry_13772 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("predefinedTypes.galgas", 284)) ;
    }
  }
  if (kBoolFalse == test_9) {
    {
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, var_enumeratedTypeName_13589, var_enumeratedTypeEntry_13772, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 286)) ;
    }
  }
  {
  const GALGAS_predefinedTypeAST temp_10 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_10.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 295)), GALGAS_bool (false), var_getterMap_13155, var_setterMap_13215, var_instanceMethodMap_13291, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 289)) ;
  }
  const GALGAS_predefinedTypeAST temp_11 = this ;
  const GALGAS_predefinedTypeAST temp_12 = this ;
  const GALGAS_predefinedTypeAST temp_13 = this ;
  const GALGAS_predefinedTypeAST temp_14 = this ;
  const GALGAS_predefinedTypeAST temp_15 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14358 = GALGAS_unifiedTypeDefinition::constructor_new (GALGAS_lstring::constructor_new (temp_11.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 304)), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("predefinedTypes.galgas", 307)), GALGAS_typeKindEnum::constructor_predefinedType (SOURCE_FILE ("predefinedTypes.galgas", 308)), GALGAS_bool (kIsEqual, temp_13.readProperty_mPredefinedTypeName ().objectCompare (GALGAS_string ("stringset"))), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 310)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("predefinedTypes.galgas", 311)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 312)), var_constructorMap_13090, var_getterMap_13155, var_setterMap_13215, var_instanceMethodMap_13291, var_classMethodMap_13369, var_optionalMethodMap_13012, var_enumerationList_13556, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_14.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 320)), var_addAssignArgumentList_13454, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("predefinedTypes.galgas", 322)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 323)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 324)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 325)), GALGAS_bool (false), var_enumeratedTypeEntry_13772, extensionGetter_defaultConstructorName (temp_15.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 328)), GALGAS_string ("galgas2/predefined-types"), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("predefinedTypes.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 303)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14358.readProperty_mTypeName (), var_typeDefinition_14358, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 332)) ;
  }
}
