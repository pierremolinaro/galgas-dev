#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

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
  result += "//-- Start of generic part --*\n\n//--------------------------------- Object cloning\n  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;\n\n//--------------------------------- Object extraction\n  public: static GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " extractObject (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_object & inObject,\n               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_CONSTRUCTOR_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 12)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "//--------------------------------- GALGAS constructors\n" ;
    GALGAS_uint index_576_ (0) ;
    if (in_CONSTRUCTOR_5F_MAP.isValid ()) {
      cEnumerator_constructorMap enumerator_576 (in_CONSTRUCTOR_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_576.hasCurrentObject ()) {
        result += "  public: static class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_576.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result += " constructor_" ;
        result += enumerator_576.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result += " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_814_IDX (0) ;
        if (enumerator_576.current_mArgumentTypeList (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_814 (enumerator_576.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_814.hasCurrentObject ()) {
            result += "const class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_814.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            result += " & inOperand" ;
            result += index_814_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            if (enumerator_814.hasNextObject ()) {
              result += ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_814_IDX.increment () ;
            enumerator_814.gotoNextObject () ;
          }
        }
        const enumGalgasBool test_1 = enumerator_576.current_mHasCompilerArgument (HERE).operator_and (GALGAS_bool (kIsStrictSup, enumerator_576.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result += "class Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result += "COMMA_LOCATION_ARGS) ;\n\n" ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = enumerator_576.current_mHasCompilerArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "Compiler * inCompiler\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result += "COMMA_LOCATION_ARGS) ;\n\n" ;
          }else if (kBoolFalse == test_2) {
            const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, enumerator_576.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              result += "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result += "COMMA_LOCATION_ARGS) ;\n\n" ;
            }else if (kBoolFalse == test_3) {
              result += "LOCATION_ARGS) ;\n\n" ;
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
    result += "//--------------------------------- Handle copy\n  public: GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " (const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inSource) ;\n  public: GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & operator = (const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inSource) ;\n\n" ;
  }else if (kBoolFalse == test_4) {
  }
  const enumGalgasBool test_5 = in_SUPPORTED_5F_OPERATORS.getter_infixShiftOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)).boolEnum () ;
  if (kBoolTrue == test_5) {
    result += "//--------------------------------- << and >> shift operators\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " left_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_uint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "class Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " left_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_bigint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "class Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " right_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_uint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "class Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " right_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_bigint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "class Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_5) {
  }
  const enumGalgasBool test_6 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 56)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result += "//--------------------------------- += operator (with expression)\n  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " inOperand,\n                                                       class Compiler * inCompiler\n                                                       COMMA_LOCATION_ARGS) ;\n\n" ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = in_SUPPORTED_5F_OPERATORS.getter_minusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 63)).boolEnum () ;
  if (kBoolTrue == test_7) {
    result += "//--------------------------------- -= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " inOperand,\n                                                        class Compiler * inCompiler\n                                                        COMMA_LOCATION_ARGS) ;\n\n" ;
  }else if (kBoolFalse == test_7) {
  }
  const enumGalgasBool test_8 = in_SUPPORTED_5F_OPERATORS.getter_mulEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)).boolEnum () ;
  if (kBoolTrue == test_8) {
    result += "//--------------------------------- *= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " inOperand,\n                                                      class Compiler * inCompiler\n                                                      COMMA_LOCATION_ARGS) ;\n\n" ;
  }else if (kBoolFalse == test_8) {
  }
  const enumGalgasBool test_9 = in_SUPPORTED_5F_OPERATORS.getter_divEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)).boolEnum () ;
  if (kBoolTrue == test_9) {
    result += "//--------------------------------- /= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " inOperand,\n                                                      class Compiler * inCompiler\n                                                      COMMA_LOCATION_ARGS) ;\n\n" ;
  }else if (kBoolFalse == test_9) {
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result += "//--------------------------------- += operator (with list of field expressions)\n  public: VIRTUAL_IN_DEBUG void addAssign_operation (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4513_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_functionSignature enumerator_4513 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4513.hasCurrentObject ()) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_4513.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue () ;
        result += " & inOperand" ;
        result += index_4513_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue () ;
        if (enumerator_4513.hasNextObject ()) {
          result += ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4513_IDX.increment () ;
        enumerator_4513.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_11 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)).boolEnum () ;
    if (kBoolTrue == test_11) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "Compiler * inCompiler" ;
    }else if (kBoolFalse == test_11) {
    }
    result += "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) ;\n" ;
  }else if (kBoolFalse == test_10) {
  }
  const enumGalgasBool test_12 = in_SUPPORTED_5F_OPERATORS.getter_infixAndOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)).boolEnum () ;
  if (kBoolTrue == test_12) {
    result += "//--------------------------------- & operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " operator_and (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_12) {
  }
  const enumGalgasBool test_13 = in_SUPPORTED_5F_OPERATORS.getter_infixOrOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 104)).boolEnum () ;
  if (kBoolTrue == test_13) {
    result += "//--------------------------------- | operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " operator_or (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_13) {
  }
  const enumGalgasBool test_14 = in_SUPPORTED_5F_OPERATORS.getter_infixXorOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 110)).boolEnum () ;
  if (kBoolTrue == test_14) {
    result += "//--------------------------------- ^ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " operator_xor (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_14) {
  }
  const enumGalgasBool test_15 = in_SUPPORTED_5F_OPERATORS.getter_prefixNotOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 116)).boolEnum () ;
  if (kBoolTrue == test_15) {
    result += "//--------------------------------- not operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " operator_not (LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_15) {
  }
  const enumGalgasBool test_16 = in_SUPPORTED_5F_OPERATORS.getter_prefixTildeOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 121)).boolEnum () ;
  if (kBoolTrue == test_16) {
    result += "//--------------------------------- ~ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " operator_tilde (LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_16) {
  }
  const enumGalgasBool test_17 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)).boolEnum () ;
  if (kBoolTrue == test_17) {
    result += "//--------------------------------- + operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " add_operation (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_17) {
  }
  const enumGalgasBool test_18 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 133)).boolEnum () ;
  if (kBoolTrue == test_18) {
    result += "//--------------------------------- &+ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " add_operation_no_ovf (const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand) const ;\n\n" ;
  }else if (kBoolFalse == test_18) {
  }
  const enumGalgasBool test_19 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 138)).boolEnum () ;
  if (kBoolTrue == test_19) {
    result += "//--------------------------------- &- operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " substract_operation_no_ovf (const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand) const ;\n\n" ;
  }else if (kBoolFalse == test_19) {
  }
  const enumGalgasBool test_20 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 143)).boolEnum () ;
  if (kBoolTrue == test_20) {
    result += "//--------------------------------- - operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " substract_operation (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_20) {
  }
  const enumGalgasBool test_21 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 150)).boolEnum () ;
  if (kBoolTrue == test_21) {
    result += "//--------------------------------- * operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " multiply_operation (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_21) {
  }
  const enumGalgasBool test_22 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 157)).boolEnum () ;
  if (kBoolTrue == test_22) {
    result += "//--------------------------------- &* operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " multiply_operation_no_ovf (const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand) const ;\n\n" ;
  }else if (kBoolFalse == test_22) {
  }
  const enumGalgasBool test_23 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 162)).boolEnum () ;
  if (kBoolTrue == test_23) {
    result += "//--------------------------------- / operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " divide_operation (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_23) {
  }
  const enumGalgasBool test_24 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 169)).boolEnum () ;
  if (kBoolTrue == test_24) {
    result += "//--------------------------------- &/ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " divide_operation_no_ovf (const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand) const ;\n\n" ;
  }else if (kBoolFalse == test_24) {
  }
  const enumGalgasBool test_25 = in_SUPPORTED_5F_OPERATORS.getter_infixModOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 174)).boolEnum () ;
  if (kBoolTrue == test_25) {
    result += "//--------------------------------- mod operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " modulo_operation (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_25) {
  }
  const enumGalgasBool test_26 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 181)).boolEnum () ;
  if (kBoolTrue == test_26) {
    result += "//--------------------------------- prefix - operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " operator_unary_minus (" ;
    columnMarker = result.currentColumn () ;
    result += "Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) const ;\n\n" ;
  }else if (kBoolFalse == test_26) {
  }
  const enumGalgasBool test_27 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 187)).boolEnum () ;
  if (kBoolTrue == test_27) {
    result += "//--------------------------------- prefix &- operator\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " operator_unary_minus_no_ovf (void) const ;\n\n" ;
  }else if (kBoolFalse == test_27) {
  }
  const enumGalgasBool test_28 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 192)).boolEnum () ;
  if (kBoolTrue == test_28) {
    result += "//--------------------------------- ++, -- operators\n  public: VIRTUAL_IN_DEBUG void increment_operation (" ;
    columnMarker = result.currentColumn () ;
    result += "Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) ;\n\n  public: VIRTUAL_IN_DEBUG void decrement_operation (" ;
    columnMarker = result.currentColumn () ;
    result += "Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) ;\n\n" ;
  }else if (kBoolFalse == test_28) {
  }
  const enumGalgasBool test_29 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 199)).boolEnum () ;
  if (kBoolTrue == test_29) {
    result += "//--------------------------------- &++, &-- operators\n  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;\n\n  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;\n\n" ;
  }else if (kBoolFalse == test_29) {
  }
  const enumGalgasBool test_30 = in_SUPPORTED_5F_OPERATORS.getter_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 204)).boolEnum () ;
  if (kBoolTrue == test_30) {
    result += "//--------------------------------- Implementation of getter 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n" ;
  }else if (kBoolFalse == test_30) {
  }
  const enumGalgasBool test_31 = in_SUPPORTED_5F_OPERATORS.getter_doNotGenererateObjectCompare (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).boolEnum () ;
  if (kBoolTrue == test_31) {
    result += "//--------------------------------- Comparison\n  public: typeComparisonResult objectCompare (const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inOperand) const ;\n" ;
  }else if (kBoolFalse == test_31) {
  }
  result += "\n//--------------------------------- Setters\n" ;
  GALGAS_uint index_10310_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    cEnumerator_setterMap enumerator_10310 (in_MODIFIER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_10310.hasCurrentObject ()) {
      const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, enumerator_10310.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 220)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        const enumGalgasBool test_33 = GALGAS_bool (kIsEqual, enumerator_10310.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_10310.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))).operator_or (GALGAS_bool (kIsEqual, enumerator_10310.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).operator_or (GALGAS_bool (kIsEqual, enumerator_10310.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).boolEnum () ;
        if (kBoolTrue == test_33) {
          result += "  public: VIRTUAL_IN_DEBUG void setter_" ;
          result += enumerator_10310.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 222)).stringValue () ;
          result += " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_10758_IDX (0) ;
          if (enumerator_10310.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_10758 (enumerator_10310.current_mParameterList (HERE), kENUMERATION_UP) ;
            while (enumerator_10758.hasCurrentObject ()) {
              const enumGalgasBool test_34 = GALGAS_bool (kIsEqual, enumerator_10758.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 224)))).boolEnum () ;
              if (kBoolTrue == test_34) {
                result += "class GALGAS_" ;
                result += extensionGetter_identifierRepresentation (enumerator_10758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue () ;
                result += " constinArgument" ;
                result += index_10758_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue () ;
              }else if (kBoolFalse == test_34) {
                const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_10758.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 226)))).boolEnum () ;
                if (kBoolTrue == test_35) {
                  result += "class GALGAS_" ;
                  result += extensionGetter_identifierRepresentation (enumerator_10758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue () ;
                  result += " & ioArgument" ;
                  result += index_10758_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue () ;
                }else if (kBoolFalse == test_35) {
                  const enumGalgasBool test_36 = GALGAS_bool (kIsEqual, enumerator_10758.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 228)))).boolEnum () ;
                  if (kBoolTrue == test_36) {
                    result += "class GALGAS_" ;
                    result += extensionGetter_identifierRepresentation (enumerator_10758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue () ;
                    result += " & outArgument" ;
                    result += index_10758_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue () ;
                  }else if (kBoolFalse == test_36) {
                    result += "class GALGAS_" ;
                    result += extensionGetter_identifierRepresentation (enumerator_10758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue () ;
                    result += " inArgument" ;
                    result += index_10758_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue () ;
                  }
                }
              }
              if (enumerator_10758.hasNextObject ()) {
                result += ",\n" ;
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
              result += "Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result += "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_38) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result += "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_37) {
            const enumGalgasBool test_39 = enumerator_10310.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_39) {
              result += ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result += "Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result += "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_39) {
              result += "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result += "COMMA_LOCATION_ARGS" ;
            }
          }
          result += ") ;\n\n" ;
        }else if (kBoolFalse == test_33) {
        }
      }else if (kBoolFalse == test_32) {
      }
      index_10310_.increment () ;
      enumerator_10310.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------- Instance Methods\n" ;
  GALGAS_uint index_12153_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_12153 (in_INSTANCE_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_12153.hasCurrentObject ()) {
      const enumGalgasBool test_40 = GALGAS_bool (kIsEqual, enumerator_12153.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 258)))).boolEnum () ;
      if (kBoolTrue == test_40) {
        const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, enumerator_12153.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_12153.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))).operator_or (GALGAS_bool (kIsEqual, enumerator_12153.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).operator_or (GALGAS_bool (kIsEqual, enumerator_12153.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).boolEnum () ;
        if (kBoolTrue == test_41) {
          result += "  public: VIRTUAL_IN_DEBUG void method_" ;
          result += enumerator_12153.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 260)).stringValue () ;
          result += " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_12601_IDX (0) ;
          if (enumerator_12153.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_12601 (enumerator_12153.current_mParameterList (HERE), kENUMERATION_UP) ;
            while (enumerator_12601.hasCurrentObject ()) {
              const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, enumerator_12601.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 262)))).boolEnum () ;
              if (kBoolTrue == test_42) {
                result += "class GALGAS_" ;
                result += extensionGetter_identifierRepresentation (enumerator_12601.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue () ;
                result += " constinArgument" ;
                result += index_12601_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue () ;
              }else if (kBoolFalse == test_42) {
                const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, enumerator_12601.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 264)))).boolEnum () ;
                if (kBoolTrue == test_43) {
                  result += "class GALGAS_" ;
                  result += extensionGetter_identifierRepresentation (enumerator_12601.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue () ;
                  result += " & ioArgument" ;
                  result += index_12601_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue () ;
                }else if (kBoolFalse == test_43) {
                  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, enumerator_12601.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 266)))).boolEnum () ;
                  if (kBoolTrue == test_44) {
                    result += "class GALGAS_" ;
                    result += extensionGetter_identifierRepresentation (enumerator_12601.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue () ;
                    result += " & outArgument" ;
                    result += index_12601_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue () ;
                  }else if (kBoolFalse == test_44) {
                    result += "class GALGAS_" ;
                    result += extensionGetter_identifierRepresentation (enumerator_12601.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue () ;
                    result += " inArgument" ;
                    result += index_12601_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue () ;
                  }
                }
              }
              if (enumerator_12601.hasNextObject ()) {
                result += ",\n" ;
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
              result += "Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result += "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_46) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result += "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_45) {
            const enumGalgasBool test_47 = enumerator_12153.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_47) {
              result += ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result += "Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result += "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_47) {
              result += "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result += "COMMA_LOCATION_ARGS" ;
            }
          }
          result += ") const ;\n\n" ;
        }else if (kBoolFalse == test_41) {
        }
      }else if (kBoolFalse == test_40) {
      }
      index_12153_.increment () ;
      enumerator_12153.gotoNextObject () ;
    }
  }
  result += "//--------------------------------- Class Methods\n" ;
  GALGAS_uint index_13943_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_classMethodMap enumerator_13943 (in_CLASS_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_13943.hasCurrentObject ()) {
      result += "  public: static void class_method_" ;
      result += enumerator_13943.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)).stringValue () ;
      result += " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_14144_IDX (0) ;
      if (enumerator_13943.current_mParameterList (HERE).isValid ()) {
        cEnumerator_formalParameterSignature enumerator_14144 (enumerator_13943.current_mParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_14144.hasCurrentObject ()) {
          const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, enumerator_14144.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 297)))).boolEnum () ;
          if (kBoolTrue == test_48) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_14144.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue () ;
            result += " constinArgument" ;
            result += index_14144_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue () ;
          }else if (kBoolFalse == test_48) {
            const enumGalgasBool test_49 = GALGAS_bool (kIsEqual, enumerator_14144.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 299)))).boolEnum () ;
            if (kBoolTrue == test_49) {
              result += "class GALGAS_" ;
              result += extensionGetter_identifierRepresentation (enumerator_14144.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue () ;
              result += " & ioArgument" ;
              result += index_14144_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue () ;
            }else if (kBoolFalse == test_49) {
              const enumGalgasBool test_50 = GALGAS_bool (kIsEqual, enumerator_14144.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 301)))).boolEnum () ;
              if (kBoolTrue == test_50) {
                result += "class GALGAS_" ;
                result += extensionGetter_identifierRepresentation (enumerator_14144.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue () ;
                result += " & outArgument" ;
                result += index_14144_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue () ;
              }else if (kBoolFalse == test_50) {
                result += "class GALGAS_" ;
                result += extensionGetter_identifierRepresentation (enumerator_14144.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue () ;
                result += " inArgument" ;
                result += index_14144_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue () ;
              }
            }
          }
          if (enumerator_14144.hasNextObject ()) {
            result += ",\n" ;
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
          result += "Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result += "COMMA_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_52) {
          result.appendSpacesUntilColumn (columnMarker) ;
          result += "LOCATION_ARGS" ;
        }
      }else if (kBoolFalse == test_51) {
        const enumGalgasBool test_53 = enumerator_13943.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_53) {
          result += ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result += "Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result += "COMMA_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_53) {
          result += "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result += "COMMA_LOCATION_ARGS" ;
        }
      }
      result += ") ;\n\n" ;
      index_13943_.increment () ;
      enumerator_13943.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------- Getters\n" ;
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
              result += "  public: VIRTUAL_IN_DEBUG class GALGAS_" ;
              result += extensionGetter_identifierRepresentation (enumerator_15396.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 334)).stringValue () ;
              result += " getter_" ;
              result += enumerator_15396.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 334)).stringValue () ;
              result += " (" ;
              columnMarker = result.currentColumn () ;
              GALGAS_uint index_15920_IDX (0) ;
              if (enumerator_15396.current_mArgumentTypeList (HERE).isValid ()) {
                cEnumerator_functionSignature enumerator_15920 (enumerator_15396.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
                while (enumerator_15920.hasCurrentObject ()) {
                  result += "const class GALGAS_" ;
                  result += extensionGetter_identifierRepresentation (enumerator_15920.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 336)).stringValue () ;
                  result += " & constinOperand" ;
                  result += index_15920_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 336)).stringValue () ;
                  if (enumerator_15920.hasNextObject ()) {
                    result += ",\n" ;
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
                  result += "Compiler * inCompiler\n" ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result += "COMMA_LOCATION_ARGS" ;
                }else if (kBoolFalse == test_57) {
                  result += "LOCATION_ARGS" ;
                }
              }else if (kBoolFalse == test_56) {
                const enumGalgasBool test_58 = enumerator_15396.current_mHasCompilerArgument (HERE).boolEnum () ;
                if (kBoolTrue == test_58) {
                  result += ",\n" ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result += "Compiler * inCompiler\n" ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result += "COMMA_LOCATION_ARGS" ;
                }else if (kBoolFalse == test_58) {
                  result += "\n" ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result += "COMMA_LOCATION_ARGS" ;
                }
              }
              result += ") const ;\n\n" ;
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
  result += "\n//--------------------------------- Optional Methods\n" ;
  GALGAS_uint index_16638_ (0) ;
  if (in_OPTIONAL_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_optionalMethodMap enumerator_16638 (in_OPTIONAL_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_16638.hasCurrentObject ()) {
      result += "  public: VIRTUAL_IN_DEBUG bool optional_" ;
      result += enumerator_16638.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 362)).stringValue () ;
      result += " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_16843_IDX (0) ;
      if (enumerator_16638.current_mArgumentTypeList (HERE).isValid ()) {
        cEnumerator_optionalMethodSignature enumerator_16843 (enumerator_16638.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_16843.hasCurrentObject ()) {
          const enumGalgasBool test_59 = enumerator_16843.current_mInputArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_59) {
            result += "const class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_16843.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 366)).stringValue () ;
            result += " & constinOperand" ;
            result += index_16843_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 366)).stringValue () ;
          }else if (kBoolFalse == test_59) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_16843.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 368)).stringValue () ;
            result += " & outOperand" ;
            result += index_16843_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 368)).stringValue () ;
          }
          if (enumerator_16843.hasNextObject ()) {
            result += ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_16843_IDX.increment () ;
          enumerator_16843.gotoNextObject () ;
        }
      }
      result += ") const ;\n\n" ;
      index_16638_.increment () ;
      enumerator_16638.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------- Introspection\n  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;\n" ;
  const enumGalgasBool test_60 = in_SUPPORTED_5F_OPERATORS.getter_generateEnumerationHelperMethods (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 380)).boolEnum () ;
  if (kBoolTrue == test_60) {
    result += "//--------------------------------- Enumeration helper methods\n  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;\n\n" ;
  }else if (kBoolFalse == test_60) {
  }
  const enumGalgasBool test_61 = in_SUPPORTED_5F_OPERATORS.getter_supportWithAccessor (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 386)).boolEnum () ;
  if (kBoolTrue == test_61) {
    result += "  public: VIRTUAL_IN_DEBUG cMapElement_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " * readWriteAccessForWithInstruction (" ;
    columnMarker = result.currentColumn () ;
    result += "Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const GALGAS_string & inKey\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) ;\n\n" ;
  }else if (kBoolFalse == test_61) {
  }
  const enumGalgasBool test_62 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 392)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_62) {
    result += "//--------------------------------- Friend\n\n  friend class cEnumerator_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " ;\n" ;
  }else if (kBoolFalse == test_62) {
  }
  result += " \n} ; // End of GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " class\n\n" ;
  const enumGalgasBool test_63 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 399)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_63) {
    result += "//--------------------------------------------------------------------------------------------------\n//   Enumerator declaration                                                                      \n//--------------------------------------------------------------------------------------------------\n\nclass cEnumerator_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " : public cGenericAbstractEnumerator {\n  public: cEnumerator_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " (" ;
    columnMarker = result.currentColumn () ;
    result += "const GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " & inEnumeratedObject,\n     " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const typeEnumerationOrder inOrder) ;\n\n//--- Current element access\n" ;
    GALGAS_uint index_18701_ (0) ;
    if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
      cEnumerator_enumerationDescriptorList enumerator_18701 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_18701.hasCurrentObject ()) {
        result += "  public: class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_18701.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 410)).stringValue () ;
        result += " current_" ;
        result += enumerator_18701.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 410)).stringValue () ;
        result += " (LOCATION_ARGS) const ;\n" ;
        index_18701_.increment () ;
        enumerator_18701.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_64 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 412)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 412)).boolEnum () ;
    if (kBoolTrue == test_64) {
      result += "//--- Current element access\n  public: class GALGAS_" ;
      result += extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 414)).stringValue () ;
      result += " current (LOCATION_ARGS) const ;\n" ;
    }else if (kBoolFalse == test_64) {
    }
    result += "} ;\n" ;
  }else if (kBoolFalse == test_63) {
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n\nextern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//     " ;
  result += GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" generic code implementation"), inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor\nkTypeDescriptor_GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "\"" ;
  result += in_TYPE_5F_NAME.stringValue () ;
  result += "\",\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  const enumGalgasBool test_0 = in_SUPER_5F_TYPE_5F_INDEX.getter_isNull (SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "nullptr" ;
  }else if (kBoolFalse == test_0) {
    result += "& kTypeDescriptor_GALGAS_" ;
    result += extensionGetter_identifierRepresentation (in_SUPER_5F_TYPE_5F_INDEX, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).stringValue () ;
  }
  result += ") ;\n\n//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::staticTypeDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nAC_GALGAS_root * GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::clonedObject (void) const {\n  AC_GALGAS_root * result = nullptr ;\n  if (isValid ()) {\n    macroMyNew (result, GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (*this)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::extractObject (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_object & inObject,\n               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " *) inObject.embeddedObject () ;\n  if (nullptr != p) {\n    if (nullptr != dynamic_cast <const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " *> (p)) {\n      result = *p ;\n    }else{\n      inCompiler->castError (\"" ;
  result += in_TYPE_5F_NAME.stringValue () ;
  result += "\", p->dynamicTypeDescriptor () COMMA_THERE) ;\n    }  \n  }\n  return result ;\n}\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" extern type"), inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n//  Predeclarations (from GALGAS extern type declaration\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_PRE_5F_DECLARATION.stringValue () ;
  result += "\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n\n//---\n  public: virtual bool isValid (void) const override ;\n  public: virtual void drop (void) override ;\n\n//--- For log instruction\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--- Code (from GALGAS extern type declaration)\n" ;
  result += in_CODE.stringValue () ;
  result += "\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public AC_GALGAS_graph {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) :\nAC_GALGAS_graph () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::constructor_emptyGraph (LOCATION_ARGS) {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  result.makeNewEmptyGraph (THERE) ;\n  return result ;\n}\n\n" ;
  GALGAS_uint index_697_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    cEnumerator_graphInsertModifierList enumerator_697 (in_INSERT_5F_MODIFIER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_697.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::setter_" ;
      result += enumerator_697.current_mInsertModifierName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue () ;
      result += " (" ;
      columnMarker = result.currentColumn () ;
      result += "GALGAS_lstring inKey" ;
      GALGAS_uint index_1052_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).readProperty_mAddAssignOperatorArguments ().isValid ()) {
        cEnumerator_functionSignature enumerator_1052 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).readProperty_mAddAssignOperatorArguments (), kENUMERATION_UP) ;
        while (enumerator_1052.hasCurrentObject ()) {
          result += ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result += "GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_1052.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          result += " inArgument_" ;
          result += index_1052_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          index_1052_IDX.increment () ;
          enumerator_1052.gotoNextObject () ;
        }
      }
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "Compiler * inCompiler\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  GALGAS_" ;
      result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 29)).stringValue () ;
      result += "::makeAttributesFromObjects (attributes" ;
      GALGAS_uint index_1492_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).readProperty_mAddAssignOperatorArguments ().isValid ()) {
        cEnumerator_functionSignature enumerator_1492 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).readProperty_mAddAssignOperatorArguments (), kENUMERATION_UP) ;
        while (enumerator_1492.hasCurrentObject ()) {
          result += ", inArgument_" ;
          result += index_1492_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).stringValue () ;
          index_1492_IDX.increment () ;
          enumerator_1492.gotoNextObject () ;
        }
      }
      result += " COMMA_THERE) ;\n  const char * kErrorMessage = " ;
      result += enumerator_697.current_mInsertErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 34)).stringValue () ;
      result += " ;\n  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;\n}\n\n" ;
      index_697_.increment () ;
      enumerator_697.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::method_topologicalSort (" ;
  columnMarker = result.currentColumn () ;
  result += "GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 43)).stringValue () ;
  result += " & outSortedList,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "GALGAS_lstringlist & outSortedKeyList,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 45)).stringValue () ;
  result += " & outUnsortedList,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "GALGAS_lstringlist & outUnsortedKeyList,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray sortedList ;\n  capCollectionElementArray unsortedList ;\n  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 52)).stringValue () ;
  result += " (sortedList) ;\n  outUnsortedList = GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 53)).stringValue () ;
  result += " (unsortedList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::method_depthFirstTopologicalSort (" ;
  columnMarker = result.currentColumn () ;
  result += "GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 58)).stringValue () ;
  result += " & outSortedList,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "GALGAS_lstringlist & outSortedKeyList,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 60)).stringValue () ;
  result += " & outUnsortedList,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "GALGAS_lstringlist & outUnsortedKeyList,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray sortedList ;\n  capCollectionElementArray unsortedList ;\n  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 67)).stringValue () ;
  result += " (sortedList) ;\n  outUnsortedList = GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 68)).stringValue () ;
  result += " (unsortedList) ;\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_reversedGraph (LOCATION_ARGS) const {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  result.reversedGraphFromGraph (*this COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::method_circularities (" ;
  columnMarker = result.currentColumn () ;
  result += "GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 82)).stringValue () ;
  result += " & outInfoList,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "GALGAS_lstringlist & outKeyList\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 87)).stringValue () ;
  result += " (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::method_nodesWithNoSuccessor (" ;
  columnMarker = result.currentColumn () ;
  result += "GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 92)).stringValue () ;
  result += " & outInfoList,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "GALGAS_lstringlist & outKeyList\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 97)).stringValue () ;
  result += " (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::method_nodesWithNoPredecessor (" ;
  columnMarker = result.currentColumn () ;
  result += "GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 102)).stringValue () ;
  result += " & outInfoList,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "GALGAS_lstringlist & outKeyList\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 107)).stringValue () ;
  result += " (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_subgraphFromNodes (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_lstringlist & inStartKeyList,\n                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "const GALGAS_stringset & inKeysToExclude,\n                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 123)).stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_nodeList (UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 124)).stringValue () ;
  result += " resultingList ;\n  if (isValid ()) {\n    resultingList = graph () ;\n  }\n  return resultingList ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_lstringlist GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_accessibleNodesFrom (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_lstringlist & inStartKeyList,\n                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "const GALGAS_stringset & inNodesToExclude,\n                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  GALGAS_lstringlist result ;\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " resultingGraph ;\n  subGraph (resultingGraph,\n            inStartKeyList,\n            inNodesToExclude,\n            inCompiler\n            COMMA_THERE) ;\n  if (resultingGraph.isValid ()) {\n    result = resultingGraph.getter_lkeyList (THERE) ;\n  }\n  return result ;\n}\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: inline GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) :\n  mSharedObject (nullptr) {\n  }\n\n//--------------------------------- Virtual destructor\n  public: virtual ~ GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n\n//--- Handle copy\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inObject) ;\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & operator = (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inObject) ;\n\n//--- Insulate\n  private: VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;\n\n//--- isValid\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {\n    return nullptr != mSharedObject ;\n  }\n\n//--- Drop\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--- Private attribute\n  private: cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * mSharedObject ;\n\n//--- Drop\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public C_SharedObject {\n  private: GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * mObjectArray ;\n" ;
  GALGAS_uint index_391_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_391 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_391.hasCurrentObject ()) {
      result += "  private: uint32_t mSize" ;
      result += enumerator_391.current_mValue (HERE).stringValue () ;
      result += " ;\n" ;
      index_391_.increment () ;
      enumerator_391.gotoNextObject () ;
    }
  }
  result += "\n//--- Constructor\n  public: cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_530_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_530 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_530.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const uint32_t inSize" ;
      result += enumerator_530.current_mValue (HERE).stringValue () ;
      if (enumerator_530.hasNextObject ()) {
        result += ",\n" ;
      }
      index_530_.increment () ;
      enumerator_530.gotoNextObject () ;
    }
  }
  result += "\n   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n  public: cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inPointer\n      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n//--- Destructor\n  public: virtual ~ cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n\n//--- No copy\n  private: cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " &) ;\n  private: cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & operator = (const cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " &) ;\n\n//--- Comparison\n  public: VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inOperand) const ;\n\n//--- \n" ;
  GALGAS_uint index_1146_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1146 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1146.hasCurrentObject ()) {
      result += "  public: inline uint32_t size" ;
      result += enumerator_1146.current_mValue (HERE).stringValue () ;
      result += " (void) const { return mSize" ;
      result += enumerator_1146.current_mValue (HERE).stringValue () ;
      result += " ; }\n" ;
      index_1146_.increment () ;
      enumerator_1146.gotoNextObject () ;
    }
  }
  result += "\n\n  public: VIRTUAL_IN_DEBUG GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " objectAtAbsoluteIndex (const int32_t inIndex) const ;\n\n  public: VIRTUAL_IN_DEBUG void setObjectAtAbsoluteIndex (const GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inObject,\n                                                           const int32_t inIndex) ;\n\n//--- \n  public: VIRTUAL_IN_DEBUG int32_t indexForIndexes (" ;
  GALGAS_uint index_1655_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1655 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_1655 = enumerator_1655.hasCurrentObject () ;
    if (nonEmpty_enumerator_1655) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_1655.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const uint32_t inSize" ;
      result += enumerator_1655.current_mValue (HERE).stringValue () ;
      result += ",\n" ;
      index_1655_.increment () ;
      enumerator_1655.gotoNextObject () ;
    }
  }
  result += " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const ;\n\n//--- \n  public: VIRTUAL_IN_DEBUG void setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1849_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1849 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1849.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const uint32_t inSize" ;
      result += enumerator_1849.current_mValue (HERE).stringValue () ;
      if (enumerator_1849.hasNextObject ()) {
        result += ",\n" ;
      }
      index_1849_.increment () ;
      enumerator_1849.gotoNextObject () ;
    }
  }
  result += "\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  GALGAS_uint index_2126_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2126 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2126.hasCurrentObject ()) {
      result += "const uint32_t inSize" ;
      result += enumerator_2126.current_mValue (HERE).stringValue () ;
      if (enumerator_2126.hasNextObject ()) {
        result += ",\n                                                      " ;
      }
      index_2126_.increment () ;
      enumerator_2126.gotoNextObject () ;
    }
  }
  result += "    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) :\nC_SharedObject (THERE),\nmObjectArray (nullptr),\n" ;
  GALGAS_uint index_2349_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2349 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2349.hasCurrentObject ()) {
      result += "mSize" ;
      result += enumerator_2349.current_mValue (HERE).stringValue () ;
      result += " (inSize" ;
      result += enumerator_2349.current_mValue (HERE).stringValue () ;
      result += ")" ;
      if (enumerator_2349.hasNextObject ()) {
        result += ",\n" ;
      }
      index_2349_.increment () ;
      enumerator_2349.gotoNextObject () ;
    }
  }
  result += " {\n  macroMyNewArray (mObjectArray, GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ", " ;
  GALGAS_uint index_2514_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2514 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2514.hasCurrentObject ()) {
      result += " inSize" ;
      result += enumerator_2514.current_mValue (HERE).stringValue () ;
      if (enumerator_2514.hasNextObject ()) {
        result += " * " ;
      }
      index_2514_.increment () ;
      enumerator_2514.gotoNextObject () ;
    }
  }
  result += ") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inPointer\n    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) :\nC_SharedObject (THERE),\nmObjectArray (nullptr),\n" ;
  GALGAS_uint index_2872_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2872 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2872.hasCurrentObject ()) {
      result += "mSize" ;
      result += enumerator_2872.current_mValue (HERE).stringValue () ;
      result += " (inPointer->size" ;
      result += enumerator_2872.current_mValue (HERE).stringValue () ;
      result += " ())" ;
      if (enumerator_2872.hasNextObject ()) {
        result += ",\n" ;
      }
      index_2872_.increment () ;
      enumerator_2872.gotoNextObject () ;
    }
  }
  result += " {\n  const uint32_t size = " ;
  GALGAS_uint index_3005_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3005 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3005.hasCurrentObject ()) {
      result += "mSize" ;
      result += enumerator_3005.current_mValue (HERE).stringValue () ;
      if (enumerator_3005.hasNextObject ()) {
        result += " * " ;
      }
      index_3005_.increment () ;
      enumerator_3005.gotoNextObject () ;
    }
  }
  result += " ;\n  macroMyNewArray (mObjectArray, GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ", size) ;\n  for (uint32_t i=0 ; i<size ; i++) {\n    mObjectArray [i] = inPointer->mObjectArray [i] ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic inline uint32_t " ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_computeIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_3413_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3413 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3413.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const uint32_t inIndex" ;
      result += enumerator_3413.current_mValue (HERE).stringValue () ;
      if (enumerator_3413.hasNextObject ()) {
        result += ",\n" ;
      }
      index_3413_.increment () ;
      enumerator_3413.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3524_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)).isValid ()) {
    cEnumerator_stringlist enumerator_3524 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)), kENUMERATION_UP) ;
    while (enumerator_3524.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const uint32_t inSize" ;
      result += enumerator_3524.current_mValue (HERE).stringValue () ;
      index_3524_.increment () ;
      enumerator_3524.gotoNextObject () ;
    }
  }
  result += ") {\n  uint32_t idx = inIndex0 ;\n" ;
  GALGAS_uint index_3657_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)).isValid ()) {
    cEnumerator_stringlist enumerator_3657 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)), kENUMERATION_UP) ;
    while (enumerator_3657.hasCurrentObject ()) {
      result += "  idx *= inSize" ;
      result += enumerator_3657.current_mValue (HERE).stringValue () ;
      result += " ;\n  idx += inIndex" ;
      result += enumerator_3657.current_mValue (HERE).stringValue () ;
      result += " ;\n" ;
      index_3657_.increment () ;
      enumerator_3657.gotoNextObject () ;
    }
  }
  result += "  return idx ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nint32_t cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_3935_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3935 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3935.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const uint32_t inIndex" ;
      result += enumerator_3935.current_mValue (HERE).stringValue () ;
      result += ",\n" ;
      index_3935_.increment () ;
      enumerator_3935.gotoNextObject () ;
    }
  }
  result += "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  int32_t result = -1 ;\n  " ;
  GALGAS_uint index_4105_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4105 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4105.hasCurrentObject ()) {
      result += "if (inIndex" ;
      result += enumerator_4105.current_mValue (HERE).stringValue () ;
      result += " >= size" ;
      result += enumerator_4105.current_mValue (HERE).stringValue () ;
      result += " ()) {\n    String s ;\n    s += \"array index " ;
      result += enumerator_4105.current_mValue (HERE).stringValue () ;
      result += " : \" ;\n    s.appendUnsigned (inIndex" ;
      result += enumerator_4105.current_mValue (HERE).stringValue () ;
      result += ") ;\n    s += \" >= size \" ;\n    s.appendUnsigned (size" ;
      result += enumerator_4105.current_mValue (HERE).stringValue () ;
      result += " ()) ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
      if (enumerator_4105.hasNextObject ()) {
        result += "  }else " ;
      }
      index_4105_.increment () ;
      enumerator_4105.gotoNextObject () ;
    }
  }
  result += "  }else{\n    result = (int32_t) " ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_computeIndex (" ;
  GALGAS_uint index_4492_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4492 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4492.hasCurrentObject ()) {
      result += "inIndex" ;
      result += enumerator_4492.current_mValue (HERE).stringValue () ;
      if (enumerator_4492.hasNextObject ()) {
        result += ", " ;
      }
      index_4492_.increment () ;
      enumerator_4492.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4582_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 142)).isValid ()) {
    cEnumerator_stringlist enumerator_4582 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 142)), kENUMERATION_UP) ;
    while (enumerator_4582.hasCurrentObject ()) {
      result += ", size" ;
      result += enumerator_4582.current_mValue (HERE).stringValue () ;
      result += " ()" ;
      index_4582_.increment () ;
      enumerator_4582.gotoNextObject () ;
    }
  }
  result += ") ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::objectAtAbsoluteIndex (const int32_t inIndex) const {\n  return mObjectArray [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::setObjectAtAbsoluteIndex (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inObject,\n       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "const int32_t inIndex) {\n  mObjectArray [inIndex] = inObject ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::~ cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) {\n  macroMyDeleteArray (mObjectArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5562_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5562 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5562.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const uint32_t inSize" ;
      result += enumerator_5562.current_mValue (HERE).stringValue () ;
      if (enumerator_5562.hasNextObject ()) {
        result += ",\n" ;
      }
      index_5562_.increment () ;
      enumerator_5562.gotoNextObject () ;
    }
  }
  result += "      \n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = nullptr ;\n  macroMyNewArrayThere (p, GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ", " ;
  GALGAS_uint index_5799_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5799 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5799.hasCurrentObject ()) {
      result += "inSize" ;
      result += enumerator_5799.current_mValue (HERE).stringValue () ;
      if (enumerator_5799.hasNextObject ()) {
        result += " * " ;
      }
      index_5799_.increment () ;
      enumerator_5799.gotoNextObject () ;
    }
  }
  result += ") ;\n" ;
  GALGAS_uint index_5874_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5874 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5874.hasCurrentObject ()) {
      result += "  uint32_t min" ;
      result += enumerator_5874.current_mValue (HERE).stringValue () ;
      result += " = uimin32 (size" ;
      result += enumerator_5874.current_mValue (HERE).stringValue () ;
      result += " (), inSize" ;
      result += enumerator_5874.current_mValue (HERE).stringValue () ;
      result += ") ;\n" ;
      index_5874_.increment () ;
      enumerator_5874.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5988_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5988 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5988.hasCurrentObject ()) {
      result += "  for (uint32_t i" ;
      result += enumerator_5988.current_mValue (HERE).stringValue () ;
      result += "=0 ; i" ;
      result += enumerator_5988.current_mValue (HERE).stringValue () ;
      result += "<min" ;
      result += enumerator_5988.current_mValue (HERE).stringValue () ;
      result += " ; i" ;
      result += enumerator_5988.current_mValue (HERE).stringValue () ;
      result += "++) {\n" ;
      index_5988_.increment () ;
      enumerator_5988.gotoNextObject () ;
    }
  }
  result += "        const uint32_t idxSource = " ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_computeIndex (" ;
  GALGAS_uint index_6173_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6173 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6173.hasCurrentObject ()) {
      result += "i" ;
      result += enumerator_6173.current_mValue (HERE).stringValue () ;
      if (enumerator_6173.hasNextObject ()) {
        result += ", " ;
      }
      index_6173_.increment () ;
      enumerator_6173.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6257_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 183)).isValid ()) {
    cEnumerator_stringlist enumerator_6257 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 183)), kENUMERATION_UP) ;
    while (enumerator_6257.hasCurrentObject ()) {
      result += ", size" ;
      result += enumerator_6257.current_mValue (HERE).stringValue () ;
      result += " ()" ;
      index_6257_.increment () ;
      enumerator_6257.gotoNextObject () ;
    }
  }
  result += ") ;\n        const uint32_t idxTarget = " ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_computeIndex (" ;
  GALGAS_uint index_6390_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6390 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6390.hasCurrentObject ()) {
      result += "i" ;
      result += enumerator_6390.current_mValue (HERE).stringValue () ;
      if (enumerator_6390.hasNextObject ()) {
        result += ", " ;
      }
      index_6390_.increment () ;
      enumerator_6390.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6474_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 184)).isValid ()) {
    cEnumerator_stringlist enumerator_6474 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 184)), kENUMERATION_UP) ;
    while (enumerator_6474.hasCurrentObject ()) {
      result += ", inSize" ;
      result += enumerator_6474.current_mValue (HERE).stringValue () ;
      index_6474_.increment () ;
      enumerator_6474.gotoNextObject () ;
    }
  }
  result += ") ;\n        p [idxTarget] = mObjectArray [idxSource] ;\n" ;
  GALGAS_uint index_6588_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6588 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6588.hasCurrentObject ()) {
      result += "  }\n" ;
      index_6588_.increment () ;
      enumerator_6588.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6634_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6634 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6634.hasCurrentObject ()) {
      result += "  mSize" ;
      result += enumerator_6634.current_mValue (HERE).stringValue () ;
      result += " = inSize" ;
      result += enumerator_6634.current_mValue (HERE).stringValue () ;
      result += " ;\n" ;
      index_6634_.increment () ;
      enumerator_6634.gotoNextObject () ;
    }
  }
  result += "  macroMyDeleteArray (mObjectArray) ;\n  mObjectArray = p ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::~ GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) {\n  macroDetachSharedObject (mSharedObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::drop (void) {\n  macroDetachSharedObject (mSharedObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSourceObject) :\nAC_GALGAS_root (),\nmSharedObject (nullptr) {\n  macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::operator = (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSourceObject) {\n  if (this != & inSourceObject) {\n    macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n  }\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::constructor_new (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8046_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8046 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8046.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_uint & inSize" ;
      result += enumerator_8046.current_mValue (HERE).stringValue () ;
      if (enumerator_8046.hasNextObject ()) {
        result += ",\n" ;
      }
      index_8046_.increment () ;
      enumerator_8046.gotoNextObject () ;
    }
  }
  result += "\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  if (" ;
  GALGAS_uint index_8213_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8213 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8213.hasCurrentObject ()) {
      result += "inSize" ;
      result += enumerator_8213.current_mValue (HERE).stringValue () ;
      result += ".isValid ()" ;
      if (enumerator_8213.hasNextObject ()) {
        result += " && " ;
      }
      index_8213_.increment () ;
      enumerator_8213.gotoNextObject () ;
    }
  }
  result += ") {\n    macroMyNew (result.mSharedObject, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  GALGAS_uint index_8365_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8365 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8365.hasCurrentObject ()) {
      result += "inSize" ;
      result += enumerator_8365.current_mValue (HERE).stringValue () ;
      result += ".uintValue ()" ;
      if (enumerator_8365.hasNextObject ()) {
        result += ", " ;
      }
      index_8365_.increment () ;
      enumerator_8365.gotoNextObject () ;
    }
  }
  result += " COMMA_THERE)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::description (" ;
  columnMarker = result.currentColumn () ;
  result += "String & ioString,\n       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "const int32_t /* inIndentation */) const {\n  ioString += \"<@ptrint:\" ;\n  if (nullptr == mSharedObject) {\n    ioString += \"NULL\" ;\n  }else{\n    macroValidSharedObject (mSharedObject, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n    ioString += \"array [\" ;\n" ;
  GALGAS_uint index_8911_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8911 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8911.hasCurrentObject ()) {
      result += "    ioString.appendUnsigned (mSharedObject->size" ;
      result += enumerator_8911.current_mValue (HERE).stringValue () ;
      result += " ())\n" ;
      if (enumerator_8911.hasNextObject ()) {
        result += "    ioString += \", \"" ;
      }
      index_8911_.increment () ;
      enumerator_8911.gotoNextObject () ;
    }
  }
  result += "    ioString += \"] of @uint\" ;\n  }\n  ioString += \">\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_uint GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_axisCount (UNUSED_LOCATION_ARGS) const {\n  GALGAS_uint result ;\n  if (isValid ()) {\n    result = GALGAS_uint (" ;
  result += in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 266)).stringValue () ;
  result += ") ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_range GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_rangeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_uint & inAxisIndex,\n               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  GALGAS_range result ;\n  if (isValid () && inAxisIndex.isValid ()) {\n    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n    if (axisIndex >= " ;
  result += in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 279)).stringValue () ;
  result += ") {\n      String s ;\n      s << \"getter @ptrint sizeForAxis: argument >= dimension\" ;\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
  GALGAS_uint index_10017_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_10017 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10017.hasCurrentObject ()) {
      result += "    }else if (" ;
      result += enumerator_10017.current_mValue (HERE).stringValue () ;
      result += " == axisIndex) {\n      result = GALGAS_range (GALGAS_uint (0), GALGAS_uint (mSharedObject->size" ;
      result += enumerator_10017.current_mValue (HERE).stringValue () ;
      result += " ())) ;\n" ;
      index_10017_.increment () ;
      enumerator_10017.gotoNextObject () ;
    }
  }
  result += "    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_uint GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_sizeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_uint & inAxisIndex,\n               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  GALGAS_uint result ;\n  if (isValid () && inAxisIndex.isValid ()) {\n    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n    if (axisIndex >= " ;
  result += in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 300)).stringValue () ;
  result += ") {\n      String s ;\n      s << \"getter @ptrint sizeForAxis: argument >= dimension\" ;\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
  GALGAS_uint index_10831_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_10831 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10831.hasCurrentObject ()) {
      result += "    }else if (" ;
      result += enumerator_10831.current_mValue (HERE).stringValue () ;
      result += " == axisIndex) {\n      result = GALGAS_uint (mSharedObject->size" ;
      result += enumerator_10831.current_mValue (HERE).stringValue () ;
      result += " ()) ;\n" ;
      index_10831_.increment () ;
      enumerator_10831.gotoNextObject () ;
    }
  }
  result += "    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_isValueValidAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11186_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11186 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11186.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_uint & inIndex" ;
      result += enumerator_11186.current_mValue (HERE).stringValue () ;
      result += ",\n" ;
      index_11186_.increment () ;
      enumerator_11186.gotoNextObject () ;
    }
  }
  result += "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (isValid ()" ;
  GALGAS_uint index_11375_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11375 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11375.hasCurrentObject ()) {
      result += " && inIndex" ;
      result += enumerator_11375.current_mValue (HERE).stringValue () ;
      result += ".isValid ()" ;
      index_11375_.increment () ;
      enumerator_11375.gotoNextObject () ;
    }
  }
  result += ") {\n    macroValidSharedObject (mSharedObject, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11581_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11581 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11581.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "inIndex" ;
      result += enumerator_11581.current_mValue (HERE).stringValue () ;
      result += ".uintValue (),\n" ;
      index_11581_.increment () ;
      enumerator_11581.gotoNextObject () ;
    }
  }
  result += "                                                         inCompiler\n                                                         COMMA_THERE) ;\n    if (idx >= 0) {\n      result = GALGAS_bool (mSharedObject->objectAtAbsoluteIndex (idx).isValid ()) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_valueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12122_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12122 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12122.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_uint & inIndex" ;
      result += enumerator_12122.current_mValue (HERE).stringValue () ;
      result += ",\n" ;
      index_12122_.increment () ;
      enumerator_12122.gotoNextObject () ;
    }
  }
  result += "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  if (isValid ()" ;
  GALGAS_uint index_12333_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12333 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12333.hasCurrentObject ()) {
      result += " && inIndex" ;
      result += enumerator_12333.current_mValue (HERE).stringValue () ;
      result += ".isValid ()" ;
      index_12333_.increment () ;
      enumerator_12333.gotoNextObject () ;
    }
  }
  result += ") {\n    macroValidSharedObject (mSharedObject, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12539_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12539 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12539.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "inIndex" ;
      result += enumerator_12539.current_mValue (HERE).stringValue () ;
      result += ".uintValue (),\n" ;
      index_12539_.increment () ;
      enumerator_12539.gotoNextObject () ;
    }
  }
  result += "                                                         inCompiler\n                                                         COMMA_THERE) ;\n    if (idx >= 0) {\n      result = mSharedObject->objectAtAbsoluteIndex (idx) ;\n      if (! result.isValid ()) {\n        String s ;\n        s += \"getter @ptrint valueAtIndex: object at index (\" ;\n" ;
  GALGAS_uint index_12954_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12954 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12954.hasCurrentObject ()) {
      result += "        s.appendUnsigned (mSharedObject->size" ;
      result += enumerator_12954.current_mValue (HERE).stringValue () ;
      result += " ())\n" ;
      index_12954_.increment () ;
      enumerator_12954.gotoNextObject () ;
    }
  }
  result += "        s += \") is invalid\" ;\n        inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n      }\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::insulate (LOCATION_ARGS) {\n  if (isValid () && !mSharedObject->isUniquelyReferenced ()) {\n    cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = nullptr ;\n    macroMyNew (p, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (mSharedObject COMMA_THERE)) ;\n    macroAssignSharedObject (mSharedObject, p) ;\n    macroDetachSharedObject (p) ;\n    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::setter_setValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result += "GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " inValue,\n" ;
  GALGAS_uint index_13923_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13923 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13923.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "GALGAS_uint inIndex" ;
      result += enumerator_13923.current_mValue (HERE).stringValue () ;
      result += ",\n" ;
      index_13923_.increment () ;
      enumerator_13923.gotoNextObject () ;
    }
  }
  result += "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_14106_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14106 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14106.hasCurrentObject ()) {
      result += " && inIndex" ;
      result += enumerator_14106.current_mValue (HERE).stringValue () ;
      result += ".isValid ()" ;
      index_14106_.increment () ;
      enumerator_14106.gotoNextObject () ;
    }
  }
  result += ") {\n    insulate (THERE) ;\n    macroValidSharedObject (mSharedObject, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14434_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14434 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14434.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "inIndex" ;
      result += enumerator_14434.current_mValue (HERE).stringValue () ;
      result += ".uintValue (),\n" ;
      index_14434_.increment () ;
      enumerator_14434.gotoNextObject () ;
    }
  }
  result += "                                                         inCompiler\n                                                         COMMA_THERE) ;\n    if (idx >= 0) {\n      mSharedObject->setObjectAtAbsoluteIndex (inValue, idx) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::setter_forceValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result += "GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " inValue,\n" ;
  GALGAS_uint index_14955_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14955 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14955.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_uint inIndex" ;
      result += enumerator_14955.current_mValue (HERE).stringValue () ;
      result += ",\n" ;
      index_14955_.increment () ;
      enumerator_14955.gotoNextObject () ;
    }
  }
  result += " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_15133_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15133 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15133.hasCurrentObject ()) {
      result += " && inIndex" ;
      result += enumerator_15133.current_mValue (HERE).stringValue () ;
      result += ".isValid ()" ;
      index_15133_.increment () ;
      enumerator_15133.gotoNextObject () ;
    }
  }
  result += ") {\n    insulate (THERE) ;\n    macroValidSharedObject (mSharedObject, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n  //--- Resize \?\n    const bool resize = " ;
  GALGAS_uint index_15443_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15443 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15443.hasCurrentObject ()) {
      result += "(inIndex" ;
      result += enumerator_15443.current_mValue (HERE).stringValue () ;
      result += ".uintValue () >= mSharedObject->size" ;
      result += enumerator_15443.current_mValue (HERE).stringValue () ;
      result += " ())" ;
      if (enumerator_15443.hasNextObject ()) {
        result += " || " ;
      }
      index_15443_.increment () ;
      enumerator_15443.gotoNextObject () ;
    }
  }
  result += " ;\n    if (resize) {\n" ;
  GALGAS_uint index_15588_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15588 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15588.hasCurrentObject ()) {
      result += "      const uint32_t newSize" ;
      result += enumerator_15588.current_mValue (HERE).stringValue () ;
      result += " = uimax32 (mSharedObject->size" ;
      result += enumerator_15588.current_mValue (HERE).stringValue () ;
      result += " (), inIndex" ;
      result += enumerator_15588.current_mValue (HERE).stringValue () ;
      result += ".uintValue () + 1) ;\n" ;
      index_15588_.increment () ;
      enumerator_15588.gotoNextObject () ;
    }
  }
  result += "      mSharedObject->setSize (" ;
  GALGAS_uint index_15781_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15781 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15781.hasCurrentObject ()) {
      result += "newSize" ;
      result += enumerator_15781.current_mValue (HERE).stringValue () ;
      if (enumerator_15781.hasNextObject ()) {
        result += ", " ;
      }
      index_15781_.increment () ;
      enumerator_15781.gotoNextObject () ;
    }
  }
  result += " COMMA_THERE) ;\n    }\n  //---\n    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_15939_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15939 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15939.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "inIndex" ;
      result += enumerator_15939.current_mValue (HERE).stringValue () ;
      result += ".uintValue (),\n" ;
      index_15939_.increment () ;
      enumerator_15939.gotoNextObject () ;
    }
  }
  result += "                                                         inCompiler\n                                                         COMMA_THERE) ;\n    if (idx >= 0) {\n      mSharedObject->setObjectAtAbsoluteIndex (inValue, idx) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::setter_setSizeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result += "GALGAS_uint inNewSize,\n        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "GALGAS_uint inAxisIndex,\n        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  if (isValid () && inNewSize.isValid () && inAxisIndex.isValid ()) {\n    insulate (THERE) ;\n    macroValidSharedObject (mSharedObject, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n  //--- \n    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n    if (axisIndex >= " ;
  result += in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 453)).stringValue () ;
  result += ") {\n      String s ;\n      s += \"setter @ptrint setSizeForAxis: axis index (\" ;\n      s.appendUnsigned (axisIndex) ;\n      s += \") >= dimension (" ;
  result += in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 457)).stringValue () ;
  result += ")\" ;\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n    }else{\n" ;
  GALGAS_uint index_17153_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17153 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17153.hasCurrentObject ()) {
      result += "      const uint32_t newSize" ;
      result += enumerator_17153.current_mValue (HERE).stringValue () ;
      result += " = (" ;
      result += enumerator_17153.current_mValue (HERE).stringValue () ;
      result += " == axisIndex) \? inNewSize.uintValue () : mSharedObject->size" ;
      result += enumerator_17153.current_mValue (HERE).stringValue () ;
      result += " () ;\n" ;
      index_17153_.increment () ;
      enumerator_17153.gotoNextObject () ;
    }
  }
  result += "      mSharedObject->setSize (" ;
  GALGAS_uint index_17354_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17354 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17354.hasCurrentObject ()) {
      result += "newSize" ;
      result += enumerator_17354.current_mValue (HERE).stringValue () ;
      if (enumerator_17354.hasNextObject ()) {
        result += ", " ;
      }
      index_17354_.increment () ;
      enumerator_17354.gotoNextObject () ;
    }
  }
  result += " COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::setter_invalidateValueAtIndex (" ;
  GALGAS_uint index_17631_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17631 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_17631 = enumerator_17631.hasCurrentObject () ;
    if (nonEmpty_enumerator_17631) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_17631.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "GALGAS_uint inIndex" ;
      result += enumerator_17631.current_mValue (HERE).stringValue () ;
      result += ",\n" ;
      index_17631_.increment () ;
      enumerator_17631.gotoNextObject () ;
    }
  }
  result += "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  if (isValid ()" ;
  GALGAS_uint index_17794_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17794 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17794.hasCurrentObject ()) {
      result += " && inIndex" ;
      result += enumerator_17794.current_mValue (HERE).stringValue () ;
      result += ".isValid ()" ;
      index_17794_.increment () ;
      enumerator_17794.gotoNextObject () ;
    }
  }
  result += ") {\n    insulate (THERE) ;\n    macroValidSharedObject (mSharedObject, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_18122_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18122 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18122.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "inIndex" ;
      result += enumerator_18122.current_mValue (HERE).stringValue () ;
      result += ".uintValue (),\n" ;
      index_18122_.increment () ;
      enumerator_18122.gotoNextObject () ;
    }
  }
  result += "                                                         inCompiler\n                                                         COMMA_THERE) ;\n    if (idx >= 0) {\n      mSharedObject->setObjectAtAbsoluteIndex (GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (), idx) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::setter_setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_18617_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18617 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18617.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_uint inNewSize" ;
      result += enumerator_18617.current_mValue (HERE).stringValue () ;
      result += ",\n" ;
      index_18617_.increment () ;
      enumerator_18617.gotoNextObject () ;
    }
  }
  result += "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * /* inCompiler */\n   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  if (isValid ()" ;
  GALGAS_uint index_18782_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18782 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18782.hasCurrentObject ()) {
      result += " && inNewSize" ;
      result += enumerator_18782.current_mValue (HERE).stringValue () ;
      result += ".isValid ()" ;
      index_18782_.increment () ;
      enumerator_18782.gotoNextObject () ;
    }
  }
  result += ") {\n    insulate (THERE) ;\n    macroValidSharedObject (mSharedObject, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n    mSharedObject->setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_19084_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19084 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19084.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "inNewSize" ;
      result += enumerator_19084.current_mValue (HERE).stringValue () ;
      result += ".uintValue ()" ;
      if (enumerator_19084.hasNextObject ()) {
        result += ",\n" ;
      }
      index_19084_.increment () ;
      enumerator_19084.gotoNextObject () ;
    }
  }
  result += "\n                            COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::objectCompare (const cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inOperand) const {\n  typeComparisonResult result =  kOperandEqual ;\n" ;
  GALGAS_uint index_19489_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19489 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19489.hasCurrentObject ()) {
      result += "  if (kOperandEqual == result) {\n    if (mSize" ;
      result += enumerator_19489.current_mValue (HERE).stringValue () ;
      result += " < inOperand->mSize" ;
      result += enumerator_19489.current_mValue (HERE).stringValue () ;
      result += ") {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (mSize" ;
      result += enumerator_19489.current_mValue (HERE).stringValue () ;
      result += " > inOperand->mSize" ;
      result += enumerator_19489.current_mValue (HERE).stringValue () ;
      result += ") {\n      result = kFirstOperandGreaterThanSecond ;\n    }\n  }\n" ;
      index_19489_.increment () ;
      enumerator_19489.gotoNextObject () ;
    }
  }
  result += "  for (uint32_t i=0 ; (i<(" ;
  GALGAS_uint index_19810_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19810 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19810.hasCurrentObject ()) {
      result += "mSize" ;
      result += enumerator_19810.current_mValue (HERE).stringValue () ;
      if (enumerator_19810.hasNextObject ()) {
        result += "*" ;
      }
      index_19810_.increment () ;
      enumerator_19810.gotoNextObject () ;
    }
  }
  result += ")) && (result == kOperandEqual) ; i++) {\n    GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * ptrObject1 = & (mObjectArray [i]) ;\n    GALGAS_" ;
  result += in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * ptrObject2 = & (inOperand->mObjectArray [i]) ;\n    if ((! ptrObject1->isValid ()) && ptrObject2->isValid ()) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (ptrObject1->isValid () && ! ptrObject2->isValid ()) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else if (ptrObject1->isValid () && ptrObject2->isValid ()) {\n      result = ptrObject1->objectCompare (* ptrObject2) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::objectCompare (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inOperand) const {\n  typeComparisonResult result = (isValid () && inOperand.isValid ()) \? kOperandEqual : kOperandNotValid ;\n  if (kOperandEqual == result) {\n    result = mSharedObject->objectCompare (inOperand.mSharedObject) ;\n  }\n  return result ;\n}\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public AC_GALGAS_listmap {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) :\nAC_GALGAS_listmap () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::constructor_emptyMap (LOCATION_ARGS) {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  result.makeNewEmptyListMap (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_string & inKey" ;
  GALGAS_uint index_728_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_728 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_728.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_728.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue () ;
      result += " & inOperand" ;
      result += index_728_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue () ;
      index_728_IDX.increment () ;
      enumerator_728.gotoNextObject () ;
    }
  }
  result += "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()" ;
  GALGAS_uint index_949_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_949 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_949.hasCurrentObject ()) {
      result += " && inOperand" ;
      result += index_949_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 24)).stringValue () ;
      result += ".isValid ()" ;
      index_949_IDX.increment () ;
      enumerator_949.gotoNextObject () ;
    }
  }
  result += ") {\n    capCollectionElement attributes ;\n    GALGAS_" ;
  result += in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_1237_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1237 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1237.hasCurrentObject ()) {
      result += ", inOperand" ;
      result += index_1237_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 30)).stringValue () ;
      index_1237_IDX.increment () ;
      enumerator_1237.gotoNextObject () ;
    }
  }
  result += " COMMA_THERE) ;\n    addObjectInListMap (inKey.stringValue (), attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::setter_insert (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_string inKey" ;
  GALGAS_uint index_1604_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1604 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1604.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_1604.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 41)).stringValue () ;
      result += " inOperand" ;
      result += index_1604_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 41)).stringValue () ;
      index_1604_IDX.increment () ;
      enumerator_1604.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * /* inCompiler */\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()" ;
  GALGAS_uint index_1912_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1912 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1912.hasCurrentObject ()) {
      result += " && inOperand" ;
      result += index_1912_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 47)).stringValue () ;
      result += ".isValid ()" ;
      index_1912_IDX.increment () ;
      enumerator_1912.gotoNextObject () ;
    }
  }
  result += ") {\n    capCollectionElement attributes ;\n    GALGAS_" ;
  result += in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_2146_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2146 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2146.hasCurrentObject ()) {
      result += ", inOperand" ;
      result += index_2146_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 53)).stringValue () ;
      index_2146_IDX.increment () ;
      enumerator_2146.gotoNextObject () ;
    }
  }
  result += " COMMA_THERE) ;\n    addObjectInListMap (inKey.stringValue (), attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_listForKey (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_string & inKey\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_UNUSED_LOCATION_ARGS) const {\n  return GALGAS_" ;
  result += in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (listForKey (inKey)) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::cEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inEnumeratedObject,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element cEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::current (LOCATION_ARGS) const {\n  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cListMapElement) ;\n  return GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element (p->mKey, p->mSharedListMapList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_string cEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::current_key (LOCATION_ARGS) const {\n  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cListMapElement) ;\n  return GALGAS_string (p->mKey) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " cEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::current_mList (LOCATION_ARGS) const {\n  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cListMapElement) ;\n  return GALGAS_" ;
  result += in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (p->mSharedListMapList) ;\n}\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " ;\n\n" ;
  GALGAS_uint index_351_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_351 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_351.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nextern const char * kSearchErrorMessage_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_351.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 12)).stringValue () ;
      result += " ;\n\n" ;
      index_351_.increment () ;
      enumerator_351.gotoNextObject () ;
    }
  }
  result += "//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public AC_GALGAS_map {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) ;\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & operator = (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) ;\n  \n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 2: class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public cMapElement {\n//--- Map attributes\n" ;
  GALGAS_uint index_453_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_453 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_453.hasCurrentObject ()) {
      result += "  public: GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_453.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
      result += " mProperty_" ;
      result += enumerator_453.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
      result += " ;\n" ;
      index_453_.increment () ;
      enumerator_453.gotoNextObject () ;
    }
  }
  result += "\n//--- Constructor\n  public: cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_780_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_780 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_780.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_780.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      result += " & in_" ;
      result += enumerator_780.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      index_780_.increment () ;
      enumerator_780.gotoNextObject () ;
    }
  }
  result += "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cMapElement * copy (void) ;\n\n//--- Description\n public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n} ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n\ncMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_287_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_287 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_287.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_287.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      result += " & in_" ;
      result += enumerator_287.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      index_287_.increment () ;
      enumerator_287.gotoNextObject () ;
    }
  }
  result += "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) :\ncMapElement (inKey COMMA_THERE)" ;
  GALGAS_uint index_561_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_561 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_561.hasCurrentObject ()) {
      result += ",\nmProperty_" ;
      result += enumerator_561.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result += " (in_" ;
      result += enumerator_561.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result += ")" ;
      index_561_.increment () ;
      enumerator_561.gotoNextObject () ;
    }
  }
  result += " {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::isValid (void) const {\n  return mProperty_lkey.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement * cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::copy (void) {\n  cMapElement * result = nullptr ;\n  macroMyNew (result, cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (mProperty_lkey" ;
  GALGAS_uint index_1209_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1209 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1209.hasCurrentObject ()) {
      result += ", mProperty_" ;
      result += enumerator_1209.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 28)).stringValue () ;
      index_1209_.increment () ;
      enumerator_1209.gotoNextObject () ;
    }
  }
  result += " COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 36)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "void cMapElement_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::description (String & /* ioString */, const int32_t /* inIndentation */) const {\n" ;
  }else if (kBoolFalse == test_0) {
    result += "void cMapElement_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::description (String & ioString, const int32_t inIndentation) const {\n" ;
    GALGAS_uint index_1779_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1779 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1779.hasCurrentObject ()) {
        result += "  ioString += \"\\n\" ;\n  ioString.writeStringMultiple (\"| \", inIndentation) ;\n  ioString += " ;
        result += enumerator_1779.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 43)).stringValue () ;
        result += " \":\" ;\n  mProperty_" ;
        result += enumerator_1779.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 44)).stringValue () ;
        result += ".description (ioString, inIndentation) ;\n" ;
        index_1779_.increment () ;
        enumerator_1779.gotoNextObject () ;
      }
    }
  }
  result += "}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::compare (const cCollectionElement * inOperand) const {\n  cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * operand = (cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " *) inOperand ;\n  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;\n" ;
  GALGAS_uint index_2554_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2554 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2554.hasCurrentObject ()) {
      result += "  if (kOperandEqual == result) {\n    result = mProperty_" ;
      result += enumerator_2554.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 56)).stringValue () ;
      result += ".objectCompare (operand->mProperty_" ;
      result += enumerator_2554.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 56)).stringValue () ;
      result += ") ;\n  }\n" ;
      index_2554_.increment () ;
      enumerator_2554.gotoNextObject () ;
    }
  }
  result += "  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) :\nAC_GALGAS_map () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) :\nAC_GALGAS_map (inSource) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::operator = (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) {\n  * ((AC_GALGAS_map *) this) = inSource ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::constructor_emptyMap (LOCATION_ARGS) {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  result.makeNewEmptyMap (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::constructor_mapWithMapToOverride (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inMapToOverride\n                                                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_overriddenMap (" ;
  columnMarker = result.currentColumn () ;
  result += "Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  getOverridenMap (result, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_4867_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4867 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4867.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_4867.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 111)).stringValue () ;
      result += " & inArgument" ;
      result += index_4867_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 111)).stringValue () ;
      index_4867_IDX.increment () ;
      enumerator_4867.gotoNextObject () ;
    }
  }
  result += ",\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = nullptr ;\n  macroMyNew (p, cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (inKey" ;
  GALGAS_uint index_5236_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5236 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5236.hasCurrentObject ()) {
      result += ", inArgument" ;
      result += index_5236_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 118)).stringValue () ;
      index_5236_IDX.increment () ;
      enumerator_5236.gotoNextObject () ;
    }
  }
  result += " COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n" ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).uintValue ())) ;
  }
  result += "const char * kInsertErrorMessage = \"@" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " insert error: '%K' already in map\" ;\nconst char * kShadowErrorMessage = \"\" ;\nperformInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n" ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).uintValue ())) ;
  }
  result += "}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::add_operation (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inOperand,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result = *this ;\n  cEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " enumerator (inOperand, kENUMERATION_UP) ;\n  while (enumerator.hasCurrentObject ()) {\n    result.addAssign_operation (enumerator.current_lkey (HERE)" ;
  GALGAS_uint index_6269_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6269 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6269.hasCurrentObject ()) {
      result += ", enumerator.current_" ;
      result += enumerator_6269.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 141)).stringValue () ;
      result += " (HERE)" ;
      index_6269_.increment () ;
      enumerator_6269.gotoNextObject () ;
    }
  }
  result += ", inCompiler COMMA_THERE) ;\n    enumerator.gotoNextObject () ;\n  }\n  return result ;\n}\n\n" ;
  GALGAS_uint index_6517_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_6517 (in_INSERT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6517.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::setter_" ;
      result += enumerator_6517.current_mInsertMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 151)).stringValue () ;
      result += " (" ;
      columnMarker = result.currentColumn () ;
      result += "GALGAS_lstring inKey" ;
      GALGAS_uint index_6807_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6807 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_6807.hasCurrentObject ()) {
          result += ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result += "GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_6807.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue () ;
          result += " inArgument" ;
          result += index_6807_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue () ;
          index_6807_IDX.increment () ;
          enumerator_6807.gotoNextObject () ;
        }
      }
      result += ",\n " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "Compiler * inCompiler\n " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "COMMA_LOCATION_ARGS) {\n  cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " * p = nullptr ;\n  macroMyNew (p, cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " (inKey" ;
      GALGAS_uint index_7191_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_7191 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_7191.hasCurrentObject ()) {
          result += ", inArgument" ;
          result += index_7191_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 160)).stringValue () ;
          index_7191_IDX.increment () ;
          enumerator_7191.gotoNextObject () ;
        }
      }
      result += " COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n" ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).isValid ()) {
        result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).uintValue ())) ;
      }
      result += "const char * kInsertErrorMessage = " ;
      result += enumerator_6517.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 167)).stringValue () ;
      result += " ;\nconst char * kShadowErrorMessage = " ;
      result += enumerator_6517.current_mShadowErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 168)).stringValue () ;
      result += " ;\nperformInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n" ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).isValid ()) {
        result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).uintValue ())) ;
      }
      result += "}\n\n" ;
      index_6517_.increment () ;
      enumerator_6517.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7774_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_7774 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7774.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nconst char * kSearchErrorMessage_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_7774.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 176)).stringValue () ;
      result += " = " ;
      result += enumerator_7774.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 176)).stringValue () ;
      result += " ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::method_" ;
      result += enumerator_7774.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 178)).stringValue () ;
      result += " (" ;
      columnMarker = result.currentColumn () ;
      result += "GALGAS_lstring inKey" ;
      GALGAS_uint index_8373_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8373 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8373.hasCurrentObject ()) {
          result += ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result += "GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_8373.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 180)).stringValue () ;
          result += " & outArgument" ;
          result += index_8373_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 180)).stringValue () ;
          index_8373_IDX.increment () ;
          enumerator_8373.gotoNextObject () ;
        }
      }
      result += ",\n " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "Compiler * inCompiler\n " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "COMMA_LOCATION_ARGS) const {\n  const cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " * p = (const cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " *) performSearch (" ;
      columnMarker = result.currentColumn () ;
      result += "inKey,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "inCompiler,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "kSearchErrorMessage_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_7774.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 186)).stringValue () ;
      result += "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "COMMA_THERE) ;\n  if (nullptr == p) {\n" ;
      GALGAS_uint index_8962_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8962 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8962.hasCurrentObject ()) {
          result += "    outArgument" ;
          result += index_8962_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 190)).stringValue () ;
          result += ".drop () ;\n" ;
          index_8962_IDX.increment () ;
          enumerator_8962.gotoNextObject () ;
        }
      }
      result += "  }else{\n    macroValidSharedObject (p, cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += ") ;\n" ;
      GALGAS_uint index_9195_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9195 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9195.hasCurrentObject ()) {
          result += "    outArgument" ;
          result += index_9195_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 195)).stringValue () ;
          result += " = p->mProperty_" ;
          result += enumerator_9195.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 195)).stringValue () ;
          result += " ;\n" ;
          index_9195_IDX.increment () ;
          enumerator_9195.gotoNextObject () ;
        }
      }
      result += "  }\n}\n\n" ;
      index_7774_.increment () ;
      enumerator_7774.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9386_ (0) ;
  if (in_REMOVE_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapRemoveMethodListAST enumerator_9386 (in_REMOVE_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9386.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::setter_" ;
      result += enumerator_9386.current_mMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 204)).stringValue () ;
      result += " (" ;
      columnMarker = result.currentColumn () ;
      result += "GALGAS_lstring inKey" ;
      GALGAS_uint index_9700_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9700 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9700.hasCurrentObject ()) {
          result += ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result += "GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_9700.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 206)).stringValue () ;
          result += " & outArgument" ;
          result += index_9700_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 206)).stringValue () ;
          index_9700_IDX.increment () ;
          enumerator_9700.gotoNextObject () ;
        }
      }
      result += ",\n " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "Compiler * inCompiler\n " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "COMMA_LOCATION_ARGS) {\n  const char * kRemoveErrorMessage = " ;
      result += enumerator_9386.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 210)).stringValue () ;
      result += " ;\n  capCollectionElement attributes ;\n  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;\n  cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " * p = (cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " *) attributes.ptr () ;\n  if (nullptr == p) {\n" ;
      GALGAS_uint index_10322_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10322 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_10322.hasCurrentObject ()) {
          result += "    outArgument" ;
          result += index_10322_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 216)).stringValue () ;
          result += ".drop () ;\n" ;
          index_10322_IDX.increment () ;
          enumerator_10322.gotoNextObject () ;
        }
      }
      result += "  }else{\n    macroValidSharedObject (p, cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += ") ;\n" ;
      GALGAS_uint index_10557_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10557 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_10557.hasCurrentObject ()) {
          result += "    outArgument" ;
          result += index_10557_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 221)).stringValue () ;
          result += " = p->mProperty_" ;
          result += enumerator_10557.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 221)).stringValue () ;
          result += " ;\n" ;
          index_10557_IDX.increment () ;
          enumerator_10557.gotoNextObject () ;
        }
      }
      result += "  }\n}\n\n" ;
      index_9386_.increment () ;
      enumerator_9386.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  if (kBoolTrue == test_1) {
    result += "//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::setter_insertOrReplace (" ;
    columnMarker = result.currentColumn () ;
    result += "GALGAS_lstring inKey" ;
    GALGAS_uint index_11009_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_11009 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_11009.hasCurrentObject ()) {
        result += ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result += "GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_11009.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 232)).stringValue () ;
        result += " inArgument" ;
        result += index_11009_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 232)).stringValue () ;
        index_11009_IDX.increment () ;
        enumerator_11009.gotoNextObject () ;
      }
    }
    result += "\n " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_UNUSED_LOCATION_ARGS) {\n  cMapElement_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " * p = nullptr ;\n  macroMyNew (p, cMapElement_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " (inKey" ;
    GALGAS_uint index_11357_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_11357 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_11357.hasCurrentObject ()) {
        result += ", inArgument" ;
        result += index_11357_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 238)).stringValue () ;
        index_11357_IDX.increment () ;
        enumerator_11357.gotoNextObject () ;
      }
    }
    result += " COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  performInsertOrReplace (attributes) ;\n}\n\n" ;
  }else if (kBoolFalse == test_1) {
  }
  GALGAS_uint index_11680_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11680 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11680.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_11680.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 250)).stringValue () ;
      result += " GALGAS_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::getter_" ;
      result += enumerator_11680.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 250)).stringValue () ;
      result += "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result += "const GALGAS_string & inKey,\n                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "Compiler * inCompiler\n                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "COMMA_LOCATION_ARGS) const {\n  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;\n  const cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " * p = (const cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " *) attributes ;\n  GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_11680.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 255)).stringValue () ;
      result += " result ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += ") ;\n    result = p->mProperty_" ;
      result += enumerator_11680.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 258)).stringValue () ;
      result += " ;\n  }\n  return result ;\n}\n\n" ;
      index_11680_IDX.increment () ;
      enumerator_11680.gotoNextObject () ;
    }
  }
  GALGAS_uint index_12737_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12737 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12737.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::setter_set" ;
      result += enumerator_12737.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 266)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 266)).stringValue () ;
      result += "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result += "GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_12737.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 266)).stringValue () ;
      result += " inAttributeValue,\n                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "GALGAS_string inKey,\n                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "Compiler * inCompiler\n                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "COMMA_LOCATION_ARGS) {\n  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;\n  cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " * p = (cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " *) attributes ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += ") ;\n    p->mProperty_" ;
      result += enumerator_12737.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 274)).stringValue () ;
      result += " = inAttributeValue ;\n  }\n}\n\n" ;
      index_12737_IDX.increment () ;
      enumerator_12737.gotoNextObject () ;
    }
  }
  result += "//--------------------------------------------------------------------------------------------------\n\ncMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::readWriteAccessForWithInstruction (" ;
  columnMarker = result.currentColumn () ;
  result += "Compiler * inCompiler,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "const GALGAS_string & inKey\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * result = (cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;\n  macroNullOrValidSharedObject (result, cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::cEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inEnumeratedObject,\n                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element cEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::current (LOCATION_ARGS) const {\n  const cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = (const cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n  return GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element (p->mProperty_lkey" ;
  GALGAS_uint index_15144_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15144 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15144.hasCurrentObject ()) {
      result += ", p->mProperty_" ;
      result += enumerator_15144.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 306)).stringValue () ;
      index_15144_.increment () ;
      enumerator_15144.gotoNextObject () ;
    }
  }
  result += ") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_lstring cEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::current_lkey (LOCATION_ARGS) const {\n  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement) ;\n  return p->mProperty_lkey ;\n}\n\n" ;
  GALGAS_uint index_15643_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15643 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15643.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_15643.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 321)).stringValue () ;
      result += " cEnumerator_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::current_" ;
      result += enumerator_15643.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 321)).stringValue () ;
      result += " (LOCATION_ARGS) const {\n  const cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " * p = (const cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += ") ;\n  return p->mProperty_" ;
      result += enumerator_15643.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 324)).stringValue () ;
      result += " ;\n}\n\n" ;
      index_15643_IDX.increment () ;
      enumerator_15643.gotoNextObject () ;
    }
  }
  result += "//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::optional_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_string & inKey" ;
  GALGAS_uint index_16484_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16484 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16484.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_16484.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 331)).stringValue () ;
      result += " & outArgument" ;
      result += index_16484_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 331)).stringValue () ;
      index_16484_IDX.increment () ;
      enumerator_16484.gotoNextObject () ;
    }
  }
  result += ") const {\n  const cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = (const cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " *) searchForKey (" ;
  columnMarker = result.currentColumn () ;
  result += "inKey) ;\n  const bool result = nullptr != p ;\n  if (result) {\n    macroValidSharedObject (p, cMapElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n" ;
  GALGAS_uint index_16931_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16931 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16931.hasCurrentObject ()) {
      result += "    outArgument" ;
      result += index_16931_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 339)).stringValue () ;
      result += " = p->mProperty_" ;
      result += enumerator_16931.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 339)).stringValue () ;
      result += " ;\n" ;
      index_16931_IDX.increment () ;
      enumerator_16931.gotoNextObject () ;
    }
  }
  result += "  }else{\n" ;
  GALGAS_uint index_17136_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17136 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17136.hasCurrentObject ()) {
      result += "    outArgument" ;
      result += index_17136_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 343)).stringValue () ;
      result += ".drop () ;\n" ;
      index_17136_IDX.increment () ;
      enumerator_17136.gotoNextObject () ;
    }
  }
  result += "  }\n  return result ;\n}\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" dict"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public AC_GALGAS_root {\n//--------------------------------- Attributes\n  private: cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * mSharedDict ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) ;\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & operator = (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) ;\n\n//--- isValid\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedDict != nullptr ; }\n\n//--- drop\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--- Implementation of reader 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n\n//--- Insulate\n  private: void insulate (LOCATION_ARGS) ;\n\n//--- Object compare\n  public: VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inOperand) const ;\n\n//--- Enumeration\n  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n\nclass cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element {\n  public: cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * mInfPtr ;\n  public: cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * mSupPtr ;\n  public: int32_t mBalance ;\n\n  public: cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_" ;
  result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & in_key" ;
  GALGAS_uint index_458_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_458 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_458.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_458.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue () ;
      result += " & inProperty_" ;
      result += enumerator_458.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue () ;
      index_458_.increment () ;
      enumerator_458.gotoNextObject () ;
    }
  }
  result += ") :\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element (in_key" ;
  GALGAS_uint index_693_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_693 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_693.hasCurrentObject ()) {
      result += ", inProperty_" ;
      result += enumerator_693.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 15)).stringValue () ;
      index_693_.increment () ;
      enumerator_693.gotoNextObject () ;
    }
  }
  result += "),\n  mInfPtr (nullptr),\n  mSupPtr (nullptr),\n  mBalance (0) {\n  }\n\n  public: cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inNode) ;\n\n  public: cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " &) = delete ;\n\n  public: cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "& operator = (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " &) = delete ;\n\n  public: virtual ~ cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) {\n    macroMyDelete (mInfPtr) ;\n    macroMyDelete (mSupPtr) ;\n  }\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public C_SharedObject {\n//--------------------------------- Attributes\n  private: cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * mRoot ;\n  private: uint32_t mCount ;\n\n//--------------------------------- Constructor\n  protected: cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (LOCATION_ARGS) :\n  C_SharedObject (THERE),\n  mRoot (nullptr),\n  mCount (0) {\n  }\n\n//--------------------------------- Virtual destructor\n  protected: virtual ~ cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) {\n    macroMyDelete (mRoot) ;\n  }\n\n//--------------------------------- No copy\n  private: cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " &) ;\n  private: cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & operator = (const cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " &) ;\n\n//--------------------------------- Copy a map\n  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inSource) ;\n\n//--------------------------------- Insert\n  protected: VIRTUAL_IN_DEBUG void performInsert (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element & inNewNode,\n                                                  const bool inEntryOverrideAllowed) {\n    macroUniqueSharedObject (this) ;\n    bool extension = false ;\n    bool entryAlreadyInDict = false ;\n    recursiveAddEntry (mRoot, inNewNode, entryAlreadyInDict, extension, inEntryOverrideAllowed) ;\n    if (!entryAlreadyInDict) {\n      mCount ++ ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      checkDict (HERE) ;\n    #endif\n  }\n\n  protected: static void rotateLeft (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * & ioRootPtr) {\n    cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * ptr = ioRootPtr->mSupPtr ;\n    ioRootPtr->mSupPtr = ptr->mInfPtr ;\n    ptr->mInfPtr = ioRootPtr;\n\n    if (ptr->mBalance >= 0) {\n      ioRootPtr->mBalance ++ ;\n    }else{\n      ioRootPtr->mBalance += 1 - ptr->mBalance ;\n    }\n\n    if (ioRootPtr->mBalance > 0) {\n      ptr->mBalance += ioRootPtr->mBalance + 1 ;\n    }else{\n      ptr->mBalance ++ ;\n    }\n    ioRootPtr = ptr ;\n  }\n\n  protected: static void rotateRight (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * & ioRootPtr) {\n    cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * ptr = ioRootPtr->mInfPtr ;\n    ioRootPtr->mInfPtr = ptr->mSupPtr ;\n    ptr->mSupPtr = ioRootPtr ;\n   \n    if (ptr->mBalance > 0) {\n      ioRootPtr->mBalance += -ptr->mBalance - 1 ;\n    }else{\n      ioRootPtr->mBalance -- ;\n    }\n    if (ioRootPtr->mBalance >= 0) {\n      ptr->mBalance -- ;\n    }else{\n      ptr->mBalance += ioRootPtr->mBalance - 1 ;\n    }\n    ioRootPtr = ptr ;\n  }\n\n  protected: static void recursiveAddEntry (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * & ioRootPtr,\n                                            const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element & inNewNode,\n                                            bool & outEntryAlreadyPresent,\n                                            bool & ioExtension,\n                                            const bool inEntryOverrideAllowed) {\n    if (ioRootPtr == nullptr) {\n      macroMyNew (ioRootPtr, cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (inNewNode.mProperty_key" ;
  GALGAS_uint index_4325_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4325 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4325.hasCurrentObject ()) {
      result += ", inNewNode.mProperty_" ;
      result += enumerator_4325.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 121)).stringValue () ;
      index_4325_.increment () ;
      enumerator_4325.gotoNextObject () ;
    }
  }
  result += ")) ;\n      ioExtension = true ;\n      outEntryAlreadyPresent = false ;\n    }else{\n      macroValidPointer (ioRootPtr) ;\n      const typeComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;\n      if (comparaison == kFirstOperandGreaterThanSecond) {\n        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;\n        if (ioExtension) {\n          ioRootPtr->mBalance++;\n          if (ioRootPtr->mBalance == 0) {\n            ioExtension = false;\n          }else if (ioRootPtr->mBalance == 2) {\n            if (ioRootPtr->mInfPtr->mBalance == -1) {\n              rotateLeft (ioRootPtr->mInfPtr) ;\n            }\n            rotateRight (ioRootPtr) ;\n            ioExtension = false;\n          }\n        }\n      }else if (comparaison == kFirstOperandLowerThanSecond) {\n        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;\n        if (ioExtension) {\n          ioRootPtr->mBalance-- ;\n          if (ioRootPtr->mBalance == 0) {\n            ioExtension = false ;\n          }else if (ioRootPtr->mBalance == -2) {\n            if (ioRootPtr->mSupPtr->mBalance == 1) {\n              rotateRight (ioRootPtr->mSupPtr) ;\n            }\n            rotateLeft (ioRootPtr) ;\n            ioExtension = false;\n          }\n        }\n      }else{  // Found\n        ioExtension = false ;\n        outEntryAlreadyPresent = true ;\n        if (inEntryOverrideAllowed) {\n" ;
  GALGAS_uint index_5972_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5972 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5972.hasCurrentObject ()) {
      result += "          ioRootPtr->mProperty_" ;
      result += enumerator_5972.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 163)).stringValue () ;
      result += " = inNewNode.mProperty_" ;
      result += enumerator_5972.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 163)).stringValue () ;
      result += " ;\n" ;
      index_5972_.increment () ;
      enumerator_5972.gotoNextObject () ;
    }
  }
  result += "        }\n      }\n    }\n  }\n\n//--------------------------------- Search\n  private: VIRTUAL_IN_DEBUG cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * findEntryInDict (const GALGAS_" ;
  result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inKey) const {\n    cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * result = nullptr ;\n    cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * currentNode = mRoot ;\n    while ((currentNode != nullptr) && (nullptr == result)) {\n      macroValidPointer (currentNode) ;\n      const typeComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;\n      if (comparaison == kFirstOperandGreaterThanSecond) {\n        currentNode = currentNode->mInfPtr ;\n      }else if (comparaison == kFirstOperandLowerThanSecond) {\n        currentNode = currentNode->mSupPtr ;\n      }else{ // Found\n        result = currentNode ;\n      }\n    }\n    return result ;\n  }\n\n//--------------------------------- Remove\n  protected: VIRTUAL_IN_DEBUG void performRemove (const GALGAS_" ;
  result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inKey, cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * & outRemovedNodePtr) {\n    bool branchHasBeenRemoved = false ; // Unused here\n    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;\n    if (nullptr != outRemovedNodePtr) {\n      mCount -- ;\n    }\n  }\n\n  protected: static void supBranchDecreased (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * & ioRoot,\n                                              bool & ioBranchHasBeenRemoved) {\n    ioRoot->mBalance ++ ;\n    switch (ioRoot->mBalance) {\n    case 0:\n      break;\n    case 1:\n      ioBranchHasBeenRemoved = false;\n      break;\n    case 2:\n      switch (ioRoot->mInfPtr->mBalance) {\n      case -1:\n        rotateLeft (ioRoot->mInfPtr) ;\n        rotateRight (ioRoot) ;\n        break;\n      case 0:\n        rotateRight (ioRoot) ;\n        ioBranchHasBeenRemoved = false;\n        break;\n      case 1:\n        rotateRight (ioRoot) ;\n        break;\n      }\n      break;\n    }\n  }\n\n  protected: static void infBranchDecreased (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * & ioRoot,\n                                              bool & ioBranchHasBeenRemoved) {\n    ioRoot->mBalance -- ;\n    switch (ioRoot->mBalance) {\n    case 0:\n      break;\n    case -1:\n      ioBranchHasBeenRemoved = false;\n      break;\n    case -2:\n      switch (ioRoot->mSupPtr->mBalance) {\n      case 1:\n        rotateRight (ioRoot->mSupPtr) ;\n        rotateLeft (ioRoot) ;\n        break;\n      case 0:\n        rotateLeft (ioRoot) ;\n        ioBranchHasBeenRemoved = false;\n        break;\n      case -1:\n        rotateLeft (ioRoot) ;\n        break;\n      }\n      break;\n    }\n  }\n\n  protected: static void getPreviousElement (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * & ioRoot,\n                                             cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * & ioElement,\n                                             bool & ioBranchHasBeenRemoved) {\n    if (ioRoot->mSupPtr == nullptr) {\n      ioElement = ioRoot ;\n      ioRoot = ioRoot->mInfPtr ;\n      ioBranchHasBeenRemoved = true ;\n    }else{\n      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;\n      if (ioBranchHasBeenRemoved) {\n        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n      }\n    }\n  }\n\n  protected: static void internalRemoveRecursively (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * & ioRoot,\n                                                     const GALGAS_" ;
  result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inKeyToRemove,\n                                                     cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * & outRemovedNode,\n                                                     bool & ioBranchHasBeenRemoved) {\n    if (ioRoot != nullptr) {\n      const typeComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;\n      if (comparaison == kFirstOperandGreaterThanSecond) {\n        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n        if (ioBranchHasBeenRemoved) {\n          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n        }\n      }else if (comparaison == kFirstOperandLowerThanSecond) {\n        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n        if (ioBranchHasBeenRemoved) {\n          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);\n        }\n      }else{\n        cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = ioRoot ;\n        if (p->mInfPtr == nullptr) {\n          ioRoot = p->mSupPtr;\n          p->mSupPtr = nullptr;\n          ioBranchHasBeenRemoved = true;\n        }else if (p->mSupPtr == nullptr) {\n          ioRoot = p->mInfPtr;\n          p->mInfPtr = nullptr;\n          ioBranchHasBeenRemoved = true;\n        }else{\n          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;\n          ioRoot->mSupPtr = p->mSupPtr;\n          p->mSupPtr = nullptr;\n          ioRoot->mInfPtr = p->mInfPtr;\n          p->mInfPtr = nullptr;\n          ioRoot->mBalance = p->mBalance;\n          p->mBalance = 0;\n          if (ioBranchHasBeenRemoved) {\n            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n          }\n        }\n        outRemovedNode = p ;\n      }\n    }\n  }\n\n//--------------------------------- Internal method for enumeration\n  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n\n//--------------------------------- Check Dictionary\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n      private: VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {\n      uint32_t n = 0 ;\n      checkNode (mRoot, n) ;\n      MF_AssertThere (n == mCount, \"n (%lld) != mCount (%lld)\", n, mCount) ;\n    }\n  #endif\n\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    private: static void checkNode (const cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inNode,\n                                     uint32_t & ioCount) {\n      if (nullptr != inNode) {\n        checkNode (inNode->mInfPtr, ioCount) ;\n        ioCount ++ ;\n        checkNode (inNode->mSupPtr, ioCount) ;\n      }\n    }\n  #endif\n\n//--------------------------------- Compare Dictionaries\n  public: typeComparisonResult compare (const cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inOperand) const {\n    typeComparisonResult result = kOperandEqual ;\n    if (mCount < inOperand->mCount) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (mCount > inOperand->mCount) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else{\n      capCollectionElementArray enumerationArray ;\n      populateEnumerationArray (enumerationArray) ;\n      capCollectionElementArray operandEnumerationArray ;\n      inOperand->populateEnumerationArray (operandEnumerationArray) ;\n      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;\n    }\n    return result ;\n  }\n\n//--------------------------------- Friend\n  friend class GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " ;\n} ;\n\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) :\nAC_GALGAS_root (),\nmSharedDict (nullptr) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::~ GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) {\n  macroDetachSharedObject (mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) :\nAC_GALGAS_root (),\nmSharedDict (nullptr) {\n  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::operator = (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) {\n  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::drop (void) {\n  macroDetachSharedObject (mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::constructor_emptyDict (LOCATION_ARGS) {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  macroMyNew (result.mSharedDict, cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Description\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void internalDescription_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inNode,\n                                 String & ioString,\n                                 const int32_t inIndentation) {\n  if (nullptr != inNode) {\n    internalDescription_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (inNode->mInfPtr, ioString, inIndentation) ;\n    ioString += \"\\n\" ;\n    inNode->description (ioString, inIndentation) ;\n    internalDescription_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (inNode->mSupPtr, ioString, inIndentation) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::description (String & ioString,\n                                             const int32_t inIndentation) const {\n  ioString += \"<dict @\" ;\n  ioString += staticTypeDescriptor ()->mGalgasTypeName ;\n  ioString += \":\" ;\n  if (isValid ()) {\n    internalDescription_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (mSharedDict->mRoot, ioString, inIndentation) ;\n  }else{\n    ioString += \" not built\" ;\n  }\n  ioString += \">\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_uint GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_count (UNUSED_LOCATION_ARGS) const {\n  GALGAS_uint result ;\n  if (isValid ()) {\n    result = GALGAS_uint (mSharedDict->mCount) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Insulate\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\ncNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inNode) :\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element (inNode->mProperty_key" ;
  GALGAS_uint index_16416_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16416 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16416.hasCurrentObject ()) {
      result += ", inNode->mProperty_" ;
      result += enumerator_16416.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 452)).stringValue () ;
      index_16416_.increment () ;
      enumerator_16416.gotoNextObject () ;
    }
  }
  result += "),\nmInfPtr (nullptr),\nmSupPtr (nullptr),\nmBalance (inNode->mBalance) {\n  if (inNode->mInfPtr != nullptr) {\n    macroMyNew (mInfPtr, cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (inNode->mInfPtr)) ;\n  }\n  if (inNode->mSupPtr != nullptr) {\n    macroMyNew (mSupPtr, cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (inNode->mSupPtr)) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::copyFrom (const cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inSource) {\n  macroUniqueSharedObject (this) ;\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    inSource->checkDict (HERE) ;\n  #endif\n  macroValidSharedObject (inSource, cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n  mCount = inSource->mCount ;\n  if (nullptr != inSource->mRoot) {\n    macroMyNew (mRoot, cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (inSource->mRoot)) ;\n  }\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkDict (HERE) ;\n  #endif\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::insulate (LOCATION_ARGS) {\n  if ((nullptr != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {\n    cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = nullptr ;\n    macroMyNew (p, cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (THERE)) ;\n    p->copyFrom (mSharedDict) ;\n    macroAssignSharedObject (mSharedDict, p) ;\n    macroDetachSharedObject (p) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Insert\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_" ;
  result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inKey" ;
  GALGAS_uint index_18285_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18285 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18285.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_18285.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 505)).stringValue () ;
      result += " & inArgument" ;
      result += index_18285_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 505)).stringValue () ;
      index_18285_IDX.increment () ;
      enumerator_18285.gotoNextObject () ;
    }
  }
  result += ",\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * /* inCompiler */\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element newElement (inKey" ;
  GALGAS_uint index_18561_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18561 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18561.hasCurrentObject ()) {
      result += ", inArgument" ;
      result += index_18561_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 511)).stringValue () ;
      index_18561_IDX.increment () ;
      enumerator_18561.gotoNextObject () ;
    }
  }
  result += ") ;\n  if (isValid () && newElement.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    const bool entryOverrideAllowed = true ;\n    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::setter_insert (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_" ;
  result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " inKey" ;
  GALGAS_uint index_19089_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19089 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19089.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_19089.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 526)).stringValue () ;
      result += " inArgument" ;
      result += index_19089_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 526)).stringValue () ;
      index_19089_IDX.increment () ;
      enumerator_19089.gotoNextObject () ;
    }
  }
  result += ",\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * /* inCompiler */\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element newElement (inKey" ;
  GALGAS_uint index_19363_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19363 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19363.hasCurrentObject ()) {
      result += ", inArgument" ;
      result += index_19363_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 532)).stringValue () ;
      index_19363_IDX.increment () ;
      enumerator_19363.gotoNextObject () ;
    }
  }
  result += ") ;\n  if (isValid () && newElement.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    const bool entryOverrideAllowed = true ;\n    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::getter_hasKey (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_" ;
  result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inKey\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    const cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = mSharedDict->findEntryInDict (inKey) ;\n    result = GALGAS_bool (p != nullptr) ;\n   }\n   return result ;\n }\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::method_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result += "GALGAS_" ;
  result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " inKey" ;
  GALGAS_uint index_20350_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20350 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20350.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_20350.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 559)).stringValue () ;
      result += " & outArgument" ;
      result += index_20350_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 559)).stringValue () ;
      index_20350_IDX.increment () ;
      enumerator_20350.gotoNextObject () ;
    }
  }
  result += ",\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) const {\n  const cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = nullptr ;\n  if (isValid () && inKey.isValid ()) {\n    p = mSharedDict->findEntryInDict (inKey) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message ;\n      message += \"cannot search in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (nullptr == p) {\n" ;
  GALGAS_uint index_20964_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20964 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20964.hasCurrentObject ()) {
      result += "    outArgument" ;
      result += index_20964_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 577)).stringValue () ;
      result += ".drop () ;\n" ;
      index_20964_IDX.increment () ;
      enumerator_20964.gotoNextObject () ;
    }
  }
  result += "  }else{\n    macroValidSharedObject (p, cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n" ;
  GALGAS_uint index_21144_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21144 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21144.hasCurrentObject ()) {
      result += "    outArgument" ;
      result += index_21144_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 583)).stringValue () ;
      result += " = p->mProperty_" ;
      result += enumerator_21144.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 583)).stringValue () ;
      result += " ;\n" ;
      index_21144_IDX.increment () ;
      enumerator_21144.gotoNextObject () ;
    }
  }
  result += "  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::setter_removeKey (" ;
  columnMarker = result.currentColumn () ;
  result += "GALGAS_" ;
  result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " inKey" ;
  GALGAS_uint index_21514_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21514 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21514.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_21514.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 591)).stringValue () ;
      result += " & outArgument" ;
      result += index_21514_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 591)).stringValue () ;
      index_21514_IDX.increment () ;
      enumerator_21514.gotoNextObject () ;
    }
  }
  result += ",\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = nullptr ;\n  if (isValid () && inKey.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    mSharedDict->performRemove (inKey, p) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message ;\n      message += \"cannot remove in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (nullptr == p) {\n" ;
  GALGAS_uint index_22180_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22180 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22180.hasCurrentObject ()) {
      result += "    outArgument" ;
      result += index_22180_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 611)).stringValue () ;
      result += ".drop () ;\n" ;
      index_22180_IDX.increment () ;
      enumerator_22180.gotoNextObject () ;
    }
  }
  result += "  }else{\n    macroValidSharedObject (p, cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n" ;
  GALGAS_uint index_22360_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22360 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22360.hasCurrentObject ()) {
      result += "    outArgument" ;
      result += index_22360_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 617)).stringValue () ;
      result += " = p->mProperty_" ;
      result += enumerator_22360.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 617)).stringValue () ;
      result += " ;\n" ;
      index_22360_IDX.increment () ;
      enumerator_22360.gotoNextObject () ;
    }
  }
  result += "  }\n}\n\n" ;
  GALGAS_uint index_22540_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22540 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22540.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_22540.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 624)).stringValue () ;
      result += " GALGAS_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::getter_" ;
      result += enumerator_22540.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 624)).stringValue () ;
      result += "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result += "const GALGAS_" ;
      result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " & inKey,\n                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "Compiler * inCompiler\n                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_22540.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 627)).stringValue () ;
      result += " result ;\n  if (isValid () && inKey.isValid ()) {\n  const cNode_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " * p = mSharedDict->findEntryInDict (inKey) ;\n   if (nullptr == p) {\n    //--- Build error message\n      String message ;\n      message += \"cannot get " ;
      result += enumerator_22540.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 633)).stringValue () ;
      result += " ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      macroValidSharedObject (p, cNode_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += ") ;\n      result = p->mProperty_" ;
      result += enumerator_22540.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 638)).stringValue () ;
      result += "  ;\n    }\n  }\n  return result ;\n}\n\n" ;
      index_22540_.increment () ;
      enumerator_22540.gotoNextObject () ;
    }
  }
  GALGAS_uint index_23824_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_23824 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_23824.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::setter_set" ;
      result += enumerator_23824.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 648)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 648)).stringValue () ;
      result += "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result += "GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_23824.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 648)).stringValue () ;
      result += " inPropertyValue,\n                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "GALGAS_" ;
      result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " inKey,\n                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "Compiler * inCompiler\n                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    cNode_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " * p = mSharedDict->findEntryInDict (inKey) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message ;\n      message += \"cannot set" ;
      result += enumerator_23824.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 659)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 659)).stringValue () ;
      result += "ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      p->mProperty_" ;
      result += enumerator_23824.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 663)).stringValue () ;
      result += " = inPropertyValue ;\n    }\n  }\n}\n\n" ;
      index_23824_.increment () ;
      enumerator_23824.gotoNextObject () ;
    }
  }
  result += "//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Object compare\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::objectCompare (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inOperand) const {\n  typeComparisonResult result = kOperandNotValid ;\n  if (isValid () && inOperand.isValid ()) {\n    result = mSharedDict->compare (inOperand.mSharedDict) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark map Enumeration\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nclass cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public cCollectionElement {\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element mElement ;\n\n//--- Constructor\n  public: cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element & inElement) :\n  cCollectionElement (HERE),\n  mElement (inElement) {\n  }\n\n//--- No copy\n  private: cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " &) ;\n  private: cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & operator = (const cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " &) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const { return mElement.isValid () ; }\n\n//--- Virtual method for comparing elements\n  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const {\n    const cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = (const cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " *) inOperand ;\n    return mElement.objectCompare (p->mElement) ;\n  }\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (mElement)) ;\n    return p ;\n  }\n\n//--- Description\n  public: virtual void description (String & ioString, const int32_t inIndentation) const {\n    mElement.description (ioString, inIndentation) ;\n  }\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void enterAscendingEnumeration_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inNode,\n                                                       capCollectionElementArray & ioEnumerationArray) {\n  if (inNode != nullptr) {\n    enterAscendingEnumeration_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (inNode->mInfPtr, ioEnumerationArray) ;\n    cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = nullptr ;\n    macroMyNew (p, cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (*inNode)) ;\n    capCollectionElement element ;\n    element.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    ioEnumerationArray.appendObject (element) ;\n    enterAscendingEnumeration_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (inNode->mSupPtr, ioEnumerationArray) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSharedDictRoot_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkDict (HERE) ;\n  #endif\n  ioEnumerationArray.setCapacity (mCount) ;\n  enterAscendingEnumeration_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (mRoot, ioEnumerationArray) ;\n  MF_Assert (mCount == ioEnumerationArray.count (), \"mCount (%lld) != ioEnumerationArray.count () (%lld)\", mCount, ioEnumerationArray.count ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n  if (nullptr != mSharedDict) {\n    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::cEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inEnumeratedObject,\n                                                        const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element cEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::current (LOCATION_ARGS) const {\n  const cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "* p = dynamic_cast  <const cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n  return GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "_2D_element (p->mElement) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " cEnumerator_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::current_key (LOCATION_ARGS) const {\n  const cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "* p = dynamic_cast  <const cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n  return p->mElement.mProperty_key ;\n}\n\n" ;
  GALGAS_uint index_30379_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_30379 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_30379.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_30379.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 789)).stringValue () ;
      result += " cEnumerator_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::current_" ;
      result += enumerator_30379.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 789)).stringValue () ;
      result += " (LOCATION_ARGS) const {\n  const cCollectionElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "* p = dynamic_cast  <const cCollectionElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += ") ;\n  return p->mElement.mProperty_" ;
      result += enumerator_30379.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 792)).stringValue () ;
      result += " ;\n}\n\n" ;
      index_30379_IDX.increment () ;
      enumerator_30379.gotoNextObject () ;
    }
  }
  result += "//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::optional_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result += "const GALGAS_" ;
  result += in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inKey" ;
  GALGAS_uint index_31248_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31248 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_31248.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_31248.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 798)).stringValue () ;
      result += " & outArgument" ;
      result += index_31248_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 798)).stringValue () ;
      index_31248_IDX.increment () ;
      enumerator_31248.gotoNextObject () ;
    }
  }
  result += ") const {\n  const cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * p = nullptr ;\n  if ((mSharedDict != nullptr) && inKey.isValid ()) {\n    p = (const cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " *) mSharedDict->findEntryInDict (inKey) ;\n  }\n  const bool result = nullptr != p ;\n  if (result) {\n    macroValidSharedObject (p, cNode_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n" ;
  GALGAS_uint index_31779_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31779 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_31779.hasCurrentObject ()) {
      result += "    outArgument" ;
      result += index_31779_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 809)).stringValue () ;
      result += " = p->mProperty_" ;
      result += enumerator_31779.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 809)).stringValue () ;
      result += " ;\n" ;
      index_31779_IDX.increment () ;
      enumerator_31779.gotoNextObject () ;
    }
  }
  result += "  }else{\n" ;
  GALGAS_uint index_31986_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31986 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_31986.hasCurrentObject ()) {
      result += "    outArgument" ;
      result += index_31986_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 813)).stringValue () ;
      result += ".drop () ;\n" ;
      index_31986_IDX.increment () ;
      enumerator_31986.gotoNextObject () ;
    }
  }
  result += "  }\n  return result ;\n}\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 3)).stringValue () ;
  result += "  value class\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "AC_GALGAS_value_class" ;
  }else if (kBoolFalse == test_0) {
    result += "GALGAS_" ;
    result += in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n\n//--------------------------------- Embedded object pointer\n  public: inline const class cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * ptr (void) const {\n    return (const cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " *) mObjectPtr ;\n  }\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inSourcePtr) ;\n\n//--------------------------------- Property read access\n" ;
  GALGAS_uint index_1006_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1006 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1006.hasCurrentObject ()) {
      result += "  public: class GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_1006.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 26)).stringValue () ;
      result += " readProperty_" ;
      result += enumerator_1006.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 26)).stringValue () ;
      result += " (void) const ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "acPtr_class" ;
  }else if (kBoolFalse == test_0) {
    result += "cPtr_" ;
    result += in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " {\n\n" ;
  GALGAS_uint index_511_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_511 (in_GETTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_511.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_511.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        result += function_generateClassGetterDeclaration (enumerator_511.current_lkey (HERE), enumerator_511.current_mArgumentTypeList (HERE), enumerator_511.current_mHasCompilerArgument (HERE), enumerator_511.current_mReturnedType (HERE), enumerator_511.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 12)).stringValue () ;
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
      result += function_generateClassInstanceMethodDeclaration (enumerator_753.current_lkey (HERE), enumerator_753.current_mParameterList (HERE), enumerator_753.current_mHasCompilerArgument (HERE), enumerator_753.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 16)).stringValue () ;
      index_753_.increment () ;
      enumerator_753.gotoNextObject () ;
    }
  }
  result += "\n" ;
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
  result += "//--- Properties\n" ;
  GALGAS_uint index_109_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_109 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_109.hasCurrentObject ()) {
      result += "  public: GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_109.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result += " mProperty_" ;
      result += enumerator_109.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result += " ;\n" ;
      index_109_.increment () ;
      enumerator_109.gotoNextObject () ;
    }
  }
  result += "\n//--- Constructor\n  public: cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_397_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_397 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_397.hasCurrentObject ()) {
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_397.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      result += " & in_" ;
      result += enumerator_397.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      if (enumerator_397.hasNextObject ()) {
        result += ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_397_.increment () ;
      enumerator_397.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_0) {
    result += "LOCATION_ARGS" ;
  }
  result += ") ;\n\n" ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result += "//--- Duplication\n  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;\n\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result += "//--- Attribute accessors\n" ;
  GALGAS_uint index_892_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_892 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_892.hasCurrentObject ()) {
      result += "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_892.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue () ;
      result += " getter_" ;
      result += enumerator_892.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue () ;
      result += " (LOCATION_ARGS) const ;\n" ;
      const enumGalgasBool test_2 = enumerator_892.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        result += "  public: VIRTUAL_IN_DEBUG void setter_set" ;
        result += enumerator_892.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue () ;
        result += " (GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_892.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue () ;
        result += " inValue COMMA_LOCATION_ARGS) ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_892_.increment () ;
      enumerator_892.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_3 = in_IS_5F_ABSTRACT.boolEnum () ;
  if (kBoolTrue == test_3) {
    result += "//--- Description\n  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result += "String & ioString,\n                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const int32_t inIndentation) const override = 0 ;\n\n  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;\n" ;
  }else if (kBoolFalse == test_3) {
    result += "//--- Description\n  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result += "String & ioString,\n                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const int32_t inIndentation) const override ;\n\n  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;\n" ;
  }
  result += "\n} ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//   Object comparison                                                                           \n//--------------------------------------------------------------------------------------------------\n\n" ;
  const enumGalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "typeComparisonResult cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n  return kOperandEqual ;\n}\n\n//--------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result += "typeComparisonResult cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n  typeComparisonResult result = kOperandEqual ;\n  const cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " * p = (const cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " *) inOperandPtr ;\n  macroValidSharedObject (p, cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += ") ;\n" ;
    GALGAS_uint index_1064_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1064 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1064.hasCurrentObject ()) {
        result += "  if (kOperandEqual == result) {\n    result = mProperty_" ;
        result += enumerator_1064.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue () ;
        result += ".objectCompare (p->mProperty_" ;
        result += enumerator_1064.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue () ;
        result += ") ;\n  }\n" ;
        index_1064_.increment () ;
        enumerator_1064.gotoNextObject () ;
      }
    }
    result += "  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result += "\n\ntypeComparisonResult GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::objectCompare (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inOperand) const {\n  typeComparisonResult result = kOperandNotValid ;\n  if (isValid () && inOperand.isValid ()) {\n    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;\n    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;\n    if (mySlot < operandSlot) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (mySlot > operandSlot) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else{\n      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) :\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    result += "AC_GALGAS_value_class" ;
  }else if (kBoolFalse == test_2) {
    result += "GALGAS_" ;
    result += in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inSourcePtr) :\n" ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    result += "AC_GALGAS_value_class" ;
  }else if (kBoolFalse == test_3) {
    result += "GALGAS_" ;
    result += in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " (inSourcePtr) {\n  macroNullOrValidSharedObject (inSourcePtr, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n}\n" ;
  const enumGalgasBool test_4 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).boolEnum () ;
  if (kBoolTrue == test_4) {
    result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::constructor_new (LOCATION_ARGS) {\n  GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " result ;\n  macroMyNew (result.mObjectPtr, cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " (THERE)) ;\n  return result ;\n}\n\n" ;
  }else if (kBoolFalse == test_4) {
  }
  const enumGalgasBool test_5 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).boolEnum () ;
  if (kBoolTrue == test_5) {
    result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_3492_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3492 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3492.hasCurrentObject ()) {
        result += "const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_3492.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue () ;
        result += " & inAttribute_" ;
        result += enumerator_3492.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue () ;
        if (enumerator_3492.hasNextObject ()) {
          result += ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_3492_.increment () ;
        enumerator_3492.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 81)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      result += "LOCATION_ARGS" ;
    }else if (kBoolFalse == test_6) {
      result += "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "COMMA_LOCATION_ARGS" ;
    }
    result += ") {\n  GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " result ;\n  if (" ;
    GALGAS_uint index_3895_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3895 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3895.hasCurrentObject ()) {
        result += "inAttribute_" ;
        result += enumerator_3895.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 90)).stringValue () ;
        result += ".isValid ()" ;
        if (enumerator_3895.hasNextObject ()) {
          result += " && " ;
        }
        index_3895_.increment () ;
        enumerator_3895.gotoNextObject () ;
      }
    }
    result += ") {\n    macroMyNew (result.mObjectPtr, cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " (" ;
    GALGAS_uint index_4159_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4159 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4159.hasCurrentObject ()) {
        result += "inAttribute_" ;
        result += enumerator_4159.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 96)).stringValue () ;
        if (enumerator_4159.hasNextObject ()) {
          result += ", " ;
        }
        index_4159_.increment () ;
        enumerator_4159.gotoNextObject () ;
      }
    }
    result += " COMMA_THERE)) ;\n  }\n  return result ;\n}\n\n" ;
  }else if (kBoolFalse == test_5) {
  }
  GALGAS_uint index_4407_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4407 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4407.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_4407.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue () ;
      result += " GALGAS_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::readProperty_" ;
      result += enumerator_4407.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue () ;
      result += " (void) const {\n  if (nullptr == mObjectPtr) {\n    return GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_4407.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 109)).stringValue () ;
      result += " () ;\n  }else{\n    const cPtr_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " * p = (const cPtr_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += ") ;\n    return p->mProperty_" ;
      result += enumerator_4407.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 113)).stringValue () ;
      result += " ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_4407.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 117)).stringValue () ;
      result += " cPtr_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::getter_" ;
      result += enumerator_4407.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 117)).stringValue () ;
      result += " (UNUSED_LOCATION_ARGS) const {\n  return mProperty_" ;
      result += enumerator_4407.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 118)).stringValue () ;
      result += " ;\n}\n\n" ;
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
        result += "//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
        result += in_TYPE_5F_IDENTIFIER.stringValue () ;
        result += "::setter_set" ;
        result += enumerator_5515.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).stringValue () ;
        result += " (" ;
        columnMarker = result.currentColumn () ;
        result += "GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_5515.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).stringValue () ;
        result += " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result += "COMMA_LOCATION_ARGS) {\n  if (nullptr != mObjectPtr) {\n    insulate (THERE) ;\n    cPtr_" ;
        result += in_TYPE_5F_IDENTIFIER.stringValue () ;
        result += " * p = (cPtr_" ;
        result += in_TYPE_5F_IDENTIFIER.stringValue () ;
        result += " *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_" ;
        result += in_TYPE_5F_IDENTIFIER.stringValue () ;
        result += ") ;\n    p->mProperty_" ;
        result += enumerator_5515.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 131)).stringValue () ;
        result += " = inValue ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_" ;
        result += in_TYPE_5F_IDENTIFIER.stringValue () ;
        result += "::setter_set" ;
        result += enumerator_5515.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue () ;
        result += " (" ;
        columnMarker = result.currentColumn () ;
        result += "GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_5515.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue () ;
        result += " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result += "COMMA_UNUSED_LOCATION_ARGS) {\n  mProperty_" ;
        result += enumerator_5515.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 137)).stringValue () ;
        result += " = inValue ;\n}\n\n" ;
      }else if (kBoolFalse == test_7) {
      }
      index_5515_.increment () ;
      enumerator_5515.gotoNextObject () ;
    }
  }
  result += "//--------------------------------------------------------------------------------------------------\n//" ;
  result += GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 143)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 143)).stringValue () ;
  result += "\n//--------------------------------------------------------------------------------------------------\n\ncPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7089_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7089 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7089.hasCurrentObject ()) {
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_7089.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue () ;
      result += " & in_" ;
      result += enumerator_7089.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue () ;
      if (enumerator_7089.hasNextObject ()) {
        result += ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7089_.increment () ;
      enumerator_7089.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 151)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result += "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_8) {
    result += "LOCATION_ARGS" ;
  }
  result += ") :\n" ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_9) {
    result += "acPtr_class" ;
  }else if (kBoolFalse == test_9) {
    result += "cPtr_" ;
    result += in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " (" ;
  GALGAS_uint index_7530_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7530 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7530.hasCurrentObject ()) {
      result += "in_" ;
      result += enumerator_7530.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 159)).stringValue () ;
      if (enumerator_7530.hasNextObject ()) {
        result += ", " ;
      }
      index_7530_.increment () ;
      enumerator_7530.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 162)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result += " COMMA_THERE" ;
  }else if (kBoolFalse == test_10) {
    result += "THERE" ;
  }
  result += ")" ;
  GALGAS_uint index_7792_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7792 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7792.hasCurrentObject ()) {
      result += ",\nmProperty_" ;
      result += enumerator_7792.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 169)).stringValue () ;
      result += " (in_" ;
      result += enumerator_7792.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 169)).stringValue () ;
      result += ")" ;
      index_7792_.increment () ;
      enumerator_7792.gotoNextObject () ;
    }
  }
  result += " {\n}\n\n" ;
  const enumGalgasBool test_11 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 175)).boolEnum () ;
  if (kBoolTrue == test_11) {
    result += "//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " ;\n}\n\n" ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 180)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      result += "void cPtr_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::description (" ;
      columnMarker = result.currentColumn () ;
      result += "String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const int32_t /* inIndentation */) const {\n  ioString += \"[@" ;
      result += in_TYPE_5F_NAME.stringValue () ;
      result += "]\" ;\n}\n\n" ;
    }else if (kBoolFalse == test_12) {
      result += "void cPtr_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::description (" ;
      columnMarker = result.currentColumn () ;
      result += "String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const int32_t inIndentation) const {\n  ioString += \"[@" ;
      result += in_TYPE_5F_NAME.stringValue () ;
      result += ":\" ;\n" ;
      GALGAS_uint index_8760_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8760 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8760.hasCurrentObject ()) {
          result += "  mProperty_" ;
          result += enumerator_8760.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 190)).stringValue () ;
          result += ".description (ioString, inIndentation+1) ;\n" ;
          if (enumerator_8760.hasNextObject ()) {
            result += "  ioString += \", \" ;\n" ;
          }
          index_8760_.increment () ;
          enumerator_8760.gotoNextObject () ;
        }
      }
      result += "  ioString += \"]\" ;\n}\n\n" ;
    }
  }else if (kBoolFalse == test_11) {
  }
  const enumGalgasBool test_13 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 198)).boolEnum () ;
  if (kBoolTrue == test_13) {
    result += "//--------------------------------------------------------------------------------------------------\n\nacPtr_class * cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::duplicate (LOCATION_ARGS) const {\n  acPtr_class * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " (" ;
    GALGAS_uint index_9329_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9329 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_9329 = enumerator_9329.hasCurrentObject () ;
      while (enumerator_9329.hasCurrentObject ()) {
        result += "mProperty_" ;
        result += enumerator_9329.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 205)).stringValue () ;
        if (enumerator_9329.hasNextObject ()) {
          result += ", " ;
        }
        index_9329_.increment () ;
        enumerator_9329.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9329) {
        result += " COMMA_" ;
      }
    }
    result += "THERE)) ;\n  return ptr ;\n}\n\n" ;
  }else if (kBoolFalse == test_13) {
  }
  result += "\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 3)).stringValue () ;
  result += " reference class\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "AC_GALGAS_reference_class" ;
  }else if (kBoolFalse == test_0) {
    result += "GALGAS_" ;
    result += in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const class cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inSourcePtr) ;\n\n//--------------------------------- Property read access\n" ;
  GALGAS_uint index_822_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_822 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_822.hasCurrentObject ()) {
      result += "  public: class GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_822.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue () ;
      result += " readProperty_" ;
      result += enumerator_822.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue () ;
      result += " (void) const ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "acStrongPtr_class" ;
  }else if (kBoolFalse == test_0) {
    result += "cPtr_" ;
    result += in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " {\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (void) const override ;\n  #endif\n" ;
  GALGAS_uint index_647_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_647 (in_GETTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_647.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_647.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        result += function_generateClassGetterDeclaration (enumerator_647.current_lkey (HERE), enumerator_647.current_mArgumentTypeList (HERE), enumerator_647.current_mHasCompilerArgument (HERE), enumerator_647.current_mReturnedType (HERE), enumerator_647.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 15)).stringValue () ;
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
      result += function_generateClassInstanceMethodDeclaration (enumerator_889.current_lkey (HERE), enumerator_889.current_mParameterList (HERE), enumerator_889.current_mHasCompilerArgument (HERE), enumerator_889.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 19)).stringValue () ;
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
  result += "//--- Properties\n" ;
  GALGAS_uint index_109_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_109 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_109.hasCurrentObject ()) {
      result += "  public: GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_109.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result += " mProperty_" ;
      result += enumerator_109.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result += " ;\n" ;
      index_109_.increment () ;
      enumerator_109.gotoNextObject () ;
    }
  }
  result += "\n//--- Constructor\n  public: cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_397_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_397 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_397.hasCurrentObject ()) {
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_397.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      result += " & in_" ;
      result += enumerator_397.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      if (enumerator_397.hasNextObject ()) {
        result += ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_397_.increment () ;
      enumerator_397.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_0) {
    result += "LOCATION_ARGS" ;
  }
  result += ") ;\n\n" ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result += "//--- Duplication\n  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;\n\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result += "//--- Attribute accessors\n" ;
  const enumGalgasBool test_2 = in_IS_5F_ABSTRACT.boolEnum () ;
  if (kBoolTrue == test_2) {
    result += "//--- Description\n  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result += "String & ioString,\n                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const int32_t inIndentation) const override = 0 ;\n\n  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;\n" ;
  }else if (kBoolFalse == test_2) {
    result += "//--- Description\n  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result += "String & ioString,\n                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const int32_t inIndentation) const override ;\n\n  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;\n" ;
  }
  result += "\n} ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//" ;
  result += GALGAS_string (" @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 2)).stringValue () ;
  result += " reference class\n//--------------------------------------------------------------------------------------------------\n\n#ifndef DO_NOT_GENERATE_CHECKINGS\n  void cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::printNonNullClassInstanceProperties (void) const {\n  " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "  acStrongPtr_class::printNonNullClassInstanceProperties () ;\n" ;
  }else if (kBoolFalse == test_0) {
    result += "  cPtr_" ;
    result += in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::printNonNullClassInstanceProperties () ;\n" ;
  }
  GALGAS_uint index_621_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_621 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_621.hasCurrentObject ()) {
      result += "    mProperty_" ;
      result += enumerator_621.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 13)).stringValue () ;
      result += ".printNonNullClassInstanceProperties (\"" ;
      result += enumerator_621.current_mPropertyName (HERE).readProperty_string ().stringValue () ;
      result += "\") ;\n" ;
      index_621_.increment () ;
      enumerator_621.gotoNextObject () ;
    }
  }
  result += "  }\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\n" ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 20)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 20)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result += "typeComparisonResult cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n  return kOperandEqual ;\n}\n\n//--------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_1) {
  }
  const enumGalgasBool test_2 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 28)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 28)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 28)).boolEnum () ;
  if (kBoolTrue == test_2) {
    result += "typeComparisonResult cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n  typeComparisonResult result = kOperandEqual ;\n  const cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " * p = (const cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " *) inOperandPtr ;\n  macroValidSharedObject (p, cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += ") ;\n" ;
    GALGAS_uint index_1637_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1637 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1637.hasCurrentObject ()) {
        result += "  if (kOperandEqual == result) {\n    result = mProperty_" ;
        result += enumerator_1637.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 35)).stringValue () ;
        result += ".objectCompare (p->mProperty_" ;
        result += enumerator_1637.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 35)).stringValue () ;
        result += ") ;\n  }\n" ;
        index_1637_.increment () ;
        enumerator_1637.gotoNextObject () ;
      }
    }
    result += "  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result += "\n\ntypeComparisonResult GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::objectCompare (const GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inOperand) const {\n  typeComparisonResult result = kOperandNotValid ;\n  if (isValid () && inOperand.isValid ()) {\n    const size_t myObjectPtr = size_t (mObjectPtr) ;\n    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else{\n      result = kOperandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) :\n" ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    result += "AC_GALGAS_reference_class" ;
  }else if (kBoolFalse == test_3) {
    result += "GALGAS_" ;
    result += in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " * inSourcePtr) :\n" ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    result += "AC_GALGAS_reference_class" ;
  }else if (kBoolFalse == test_4) {
    result += "GALGAS_" ;
    result += in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " (inSourcePtr) {\n  macroNullOrValidSharedObject (inSourcePtr, cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n}\n" ;
  const enumGalgasBool test_5 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 79)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 79)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 79)).boolEnum () ;
  if (kBoolTrue == test_5) {
    result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::constructor_new (LOCATION_ARGS) {\n  GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " result ;\n  macroMyNew (result.mObjectPtr, cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " (THERE)) ;\n  return result ;\n}\n\n" ;
  }else if (kBoolFalse == test_5) {
  }
  const enumGalgasBool test_6 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 88)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 88)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 88)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4019_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4019 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4019.hasCurrentObject ()) {
        result += "const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_4019.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 92)).stringValue () ;
        result += " & inAttribute_" ;
        result += enumerator_4019.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 92)).stringValue () ;
        if (enumerator_4019.hasNextObject ()) {
          result += ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4019_.increment () ;
        enumerator_4019.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 95)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      result += "LOCATION_ARGS" ;
    }else if (kBoolFalse == test_7) {
      result += "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "COMMA_LOCATION_ARGS" ;
    }
    result += ") {\n  GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " result ;\n  if (" ;
    GALGAS_uint index_4422_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4422 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4422.hasCurrentObject ()) {
        result += "inAttribute_" ;
        result += enumerator_4422.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 104)).stringValue () ;
        result += ".isValid ()" ;
        if (enumerator_4422.hasNextObject ()) {
          result += " && " ;
        }
        index_4422_.increment () ;
        enumerator_4422.gotoNextObject () ;
      }
    }
    result += ") {\n    macroMyNew (result.mObjectPtr, cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " (" ;
    GALGAS_uint index_4686_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4686 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4686.hasCurrentObject ()) {
        result += "inAttribute_" ;
        result += enumerator_4686.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 110)).stringValue () ;
        if (enumerator_4686.hasNextObject ()) {
          result += ", " ;
        }
        index_4686_.increment () ;
        enumerator_4686.gotoNextObject () ;
      }
    }
    result += " COMMA_THERE)) ;\n  }\n  return result ;\n}\n\n" ;
  }else if (kBoolFalse == test_6) {
  }
  GALGAS_uint index_4935_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4935 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4935.hasCurrentObject ()) {
      const enumGalgasBool test_8 = enumerator_4935.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_8) {
        result += "//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
        result += in_TYPE_5F_IDENTIFIER.stringValue () ;
        result += "::setter_set" ;
        result += enumerator_4935.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 122)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 122)).stringValue () ;
        result += " (" ;
        columnMarker = result.currentColumn () ;
        result += "GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_4935.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 122)).stringValue () ;
        result += " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result += "COMMA_UNUSED_LOCATION_ARGS) {\n  if (nullptr != mObjectPtr) {\n    cPtr_" ;
        result += in_TYPE_5F_IDENTIFIER.stringValue () ;
        result += " * p = (cPtr_" ;
        result += in_TYPE_5F_IDENTIFIER.stringValue () ;
        result += " *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_" ;
        result += in_TYPE_5F_IDENTIFIER.stringValue () ;
        result += ") ;\n    p->mProperty_" ;
        result += enumerator_4935.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 127)).stringValue () ;
        result += " = inValue ;\n  }\n}\n\n" ;
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
      result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_5717.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 136)).stringValue () ;
      result += " GALGAS_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::readProperty_" ;
      result += enumerator_5717.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 136)).stringValue () ;
      result += " (void) const {\n  if (nullptr == mObjectPtr) {\n    return GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_5717.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 138)).stringValue () ;
      result += " () ;\n  }else{\n    cPtr_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " * p = (cPtr_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += " *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += ") ;\n    return p->mProperty_" ;
      result += enumerator_5717.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 142)).stringValue () ;
      result += " ;\n  }\n}\n\n" ;
      index_5717_.increment () ;
      enumerator_5717.gotoNextObject () ;
    }
  }
  result += "//--------------------------------------------------------------------------------------------------\n//" ;
  result += GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 148)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 148)).stringValue () ;
  result += "\n//--------------------------------------------------------------------------------------------------\n\ncPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::cPtr_" ;
  result += in_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6776_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6776 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6776.hasCurrentObject ()) {
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_6776.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 153)).stringValue () ;
      result += " & in_" ;
      result += enumerator_6776.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 153)).stringValue () ;
      if (enumerator_6776.hasNextObject ()) {
        result += ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6776_.increment () ;
      enumerator_6776.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result += "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_9) {
    result += "LOCATION_ARGS" ;
  }
  result += ") :\n" ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_10) {
    result += "acStrongPtr_class" ;
  }else if (kBoolFalse == test_10) {
    result += "cPtr_" ;
    result += in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " (" ;
  GALGAS_uint index_7223_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7223 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7223.hasCurrentObject ()) {
      result += "in_" ;
      result += enumerator_7223.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 164)).stringValue () ;
      if (enumerator_7223.hasNextObject ()) {
        result += ", " ;
      }
      index_7223_.increment () ;
      enumerator_7223.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 167)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    result += " COMMA_THERE" ;
  }else if (kBoolFalse == test_11) {
    result += "THERE" ;
  }
  result += ")" ;
  GALGAS_uint index_7485_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7485 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7485.hasCurrentObject ()) {
      result += ",\nmProperty_" ;
      result += enumerator_7485.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 174)).stringValue () ;
      result += " (in_" ;
      result += enumerator_7485.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 174)).stringValue () ;
      result += ")" ;
      index_7485_.increment () ;
      enumerator_7485.gotoNextObject () ;
    }
  }
  result += " {\n}\n\n" ;
  const enumGalgasBool test_12 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 180)).boolEnum () ;
  if (kBoolTrue == test_12) {
    result += "//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " ;\n}\n\n" ;
    const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 185)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      result += "void cPtr_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::description (" ;
      columnMarker = result.currentColumn () ;
      result += "String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const int32_t /* inIndentation */) const {\n  ioString += \"[@" ;
      result += in_TYPE_5F_NAME.stringValue () ;
      result += "]\" ;\n}\n\n" ;
    }else if (kBoolFalse == test_13) {
      result += "void cPtr_" ;
      result += in_TYPE_5F_IDENTIFIER.stringValue () ;
      result += "::description (" ;
      columnMarker = result.currentColumn () ;
      result += "String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const int32_t inIndentation) const {\n  ioString += \"[@" ;
      result += in_TYPE_5F_NAME.stringValue () ;
      result += ":\" ;\n" ;
      GALGAS_uint index_8453_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8453 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8453.hasCurrentObject ()) {
          result += "  mProperty_" ;
          result += enumerator_8453.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 195)).stringValue () ;
          result += ".description (ioString, inIndentation+1) ;\n" ;
          if (enumerator_8453.hasNextObject ()) {
            result += "  ioString += \", \" ;\n" ;
          }
          index_8453_.increment () ;
          enumerator_8453.gotoNextObject () ;
        }
      }
      result += "  ioString += \"]\" ;\n}\n\n" ;
    }
  }else if (kBoolFalse == test_12) {
  }
  const enumGalgasBool test_14 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 203)).boolEnum () ;
  if (kBoolTrue == test_14) {
    result += "//--------------------------------------------------------------------------------------------------\n\nacPtr_class * cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += "::duplicate (LOCATION_ARGS) const {\n  acPtr_class * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_" ;
    result += in_TYPE_5F_IDENTIFIER.stringValue () ;
    result += " (" ;
    GALGAS_uint index_9022_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9022 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_9022 = enumerator_9022.hasCurrentObject () ;
      while (enumerator_9022.hasCurrentObject ()) {
        result += "mProperty_" ;
        result += enumerator_9022.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 210)).stringValue () ;
        if (enumerator_9022.hasNextObject ()) {
          result += ", " ;
        }
        index_9022_.increment () ;
        enumerator_9022.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9022) {
        result += " COMMA_" ;
      }
    }
    result += "THERE)) ;\n  return ptr ;\n}\n\n" ;
  }else if (kBoolFalse == test_14) {
  }
  result += "\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 1: @").add_operation (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" weak reference class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "AC_GALGAS_weak_reference" ;
  }else if (kBoolFalse == test_0) {
    result += "GALGAS_" ;
    result += in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n\n//--------------------------------- Constructor and assignment from strong reference\n  public: GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const class GALGAS_" ;
  result += in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) ;\n\n  public: GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & operator = (const class GALGAS_" ;
  result += in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) ;\n\n//--------------------------------- Bang operator\n  public: GALGAS_" ;
  result += in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " bang_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::objectCompare (const GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inOperand) const {\n  typeComparisonResult result = kOperandNotValid ;\n  if (isValid () && inOperand.isValid ()) {\n    cPtr_weakReference_proxy * myPtr = mProxyPtr ;\n    const size_t myObjectPtr = size_t (myPtr) ;\n    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;\n    const size_t operandObjectPtr = size_t (operandPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else{\n      result = kOperandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (void) :\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "AC_GALGAS_weak_reference" ;
  }else if (kBoolFalse == test_0) {
    result += "GALGAS_" ;
    result += in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::operator = (const GALGAS_" ;
  result += in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) {\n  cPtr_weakReference_proxy * proxyPtr = nullptr ;\n  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;\n  if (p != nullptr) {\n    proxyPtr = p->getProxy () ;\n  }\n  macroAssignSharedObject (mProxyPtr, proxyPtr) ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (const GALGAS_" ;
  result += in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " & inSource) :\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result += "AC_GALGAS_weak_reference" ;
  }else if (kBoolFalse == test_1) {
    result += "GALGAS_" ;
    result += in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result += " (inSource) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::constructor_nil (LOCATION_ARGS) {\n  GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += "::bang_" ;
  result += in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " (Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
  result += in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " result ;\n  if (mProxyPtr != nullptr) {\n    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;\n    if (strongPtr == nullptr) {\n      inCompiler->onTheFlySemanticError (\"weak reference is nil\" COMMA_THERE) ;\n    }else{\n      macroValidSharedObject (strongPtr, cPtr_" ;
  result += in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n      result = GALGAS_" ;
  result += in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " ((cPtr_" ;
  result += in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " *) strongPtr) ;\n    }\n  }\n  return result ;\n}\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string (" Phase 1: @").add_operation (in_ALIAS_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_type_alias.h1.galgasTemplate", 3)).stringValue () ;
  result += " type alias\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef GALGAS_" ;
  result += in_REFERENCED_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " GALGAS_" ;
  result += in_ALIAS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result += " callExtensionGetter_" ;
  result += in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const class cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_599_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_599 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_599.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_599.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue () ;
        result += " constin_" ;
        result += enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result += "class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue () ;
        result += " in_" ;
        result += enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue () ;
      }
      index_599_.increment () ;
      enumerator_599.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "class Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result += " callExtensionGetter_" ;
  result += in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_587_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_587 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_587.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_587.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_587.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
        result += " in_" ;
        result += enumerator_587.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result += "GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_587.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue () ;
        result += " in_" ;
        result += enumerator_587.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue () ;
      }
      index_587_.increment () ;
      enumerator_587.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 18)).stringValue () ;
  result += " result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_" ;
  result += in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 20)).stringValue () ;
  result += " (" ;
  GALGAS_uint index_1239_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1239 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1239.hasCurrentObject ()) {
      result += "in_" ;
      result += enumerator_1239.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 22)).stringValue () ;
      result += ", " ;
      index_1239_.increment () ;
      enumerator_1239.gotoNextObject () ;
    }
  }
  result += "inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result += " callExtensionGetter_" ;
  result += in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_584_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_584 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_584.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_584.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue () ;
        result += " constin_" ;
        result += enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result += "class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue () ;
        result += " in_" ;
        result += enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue () ;
      }
      index_584_.increment () ;
      enumerator_584.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "class Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_GETTER_5F_IMPLEMENTATION.stringValue () ;
  result += "\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
  result += " callExtensionGetter_" ;
  result += in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_706_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_706 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_706.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_706.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_706.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue () ;
        result += " in_" ;
        result += enumerator_706.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result += "GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_706.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue () ;
        result += " in_" ;
        result += enumerator_706.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue () ;
      }
      index_706_.increment () ;
      enumerator_706.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result += extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 22)).stringValue () ;
  result += " result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_" ;
  result += in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 24)).stringValue () ;
  result += " (" ;
  GALGAS_uint index_1358_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1358 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1358.hasCurrentObject ()) {
      result += "in_" ;
      result += enumerator_1358.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 26)).stringValue () ;
      result += ", " ;
      index_1358_.increment () ;
      enumerator_1358.gotoNextObject () ;
    }
  }
  result += "inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Overriding extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_GETTER_5F_IMPLEMENTATION.stringValue () ;
  result += "\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result += ") (" ;
  columnMarker = result.currentColumn () ;
  result += "class cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 8)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_624_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_624 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_624.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue () ;
        result += " constinArgument" ;
        result += index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "class GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue () ;
          result += " & ioArgument" ;
          result += index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue () ;
            result += " & outArgument" ;
            result += index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue () ;
            result += " inArgument" ;
            result += index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_624_IDX.increment () ;
      enumerator_624.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "class Compiler * inCompiler\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 26)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const int32_t inClassIndex,\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "extensionSetterSignature_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result += " inModifier) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "class cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_2145_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2145 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2145.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result += "const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue () ;
        result += " constin_" ;
        result += enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result += "GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue () ;
          result += " & io_" ;
          result += enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue () ;
            result += " & out_" ;
            result += enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue () ;
            result += " in_" ;
            result += enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2145_.increment () ;
      enumerator_2145.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic TC_UniqueArray <extensionSetterSignature_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result += "> gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result += " ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const int32_t inClassIndex,\n               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "extensionSetterSignature_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result += " inModifier) {\n  gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result += ".forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void freeExtensionModifier_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result += " (void) {\n  gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue () ;
  result += ".removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nC_PrologueEpilogue gSetter_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "nullptr,\n       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "freeExtensionModifier_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue () ;
  result += ") ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_2143_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2143 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2143.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2143.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 32)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_2143.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue () ;
        result += " constin_" ;
        result += enumerator_2143.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2143.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 34)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_2143.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue () ;
          result += " & io_" ;
          result += enumerator_2143.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2143.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_2143.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue () ;
            result += " & out_" ;
            result += enumerator_2143.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_2143.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue () ;
            result += " in_" ;
            result += enumerator_2143.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue () ;
          }
        }
      }
      index_2143_.increment () ;
      enumerator_2143.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n" ;
  GALGAS_uint index_3180_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3180 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3180.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3180.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result += "  out_" ;
        result += enumerator_3180.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 48)).stringValue () ;
        result += ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_3180_.increment () ;
      enumerator_3180.gotoNextObject () ;
    }
  }
  result += "//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 53)).stringValue () ;
  result += ") ;\n    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue () ;
  result += " f = nullptr ;\n    if (classIndex < gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result += ".count ()) {\n      f = gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue () ;
  result += " (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue () ;
  result += ".count ()) {\n           f = gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue () ;
  result += " (p->mSlotID COMMA_HERE) ;\n         }\n         p = p->mSuperclassDescriptor ;\n       }\n       gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue () ;
  result += ".forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;\n    }\n    f (inObject, " ;
  GALGAS_uint index_4880_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4880 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4880.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4880.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 72)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result += "constin_" ;
        result += enumerator_4880.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 73)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4880.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 74)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result += "io_" ;
          result += enumerator_4880.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 75)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4880.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 76)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result += "out_" ;
            result += enumerator_4880.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 77)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result += "in_" ;
            result += enumerator_4880.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 79)).stringValue () ;
          }
        }
      }
      result += ", " ;
      index_4880_.increment () ;
      enumerator_4880.gotoNextObject () ;
    }
  }
  result += "inCompiler COMMA_THERE) ;\n  }\n}\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result += ") (" ;
  columnMarker = result.currentColumn () ;
  result += "class cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 8)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_615_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_615 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_615.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue () ;
        result += " constinArgument" ;
        result += index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "class GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue () ;
          result += " & ioArgument" ;
          result += index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue () ;
            result += " & outArgument" ;
            result += index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue () ;
            result += " inArgument" ;
            result += index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_615_IDX.increment () ;
      enumerator_615.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "class Compiler * inCompiler\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 26)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const int32_t inClassIndex,\n               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "extensionSetterSignature_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result += " inModifier) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "class cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_2149_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2149 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2149.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result += "const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue () ;
        result += " constin_" ;
        result += enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result += "GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue () ;
          result += " & io_" ;
          result += enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue () ;
            result += " & out_" ;
            result += enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue () ;
            result += " in_" ;
            result += enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2149_.increment () ;
      enumerator_2149.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic TC_UniqueArray <extensionSetterSignature_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result += "> gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result += " ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const int32_t inClassIndex,\n               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "extensionSetterSignature_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result += " inModifier) {\n  gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result += ".forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_1425_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1425 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1425.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 21)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue () ;
        result += " constin_" ;
        result += enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 23)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
          result += " & io_" ;
          result += enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 25)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue () ;
            result += " & out_" ;
            result += enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue () ;
            result += " in_" ;
            result += enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue () ;
          }
        }
      }
      index_1425_.increment () ;
      enumerator_1425.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n" ;
  GALGAS_uint index_2462_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2462 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2462.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2462.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result += "  out_" ;
        result += enumerator_2462.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 37)).stringValue () ;
        result += ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_2462_.increment () ;
      enumerator_2462.gotoNextObject () ;
    }
  }
  result += "//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 42)).stringValue () ;
  result += ") ;\n    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue () ;
  result += " f = nullptr ;\n    if (classIndex < gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue () ;
  result += ".count ()) {\n      f = gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue () ;
  result += " (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue () ;
  result += ".count ()) {\n           f = gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue () ;
  result += " (p->mSlotID COMMA_HERE) ;\n         }\n         p = p->mSuperclassDescriptor ;\n       }\n       gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result += ".forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;\n    }\n    f (inObject, " ;
  GALGAS_uint index_4162_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4162 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4162.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4162.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 61)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result += "constin_" ;
        result += enumerator_4162.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 62)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4162.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 63)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result += "io_" ;
          result += enumerator_4162.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 64)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4162.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 65)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result += "out_" ;
            result += enumerator_4162.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 66)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result += "in_" ;
            result += enumerator_4162.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 68)).stringValue () ;
          }
        }
      }
      result += ", " ;
      index_4162_.increment () ;
      enumerator_4162.gotoNextObject () ;
    }
  }
  result += "inCompiler COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result += "\n//--------------------------------------------------------------------------------------------------\n\nstatic void defineExtensionSetter_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue () ;
  result += " (void) {\n  enterExtensionSetter_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "kTypeDescriptor_GALGAS_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue () ;
  result += ".mSlotID,\n        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "extensionSetter_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue () ;
  result += ") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void freeExtensionModifier_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue () ;
  result += " (void) {\n  gExtensionModifierTable_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue () ;
  result += ".removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nC_PrologueEpilogue gSetter_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "defineExtensionSetter_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result += ",\n       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "freeExtensionModifier_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue () ;
  result += ") ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Overriding extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result += "\n//--------------------------------------------------------------------------------------------------\n\nstatic void defineExtensionSetter_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue () ;
  result += " (void) {\n  enterExtensionSetter_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "kTypeDescriptor_GALGAS_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result += ".mSlotID,\n        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "extensionSetter_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result += ") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nC_PrologueEpilogue gSetter_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result += " (defineExtensionSetter_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result += "_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result += ", nullptr) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Abstract extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_" ;
  result += in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "class cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_558_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_558 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_558.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue () ;
        result += " constin_" ;
        result += enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "class GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue () ;
          result += " & io_" ;
          result += enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue () ;
            result += " & out_" ;
            result += enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue () ;
            result += " in_" ;
            result += enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_558_.increment () ;
      enumerator_558.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "class Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Abstract extension method '@").add_operation (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_" ;
  result += in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "cPtr_" ;
  result += extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_618_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_618 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_618.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_618.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_618.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue () ;
        result += " constin_" ;
        result += enumerator_618.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_618.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_618.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue () ;
          result += " & io_" ;
          result += enumerator_618.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_618.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_618.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue () ;
            result += " & out_" ;
            result += enumerator_618.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_618.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue () ;
            result += " in_" ;
            result += enumerator_618.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_618_.increment () ;
      enumerator_618.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n" ;
  GALGAS_uint index_1655_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1655 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1655.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1655.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 25)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result += "  out_" ;
        result += enumerator_1655.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 26)).stringValue () ;
        result += ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_1655_.increment () ;
      enumerator_1655.gotoNextObject () ;
    }
  }
  result += "//--- Find method\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_" ;
  result += extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).stringValue () ;
  result += ") ;\n    inObject->method_" ;
  result += in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 32)).stringValue () ;
  result += " (" ;
  GALGAS_uint index_2208_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2208 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2208.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2208.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result += "constin_" ;
        result += enumerator_2208.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2208.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result += "io_" ;
          result += enumerator_2208.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2208.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result += "out_" ;
            result += enumerator_2208.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result += "in_" ;
            result += enumerator_2208.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      result += ", " ;
      index_2208_.increment () ;
      enumerator_2208.gotoNextObject () ;
    }
  }
  result += "inCompiler COMMA_THERE) ;\n  }\n}\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_" ;
  result += in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "class cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_549.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue () ;
        result += " constin_" ;
        result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "class GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue () ;
          result += " & io_" ;
          result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue () ;
            result += " & out_" ;
            result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue () ;
            result += " in_" ;
            result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result += "\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_" ;
  result += in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 11)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 11)).stringValue () ;
  result += " * inObject" ;
  GALGAS_uint index_671_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_671 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_671.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue () ;
        result += " constin_" ;
        result += enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 16)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue () ;
          result += " & io_" ;
          result += enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 18)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue () ;
            result += " & out_" ;
            result += enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result += "GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)).stringValue () ;
            result += " in_" ;
            result += enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)).stringValue () ;
          }
        }
      }
      index_671_.increment () ;
      enumerator_671.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n" ;
  GALGAS_uint index_1680_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1680 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1680.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1680.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 28)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result += "  out_" ;
        result += enumerator_1680.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 29)).stringValue () ;
        result += ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_1680_.increment () ;
      enumerator_1680.gotoNextObject () ;
    }
  }
  result += "  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_" ;
  result += in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 33)).stringValue () ;
  result += ") ;\n    inObject->method_" ;
  result += in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 34)).stringValue () ;
  result += "  (" ;
  GALGAS_uint index_2183_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2183 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2183.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result += "constin_" ;
        result += enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 37)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result += "io_" ;
          result += enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 39)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 40)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result += "out_" ;
            result += enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 41)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result += "in_" ;
            result += enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 43)).stringValue () ;
          }
        }
      }
      result += ", " ;
      index_2183_.increment () ;
      enumerator_2183.gotoNextObject () ;
    }
  }
  result += "inCompiler COMMA_THERE) ;\n  }\n}\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Overriding extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result += "\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  GALGAS_uint index_307_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_307 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_307.hasCurrentObject ()) {
      result += "extern const char * gWrapperFileContent_" ;
      result += enumerator_307.current_mValue (HERE).stringValue () ;
      result += "_" ;
      result += in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue () ;
      result += " ;\n" ;
      index_307_idx.increment () ;
      enumerator_307.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n\n" ;
  GALGAS_uint index_577_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_577 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_577.hasCurrentObject ()) {
      result += "extern const uint8_t gWrapperFileContent_" ;
      result += enumerator_577.current_mValue (HERE).stringValue () ;
      result += "_" ;
      result += in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue () ;
      result += " [] ;\n" ;
      index_577_idx.increment () ;
      enumerator_577.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n\n" ;
  GALGAS_uint index_841_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_841 (in_FILE_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_841.hasCurrentObject ()) {
      result += "extern const cRegularFileWrapper gWrapperFile_" ;
      result += enumerator_841.current_mValue (HERE).stringValue () ;
      result += "_" ;
      result += in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue () ;
      result += " ;\n" ;
      index_841_idx.increment () ;
      enumerator_841.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n\n" ;
  GALGAS_uint index_1108_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1108 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1108.hasCurrentObject ()) {
      result += "extern const cDirectoryWrapper gWrapperDirectory_" ;
      result += enumerator_1108.current_mValue (HERE).stringValue () ;
      result += "_" ;
      result += in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue () ;
      result += " ;\n" ;
      index_1108_.increment () ;
      enumerator_1108.gotoNextObject () ;
    }
  }
  result += "\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue () ;
  result += "\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Extension getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " extensionGetter_" ;
  result += in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const class GALGAS_" ;
  result += in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result += " & inObject" ;
  GALGAS_uint index_588_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_588 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_588.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_588.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_588.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue () ;
        result += " & constinArgument" ;
        result += index_588_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result += "class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_588.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue () ;
        result += " inArgument" ;
        result += index_588_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue () ;
      }
      index_588_IDX.increment () ;
      enumerator_588.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "class Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Extension Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result += "\n\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionMethod_" ;
  result += in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const class GALGAS_" ;
  result += in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue () ;
  result += " inObject" ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_549.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue () ;
        result += " constin_" ;
        result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "class GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue () ;
          result += " & io_" ;
          result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue () ;
            result += " & out_" ;
            result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue () ;
            result += " in_" ;
            result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "class Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result += "\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Extension setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionSetter_" ;
  result += in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "class GALGAS_" ;
  result += in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue () ;
  result += " & ioObject" ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_549.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue () ;
        result += " constin_" ;
        result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "class GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue () ;
          result += " & io_" ;
          result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue () ;
            result += " & out_" ;
            result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue () ;
            result += " in_" ;
            result += enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "class Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result += in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " function_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_473_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_473 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_473.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_473.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_473.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue () ;
        result += " & constinArgument" ;
        result += index_473_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue () ;
        result += ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_0) {
        result += "class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_473.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue () ;
        result += " inArgument" ;
        result += index_473_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue () ;
        result += ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_473_IDX.increment () ;
      enumerator_473.gotoNextObject () ;
    }
  }
  result += "class Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result += "\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const C_galgas_type_descriptor * functionArgs_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
  result += " [" ;
  result += in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
  result += "] = {\n" ;
  GALGAS_uint index_850_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_850 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_850.hasCurrentObject ()) {
      result += "  & kTypeDescriptor_GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_850.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 15)).stringValue () ;
      result += ",\n" ;
      index_850_.increment () ;
      enumerator_850.gotoNextObject () ;
    }
  }
  result += "  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 23)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "static GALGAS_object functionWithGenericHeader_" ;
    result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 24)).stringValue () ;
    result += " (" ;
    columnMarker = result.currentColumn () ;
    result += "Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const cObjectArray & /* inEffectiveParameterArray */,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const GALGAS_location & /* inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) {\n  return function_" ;
    result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 28)).stringValue () ;
    result += " (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n" ;
  }else if (kBoolFalse == test_0) {
    result += "static GALGAS_object functionWithGenericHeader_" ;
    result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 31)).stringValue () ;
    result += " (" ;
    columnMarker = result.currentColumn () ;
    result += "Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const cObjectArray & inEffectiveParameterArray,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const GALGAS_location & /* inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) {\n" ;
    GALGAS_uint index_2160_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2160 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2160.hasCurrentObject ()) {
        result += "  const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_2160.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result += " operand" ;
        result += index_2160_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result += " = GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_2160.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result += "::extractObject (" ;
        columnMarker = result.currentColumn () ;
        result += "inEffectiveParameterArray.objectAtIndex (" ;
        result += index_2160_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 37)).stringValue () ;
        result += " COMMA_HERE),\n  " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result += "inCompiler\n  " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result += "COMMA_THERE) ;\n" ;
        index_2160_IDX.increment () ;
        enumerator_2160.gotoNextObject () ;
      }
    }
    result += "  return function_" ;
    result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 41)).stringValue () ;
    result += " (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_2656_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2656 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2656.hasCurrentObject ()) {
        result += "operand" ;
        result += index_2656_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 43)).stringValue () ;
        result += ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_2656_IDX.increment () ;
        enumerator_2656.gotoNextObject () ;
      }
    }
    result += "inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_THERE).getter_object (THERE) ;\n}\n" ;
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n\nC_galgas_function_descriptor functionDescriptor_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += in_FUNCTION_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue () ;
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "functionWithGenericHeader_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 52)).stringValue () ;
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "& kTypeDescriptor_GALGAS_" ;
  result += in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).stringValue () ;
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "functionArgs_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 55)).stringValue () ;
  result += ") ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid routine_" ;
  result += in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_450_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_450 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_450.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "const class GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue () ;
        result += " constinArgument" ;
        result += index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "class GALGAS_" ;
          result += extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue () ;
          result += " & ioArgument" ;
          result += index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue () ;
            result += " & outArgument" ;
            result += index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result += "class GALGAS_" ;
            result += extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue () ;
            result += " inArgument" ;
            result += index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue () ;
          }
        }
      }
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_450_IDX.increment () ;
      enumerator_450.gotoNextObject () ;
    }
  }
  result += "class Compiler * inCompiler\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_ROUTINE_5F_IMPLEMENTATION.stringValue () ;
  result += "\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  result += in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result += "\n\n//--------------------------------------------------------------------------------------------------\n//  Function implementation                                                                      \n//--------------------------------------------------------------------------------------------------\n\nstatic bool gOnceFunctionResultAvailable_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 13)).stringValue () ;
  result += " = false ;\nstatic GALGAS_" ;
  result += in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " gOnceFunctionResult_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 14)).stringValue () ;
  result += " ;\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result += in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += " function_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 18)).stringValue () ;
  result += " (" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "class Compiler * inCompiler\n              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) {\n  if (! gOnceFunctionResultAvailable_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 20)).stringValue () ;
  result += ") {\n    gOnceFunctionResult_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue () ;
  result += " = onceFunction_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue () ;
  result += " (inCompiler COMMA_THERE) ;\n    gOnceFunctionResultAvailable_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 22)).stringValue () ;
  result += " = true ;\n  }\n  return gOnceFunctionResult_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 24)).stringValue () ;
  result += " ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void releaseOnceFunctionResult_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 29)).stringValue () ;
  result += " (void) {\n  gOnceFunctionResult_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 30)).stringValue () ;
  result += ".drop () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nC_PrologueEpilogue gEpilogueForOnceFunction_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 35)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "nullptr,\n        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "releaseOnceFunctionResult_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
  result += ") ;\n\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const C_galgas_type_descriptor * functionArgs_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue () ;
  result += " [" ;
  result += in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue () ;
  result += "] = {\n" ;
  GALGAS_uint index_2589_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_2589 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2589.hasCurrentObject ()) {
      result += "  & kTypeDescriptor_GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_2589.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 45)).stringValue () ;
      result += ",\n" ;
      index_2589_.increment () ;
      enumerator_2589.gotoNextObject () ;
    }
  }
  result += "  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 53)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "static GALGAS_object functionWithGenericHeader_" ;
    result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 54)).stringValue () ;
    result += " (" ;
    columnMarker = result.currentColumn () ;
    result += "Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const cObjectArray & /* inEffectiveParameterArray */,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const GALGAS_location & /* inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) {\n  return function_" ;
    result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 58)).stringValue () ;
    result += " (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n" ;
  }else if (kBoolFalse == test_0) {
    result += "static GALGAS_object functionWithGenericHeader_" ;
    result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 61)).stringValue () ;
    result += " (" ;
    columnMarker = result.currentColumn () ;
    result += "Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const cObjectArray & inEffectiveParameterArray,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "const GALGAS_location & /* inErrorLocation*/\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result += "COMMA_LOCATION_ARGS) {\n" ;
    GALGAS_uint index_3898_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_3898 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3898.hasCurrentObject ()) {
        result += "  const GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_3898.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result += " operand" ;
        result += index_3898_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result += " = GALGAS_" ;
        result += extensionGetter_identifierRepresentation (enumerator_3898.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result += "::extractObject (inEffectiveParameterArray.objectAtIndex (" ;
        result += index_3898_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result += " COMMA_HERE), inCompiler COMMA_THERE) ;\n" ;
        index_3898_IDX.increment () ;
        enumerator_3898.gotoNextObject () ;
      }
    }
    result += "  return function_" ;
    result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 68)).stringValue () ;
    result += " (" ;
    GALGAS_uint index_4371_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_4371 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4371.hasCurrentObject ()) {
        result += "operand" ;
        result += index_4371_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 70)).stringValue () ;
        result += ", " ;
        index_4371_IDX.increment () ;
        enumerator_4371.gotoNextObject () ;
      }
    }
    result += "inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n" ;
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n\nC_galgas_function_descriptor functionDescriptor_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += in_FUNCTION_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue () ;
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "functionWithGenericHeader_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 79)).stringValue () ;
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "& kTypeDescriptor_GALGAS_" ;
  result += in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).stringValue () ;
  result += ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "functionArgs_" ;
  result += in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 82)).stringValue () ;
  result += ") ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_string filewrapperTemplate_" ;
  result += in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue () ;
  result += "_" ;
  result += in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "class Compiler * inCompiler" ;
  GALGAS_uint index_568_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_568 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_568.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const class GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_568.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue () ;
      result += " & " ;
      result += enumerator_568.current_mFormalArgumentCppName (HERE).stringValue () ;
      index_568_.increment () ;
      enumerator_568.gotoNextObject () ;
    }
  }
  result += "\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_string filewrapperTemplate_" ;
  result += in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue () ;
  result += "_" ;
  result += in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "Compiler * " ;
  const enumGalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "/* " ;
    result += function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 9)).stringValue () ;
    result += " */" ;
  }else if (kBoolFalse == test_0) {
    result += function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 11)).stringValue () ;
  }
  GALGAS_uint index_677_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_677 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_677.hasCurrentObject ()) {
      result += ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result += "const GALGAS_" ;
      result += extensionGetter_identifierRepresentation (enumerator_677.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue () ;
      result += " & " ;
      const enumGalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (enumerator_677.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result += "/* " ;
        result += enumerator_677.current_mFormalArgumentCppName (HERE).stringValue () ;
        result += " */" ;
      }else if (kBoolFalse == test_1) {
        result += enumerator_677.current_mFormalArgumentCppName (HERE).stringValue () ;
      }
      index_677_.increment () ;
      enumerator_677.gotoNextObject () ;
    }
  }
  result += "\n " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_UNUSED_LOCATION_ARGS) {\n  String result ;\n" ;
  const enumGalgasBool test_2 = in_USES_5F_COLUMN_5F_MARKER.boolEnum () ;
  if (kBoolTrue == test_2) {
    result += "  uint32_t columnMarker = 0 ;\n" ;
  }else if (kBoolFalse == test_2) {
  }
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result += in_GENERATED_5F_INSTRUCTION_5F_STRING.stringValue () ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result += "  return GALGAS_string (result) ;\n}\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n#include \"galgas2/cCollectionElement.h\"\n#include \"galgas2/cSortedListElement.h\"\n#include \"galgas2/capSortedListElement.h\"\n#include \"galgas2/Compiler.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement::cMapElement (const GALGAS_lstring & inLKey\n                          COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmProperty_lkey (inLKey) {\n}\n\n" ;
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
  result += "\n#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"strings/String-class.h\"\n#include \"time/C_Timer.h\"\n#include \"galgas2/AC_GALGAS_root.h\"\n#include \"galgas2/C_galgas_type_descriptor.h\"\n#include \"galgas2/typeComparisonResult.h\"\n#include \"galgas2/cGenericAbstractEnumerator.h\"\n#include \"galgas2/cEnumerator_range.h\"\n#include \"galgas2/AC_GALGAS_list.h\"\n#include \"galgas2/AC_GALGAS_sortedlist.h\"\n#include \"galgas2/AC_GALGAS_map.h\"\n#include \"galgas2/AC_GALGAS_reference_class.h\"\n#include \"galgas2/AC_GALGAS_value_class.h\"\n#include \"galgas2/AC_GALGAS_enumAssociatedValues.h\"\n#include \"galgas2/AC_GALGAS_graph.h\"\n#include \"galgas2/acStrongPtr_class.h\"\n#include \"galgas2/cPtr_weakReference_proxy.h\"\n#include \"galgas2/AC_GALGAS_weak_reference.h\"\n#include \"command_line_interface/C_BoolCommandLineOption.h\"\n#include \"command_line_interface/C_UIntCommandLineOption.h\"\n#include \"command_line_interface/C_StringCommandLineOption.h\"\n#include \"command_line_interface/C_StringListCommandLineOption.h\"\n#include \"utilities/C_PrologueEpilogue.h\"\n#include \"big-integers/BigSigned.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass Compiler ;\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n\n#include \"galgas2/cCollectionElement.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement : public cCollectionElement {\n//--- Attribut\n  public: GALGAS_lstring mProperty_lkey ;\n\n//--- Default constructor\n  public: cMapElement (const GALGAS_lstring & inLKey\n                        COMMA_LOCATION_ARGS) ;\n\n//--- No copy\n  private: cMapElement (const cMapElement &) ;\n  private: cMapElement & operator = (const cMapElement &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"galgas2/cSortedListElement.h\"\n#include \"galgas2/capSortedListElement.h\"\n#include \"galgas2/C_galgas_function_descriptor.h\"\n#include \"galgas2/cObjectArray.h\"\n\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @sint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int32_t mSIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int32_t intValue (void) const { return mSIntValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint (const int32_t inValue) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @sint64 type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int64_t mSInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int64_t int64Value (void) const { return mSInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint_36__34_ (const int64_t inValue) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @object type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_object ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_object : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: cPtr_object * mSharedObject ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedObject != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_object (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_object (AC_GALGAS_root * inObjectPointer\n                          COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_object (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_object (const GALGAS_object & inSource) ;\n  public: GALGAS_object & operator = (const GALGAS_object & inSource) ;\n\n//--------------------------------- Embedded Object\n  public: const AC_GALGAS_root * embeddedObject (void) const ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @uint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint32_t mUIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n  public: inline void increment (void) { mUIntValue ++ ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_uint (const uint32_t inValue) ;\n  public: GALGAS_uint (const bool inValid, const uint32_t inValue) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//  @uint64 type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint64_t mUInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_uint_36__34_ (const uint64_t inValue) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("@bool type").stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef enum {kBoolNotValid, kBoolFalse, kBoolTrue} enumGalgasBool ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_bool : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: bool mBoolValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n  public: inline bool boolValue (void) const { return mBoolValue ; }\n  public: enumGalgasBool boolEnum (void) const ;\n\n//--------------------------------- Drop\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_bool (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_bool (const bool inValue) ; // Is built\n  public: GALGAS_bool (const bool inBuilt, const bool inValue) ;\n\n//--------------------------------- Constructor for comparison result\n  public: GALGAS_bool (const typeComparisonKind inComparisonKind,\n                        const typeComparisonResult inComparisonResult) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n// @binaryset type\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"bdd/C_BDD.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_binaryset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: C_BDD mBDD ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline C_BDD bddValue (void) const { return mBDD ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_binaryset (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_binaryset (const C_BDD & inValue) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @function type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass C_galgas_function_descriptor ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_function : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: const C_galgas_function_descriptor * mFunctionDescriptor ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mFunctionDescriptor ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mFunctionDescriptor = nullptr ; }\n  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_function (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_function (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_function (const GALGAS_function & inSource) ;\n  public: GALGAS_function & operator = (const GALGAS_function & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_function (const C_galgas_function_descriptor * inValue) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @type type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_type : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const C_galgas_type_descriptor * mTypeDescriptor ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return nullptr != mTypeDescriptor ; }\n  public: inline void drop (void) override { mTypeDescriptor = nullptr ; }\n  public: inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_type (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_type (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_type (const GALGAS_type & inSource) ;\n  public: GALGAS_type & operator = (const GALGAS_type & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_type (const C_galgas_type_descriptor * inValue) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @location type\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"galgas2/LocationInSource.h\"\n#include \"galgas2/C_SourceTextInString.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_location : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: LocationInSource mStartLocationInSource ;\n  private: LocationInSource mEndLocationInSource ;\n  private: C_SourceTextInString mSourceText ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: LocationInSource startLocation (void) const { return mStartLocationInSource ; }\n  public: LocationInSource endLocation (void) const { return mEndLocationInSource ; }\n  public: C_SourceTextInString sourceText (void) const { return mSourceText ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_location (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_location (const LocationInSource & inStartLocationInSource,\n                            const LocationInSource & inEndLocationInSource,\n                            const C_SourceTextInString & inSourceText) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @data type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_data : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: C_Data mData ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline C_Data dataValue (void) const { return mData ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_data (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_data (const C_Data & inData) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @char type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_char : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: utf32 mCharValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline utf32 charValue (void) const { return mCharValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_char (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_char (const utf32 inValue) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//  @double type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_double : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: double mDoubleValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline double doubleValue (void) const { return mDoubleValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_double (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_double (const double inValue) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @string type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_string : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: String mString ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: inline String stringValue (void) const { return mString ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_string (void) ;\n\n//--------------------------------- Constructor for making an empty string\n  public: static GALGAS_string makeEmptyString (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_string (const String & inValue) ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const override ;\n  #endif\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @stringset type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_stringset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: class cSharedStringsetRoot * mSharedRoot ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedRoot != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_stringset (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_stringset (void) ;\n\n//--------------------------------- In debug mode : check method\n  protected: void checkStringset (LOCATION_ARGS) const ;\n\n//--------------------------------- Insulate\n  protected: void insulate (LOCATION_ARGS) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @filewrapper type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cRegularFileWrapper {\n  public: const char * mName ;\n  public: const char * mExtension ;\n  public: const bool mIsTextFile ; // True: text file, false: binary file\n  public: const uint32_t mFileLength ;\n  public: const char * mContents ;\n\n//--- Constructor\n  public: cRegularFileWrapper (const char * inName,\n                                const char * inExtension,\n                                const bool inIsTextFile,\n                                const uint32_t inFileLength,\n                                const char * inContents) ;\n\n//--- No copy\n  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cDirectoryWrapper {\n  public: const char * mDirectoryName ;\n  public: const uint32_t mFileCount ;\n  public: const cRegularFileWrapper * * const mFiles ;\n  public: const uint32_t mDirectoryCount ;\n  public: const cDirectoryWrapper * * mDirectories ;\n\n//--- Constructor\n  public: cDirectoryWrapper (const char * inDirectoryName,\n                              const uint32_t inFileCount,\n                              const cRegularFileWrapper * * const inFiles,\n                              const uint32_t inDirectoryCount,\n                              const cDirectoryWrapper * * inDirectories) ;\n\n//--- No copy\n  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_filewrapper : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n  private: String mCurrentDirectory ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mRootDirectoryPtr ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mRootDirectoryPtr = nullptr ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_filewrapper (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_filewrapper (const GALGAS_filewrapper & inSource) ;\n  public: GALGAS_filewrapper & operator = (const GALGAS_filewrapper & inSource) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("@application type").stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_application : public AC_GALGAS_root {\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return false ; }\n  public: inline void drop (void) override { }\n\n//--------------------------------- Default constructor\n  public: GALGAS_application (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_application (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_application (const GALGAS_application & inSource) ;\n  public: GALGAS_application & operator = (const GALGAS_application & inSource) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @bigint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_bigint : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: BigSigned mValue ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: inline BigSigned bigintValue (void) const { return mValue ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_bigint (void) ;\n\n//--------------------------------- Constructor\n  public: GALGAS_bigint (const BigSigned & inValue) ;\n  public: GALGAS_bigint (const char * inDecimalString, Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_bigint (void) ;\n\n" ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//\n//   @timer type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_timer : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: C_Timer mTimer ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_timer (void) ;\n\n" ;
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
  result += "#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n" ;
  GALGAS_uint index_295_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_295 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_295.hasCurrentObject ()) {
      result += "#include \"" ;
      result += enumerator_295.current_mValue (HERE).stringValue () ;
      result += ".h\"\n" ;
      index_295_.increment () ;
      enumerator_295.gotoNextObject () ;
    }
  }
  result += "\n" ;
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
  result += "#include \"galgas2/Compiler.h\"\n#include \"galgas2/C_galgas_io.h\"\n#include \"galgas2/C_galgas_CLI_Options.h\"\n#include \"utilities/C_PrologueEpilogue.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n" ;
  GALGAS_uint index_292_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_292 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_292.hasCurrentObject ()) {
      result += "#include \"" ;
      result += enumerator_292.current_mValue (HERE).stringValue () ;
      result += ".h\"\n" ;
      index_292_.increment () ;
      enumerator_292.gotoNextObject () ;
    }
  }
  result += "\n" ;
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
  GALGAS_lstring var_nameForUsefulness_15880 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_0.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 347)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15880, var_nameForUsefulness_15880, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 348)) ;
  }
  const GALGAS_predefinedTypeAST temp_1 = this ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (temp_1.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 351)), GALGAS_primitiveTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_2.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 353)), temp_3.readProperty_mPredefinedTypeName (), temp_4.readProperty_mKind ()  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 352))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 350)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities (const GALGAS_usefulEntitiesGraph constinArgument_inUsefulEntitiesGraph,
                                  const GALGAS_lstringlist constinArgument_inRootEntities,
                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("useful-entities-computation.galgas", 36)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringlist var_undefinedNodeList_1879 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas", 38)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsStrictSup, var_undefinedNodeList_1879.getter_count (SOURCE_FILE ("useful-entities-computation.galgas", 39)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_string var_s_1996 = GALGAS_string ("usefulness computation, undefined nodes:") ;
            cEnumerator_stringlist enumerator_2054 (var_undefinedNodeList_1879, kENUMERATION_UP) ;
            while (enumerator_2054.hasCurrentObject ()) {
              var_s_1996.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_2054.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 42)) ;
              enumerator_2054.gotoNextObject () ;
            }
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 44)), var_s_1996, fixItArray2  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 44)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_lstringlist var_usefullEntityList_2220 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("useful-entities-computation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 47)) ;
          GALGAS_stringset var_usefullEntitySet_2314 = GALGAS_stringset::constructor_setWithLStringList (var_usefullEntityList_2220  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 48)) ;
          GALGAS_stringset var_allEntitySet_2394 = GALGAS_stringset::constructor_setWithStringList (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas", 49))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 49)) ;
          GALGAS_stringset var_unusedEntities_2483 = var_allEntitySet_2394.substract_operation (var_usefullEntitySet_2314, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 50)) ;
          GALGAS_uselessEntityLocationMap var_uselessEntityLocationMap_2568 = GALGAS_uselessEntityLocationMap::constructor_emptyMap (SOURCE_FILE ("useful-entities-computation.galgas", 51)) ;
          cEnumerator_stringset enumerator_2609 (var_unusedEntities_2483, kENUMERATION_UP) ;
          while (enumerator_2609.hasCurrentObject ()) {
            GALGAS_location var_l_2656 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2609.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 53)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, var_l_2656.objectCompare (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 54)))).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 55)), GALGAS_string ("unused entity, '").add_operation (enumerator_2609.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)).add_operation (GALGAS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)).add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)), fixItArray4  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)) ;
              }
            }
            if (kBoolFalse == test_3) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_uselessEntityLocationMap_2568.getter_hasKey (var_l_2656.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 57)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 57)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas", 57)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  {
                  var_uselessEntityLocationMap_2568.setter_insertKey (var_l_2656.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 58)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 58)), var_l_2656, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 58)) ;
                  }
                }
              }
            }
            enumerator_2609.gotoNextObject () ;
          }
          cEnumerator_uselessEntityLocationMap enumerator_3111 (var_uselessEntityLocationMap_2568, kENUMERATION_UP) ;
          while (enumerator_3111.hasCurrentObject ()) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_3111.current_mLocation (HERE), GALGAS_string ("unused entity, due to option --").add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)), fixItArray6  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)) ;
            enumerator_3111.gotoNextObject () ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'getterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_getterNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inGetterName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("getter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)).add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)), constinArgument_inGetterName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_getterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_getterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_getterNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getterNameForUsefulEntitiesGraph ("getterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_getterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_getterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_setterNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inSetterName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("setter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)).add_operation (constinArgument_inSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)), constinArgument_inSetterName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_setterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_setterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_setterNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setterNameForUsefulEntitiesGraph ("setterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_setterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_setterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'methodNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_methodNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inMethodName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("method @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)), constinArgument_inMethodName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_methodNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_methodNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_methodNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_methodNameForUsefulEntitiesGraph ("methodNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_methodNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_methodNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_lexiqueNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inLexiqueName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (constinArgument_inLexiqueName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 89)), constinArgument_inLexiqueName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 89)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_lexiqueNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_lexiqueNameForUsefulEntitiesGraph (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_lexiqueNameForUsefulEntitiesGraph ("lexiqueNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_lexiqueNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_grammarNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inGrammarName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (constinArgument_inGrammarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 95)), constinArgument_inGrammarName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 95)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_grammarNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_grammarNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_grammarNameForUsefulEntitiesGraph (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_grammarNameForUsefulEntitiesGraph ("grammarNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_grammarNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_grammarNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_syntaxNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inSyntaxName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (constinArgument_inSyntaxName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 101)), constinArgument_inSyntaxName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 101)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_syntaxNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxNameForUsefulEntitiesGraph ("syntaxNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_syntaxNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'optionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_optionNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inOptionName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("option ").add_operation (constinArgument_inOptionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 107)), constinArgument_inOptionName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 107)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_optionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_optionNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_optionNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_optionNameForUsefulEntitiesGraph ("optionNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_optionNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_optionNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_filewrapperNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFilewrapperName,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 113)), constinArgument_inFilewrapperName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 113)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                                      const GALGAS_location & /* inErrorLocation */
                                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_filewrapperNameForUsefulEntitiesGraph (operand0,
                                                         inCompiler
                                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperNameForUsefulEntitiesGraph ("filewrapperNameForUsefulEntitiesGraph",
                                                                                       functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph,
                                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                                       1,
                                                                                       functionArgs_filewrapperNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperTemplateNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFilewrapperName,
                                                                       const GALGAS_lstring & constinArgument_inTemplateName,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper template ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)).add_operation (constinArgument_inTemplateName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)), constinArgument_inTemplateName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                                              const GALGAS_location & /* inErrorLocation */
                                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_filewrapperTemplateNameForUsefulEntitiesGraph (operand0,
                                                                 operand1,
                                                                 inCompiler
                                                                 COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperTemplateNameForUsefulEntitiesGraph ("filewrapperTemplateNameForUsefulEntitiesGraph",
                                                                                               functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph,
                                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                                               2,
                                                                                               functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'functionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_functionNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFunctionName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("function ").add_operation (constinArgument_inFunctionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 126)), constinArgument_inFunctionName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 126)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_functionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_functionNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_functionNameForUsefulEntitiesGraph (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionNameForUsefulEntitiesGraph ("functionNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_functionNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_functionNameForUsefulEntitiesGraph) ;

