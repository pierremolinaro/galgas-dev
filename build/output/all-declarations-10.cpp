#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-10.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateFunction'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateFunction (const GALGAS_string constinArgument_inFunctionCppRepresentationName,
                               GALGAS_stringset & ioArgument_ioInclusionSet,
                               const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                               const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                               const GALGAS_string constinArgument_inCompilerTypeName,
                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                               const GALGAS_string constinArgument_inResultVariableCppName,
                               const GALGAS_bool constinArgument_inIsStatic,
                               GALGAS_string & outArgument_outGeneratedCode,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 368)) ;
  GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 370)) ;
  var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 371))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 371)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16401 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_16401.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16401.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 374)) ;
    var_unusedVariableCppNameSet.addAssign_operation (enumerator_16401.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 375)) ;
    enumerator_16401.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 380)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_16674 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_16674.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_16674.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, GALGAS_bool (false), var_routineBody, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)) ;
    enumerator_16674.gotoNextObject () ;
  }
  {
  var_routineBody.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 389)) ;
  }
  const enumGalgasBool test_0 = constinArgument_inIsStatic.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 392)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (constinArgument_inResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 394)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 394)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)) ;
  GALGAS_uint var_colRef = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 396)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_17237 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_17237.hasCurrentObject ()) {
    const enumGalgasBool test_1 = enumerator_17237.current_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_17237.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 400)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 400)) ;
    }else if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_17237.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)) ;
    }
    const enumGalgasBool test_2 = var_unusedVariableCppNameSet.getter_hasKey (enumerator_17237.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 404)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_17237.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)) ;
    }else if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_17237.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 407)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 409)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 410)) ;
    }
    enumerator_17237.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 413)) ;
  const enumGalgasBool test_3 = var_unusedVariableCppNameSet.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 414)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 414)).boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)) ;
  }else if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 417)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 419)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 421)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 422)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (constinArgument_inResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 424)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 424)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 425)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 424)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 427)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 429)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 430)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 430)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 432)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateExtensionModifier'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateExtensionModifier (const GALGAS_string constinArgument_inClassName,
                                        const GALGAS_string constinArgument_inBaseClassName,
                                        const GALGAS_string constinArgument_inMethodName,
                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                        const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                        const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                        GALGAS_string & outArgument_outGeneratedCode,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 450)) ;
  var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451)) ;
  var_unusedVariableCppNameSet.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 452)) ;
  cEnumerator_formalParameterListForGeneration enumerator_19676 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_19676.hasCurrentObject ()) {
    var_unusedVariableCppNameSet.addAssign_operation (enumerator_19676.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 454)) ;
    enumerator_19676.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 459)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_19882 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_19882.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_19882.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, GALGAS_bool (false), var_routineBody, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)) ;
    enumerator_19882.gotoNextObject () ;
  }
  {
  var_routineBody.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 469)) ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void extensionSetter_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 471)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 471)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 471)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 471)) ;
  GALGAS_uint var_colRef = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 472)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 476)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 476)) ;
  }
  GALGAS_bool var_currentObjectIsUnused = var_unusedVariableCppNameSet.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 478)) ;
  const enumGalgasBool test_1 = var_currentObjectIsUnused.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)) ;
  }else if (kBoolFalse == test_1) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_20808 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_20808.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 486)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 487)) ;
    }
    switch (enumerator_20808.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_20808.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_20808.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 492)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 492)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_20808.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 494)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 494)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_20808.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)) ;
      }
      break ;
    }
    const enumGalgasBool test_2 = var_unusedVariableCppNameSet.getter_hasKey (enumerator_20808.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 498)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_20808.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)) ;
    }else if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_20808.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 501)) ;
    }
    enumerator_20808.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 505)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 506)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 507)) ;
  const enumGalgasBool test_3 = var_unusedVariableCppNameSet.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 508)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 508)).boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 509)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 509)) ;
  }else if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 511)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 513)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 515)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 516)) ;
  const enumGalgasBool test_4 = var_currentObjectIsUnused.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 518)).boolEnum () ;
  if (kBoolTrue == test_4) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)) ;
    }else if (kBoolFalse == test_5) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 522)).add_operation (GALGAS_string (" * object = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 522)).add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 522)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 522)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 522)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 524)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 524)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 526)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 528)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateExtensionMethod'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateExtensionMethod (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inReceiverType,
                                      const GALGAS_string constinArgument_inBaseClassName,
                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_string constinArgument_inMethodName,
                                      const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      GALGAS_string & outArgument_outGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_string var_className = constinArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 545)) ;
  GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 547)) ;
  var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 548))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 548)) ;
  var_unusedVariableCppNameSet.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 549)) ;
  cEnumerator_formalParameterListForGeneration enumerator_23814 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_23814.hasCurrentObject ()) {
    var_unusedVariableCppNameSet.addAssign_operation (enumerator_23814.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 551)) ;
    enumerator_23814.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 556)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_24026 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_24026.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_24026.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, GALGAS_bool (false), var_routineBody, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 558)) ;
    enumerator_24026.gotoNextObject () ;
  }
  {
  var_routineBody.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 566)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = constinArgument_inReceiverType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 570)).isValid ()) {
    uint32_t variant_24386 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 570)).uintValue () ;
    bool loop_24386 = true ;
    while (loop_24386) {
      loop_24386 = var_searching.isValid () ;
      if (loop_24386) {
        loop_24386 = var_searching.boolValue () ;
      }
      if (loop_24386 && (0 == variant_24386)) {
        loop_24386 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 570)) ;
      }
      if (loop_24386) {
        variant_24386 -- ;
        const enumGalgasBool test_0 = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 571)).getter_isNull (SOURCE_FILE ("semanticGeneration.galgas", 571)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 571)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)).getter_hasKey (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 573)) ;
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 581)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 581)).add_operation (constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 581))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 581)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)) ;
  cEnumerator_formalParameterListForGeneration enumerator_24838 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_24838.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_24838.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 584)) ;
    enumerator_24838.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void extensionMethod_").add_operation (var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 587)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 587)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 587)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 587)) ;
  GALGAS_uint var_colRef = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 588)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)) ;
  }else if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)) ;
  }
  GALGAS_bool var_currentObjectIsUnused = var_unusedVariableCppNameSet.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 594)) ;
  const enumGalgasBool test_3 = var_currentObjectIsUnused.boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 596)) ;
  }else if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 598)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_25589 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_25589.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 602)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 603)) ;
    }
    switch (enumerator_25589.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_25589.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 606)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 606)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_25589.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 608)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 608)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 608)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_25589.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 610)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 610)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_25589.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)) ;
      }
      break ;
    }
    const enumGalgasBool test_4 = var_unusedVariableCppNameSet.getter_hasKey (enumerator_25589.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 614)).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_25589.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 615)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 615)) ;
    }else if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_25589.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 617)) ;
    }
    enumerator_25589.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 621)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 622)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 623)) ;
  const enumGalgasBool test_5 = var_unusedVariableCppNameSet.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 624)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 624)).boolEnum () ;
  if (kBoolTrue == test_5) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 625)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 625)) ;
  }else if (kBoolFalse == test_5) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 627)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 627)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 629)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 630)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 631)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 632)) ;
  const enumGalgasBool test_6 = var_currentObjectIsUnused.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 634)).boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const cPtr_").add_operation (var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 636)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 636)) ;
    }else if (kBoolFalse == test_7) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const cPtr_").add_operation (var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 638)).add_operation (GALGAS_string (" * object = (const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 638)).add_operation (var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 638)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 638)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 638)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 640)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 640)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 640)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 642)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 644)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateExtensionGetter'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateExtensionGetter (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inReceiverType,
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
  GALGAS_string var_className = constinArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)) ;
  GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 666)) ;
  var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 667))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 667)) ;
  var_unusedVariableCppNameSet.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 668)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_28758 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_28758.hasCurrentObject ()) {
    var_unusedVariableCppNameSet.addAssign_operation (enumerator_28758.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 670)) ;
    enumerator_28758.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 675)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_28970 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_28970.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_28970.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, GALGAS_bool (false), var_routineBody, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 677)) ;
    enumerator_28970.gotoNextObject () ;
  }
  {
  var_routineBody.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)) ;
  }
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 687)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = constinArgument_inReceiverType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 690)).isValid ()) {
    uint32_t variant_29384 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 690)).uintValue () ;
    bool loop_29384 = true ;
    while (loop_29384) {
      loop_29384 = var_searching.isValid () ;
      if (loop_29384) {
        loop_29384 = var_searching.boolValue () ;
      }
      if (loop_29384 && (0 == variant_29384)) {
        loop_29384 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 690)) ;
      }
      if (loop_29384) {
        variant_29384 -- ;
        const enumGalgasBool test_0 = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)).getter_isNull (SOURCE_FILE ("semanticGeneration.galgas", 691)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 691)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 692)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 692)).getter_hasKey (constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 692)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 693)) ;
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 701)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 701)).add_operation (constinArgument_inGetterName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 701))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 701)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_29828 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_29828.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_29828.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)) ;
    enumerator_29828.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static GALGAS_").add_operation (constinArgument_inResultTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 707)).add_operation (GALGAS_string (" extensionGetter_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 707)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 708)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 708)).add_operation (constinArgument_inGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 708)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 708)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 708)) ;
  GALGAS_uint var_colRef = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 709)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 711)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 711)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 711)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 711)) ;
  }else if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 713)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 713)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 713)) ;
  }
  GALGAS_bool var_currentObjectIsUnused = var_unusedVariableCppNameSet.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 715)) ;
  const enumGalgasBool test_3 = var_currentObjectIsUnused.boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 717)) ;
  }else if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 719)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 721)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 722)) ;
  }
  cEnumerator_formalInputParameterListForGeneration enumerator_30736 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_30736.hasCurrentObject ()) {
    const enumGalgasBool test_4 = enumerator_30736.current_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_30736.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 726)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 726)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 726)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 726)) ;
    }else if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_30736.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 728)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 728)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 728)) ;
    }
    const enumGalgasBool test_5 = var_unusedVariableCppNameSet.getter_hasKey (enumerator_30736.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 730)).boolEnum () ;
    if (kBoolTrue == test_5) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_30736.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 731)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 731)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 731)) ;
    }else if (kBoolFalse == test_5) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_30736.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 733)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 735)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 736)) ;
    }
    enumerator_30736.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 739)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 739)) ;
  const enumGalgasBool test_6 = var_unusedVariableCppNameSet.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 740)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 740)).boolEnum () ;
  if (kBoolTrue == test_6) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 741)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 741)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 741)) ;
  }else if (kBoolFalse == test_6) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 743)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 743)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 745)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 746)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 747)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 748)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (constinArgument_inResultTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 750)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 750)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 751)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 750)) ;
  const enumGalgasBool test_7 = var_currentObjectIsUnused.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 753)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const cPtr_").add_operation (var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 755)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 755)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 755)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 755)) ;
    }else if (kBoolFalse == test_8) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const cPtr_").add_operation (var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 757)).add_operation (GALGAS_string (" * object = (const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 757)).add_operation (var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 757)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 757)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 757)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (var_className.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 759)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 759)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 759)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 759)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 761)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 763)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 764)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 764)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 764)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 766)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'typeGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_bool & /* in_IS_5F_CONCRETE */,
                                                                                  const GALGAS_constructorMap & in_CONSTRUCTOR_5F_MAP,
                                                                                  const GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                  const GALGAS_setterMap & in_MODIFIER_5F_MAP,
                                                                                  const GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                  const GALGAS_uint & in_SUPPORTED_5F_OPERATORS,
                                                                                  const GALGAS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_ENUMERATED_5F_OBJECT_5F_TYPE
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//-- Start of generic part --*\n"
    "\n"
    "//--------------------------------- Object cloning\n"
    "  protected : virtual AC_GALGAS_root * clonedObject (void) const ;\n"
    "\n"
    "//--------------------------------- Object extraction\n"
    "  public : static GALGAS_" ;
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
    GALGAS_uint index_515_ (0) ;
    if (in_CONSTRUCTOR_5F_MAP.isValid ()) {
      cEnumerator_constructorMap enumerator_515 (in_CONSTRUCTOR_5F_MAP, kEnumeration_up) ;
      while (enumerator_515.hasCurrentObject ()) {
        result << "  public : static GALGAS_" ;
        result << enumerator_515.current_mReturnedType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result << " constructor_" ;
        result << enumerator_515.current_lkey (HERE).getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_701_IDX (0) ;
        if (enumerator_515.current_mArgumentTypeList (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_701 (enumerator_515.current_mArgumentTypeList (HERE), kEnumeration_up) ;
          while (enumerator_701.hasCurrentObject ()) {
            result << "const class GALGAS_" ;
            result << enumerator_701.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            result << " & inOperand" ;
            result << index_701_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            if (enumerator_701.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_701_IDX.increment () ;
            enumerator_701.gotoNextObject () ;
          }
        }
        const enumGalgasBool test_1 = enumerator_515.current_mHasCompilerArgument (HERE).operator_and (GALGAS_bool (kIsStrictSup, enumerator_515.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "class C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = enumerator_515.current_mHasCompilerArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "C_Compiler * inCompiler\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "COMMA_LOCATION_ARGS) ;\n"
              "\n" ;
          }else if (kBoolFalse == test_2) {
            const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, enumerator_515.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
        index_515_.increment () ;
        enumerator_515.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//--------------------------------- Handle copy\n"
      "  public : GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inSource) ;\n"
      "  public : GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & operator = (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inSource) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_4) {
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "//--------------------------------- << and >> shift operators\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " left_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_uint inShiftOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " right_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_uint inShiftOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_5) {
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 48)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "//--------------------------------- += operator (with expression)\n"
      "  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                       class C_Compiler * inCompiler\n"
      "                                                       COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 55)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 55)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "//--------------------------------- -= operator (with expression)\n"
      "  public : VIRTUAL_IN_DEBUG void minusAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                        class C_Compiler * inCompiler\n"
      "                                                        COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_7) {
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 62)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 62)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "//--------------------------------- *= operator (with expression)\n"
      "  public : VIRTUAL_IN_DEBUG void mulAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                      class C_Compiler * inCompiler\n"
      "                                                      COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_8) {
  }
  const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 69)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 69)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "//--------------------------------- /= operator (with expression)\n"
      "  public : VIRTUAL_IN_DEBUG void divAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                      class C_Compiler * inCompiler\n"
      "                                                      COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_9) {
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 76)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "//--------------------------------- += operator (with list of field expressions)\n"
      "  public : VIRTUAL_IN_DEBUG void addAssign_operation (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_3966_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_functionSignature enumerator_3966 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_3966.hasCurrentObject ()) {
        result << "const class GALGAS_" ;
        result << enumerator_3966.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 80)).stringValue () ;
        result << " & inOperand" ;
        result << index_3966_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 80)).stringValue () ;
        if (enumerator_3966.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_3966_IDX.increment () ;
        enumerator_3966.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 83)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 83)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
  const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 90)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_12) {
    result << "//--------------------------------- & operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 96)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_13) {
    result << "//--------------------------------- | operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 102)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 102)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_14) {
    result << "//--------------------------------- ^ operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 108)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 108)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    result << "//--------------------------------- not operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_not (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_15) {
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 113)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 113)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    result << "//--------------------------------- ~ operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_tilde (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_16) {
  }
  const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 118)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 118)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    result << "//--------------------------------- + operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 125)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 125)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_18) {
    result << "//--------------------------------- &+ operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " add_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_18) {
  }
  const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 130)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 130)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_19) {
    result << "//--------------------------------- &- operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " substract_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_19) {
  }
  const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 135)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 135)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_20) {
    result << "//--------------------------------- - operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 142)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 142)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_21) {
    result << "//--------------------------------- * operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  const enumGalgasBool test_22 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 149)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 149)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_22) {
    result << "//--------------------------------- &* operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " multiply_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_22) {
  }
  const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 154)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_23) {
    result << "//--------------------------------- / operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 161)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_24) {
    result << "//--------------------------------- &/ operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " divide_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_24) {
  }
  const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 166)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 166)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_25) {
    result << "//--------------------------------- mod operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  const enumGalgasBool test_26 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 173)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 173)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_26) {
    result << "//--------------------------------- prefix - operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_unary_minus (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_26) {
  }
  const enumGalgasBool test_27 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 179)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 179)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_27) {
    result << "//--------------------------------- prefix &- operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_unary_minus_no_ovf (void) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_27) {
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 184)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 184)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_28) {
    result << "//--------------------------------- ++, -- operators\n"
      "  public : VIRTUAL_IN_DEBUG void increment_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n"
      "  public : VIRTUAL_IN_DEBUG void decrement_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_28) {
  }
  const enumGalgasBool test_29 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 191)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 191)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_29) {
    result << "//--------------------------------- &++, &-- operators\n"
      "  public : VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;\n"
      "\n"
      "  public : VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_29) {
  }
  const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 196)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 196)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_30) {
    result << "//--------------------------------- Implementation of getter 'description'\n"
      "  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
      "                                              const int32_t inIndentation) const ;\n" ;
  }else if (kBoolFalse == test_30) {
  }
  const enumGalgasBool test_31 = GALGAS_bool (kIsEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 202)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 202)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_31) {
    result << "//--------------------------------- Comparison\n"
      "  public : typeComparisonResult objectCompare (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n" ;
  }else if (kBoolFalse == test_31) {
  }
  result << "\n"
    "//--------------------------------- Setters\n" ;
  GALGAS_uint index_9930_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    cEnumerator_setterMap enumerator_9930 (in_MODIFIER_5F_MAP, kEnumeration_up) ;
    while (enumerator_9930.hasCurrentObject ()) {
      const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, enumerator_9930.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 212)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        const enumGalgasBool test_33 = GALGAS_bool (kIsEqual, enumerator_9930.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_9930.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 213)))).operator_or (GALGAS_bool (kIsEqual, enumerator_9930.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 213)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 213)).operator_or (GALGAS_bool (kIsEqual, enumerator_9930.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 213)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 213)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 213)).boolEnum () ;
        if (kBoolTrue == test_33) {
          result << "  public : VIRTUAL_IN_DEBUG void setter_" ;
          result << enumerator_9930.current_lkey (HERE).getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 214)).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 214)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_10298_IDX (0) ;
          if (enumerator_9930.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_10298 (enumerator_9930.current_mParameterList (HERE), kEnumeration_up) ;
            while (enumerator_10298.hasCurrentObject ()) {
              const enumGalgasBool test_34 = GALGAS_bool (kIsEqual, enumerator_10298.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 216)))).boolEnum () ;
              if (kBoolTrue == test_34) {
                result << "class GALGAS_" ;
                result << enumerator_10298.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 217)).stringValue () ;
                result << " constinArgument" ;
                result << index_10298_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 217)).stringValue () ;
              }else if (kBoolFalse == test_34) {
                const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_10298.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 218)))).boolEnum () ;
                if (kBoolTrue == test_35) {
                  result << "class GALGAS_" ;
                  result << enumerator_10298.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 219)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_10298_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 219)).stringValue () ;
                }else if (kBoolFalse == test_35) {
                  const enumGalgasBool test_36 = GALGAS_bool (kIsEqual, enumerator_10298.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 220)))).boolEnum () ;
                  if (kBoolTrue == test_36) {
                    result << "class GALGAS_" ;
                    result << enumerator_10298.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_10298_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).stringValue () ;
                  }else if (kBoolFalse == test_36) {
                    result << "class GALGAS_" ;
                    result << enumerator_10298.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 223)).stringValue () ;
                    result << " inArgument" ;
                    result << index_10298_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 223)).stringValue () ;
                  }
                }
              }
              if (enumerator_10298.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_10298_IDX.increment () ;
              enumerator_10298.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_37 = GALGAS_bool (kIsEqual, enumerator_9930.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_37) {
            const enumGalgasBool test_38 = enumerator_9930.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_38) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_38) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_37) {
            const enumGalgasBool test_39 = enumerator_9930.current_mHasCompilerArgument (HERE).boolEnum () ;
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
      index_9930_.increment () ;
      enumerator_9930.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Instance Methods\n" ;
  GALGAS_uint index_11604_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_11604 (in_INSTANCE_5F_METHOD_5F_MAP, kEnumeration_up) ;
    while (enumerator_11604.hasCurrentObject ()) {
      const enumGalgasBool test_40 = GALGAS_bool (kIsEqual, enumerator_11604.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 250)))).boolEnum () ;
      if (kBoolTrue == test_40) {
        const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, enumerator_11604.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_11604.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 251)))).operator_or (GALGAS_bool (kIsEqual, enumerator_11604.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 251)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 251)).operator_or (GALGAS_bool (kIsEqual, enumerator_11604.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 251)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 251)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 251)).boolEnum () ;
        if (kBoolTrue == test_41) {
          result << "  public : VIRTUAL_IN_DEBUG void method_" ;
          result << enumerator_11604.current_lkey (HERE).getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 252)).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 252)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_11972_IDX (0) ;
          if (enumerator_11604.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_11972 (enumerator_11604.current_mParameterList (HERE), kEnumeration_up) ;
            while (enumerator_11972.hasCurrentObject ()) {
              const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, enumerator_11972.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 254)))).boolEnum () ;
              if (kBoolTrue == test_42) {
                result << "class GALGAS_" ;
                result << enumerator_11972.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 255)).stringValue () ;
                result << " constinArgument" ;
                result << index_11972_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 255)).stringValue () ;
              }else if (kBoolFalse == test_42) {
                const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, enumerator_11972.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 256)))).boolEnum () ;
                if (kBoolTrue == test_43) {
                  result << "class GALGAS_" ;
                  result << enumerator_11972.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 257)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_11972_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 257)).stringValue () ;
                }else if (kBoolFalse == test_43) {
                  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, enumerator_11972.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 258)))).boolEnum () ;
                  if (kBoolTrue == test_44) {
                    result << "class GALGAS_" ;
                    result << enumerator_11972.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_11972_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).stringValue () ;
                  }else if (kBoolFalse == test_44) {
                    result << "class GALGAS_" ;
                    result << enumerator_11972.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 261)).stringValue () ;
                    result << " inArgument" ;
                    result << index_11972_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 261)).stringValue () ;
                  }
                }
              }
              if (enumerator_11972.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_11972_IDX.increment () ;
              enumerator_11972.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, enumerator_11604.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_45) {
            const enumGalgasBool test_46 = enumerator_11604.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_46) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_46) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_45) {
            const enumGalgasBool test_47 = enumerator_11604.current_mHasCompilerArgument (HERE).boolEnum () ;
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
      index_11604_.increment () ;
      enumerator_11604.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Class Methods\n" ;
  GALGAS_uint index_13277_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_classMethodMap enumerator_13277 (in_CLASS_5F_METHOD_5F_MAP, kEnumeration_up) ;
    while (enumerator_13277.hasCurrentObject ()) {
      result << "  public : static void class_method_" ;
      result << enumerator_13277.current_lkey (HERE).getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 287)).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 287)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_13405_IDX (0) ;
      if (enumerator_13277.current_mParameterList (HERE).isValid ()) {
        cEnumerator_formalParameterSignature enumerator_13405 (enumerator_13277.current_mParameterList (HERE), kEnumeration_up) ;
        while (enumerator_13405.hasCurrentObject ()) {
          const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, enumerator_13405.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 289)))).boolEnum () ;
          if (kBoolTrue == test_48) {
            result << "class GALGAS_" ;
            result << enumerator_13405.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 290)).stringValue () ;
            result << " constinArgument" ;
            result << index_13405_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 290)).stringValue () ;
          }else if (kBoolFalse == test_48) {
            const enumGalgasBool test_49 = GALGAS_bool (kIsEqual, enumerator_13405.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 291)))).boolEnum () ;
            if (kBoolTrue == test_49) {
              result << "class GALGAS_" ;
              result << enumerator_13405.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 292)).stringValue () ;
              result << " & ioArgument" ;
              result << index_13405_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 292)).stringValue () ;
            }else if (kBoolFalse == test_49) {
              const enumGalgasBool test_50 = GALGAS_bool (kIsEqual, enumerator_13405.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 293)))).boolEnum () ;
              if (kBoolTrue == test_50) {
                result << "class GALGAS_" ;
                result << enumerator_13405.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 294)).stringValue () ;
                result << " & outArgument" ;
                result << index_13405_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 294)).stringValue () ;
              }else if (kBoolFalse == test_50) {
                result << "class GALGAS_" ;
                result << enumerator_13405.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 296)).stringValue () ;
                result << " inArgument" ;
                result << index_13405_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 296)).stringValue () ;
              }
            }
          }
          if (enumerator_13405.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_13405_IDX.increment () ;
          enumerator_13405.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_51 = GALGAS_bool (kIsEqual, enumerator_13277.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_51) {
        const enumGalgasBool test_52 = enumerator_13277.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_52) {
          result << "C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_52) {
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "LOCATION_ARGS" ;
        }
      }else if (kBoolFalse == test_51) {
        const enumGalgasBool test_53 = enumerator_13277.current_mHasCompilerArgument (HERE).boolEnum () ;
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
      index_13277_.increment () ;
      enumerator_13277.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Getters\n" ;
  GALGAS_uint index_14571_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_14571 (in_GETTER_5F_MAP, kEnumeration_up) ;
    while (enumerator_14571.hasCurrentObject ()) {
      const enumGalgasBool test_54 = GALGAS_bool (kIsEqual, enumerator_14571.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 321)))).boolEnum () ;
      if (kBoolTrue == test_54) {
        const enumGalgasBool test_55 = GALGAS_bool (kIsEqual, enumerator_14571.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_14571.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 322)))).operator_or (GALGAS_bool (kIsEqual, enumerator_14571.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 322)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 322)).operator_or (GALGAS_bool (kIsEqual, enumerator_14571.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 322)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 322)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 322)).boolEnum () ;
        if (kBoolTrue == test_55) {
          result << "  public : VIRTUAL_IN_DEBUG class GALGAS_" ;
          result << enumerator_14571.current_mReturnedType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 323)).stringValue () ;
          result << " getter_" ;
          result << enumerator_14571.current_lkey (HERE).getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 323)).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 323)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_15006_IDX (0) ;
          if (enumerator_14571.current_mArgumentTypeList (HERE).isValid ()) {
            cEnumerator_functionSignature enumerator_15006 (enumerator_14571.current_mArgumentTypeList (HERE), kEnumeration_up) ;
            while (enumerator_15006.hasCurrentObject ()) {
              result << "const class GALGAS_" ;
              result << enumerator_15006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 325)).stringValue () ;
              result << " & constinOperand" ;
              result << index_15006_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 325)).stringValue () ;
              if (enumerator_15006.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_15006_IDX.increment () ;
              enumerator_15006.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_56 = GALGAS_bool (kIsEqual, enumerator_14571.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 328)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_56) {
            const enumGalgasBool test_57 = enumerator_14571.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_57) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_57) {
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_56) {
            const enumGalgasBool test_58 = enumerator_14571.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_58) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_58) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }
          }
          result << ") const ;\n"
            "\n" ;
        }else if (kBoolFalse == test_55) {
        }
      }else if (kBoolFalse == test_54) {
      }
      index_14571_.increment () ;
      enumerator_14571.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Introspection\n"
    "  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;\n" ;
  const enumGalgasBool test_59 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 350)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 350)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_59) {
    result << "//--------------------------------- Enumeration helper methods\n"
      "  protected : VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & inEnumerationArray,\n"
      "                                                              const typeEnumerationOrder inOrder) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_59) {
  }
  const enumGalgasBool test_60 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 357)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 357)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_60) {
    result << "  public : VIRTUAL_IN_DEBUG cMapElement_" ;
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
  const enumGalgasBool test_61 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 363)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
  const enumGalgasBool test_62 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 370)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_62) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "//   Enumerator declaration                                                                                            *\n"
      "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "class cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " : public cGenericAbstractEnumerator {\n"
      "  public : cEnumerator_" ;
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
    GALGAS_uint index_17268_ (0) ;
    if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
      cEnumerator_enumerationDescriptorList enumerator_17268 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST, kEnumeration_up) ;
      while (enumerator_17268.hasCurrentObject ()) {
        result << "  public : class GALGAS_" ;
        result << enumerator_17268.current_mEnumeratedType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 381)).stringValue () ;
        result << " current_" ;
        result << enumerator_17268.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 381)).stringValue () ;
        result << " (LOCATION_ARGS) const ;\n" ;
        index_17268_.increment () ;
        enumerator_17268.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_63 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 383)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 383)).boolEnum () ;
    if (kBoolTrue == test_63) {
      result << "//--- Current element access\n"
        "  public : class GALGAS_" ;
      result << in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 385)).stringValue () ;
      result << " current (LOCATION_ARGS) const ;\n" ;
    }else if (kBoolFalse == test_63) {
    }
    result << "} ;\n" ;
  }else if (kBoolFalse == test_62) {
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'typeGenerationTemplate genericTypeImplementation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (C_Compiler * inCompiler,
                                                                                    const GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_SUPER_5F_TYPE_5F_INDEX,
                                                                                    const GALGAS_uint & /* in_SUPPORTED_5F_OPERATORS */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "const C_galgas_type_descriptor * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::staticTypeDescriptor (void) const {\n"
    "  return & kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate externTypeHeader1'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (C_Compiler * inCompiler,
                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const GALGAS_string & in_PRE_5F_DECLARATION,
                                                                               const GALGAS_string & in_CODE
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" extern type"), inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Predeclarations (from GALGAS extern type declaration                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_PRE_5F_DECLARATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//---\n"
    "  public : virtual bool isValid (void) const ;\n"
    "  public : virtual void drop (void) ;\n"
    "\n"
    "//--- For log instruction\n"
    "  public : virtual void description (C_String & ioString,\n"
    "                                     const int32_t inIndentation) const ;\n"
    "\n"
    "//--- Code (from GALGAS extern type declaration)\n" ;
  result << in_CODE.stringValue () ;
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate graphTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_graph {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & /* in_TYPE */,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                          const GALGAS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_graph () {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_996_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    cEnumerator_graphInsertModifierList enumerator_996 (in_INSERT_5F_MODIFIER_5F_LIST, kEnumeration_up) ;
    while (enumerator_996.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_996.current_mInsertModifierName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_1311_IDX (0) ;
      if (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).isValid ()) {
        cEnumerator_functionSignature enumerator_1311 (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)), kEnumeration_up) ;
        while (enumerator_1311.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_1311.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          result << " inArgument_" ;
          result << index_1311_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          index_1311_IDX.increment () ;
          enumerator_1311.gotoNextObject () ;
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
      GALGAS_uint index_1691_IDX (0) ;
      if (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).isValid ()) {
        cEnumerator_functionSignature enumerator_1691 (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)), kEnumeration_up) ;
        while (enumerator_1691.hasCurrentObject ()) {
          result << ", inArgument_" ;
          result << index_1691_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).stringValue () ;
          index_1691_IDX.increment () ;
          enumerator_1691.gotoNextObject () ;
        }
      }
      result << " COMMA_THERE) ;\n"
        "  const char * kErrorMessage = " ;
      result << enumerator_996.current_mInsertErrorMessage (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 34)).stringValue () ;
      result << " ;\n"
        "  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;\n"
        "}\n"
        "\n" ;
      index_996_.increment () ;
      enumerator_996.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "  cSharedList * sortedList = NULL ;\n"
    "  cSharedList * unsortedList = NULL ;\n"
    "  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n"
    "  outSortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 52)).stringValue () ;
  result << " (sortedList) ;\n"
    "  outUnsortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 53)).stringValue () ;
  result << " (unsortedList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 54)).stringValue () ;
  result << "::detachSharedList (sortedList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 55)).stringValue () ;
  result << "::detachSharedList (unsortedList) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_depthFirstTopologicalSort (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 60)).stringValue () ;
  result << " & outSortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outSortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 62)).stringValue () ;
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
    "  cSharedList * sortedList = NULL ;\n"
    "  cSharedList * unsortedList = NULL ;\n"
    "  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n"
    "  outSortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 69)).stringValue () ;
  result << " (sortedList) ;\n"
    "  outUnsortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 70)).stringValue () ;
  result << " (unsortedList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 71)).stringValue () ;
  result << "::detachSharedList (sortedList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 72)).stringValue () ;
  result << "::detachSharedList (unsortedList) ;\n"
    "}\n"
    "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_circularities (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 86)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  cSharedList * infoList = NULL ;\n"
    "  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 91)).stringValue () ;
  result << " (infoList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 92)).stringValue () ;
  result << "::detachSharedList (infoList) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_nodesWithNoSuccessor (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 97)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  cSharedList * infoList = NULL ;\n"
    "  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 102)).stringValue () ;
  result << " (infoList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 103)).stringValue () ;
  result << "::detachSharedList (infoList) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_nodesWithNoPredecessor (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 108)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  cSharedList * infoList = NULL ;\n"
    "  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 113)).stringValue () ;
  result << " (infoList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 114)).stringValue () ;
  result << "::detachSharedList (infoList) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_lstringlist GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_accessibleNodesFromNodes (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstringlist & inStartKeyList,\n"
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
    "            GALGAS_stringset::constructor_emptySet (HERE),\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate arrayTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_string & /* in_ELEMENT_5F_TYPE_5F_IDENTIFIER */,
                                                                              const GALGAS_uint & /* in_DIMENSION */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public : inline GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "  mSharedObject (NULL) {\n"
    "  }\n"
    "\n"
    "//--------------------------------- Virtual destructor\n"
    "  public : virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- Handle copy\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject) ;\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject) ;\n"
    "\n"
    "//--- Insulate\n"
    "  private : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;\n"
    "\n"
    "//--- isValid\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const {\n"
    "    return NULL != mSharedObject ;\n"
    "  }\n"
    "\n"
    "//--- Drop\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--- Private attribute\n"
    "  private : cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mSharedObject ;\n"
    "\n"
    "//--- Drop\n"
    "  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
    "                                              const int32_t inIndentation) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate arrayTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_uint & in_DIMENSION,
                                                                                          const GALGAS_stringlist & in_DIMENSION_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_SharedObject {\n"
    "  private : GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mObjectArray ;\n" ;
  GALGAS_uint index_704_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_704 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_704.hasCurrentObject ()) {
      result << "  private : uint32_t mSize" ;
      result << enumerator_704.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_704_.increment () ;
      enumerator_704.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public : cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_839_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_839 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_839.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_839.current_mValue (HERE).stringValue () ;
      if (enumerator_839.hasNextObject ()) {
        result << ",\n" ;
      }
      index_839_.increment () ;
      enumerator_839.gotoNextObject () ;
    }
  }
  result << "\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "  public : cPtr_" ;
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
    "  public : virtual ~ cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- No copy\n"
    "  private : cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "  private : cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--- Comparison\n"
    "  public : VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const ;\n"
    "\n"
    "//--- \n" ;
  GALGAS_uint index_1454_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1454 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_1454.hasCurrentObject ()) {
      result << "  public : inline uint32_t size" ;
      result << enumerator_1454.current_mValue (HERE).stringValue () ;
      result << " (void) const { return mSize" ;
      result << enumerator_1454.current_mValue (HERE).stringValue () ;
      result << " ; }\n" ;
      index_1454_.increment () ;
      enumerator_1454.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " objectAtAbsoluteIndex (const int32_t inIndex) const ;\n"
    "\n"
    "  public : VIRTUAL_IN_DEBUG void setObjectAtAbsoluteIndex (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject,\n"
    "                                                           const int32_t inIndex) ;\n"
    "\n"
    "//--- \n"
    "  public : VIRTUAL_IN_DEBUG int32_t indexForIndexes (" ;
  GALGAS_uint index_1961_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1961 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    const bool nonEmpty_enumerator_1961 = enumerator_1961.hasCurrentObject () ;
    if (nonEmpty_enumerator_1961) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_1961.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_1961.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_1961_.increment () ;
      enumerator_1961.gotoNextObject () ;
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
    "  public : VIRTUAL_IN_DEBUG void setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_2152_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2152 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_2152.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_2152.current_mValue (HERE).stringValue () ;
      if (enumerator_2152.hasNextObject ()) {
        result << ",\n" ;
      }
      index_2152_.increment () ;
      enumerator_2152.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2443_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2443 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_2443.hasCurrentObject ()) {
      result << "const uint32_t inSize" ;
      result << enumerator_2443.current_mValue (HERE).stringValue () ;
      if (enumerator_2443.hasNextObject ()) {
        result << ",\n"
          "                                                      " ;
      }
      index_2443_.increment () ;
      enumerator_2443.gotoNextObject () ;
    }
  }
  result << "    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_SharedObject (THERE),\n"
    "mObjectArray (NULL),\n" ;
  GALGAS_uint index_2657_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2657 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_2657.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_2657.current_mValue (HERE).stringValue () ;
      result << " (inSize" ;
      result << enumerator_2657.current_mValue (HERE).stringValue () ;
      result << ")" ;
      if (enumerator_2657.hasNextObject ()) {
        result << ",\n" ;
      }
      index_2657_.increment () ;
      enumerator_2657.gotoNextObject () ;
    }
  }
  result << " {\n"
    "  macroMyNewArray (mObjectArray, GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ", " ;
  GALGAS_uint index_2816_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2816 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_2816.hasCurrentObject ()) {
      result << " inSize" ;
      result << enumerator_2816.current_mValue (HERE).stringValue () ;
      if (enumerator_2816.hasNextObject ()) {
        result << " * " ;
      }
      index_2816_.increment () ;
      enumerator_2816.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_3185_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3185 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_3185.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_3185.current_mValue (HERE).stringValue () ;
      result << " (inPointer->size" ;
      result << enumerator_3185.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_3185.hasNextObject ()) {
        result << ",\n" ;
      }
      index_3185_.increment () ;
      enumerator_3185.gotoNextObject () ;
    }
  }
  result << " {\n"
    "  const uint32_t size = " ;
  GALGAS_uint index_3312_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3312 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_3312.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_3312.current_mValue (HERE).stringValue () ;
      if (enumerator_3312.hasNextObject ()) {
        result << " * " ;
      }
      index_3312_.increment () ;
      enumerator_3312.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static inline uint32_t " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_3734_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3734 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_3734.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inIndex" ;
      result << enumerator_3734.current_mValue (HERE).stringValue () ;
      if (enumerator_3734.hasNextObject ()) {
        result << ",\n" ;
      }
      index_3734_.increment () ;
      enumerator_3734.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3839_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)).isValid ()) {
    cEnumerator_stringlist enumerator_3839 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)), kEnumeration_up) ;
    while (enumerator_3839.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_3839.current_mValue (HERE).stringValue () ;
      index_3839_.increment () ;
      enumerator_3839.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "  uint32_t idx = inIndex0 ;\n" ;
  GALGAS_uint index_3966_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)).isValid ()) {
    cEnumerator_stringlist enumerator_3966 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)), kEnumeration_up) ;
    while (enumerator_3966.hasCurrentObject ()) {
      result << "  idx *= inSize" ;
      result << enumerator_3966.current_mValue (HERE).stringValue () ;
      result << " ;\n"
        "  idx += inIndex" ;
      result << enumerator_3966.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_3966_.increment () ;
      enumerator_3966.gotoNextObject () ;
    }
  }
  result << "  return idx ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "int32_t cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_4258_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4258 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_4258.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inIndex" ;
      result << enumerator_4258.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_4258_.increment () ;
      enumerator_4258.gotoNextObject () ;
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
  GALGAS_uint index_4424_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4424 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_4424.hasCurrentObject ()) {
      result << "if (inIndex" ;
      result << enumerator_4424.current_mValue (HERE).stringValue () ;
      result << " >= size" ;
      result << enumerator_4424.current_mValue (HERE).stringValue () ;
      result << " ()) {\n"
        "    C_String s ;\n"
        "    s << \"array index " ;
      result << enumerator_4424.current_mValue (HERE).stringValue () ;
      result << " : \" << cStringWithUnsigned (inIndex" ;
      result << enumerator_4424.current_mValue (HERE).stringValue () ;
      result << ") << \" >= size \" << cStringWithUnsigned (size" ;
      result << enumerator_4424.current_mValue (HERE).stringValue () ;
      result << " ()) ;\n"
        "    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
      if (enumerator_4424.hasNextObject ()) {
        result << "  }else " ;
      }
      index_4424_.increment () ;
      enumerator_4424.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    result = (int32_t) " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_4799_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4799 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_4799.hasCurrentObject ()) {
      result << "inIndex" ;
      result << enumerator_4799.current_mValue (HERE).stringValue () ;
      if (enumerator_4799.hasNextObject ()) {
        result << ", " ;
      }
      index_4799_.increment () ;
      enumerator_4799.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4883_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 139)).isValid ()) {
    cEnumerator_stringlist enumerator_4883 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 139)), kEnumeration_up) ;
    while (enumerator_4883.hasCurrentObject ()) {
      result << ", size" ;
      result << enumerator_4883.current_mValue (HERE).stringValue () ;
      result << " ()" ;
      index_4883_.increment () ;
      enumerator_4883.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectAtAbsoluteIndex (const int32_t inIndex) const {\n"
    "  return mObjectArray [inIndex] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroMyDeleteArray (mObjectArray) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5937_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5937 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_5937.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_5937.current_mValue (HERE).stringValue () ;
      if (enumerator_5937.hasNextObject ()) {
        result << ",\n" ;
      }
      index_5937_.increment () ;
      enumerator_5937.gotoNextObject () ;
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
  GALGAS_uint index_6165_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6165 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6165.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_6165.current_mValue (HERE).stringValue () ;
      if (enumerator_6165.hasNextObject ()) {
        result << " * " ;
      }
      index_6165_.increment () ;
      enumerator_6165.gotoNextObject () ;
    }
  }
  result << ") ;\n" ;
  GALGAS_uint index_6234_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6234 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6234.hasCurrentObject ()) {
      result << "  uint32_t min" ;
      result << enumerator_6234.current_mValue (HERE).stringValue () ;
      result << " = uimin32 (size" ;
      result << enumerator_6234.current_mValue (HERE).stringValue () ;
      result << " (), inSize" ;
      result << enumerator_6234.current_mValue (HERE).stringValue () ;
      result << ") ;\n" ;
      index_6234_.increment () ;
      enumerator_6234.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6342_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6342 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6342.hasCurrentObject ()) {
      result << "  for (uint32_t i" ;
      result << enumerator_6342.current_mValue (HERE).stringValue () ;
      result << "=0 ; i" ;
      result << enumerator_6342.current_mValue (HERE).stringValue () ;
      result << "<min" ;
      result << enumerator_6342.current_mValue (HERE).stringValue () ;
      result << " ; i" ;
      result << enumerator_6342.current_mValue (HERE).stringValue () ;
      result << "++) {\n" ;
      index_6342_.increment () ;
      enumerator_6342.gotoNextObject () ;
    }
  }
  result << "        const uint32_t idxSource = " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_6521_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6521 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6521.hasCurrentObject ()) {
      result << "i" ;
      result << enumerator_6521.current_mValue (HERE).stringValue () ;
      if (enumerator_6521.hasNextObject ()) {
        result << ", " ;
      }
      index_6521_.increment () ;
      enumerator_6521.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6599_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 180)).isValid ()) {
    cEnumerator_stringlist enumerator_6599 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 180)), kEnumeration_up) ;
    while (enumerator_6599.hasCurrentObject ()) {
      result << ", size" ;
      result << enumerator_6599.current_mValue (HERE).stringValue () ;
      result << " ()" ;
      index_6599_.increment () ;
      enumerator_6599.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "        const uint32_t idxTarget = " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_6726_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6726 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6726.hasCurrentObject ()) {
      result << "i" ;
      result << enumerator_6726.current_mValue (HERE).stringValue () ;
      if (enumerator_6726.hasNextObject ()) {
        result << ", " ;
      }
      index_6726_.increment () ;
      enumerator_6726.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6804_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 181)).isValid ()) {
    cEnumerator_stringlist enumerator_6804 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 181)), kEnumeration_up) ;
    while (enumerator_6804.hasCurrentObject ()) {
      result << ", inSize" ;
      result << enumerator_6804.current_mValue (HERE).stringValue () ;
      index_6804_.increment () ;
      enumerator_6804.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "        p [idxTarget] = mObjectArray [idxSource] ;\n" ;
  GALGAS_uint index_6912_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6912 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6912.hasCurrentObject ()) {
      result << "  }\n" ;
      index_6912_.increment () ;
      enumerator_6912.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6952_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6952 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6952.hasCurrentObject ()) {
      result << "  mSize" ;
      result << enumerator_6952.current_mValue (HERE).stringValue () ;
      result << " = inSize" ;
      result << enumerator_6952.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_6952_.increment () ;
      enumerator_6952.gotoNextObject () ;
    }
  }
  result << "  macroMyDeleteArray (mObjectArray) ;\n"
    "  mObjectArray = p ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroDetachSharedObject (mSharedObject) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  macroDetachSharedObject (mSharedObject) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_new (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8455_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8455 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_8455.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inSize" ;
      result << enumerator_8455.current_mValue (HERE).stringValue () ;
      if (enumerator_8455.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8455_.increment () ;
      enumerator_8455.gotoNextObject () ;
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
  GALGAS_uint index_8616_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8616 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_8616.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_8616.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_8616.hasNextObject ()) {
        result << " && " ;
      }
      index_8616_.increment () ;
      enumerator_8616.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroMyNew (result.mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_8762_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8762 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_8762.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_8762.current_mValue (HERE).stringValue () ;
      result << ".uintValue ()" ;
      if (enumerator_8762.hasNextObject ()) {
        result << ", " ;
      }
      index_8762_.increment () ;
      enumerator_8762.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_9321_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_9321 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_9321.hasCurrentObject ()) {
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "<< cStringWithUnsigned (mSharedObject->size" ;
      result << enumerator_9321.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_9321.hasNextObject ()) {
        result << " << \", \"" ;
      }
      index_9321_.increment () ;
      enumerator_9321.gotoNextObject () ;
    }
  }
  result << "             << \"] of @uint\" ;\n"
    "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_10452_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_10452 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_10452.hasCurrentObject ()) {
      result << "    }else if (" ;
      result << enumerator_10452.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) {\n"
        "      result = GALGAS_range (GALGAS_uint (0), GALGAS_uint (mSharedObject->size" ;
      result << enumerator_10452.current_mValue (HERE).stringValue () ;
      result << " ())) ;\n" ;
      index_10452_.increment () ;
      enumerator_10452.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_11284_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11284 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_11284.hasCurrentObject ()) {
      result << "    }else if (" ;
      result << enumerator_11284.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) {\n"
        "      result = GALGAS_uint (mSharedObject->size" ;
      result << enumerator_11284.current_mValue (HERE).stringValue () ;
      result << " ()) ;\n" ;
      index_11284_.increment () ;
      enumerator_11284.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_isValueValidAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11653_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11653 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_11653.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inIndex" ;
      result << enumerator_11653.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_11653_.increment () ;
      enumerator_11653.gotoNextObject () ;
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
  GALGAS_uint index_11838_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11838 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_11838.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_11838.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_11838_.increment () ;
      enumerator_11838.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12038_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12038 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_12038.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_12038.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_12038_.increment () ;
      enumerator_12038.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_valueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12593_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12593 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_12593.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inIndex" ;
      result << enumerator_12593.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_12593_.increment () ;
      enumerator_12593.gotoNextObject () ;
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
  GALGAS_uint index_12800_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12800 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_12800.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_12800.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_12800_.increment () ;
      enumerator_12800.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13000_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13000 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_13000.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_13000.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_13000_.increment () ;
      enumerator_13000.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      result = mSharedObject->objectAtAbsoluteIndex (idx) ;\n"
    "      if (! result.isValid ()) {\n"
    "        C_String s ;\n"
    "        s << \"getter @ptrint valueAtIndex: object at index (\"" ;
  GALGAS_uint index_13407_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13407 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_13407.hasCurrentObject ()) {
      result << "\n"
        "             << cStringWithUnsigned (mSharedObject->size" ;
      result << enumerator_13407.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_13407.hasNextObject ()) {
        result << " << \", \"" ;
      }
      index_13407_.increment () ;
      enumerator_13407.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::insulate (LOCATION_ARGS) {\n"
    "  if (isValid () && (mSharedObject->retainCount () > 1)) {\n"
    "    cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "    macroMyNew (p, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mSharedObject COMMA_THERE)) ;\n"
    "    macroAssignSharedObject (mSharedObject, p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_setValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inValue,\n" ;
  GALGAS_uint index_14458_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14458 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_14458.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_uint inIndex" ;
      result << enumerator_14458.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_14458_.increment () ;
      enumerator_14458.gotoNextObject () ;
    }
  }
  result << "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_14637_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14637 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_14637.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_14637.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_14637_.increment () ;
      enumerator_14637.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14979_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14979 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_14979.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_14979.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_14979_.increment () ;
      enumerator_14979.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_forceValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inValue,\n" ;
  GALGAS_uint index_15514_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15514 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_15514.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint inIndex" ;
      result << enumerator_15514.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_15514_.increment () ;
      enumerator_15514.gotoNextObject () ;
    }
  }
  result << " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_15688_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15688 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_15688.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_15688.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_15688_.increment () ;
      enumerator_15688.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
    "  //--- Resize \?\n"
    "    const bool resize = " ;
  GALGAS_uint index_16012_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16012 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_16012.hasCurrentObject ()) {
      result << "(inIndex" ;
      result << enumerator_16012.current_mValue (HERE).stringValue () ;
      result << ".uintValue () >= mSharedObject->size" ;
      result << enumerator_16012.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_16012.hasNextObject ()) {
        result << " || " ;
      }
      index_16012_.increment () ;
      enumerator_16012.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "    if (resize) {\n" ;
  GALGAS_uint index_16151_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16151 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_16151.hasCurrentObject ()) {
      result << "      const uint32_t newSize" ;
      result << enumerator_16151.current_mValue (HERE).stringValue () ;
      result << " = uimax32 (mSharedObject->size" ;
      result << enumerator_16151.current_mValue (HERE).stringValue () ;
      result << " (), inIndex" ;
      result << enumerator_16151.current_mValue (HERE).stringValue () ;
      result << ".uintValue () + 1) ;\n" ;
      index_16151_.increment () ;
      enumerator_16151.gotoNextObject () ;
    }
  }
  result << "      mSharedObject->setSize (" ;
  GALGAS_uint index_16338_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16338 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_16338.hasCurrentObject ()) {
      result << "newSize" ;
      result << enumerator_16338.current_mValue (HERE).stringValue () ;
      if (enumerator_16338.hasNextObject ()) {
        result << ", " ;
      }
      index_16338_.increment () ;
      enumerator_16338.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    }\n"
    "  //---\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_16490_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16490 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_16490.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_16490.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_16490_.increment () ;
      enumerator_16490.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
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
  GALGAS_uint index_17738_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17738 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_17738.hasCurrentObject ()) {
      result << "      const uint32_t newSize" ;
      result << enumerator_17738.current_mValue (HERE).stringValue () ;
      result << " = (" ;
      result << enumerator_17738.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) \? inNewSize.uintValue () : mSharedObject->size" ;
      result << enumerator_17738.current_mValue (HERE).stringValue () ;
      result << " () ;\n" ;
      index_17738_.increment () ;
      enumerator_17738.gotoNextObject () ;
    }
  }
  result << "      mSharedObject->setSize (" ;
  GALGAS_uint index_17933_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17933 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_17933.hasCurrentObject ()) {
      result << "newSize" ;
      result << enumerator_17933.current_mValue (HERE).stringValue () ;
      if (enumerator_17933.hasNextObject ()) {
        result << ", " ;
      }
      index_17933_.increment () ;
      enumerator_17933.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_invalidateValueAtIndex (" ;
  GALGAS_uint index_18224_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18224 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    const bool nonEmpty_enumerator_18224 = enumerator_18224.hasCurrentObject () ;
    if (nonEmpty_enumerator_18224) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_18224.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_uint inIndex" ;
      result << enumerator_18224.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_18224_.increment () ;
      enumerator_18224.gotoNextObject () ;
    }
  }
  result << "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_18383_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18383 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_18383.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_18383.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_18383_.increment () ;
      enumerator_18383.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_18725_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18725 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_18725.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_18725.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_18725_.increment () ;
      enumerator_18725.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_19234_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19234 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_19234.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint inNewSize" ;
      result << enumerator_19234.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_19234_.increment () ;
      enumerator_19234.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_19395_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19395 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_19395.hasCurrentObject ()) {
      result << " && inNewSize" ;
      result << enumerator_19395.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_19395_.increment () ;
      enumerator_19395.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
    "    mSharedObject->setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_19711_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19711 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_19711.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inNewSize" ;
      result << enumerator_19711.current_mValue (HERE).stringValue () ;
      result << ".uintValue ()" ;
      if (enumerator_19711.hasNextObject ()) {
        result << ",\n" ;
      }
      index_19711_.increment () ;
      enumerator_19711.gotoNextObject () ;
    }
  }
  result << "\n"
    "                            COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typeComparisonResult cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const {\n"
    "  typeComparisonResult result =  kOperandEqual ;\n" ;
  GALGAS_uint index_20130_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_20130 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_20130.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    if (mSize" ;
      result << enumerator_20130.current_mValue (HERE).stringValue () ;
      result << " < inOperand->mSize" ;
      result << enumerator_20130.current_mValue (HERE).stringValue () ;
      result << ") {\n"
        "      result = kFirstOperandLowerThanSecond ;\n"
        "    }else if (mSize" ;
      result << enumerator_20130.current_mValue (HERE).stringValue () ;
      result << " > inOperand->mSize" ;
      result << enumerator_20130.current_mValue (HERE).stringValue () ;
      result << ") {\n"
        "      result = kFirstOperandGreaterThanSecond ;\n"
        "    }\n"
        "  }\n" ;
      index_20130_.increment () ;
      enumerator_20130.gotoNextObject () ;
    }
  }
  result << "  for (uint32_t i=0 ; (i<(" ;
  GALGAS_uint index_20445_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_20445 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_20445.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_20445.current_mValue (HERE).stringValue () ;
      if (enumerator_20445.hasNextObject ()) {
        result << "*" ;
      }
      index_20445_.increment () ;
      enumerator_20445.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'typeGenerationTemplate listmapTypeHeader1'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_listmap {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'typeGenerationTemplate listmapTypeSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_listmap () {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey" ;
  GALGAS_uint index_767_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_767 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_767.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_767.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue () ;
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
  GALGAS_uint index_984_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_984 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_984.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_984_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 24)).stringValue () ;
      result << ".isValid ()" ;
      index_984_IDX.increment () ;
      enumerator_984.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    capCollectionElement attributes ;\n"
    "    GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_1213_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1213 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1213.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_1213_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 30)).stringValue () ;
      index_1213_IDX.increment () ;
      enumerator_1213.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    addObjectInListMap (inKey.stringValue (), attributes) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "cGenericAbstractEnumerator () {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_string cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_key (LOCATION_ARGS) const {\n"
    "  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cListMapElement) ;\n"
    "  return GALGAS_string (p->mKey) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'typeGenerationTemplate mapTypeHeader1'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */,
                                                                            const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  GALGAS_uint index_628_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_628 (in_SEARCH_5F_METHOD_5F_LIST, kEnumeration_up) ;
    while (enumerator_628.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "extern const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_628.current_mSearchMethodName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 12)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_628_.increment () ;
      enumerator_628.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_map {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'typeGenerationTemplate mapTypeHeader2'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (C_Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cMapElement {\n"
    "//--- Map attributes\n" ;
  GALGAS_uint index_698_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_698 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_698.hasCurrentObject ()) {
      result << "  public : GALGAS_" ;
      result << enumerator_698.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
      result << " mAttribute_" ;
      result << enumerator_698.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
      result << " ;\n" ;
      index_698_.increment () ;
      enumerator_698.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public : cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_967_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_967 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_967.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_967.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_967.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      index_967_.increment () ;
      enumerator_967.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public : virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public : virtual cMapElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    " public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'typeGenerationTemplate mapTypeSpecificImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                        const GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapRemoveMethodListAST & in_REMOVE_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    cEnumerator_typedPropertyList enumerator_252 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_252.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_252.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      result << " & in_" ;
      result << enumerator_252.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      index_252_.increment () ;
      enumerator_252.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cMapElement (inKey COMMA_THERE)" ;
  GALGAS_uint index_472_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_472 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_472.hasCurrentObject ()) {
      result << ",\n"
        "mAttribute_" ;
      result << enumerator_472.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result << " (in_" ;
      result << enumerator_472.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result << ")" ;
      index_472_.increment () ;
      enumerator_472.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "bool cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mAttribute_lkey.isValid ()" ;
  GALGAS_uint index_855_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_855 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_855.hasCurrentObject ()) {
      result << " && mAttribute_" ;
      result << enumerator_855.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 21)).stringValue () ;
      result << ".isValid ()" ;
      index_855_.increment () ;
      enumerator_855.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cMapElement * cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cMapElement * result = NULL ;\n"
    "  macroMyNew (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mAttribute_lkey" ;
  GALGAS_uint index_1268_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1268 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1268.hasCurrentObject ()) {
      result << ", mAttribute_" ;
      result << enumerator_1268.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 32)).stringValue () ;
      index_1268_.increment () ;
      enumerator_1268.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    GALGAS_uint index_1809_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1809 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_1809.hasCurrentObject ()) {
        result << "  ioString << \"\\n\" ;\n"
          "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
          "  ioString << " ;
        result << enumerator_1809.current_mAttributeName (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 47)).stringValue () ;
        result << " \":\" ;\n"
          "  mAttribute_" ;
        result << enumerator_1809.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".description (ioString, inIndentation) ;\n" ;
        index_1809_.increment () ;
        enumerator_1809.gotoNextObject () ;
      }
    }
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typeComparisonResult cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;\n" ;
  GALGAS_uint index_2533_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2533 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_2533.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    result = mAttribute_" ;
      result << enumerator_2533.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 60)).stringValue () ;
      result << ".objectCompare (operand->mAttribute_" ;
      result << enumerator_2533.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 60)).stringValue () ;
      result << ") ;\n"
        "  }\n" ;
      index_2533_.increment () ;
      enumerator_2533.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_map () {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_4942_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4942 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_4942.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_4942.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 115)).stringValue () ;
      result << " & inArgument" ;
      result << index_4942_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 115)).stringValue () ;
      index_4942_IDX.increment () ;
      enumerator_4942.gotoNextObject () ;
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
  GALGAS_uint index_5259_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5259 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_5259.hasCurrentObject ()) {
      result << ", inArgument" ;
      result << index_5259_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 122)).stringValue () ;
      index_5259_IDX.increment () ;
      enumerator_5259.gotoNextObject () ;
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
  GALGAS_uint index_5719_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_5719 (in_INSERT_5F_METHOD_5F_LIST, kEnumeration_up) ;
    while (enumerator_5719.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_5719.current_mInsertMethodName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 137)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_6013_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6013 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_6013.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_6013.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 139)).stringValue () ;
          result << " inArgument" ;
          result << index_6013_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 139)).stringValue () ;
          index_6013_IDX.increment () ;
          enumerator_6013.gotoNextObject () ;
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
      GALGAS_uint index_6346_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6346 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_6346.hasCurrentObject ()) {
          result << ", inArgument" ;
          result << index_6346_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 146)).stringValue () ;
          index_6346_IDX.increment () ;
          enumerator_6346.gotoNextObject () ;
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
      result << enumerator_5719.current_mErrorMessage (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue () ;
      result << " ;\n"
        "const char * kShadowErrorMessage = " ;
      result << enumerator_5719.current_mShadowErrorMessage (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 154)).stringValue () ;
      result << " ;\n"
        "performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_5719_.increment () ;
      enumerator_5719.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6858_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_6858 (in_SEARCH_5F_METHOD_5F_LIST, kEnumeration_up) ;
    while (enumerator_6858.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_6858.current_mSearchMethodName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 162)).stringValue () ;
      result << " = " ;
      result << enumerator_6858.current_mErrorMessage (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 162)).stringValue () ;
      result << " ;\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::method_" ;
      result << enumerator_6858.current_mSearchMethodName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 164)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_7431_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_7431 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_7431.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_7431.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).stringValue () ;
          result << " & outArgument" ;
          result << index_7431_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).stringValue () ;
          index_7431_IDX.increment () ;
          enumerator_7431.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
      }
      result << "const cMapElement_" ;
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
      result << enumerator_6858.current_mSearchMethodName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 173)).stringValue () ;
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE) ;\n"
        "if (NULL == p) {\n" ;
      GALGAS_uint index_7955_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_7955 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_7955.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_7955_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 177)).stringValue () ;
          result << ".drop () ;\n" ;
          index_7955_IDX.increment () ;
          enumerator_7955.gotoNextObject () ;
        }
      }
      result << "}else{\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_8140_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8140 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_8140.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_8140_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).stringValue () ;
          result << " = p->mAttribute_" ;
          result << enumerator_8140.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).stringValue () ;
          result << " ;\n" ;
          index_8140_IDX.increment () ;
          enumerator_8140.gotoNextObject () ;
        }
      }
      result << "}\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_6858_.increment () ;
      enumerator_6858.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8314_ (0) ;
  if (in_REMOVE_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapRemoveMethodListAST enumerator_8314 (in_REMOVE_5F_METHOD_5F_LIST, kEnumeration_up) ;
    while (enumerator_8314.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_8314.current_mMethodName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 192)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_8602_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8602 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_8602.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_8602.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 194)).stringValue () ;
          result << " & outArgument" ;
          result << index_8602_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 194)).stringValue () ;
          index_8602_IDX.increment () ;
          enumerator_8602.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
      }
      result << "const char * kRemoveErrorMessage = " ;
      result << enumerator_8314.current_mErrorMessage (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 199)).stringValue () ;
      result << " ;\n"
        "capCollectionElement attributes ;\n"
        "performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;\n"
        "cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes.ptr () ;\n"
        "if (NULL != p) {\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_9243_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9243 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_9243.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_9243_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 206)).stringValue () ;
          result << " = p->mAttribute_" ;
          result << enumerator_9243.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 206)).stringValue () ;
          result << " ;\n" ;
          index_9243_IDX.increment () ;
          enumerator_9243.gotoNextObject () ;
        }
      }
      result << "}\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_8314_.increment () ;
      enumerator_8314.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "void GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::setter_insertOrReplace (" ;
    columnMarker = result.currentColumn () ;
    result << "GALGAS_lstring inKey" ;
    GALGAS_uint index_9672_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9672 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_9672.hasCurrentObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_" ;
        result << enumerator_9672.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 217)).stringValue () ;
        result << " inArgument" ;
        result << index_9672_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 217)).stringValue () ;
        index_9672_IDX.increment () ;
        enumerator_9672.gotoNextObject () ;
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
    GALGAS_uint index_9966_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9966 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_9966.hasCurrentObject ()) {
        result << ", inArgument" ;
        result << index_9966_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 223)).stringValue () ;
        index_9966_IDX.increment () ;
        enumerator_9966.gotoNextObject () ;
      }
    }
    result << " COMMA_HERE)) ;\n"
      "  capCollectionElement attributes ;\n"
      "  attributes.setPointer (p) ;\n"
      "  macroDetachSharedObject (p) ;\n"
      "  performInsertOrReplace (attributes) ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  GALGAS_uint index_10237_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10237 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_10237.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_10237.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 235)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_10237.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 235)).stringValue () ;
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
      result << enumerator_10237.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 240)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mAttribute_" ;
      result << enumerator_10237.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 243)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_10237_IDX.increment () ;
      enumerator_10237.gotoNextObject () ;
    }
  }
  GALGAS_uint index_11266_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11266 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_11266.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_11266.current_mAttributeName (HERE).mAttribute_string.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 251)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 251)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << enumerator_11266.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 251)).stringValue () ;
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
        "  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    p->mAttribute_" ;
      result << enumerator_11266.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 259)).stringValue () ;
      result << " = inAttributeValue ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_11266_IDX.increment () ;
      enumerator_11266.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << " *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;\n"
    "  macroNullOrValidSharedObject (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "cGenericAbstractEnumerator () {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "_2D_element (p->mAttribute_lkey" ;
  GALGAS_uint index_13690_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13690 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_13690.hasCurrentObject ()) {
      result << ", p->mAttribute_" ;
      result << enumerator_13690.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 291)).stringValue () ;
      index_13690_.increment () ;
      enumerator_13690.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_lstring cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_lkey (LOCATION_ARGS) const {\n"
    "  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cMapElement) ;\n"
    "  return p->mAttribute_lkey ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_14162_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14162 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_14162.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_14162.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 306)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_14162.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 306)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mAttribute_" ;
      result << enumerator_14162.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 309)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_14162_IDX.increment () ;
      enumerator_14162.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate classTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_typedPropertyList & /* in_ALL_5F_ATTRIBUTE_5F_LIST */,
                                                                              const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                              const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "AC_GALGAS_class" ;
  }else if (kBoolFalse == test_0) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n"
    "//--- Constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 11)) COMMA_SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 11)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--------------------------------- Default GALGAS constructor\n"
      "  public : static GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//---\n"
    "  public : inline const class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr (void) const { return (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) mObjectPtr ; }\n"
    "\n"
    "//--------------------------------- Constructor from pointer\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'typeGenerationTemplate classTypeHeader2part1'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & in_TYPE_5F_NAME,
                                                                                      const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                      const GALGAS_typedPropertyList & /* in_CURRENT_5F_ATTRIBUTE_5F_LIST */,
                                                                                      const GALGAS_typedPropertyList & /* in_ALL_5F_ATTRIBUTE_5F_LIST */,
                                                                                      const GALGAS_bool & /* in_IS_5F_ABSTRACT */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_class.h2-part1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'typeGenerationTemplate classTypeHeader2part2'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    cEnumerator_typedPropertyList enumerator_55 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_55.hasCurrentObject ()) {
      result << "  public : GALGAS_" ;
      result << enumerator_55.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " mAttribute_" ;
      result << enumerator_55.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " ;\n" ;
      index_55_.increment () ;
      enumerator_55.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public : cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_293_ (0) ;
  if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_293 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_293.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_293.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      result << " & in_" ;
      result << enumerator_293.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      if (enumerator_293.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_293_.increment () ;
      enumerator_293.gotoNextObject () ;
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
      "  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--- Attribute accessors\n" ;
  GALGAS_uint index_729_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_729 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_729.hasCurrentObject ()) {
      const enumGalgasBool test_2 = enumerator_729.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
        result << enumerator_729.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 29)).stringValue () ;
        result << " getter_" ;
        result << enumerator_729.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 29)).stringValue () ;
        result << " (LOCATION_ARGS) const ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      const enumGalgasBool test_3 = enumerator_729.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  public : VIRTUAL_IN_DEBUG void setter_set" ;
        result << enumerator_729.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 32)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 32)).stringValue () ;
        result << " (GALGAS_" ;
        result << enumerator_729.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 32)).stringValue () ;
        result << " inValue COMMA_LOCATION_ARGS) ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_729_.increment () ;
      enumerator_729.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_4 = in_IS_5F_ABSTRACT.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//--- Description\n"
      "  public : virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const = 0 ;\n"
      "\n"
      "  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;\n"
      "\n"
      "  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;\n" ;
  }else if (kBoolFalse == test_4) {
    result << "//--- Description\n"
      "  public : virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const ;\n"
      "\n"
      "  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;\n"
      "\n"
      "  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;\n" ;
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate classTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                          const GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                          const GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                          const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                          const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//   Object comparison                                                                                                 *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 6)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 6)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 6)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n"
      "  return kOperandEqual ;\n"
      "}\n"
      "\n"
      "//---------------------------------------------------------------------------------------------------------------------*\n" ;
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
    GALGAS_uint index_1097_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1097 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_1097.hasCurrentObject ()) {
        result << "  if (kOperandEqual == result) {\n"
          "    result = mAttribute_" ;
        result << enumerator_1097.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ".objectCompare (p->mAttribute_" ;
        result << enumerator_1097.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ") ;\n"
          "  }\n" ;
        index_1097_.increment () ;
        enumerator_1097.gotoNextObject () ;
      }
    }
    result << "  return result ;\n"
      "}\n"
      "\n"
      "//---------------------------------------------------------------------------------------------------------------------*\n" ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "AC_GALGAS_class" ;
  }else if (kBoolFalse == test_2) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " () {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_3 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 52)) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 52)).boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 57)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_uint index_2786_ (0) ;
      if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_2786 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_2786.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << enumerator_2786.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 59)).stringValue () ;
          result << "::constructor_" ;
          result << enumerator_2786.current_mAttributeTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 59)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 59)).stringValue () ;
          result << " (HERE)" ;
          if (enumerator_2786.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_2786_.increment () ;
          enumerator_2786.gotoNextObject () ;
        }
      }
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE" ;
    }else if (kBoolFalse == test_4) {
      result << "THERE" ;
    }
    result << ") ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) :\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "AC_GALGAS_class" ;
  }else if (kBoolFalse == test_5) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (inSourcePtr) {\n"
    "  macroNullOrValidSharedObject (inSourcePtr, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_6 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 77)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 77)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 77)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 86)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 86)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 86)).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4178_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4178 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_4178.hasCurrentObject ()) {
        result << "const GALGAS_" ;
        result << enumerator_4178.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 90)).stringValue () ;
        result << " & inAttribute_" ;
        result << enumerator_4178.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 90)).stringValue () ;
        if (enumerator_4178.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4178_.increment () ;
        enumerator_4178.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 93)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      result << "LOCATION_ARGS" ;
    }else if (kBoolFalse == test_8) {
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS" ;
    }
    result << ") {\n"
      "  GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " result ;\n"
      "  if (" ;
    GALGAS_uint index_4530_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4530 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_4530.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4530.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 102)).stringValue () ;
        result << ".isValid ()" ;
        if (enumerator_4530.hasNextObject ()) {
          result << " && " ;
        }
        index_4530_.increment () ;
        enumerator_4530.gotoNextObject () ;
      }
    }
    result << ") {\n"
      "    macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_4740_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4740 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_4740.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4740.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 108)).stringValue () ;
        if (enumerator_4740.hasNextObject ()) {
          result << ", " ;
        }
        index_4740_.increment () ;
        enumerator_4740.gotoNextObject () ;
      }
    }
    result << " COMMA_THERE)) ;\n"
      "  }\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_7) {
  }
  GALGAS_uint index_4934_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4934 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_4934.hasCurrentObject ()) {
      const enumGalgasBool test_9 = enumerator_4934.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_9) {
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "GALGAS_" ;
        result << enumerator_4934.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 120)).stringValue () ;
        result << " GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::getter_" ;
        result << enumerator_4934.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 120)).stringValue () ;
        result << " (UNUSED_LOCATION_ARGS) const {\n"
          "  GALGAS_" ;
        result << enumerator_4934.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 121)).stringValue () ;
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
          "    result = p->mAttribute_" ;
        result << enumerator_4934.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 125)).stringValue () ;
        result << " ;\n"
          "  }\n"
          "  return result ;\n"
          "}\n"
          "\n"
          "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "GALGAS_" ;
        result << enumerator_4934.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 130)).stringValue () ;
        result << " cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::getter_" ;
        result << enumerator_4934.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 130)).stringValue () ;
        result << " (UNUSED_LOCATION_ARGS) const {\n"
          "  return mAttribute_" ;
        result << enumerator_4934.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 131)).stringValue () ;
        result << " ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_9) {
      }
      index_4934_.increment () ;
      enumerator_4934.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6104_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6104 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_6104.hasCurrentObject ()) {
      const enumGalgasBool test_10 = enumerator_6104.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_10) {
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_6104.current_mAttributeName (HERE).mAttribute_string.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 139)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 139)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_6104.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 139)).stringValue () ;
        result << " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) {\n"
          "  if (NULL != mObjectPtr) {\n"
          "    insulate (THERE) ;\n"
          "    cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) mObjectPtr ;\n"
          "    macroValidSharedObject (p, cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    p->mAttribute_" ;
        result << enumerator_6104.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 145)).stringValue () ;
        result << " = inValue ;\n"
          "  }\n"
          "}\n"
          "\n"
          "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "void cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_6104.current_mAttributeName (HERE).mAttribute_string.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 149)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 149)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_6104.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 149)).stringValue () ;
        result << " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
          "  mAttribute_" ;
        result << enumerator_6104.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 151)).stringValue () ;
        result << " = inValue ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_10) {
      }
      index_6104_.increment () ;
      enumerator_6104.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//" ;
  result << GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 157)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 157)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 157)).stringValue () ;
  result << "*\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7757_ (0) ;
  if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7757 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_7757.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_7757.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 162)).stringValue () ;
      result << " & in_" ;
      result << enumerator_7757.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 162)).stringValue () ;
      if (enumerator_7757.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7757_.increment () ;
      enumerator_7757.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_11) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_11) {
    result << "LOCATION_ARGS" ;
  }
  result << ") :\n" ;
  const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_12) {
    result << "acPtr_class" ;
  }else if (kBoolFalse == test_12) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (" ;
  GALGAS_uint index_8146_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8146 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_8146.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_8146.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 173)).stringValue () ;
      if (enumerator_8146.hasNextObject ()) {
        result << ", " ;
      }
      index_8146_.increment () ;
      enumerator_8146.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 176)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_13) {
    result << " COMMA_THERE" ;
  }else if (kBoolFalse == test_13) {
    result << "THERE" ;
  }
  result << ")" ;
  GALGAS_uint index_8355_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8355 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_8355.hasCurrentObject ()) {
      result << ",\n"
        "mAttribute_" ;
      result << enumerator_8355.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 183)).stringValue () ;
      result << " (in_" ;
      result << enumerator_8355.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 183)).stringValue () ;
      result << ")" ;
      index_8355_.increment () ;
      enumerator_8355.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_14 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 189)).boolEnum () ;
  if (kBoolTrue == test_14) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "const C_galgas_type_descriptor * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::classDescriptor (void) const {\n"
      "  return & kTypeDescriptor_GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " ;\n"
      "}\n"
      "\n" ;
    const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 194)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_15) {
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
    }else if (kBoolFalse == test_15) {
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
      GALGAS_uint index_9297_ (0) ;
      if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9297 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_9297.hasCurrentObject ()) {
          result << "  mAttribute_" ;
          result << enumerator_9297.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 204)).stringValue () ;
          result << ".description (ioString, inIndentation+1) ;\n" ;
          if (enumerator_9297.hasNextObject ()) {
            result << "  ioString << \", \" ;\n" ;
          }
          index_9297_.increment () ;
          enumerator_9297.gotoNextObject () ;
        }
      }
      result << "  ioString << \"]\" ;\n"
        "}\n"
        "\n" ;
    }
  }else if (kBoolFalse == test_14) {
  }
  const enumGalgasBool test_16 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 212)).boolEnum () ;
  if (kBoolTrue == test_16) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "acPtr_class * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::duplicate (LOCATION_ARGS) const {\n"
      "  acPtr_class * ptr = NULL ;\n"
      "  macroMyNew (ptr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_9830_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9830 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      const bool nonEmpty_enumerator_9830 = enumerator_9830.hasCurrentObject () ;
      while (enumerator_9830.hasCurrentObject ()) {
        result << "mAttribute_" ;
        result << enumerator_9830.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 219)).stringValue () ;
        if (enumerator_9830.hasNextObject ()) {
          result << ", " ;
        }
        index_9830_.increment () ;
        enumerator_9830.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9830) {
        result << " COMMA_" ;
      }
    }
    result << "THERE)) ;\n"
      "  return ptr ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_16) {
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Filewrapper 'semanticComponentGenerationTemplate'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_891_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_891 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_891.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_891.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_891.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 12)).stringValue () ;
        result << " & constinArgument" ;
        result << index_891_IDX.getter_string (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_891.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 14)).stringValue () ;
        result << " inArgument" ;
        result << index_891_IDX.getter_string (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 14)).stringValue () ;
      }
      index_891_IDX.increment () ;
      enumerator_891.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_1943_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1943 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1943.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_1 = enumerator_1943.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "const GALGAS_" ;
        result << enumerator_1943.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 31)).stringValue () ;
        result << " & constin_" ;
        result << enumerator_1943.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 31)).stringValue () ;
      }else if (kBoolFalse == test_1) {
        result << "GALGAS_" ;
        result << enumerator_1943.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 33)).stringValue () ;
        result << " in_" ;
        result << enumerator_1943.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 33)).stringValue () ;
      }
      index_1943_.increment () ;
      enumerator_1943.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                             const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                             const GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_2431_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_2431 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2431.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_2431.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_2431.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 33)).stringValue () ;
        result << " & in_" ;
        result << enumerator_2431.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "GALGAS_" ;
        result << enumerator_2431.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 35)).stringValue () ;
        result << " in_" ;
        result << enumerator_2431.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 35)).stringValue () ;
      }
      index_2431_.increment () ;
      enumerator_2431.gotoNextObject () ;
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
  GALGAS_uint index_4352_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_4352 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_4352.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_4352.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 65)).stringValue () ;
      result << ", " ;
      index_4352_.increment () ;
      enumerator_4352.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_882_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_882 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_882.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_882.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_882.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 12)).stringValue () ;
        result << " & constinArgument" ;
        result << index_882_IDX.getter_string (SOURCE_FILE ("extension-getter.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_882.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 14)).stringValue () ;
        result << " inArgument" ;
        result << index_882_IDX.getter_string (SOURCE_FILE ("extension-getter.h.galgasTemplate", 14)).stringValue () ;
      }
      index_882_IDX.increment () ;
      enumerator_882.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_1922_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1922 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1922.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_1 = enumerator_1922.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "const GALGAS_" ;
        result << enumerator_1922.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 31)).stringValue () ;
        result << " & constin_" ;
        result << enumerator_1922.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 31)).stringValue () ;
      }else if (kBoolFalse == test_1) {
        result << "GALGAS_" ;
        result << enumerator_1922.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 33)).stringValue () ;
        result << " in_" ;
        result << enumerator_1922.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 33)).stringValue () ;
      }
      index_1922_.increment () ;
      enumerator_1922.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                     const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE,
                                                                                                     const GALGAS_string & in_GETTER_5F_IMPLEMENTATION
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_1695_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1695 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1695.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_1695.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_1695.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 22)).stringValue () ;
        result << " & in_" ;
        result << enumerator_1695.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 22)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "GALGAS_" ;
        result << enumerator_1695.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 24)).stringValue () ;
        result << " in_" ;
        result << enumerator_1695.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 24)).stringValue () ;
      }
      index_1695_.increment () ;
      enumerator_1695.gotoNextObject () ;
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
  GALGAS_uint index_3616_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_3616 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_3616.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_3616.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 54)).stringValue () ;
      result << ", " ;
      index_3616_.increment () ;
      enumerator_3616.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_GETTER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const GALGAS_unifiedTypeMap_2D_proxy & /* in_RETURN_5F_TYPE */,
                                                                                                               const GALGAS_string & in_GETTER_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Overriding extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_GETTER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionModifierDeclaration'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionModifierDeclaration (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                            const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typedef void (*extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_843_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_843 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_843.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_843.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_843.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_843_IDX.getter_string (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_843.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_843.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_843_IDX.getter_string (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_843.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_843.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_843_IDX.getter_string (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_843.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_843_IDX.getter_string (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_843_IDX.increment () ;
      enumerator_843.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 27)).stringValue () ;
  result << " inModifier) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2299_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2299 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2299.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2299.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2299.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2299.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2299.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2299.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2299.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2299.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2299.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2299.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2299.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2299.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2299_.increment () ;
      enumerator_2299.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionModifierImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionModifierImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                               const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static TC_UniqueArray <extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inModifier) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 18)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (void) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 19)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 19)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 24)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 24)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NULL,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 25)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 25)).stringValue () ;
  result << ") ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 29)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2425_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2425 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2425.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 32)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_2425.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 33)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2425.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 34)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_2425.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 35)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2425.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 35)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 36)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2425.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 37)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2425.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 37)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2425.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 39)).stringValue () ;
            result << " in_" ;
            result << enumerator_2425.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 39)).stringValue () ;
          }
        }
      }
      index_2425_.increment () ;
      enumerator_2425.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_3359_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3359 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_3359.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3359.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_3359.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_3359_.increment () ;
      enumerator_3359.gotoNextObject () ;
    }
  }
  result << "//--- Find setter\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 53)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 56)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 56)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 57)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 57)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 58)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 58)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 63)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 63)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 64)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 64)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 68)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 68)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    f (inObject, " ;
  GALGAS_uint index_4936_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4936 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_4936.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4936.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 72)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_4936.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 73)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4936.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 74)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_4936.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 75)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4936.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 76)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_4936.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 77)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_4936.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-modifier.cpp.galgasTemplate", 79)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_4936_.increment () ;
      enumerator_4936.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'semanticComponentGenerationTemplate extensionModifierDeclaration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionModifierDeclaration (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                    const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                    const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typedef void (*extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_834_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_834 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_834.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_834.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_834.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_834_IDX.getter_string (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_834.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_834.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_834_IDX.getter_string (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_834.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_834.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_834_IDX.getter_string (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_834.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_834_IDX.getter_string (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_834_IDX.increment () ;
      enumerator_834.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 27)).stringValue () ;
  result << " inModifier) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2303_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2303 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2303.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2303.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2303.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2303.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2303.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2303.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2303.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2303.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2303.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2303.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2303.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2303.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2303_.increment () ;
      enumerator_2303.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Filewrapper template 'semanticComponentGenerationTemplate extensionModifierImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionModifierImplementation (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                       const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                       const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                       const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static TC_UniqueArray <extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inModifier) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 18)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1675_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1675 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1675.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1675.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 21)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_1675.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 22)).stringValue () ;
        result << " constin_" ;
        result << enumerator_1675.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 22)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1675.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 23)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_1675.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 24)).stringValue () ;
          result << " & io_" ;
          result << enumerator_1675.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 24)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1675.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 25)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1675.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 26)).stringValue () ;
            result << " & out_" ;
            result << enumerator_1675.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 26)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1675.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 28)).stringValue () ;
            result << " in_" ;
            result << enumerator_1675.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 28)).stringValue () ;
          }
        }
      }
      index_1675_.increment () ;
      enumerator_1675.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_2609_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2609 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2609.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2609.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 36)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_2609.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 37)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_2609_.increment () ;
      enumerator_2609.gotoNextObject () ;
    }
  }
  result << "//--- Find setter\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 42)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 45)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 45)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 46)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 46)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 47)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 47)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 52)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 52)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 53)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 53)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 57)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 57)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    f (inObject, " ;
  GALGAS_uint index_4186_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4186 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_4186.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4186.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 61)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_4186.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 62)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4186.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 63)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_4186.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 64)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4186.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 65)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_4186.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 66)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_4186.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 68)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_4186_.increment () ;
      enumerator_4186.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 81)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 81)).stringValue () ;
  result << " (void) {\n"
    "  enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 82)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 82)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 83)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 83)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 88)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 88)).stringValue () ;
  result << " (void) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 89)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 89)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 94)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 94)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 94)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 94)).stringValue () ;
  result << ",\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 95)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier.cpp.galgasTemplate", 95)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionModifierImplementation'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionModifierImplementation (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                                 const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                                 const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Overriding extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 10)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 10)).stringValue () ;
  result << " (void) {\n"
    "  enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 11)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 17)).stringValue () ;
  result << " (defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-modifier.cpp.galgasTemplate", 17)).stringValue () ;
  result << ", NULL) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_845_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_845 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_845.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_845.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_845.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_845_IDX.getter_string (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_845.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_845.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_845_IDX.getter_string (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_845.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_845.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_845_IDX.getter_string (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_845.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_845_IDX.getter_string (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_845_IDX.increment () ;
      enumerator_845.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2312_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2312 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2312.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2312.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2312.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2312.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2312.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2312.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2312.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2312.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2312.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2312.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2312.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2312.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2312_.increment () ;
      enumerator_2312.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (C_Compiler * inCompiler,
                                                                                                             const GALGAS_unifiedTypeMap_2D_proxy & in_RECEIVER_5F_TYPE,
                                                                                                             const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                             const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract extension method '@").add_operation (in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 29)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 29)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2485_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2485 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2485.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2485.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 32)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_2485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 33)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2485.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2485.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 34)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_2485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 35)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2485.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 35)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2485.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 37)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2485.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 37)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2485.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 39)).stringValue () ;
            result << " in_" ;
            result << enumerator_2485.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 39)).stringValue () ;
          }
        }
      }
      index_2485_.increment () ;
      enumerator_2485.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_3419_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3419 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_3419.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3419.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_3419.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_3419_.increment () ;
      enumerator_3419.gotoNextObject () ;
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
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gExtensionMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 63)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 63)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 63)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gExtensionMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 64)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 64)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 64)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gExtensionMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.getter_key (inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 68)).getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 68)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 68)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "      fatalError (\"FATAL CATEGORY METHOD CALL ERROR\", __FILE__, __LINE__) ;\n"
    "    }else{\n"
    "      f (inObject, " ;
  GALGAS_uint index_5149_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_5149 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_5149.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_5149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 75)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_5149.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 76)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_5149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 77)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_5149.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 78)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_5149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 79)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_5149.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 80)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_5149.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 82)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_5149_.increment () ;
      enumerator_5149.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                  const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_836_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_836 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_836.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_836.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_836.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_836_IDX.getter_string (SOURCE_FILE ("extension-method.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_836.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_836.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_836_IDX.getter_string (SOURCE_FILE ("extension-method.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_836.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_836.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_836_IDX.getter_string (SOURCE_FILE ("extension-method.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_836.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_836_IDX.getter_string (SOURCE_FILE ("extension-method.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_836_IDX.increment () ;
      enumerator_836.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2303_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2303 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2303.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2303.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2303.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2303.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2303.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2303.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2303.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2303.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2303.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2303.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2303.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2303.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2303_.increment () ;
      enumerator_2303.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                     const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1659_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1659 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1659.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1659.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_1659.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 22)).stringValue () ;
        result << " constin_" ;
        result << enumerator_1659.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 22)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1659.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 23)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_1659.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 24)).stringValue () ;
          result << " & io_" ;
          result << enumerator_1659.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 24)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1659.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 25)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1659.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 26)).stringValue () ;
            result << " & out_" ;
            result << enumerator_1659.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 26)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1659.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 28)).stringValue () ;
            result << " in_" ;
            result << enumerator_1659.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 28)).stringValue () ;
          }
        }
      }
      index_1659_.increment () ;
      enumerator_1659.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n" ;
  GALGAS_uint index_2565_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2565 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2565.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2565.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 35)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_2565.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 36)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_2565_.increment () ;
      enumerator_2565.gotoNextObject () ;
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
  GALGAS_uint index_4214_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4214 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_4214.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4214.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 62)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_4214.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 63)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4214.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 64)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_4214.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 65)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4214.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 66)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_4214.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 67)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_4214.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 69)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_4214_.increment () ;
      enumerator_4214.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Overriding extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (C_Compiler * inCompiler,
                                                                                              const GALGAS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_string & in_FILEWRAPPER_5F_NAME
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_625_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_625 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kEnumeration_up) ;
    while (enumerator_625.hasCurrentObject ()) {
      result << "extern const char * gWrapperFileContent_" ;
      result << enumerator_625.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue () ;
      result << " ;\n" ;
      index_625_idx.increment () ;
      enumerator_625.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_913_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_913 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kEnumeration_up) ;
    while (enumerator_913.hasCurrentObject ()) {
      result << "extern const uint8_t gWrapperFileContent_" ;
      result << enumerator_913.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue () ;
      result << " [] ;\n" ;
      index_913_idx.increment () ;
      enumerator_913.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_1195_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1195 (in_FILE_5F_INDEX_5F_STRING_5F_LIST, kEnumeration_up) ;
    while (enumerator_1195.hasCurrentObject ()) {
      result << "extern const cRegularFileWrapper gWrapperFile_" ;
      result << enumerator_1195.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue () ;
      result << " ;\n" ;
      index_1195_idx.increment () ;
      enumerator_1195.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_1474_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1474 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST, kEnumeration_up) ;
    while (enumerator_1474.hasCurrentObject ()) {
      result << "extern const cDirectoryWrapper gWrapperDirectory_" ;
      result << enumerator_1474.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue () ;
      result << " ;\n" ;
      index_1474_.increment () ;
      enumerator_1474.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                            const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                            const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_822_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_822 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_822.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_822.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_822.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue () ;
        result << " & constinArgument" ;
        result << index_822_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_822.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue () ;
        result << " inArgument" ;
        result << index_822_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue () ;
      }
      index_822_IDX.increment () ;
      enumerator_822.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void extensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class GALGAS_" ;
  result << in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " inObject" ;
  GALGAS_uint index_762_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_762 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_762.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_762.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_762.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_762.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_762.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue () ;
          result << " & io_" ;
          result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_762.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_762.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue () ;
            result << " & out_" ;
            result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_762.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue () ;
            result << " in_" ;
            result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_762_.increment () ;
      enumerator_762.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate extensionModifierAsFunctionDeclaration'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionModifierAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                              const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                              const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void extensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class GALGAS_" ;
  result << in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " & ioObject" ;
  GALGAS_uint index_762_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_762 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_762.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_762.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_762.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_762.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_762.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 13)).stringValue () ;
          result << " & io_" ;
          result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_762.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_762.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 15)).stringValue () ;
            result << " & out_" ;
            result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_762.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 17)).stringValue () ;
            result << " in_" ;
            result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("extension-modifier-as-function.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_762_.increment () ;
      enumerator_762.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Filewrapper template 'semanticComponentGenerationTemplate extensionMmodifierAsFunctionImplementation'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMmodifierAsFunctionImplementation (C_Compiler * inCompiler,
                                                                                                                  const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                                  const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                                  const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Extension setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-modifier-as-function.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("extension-modifier-as-function.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                           const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " function_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_707_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_707 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_707.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_707.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_707.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << " & constinArgument" ;
        result << index_707_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_707.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue () ;
        result << " inArgument" ;
        result << index_707_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_707_IDX.increment () ;
      enumerator_707.gotoNextObject () ;
    }
  }
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                              const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                              const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                              const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Function introspection                                                                                             *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static const C_galgas_type_descriptor * functionArgs_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
  result << " [" ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
  result << "] = {\n" ;
  GALGAS_uint index_1142_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1142 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1142.hasCurrentObject ()) {
      result << "  & kTypeDescriptor_GALGAS_" ;
      result << enumerator_1142.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 15)).stringValue () ;
      result << ",\n" ;
      index_1142_.increment () ;
      enumerator_1142.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    result << "const GALGAS_location & /* \xC2""\xA7""\xC2""\xA7"" inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n" ;
    GALGAS_uint index_2393_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2393 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_2393.hasCurrentObject ()) {
        result << "  const GALGAS_" ;
        result << enumerator_2393.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << " operand" ;
        result << index_2393_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << " = GALGAS_" ;
        result << enumerator_2393.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << "::extractObject (" ;
        columnMarker = result.currentColumn () ;
        result << "inEffectiveParameterArray.objectAtIndex (" ;
        result << index_2393_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 37)).stringValue () ;
        result << " COMMA_HERE),\n"
          "  " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "inCompiler\n"
          "  " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_THERE) ;\n" ;
        index_2393_IDX.increment () ;
        enumerator_2393.gotoNextObject () ;
      }
    }
    result << "  return function_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 41)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_2803_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2803 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_2803.hasCurrentObject ()) {
        result << "operand" ;
        result << index_2803_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 43)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_2803_IDX.increment () ;
        enumerator_2803.gotoNextObject () ;
      }
    }
    result << "inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_THERE).getter_object (THERE) ;\n"
      "}\n" ;
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void routine_" ;
  result << in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_669_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_669 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_669.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_669.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_669.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << " constinArgument" ;
        result << index_669_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_669.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_669.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue () ;
          result << " & ioArgument" ;
          result << index_669_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_669.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_669.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue () ;
            result << " & outArgument" ;
            result << index_669_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_669.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue () ;
            result << " inArgument" ;
            result << index_669_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue () ;
          }
        }
      }
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_669_IDX.increment () ;
      enumerator_669.gotoNextObject () ;
    }
  }
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                             const GALGAS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_ROUTINE_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Function implementation                                                                                            *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void releaseOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (void) {\n"
    "  gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 30)).stringValue () ;
  result << ".drop () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Function introspection                                                                                             *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static const C_galgas_type_descriptor * functionArgs_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue () ;
  result << " [" ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue () ;
  result << "] = {\n" ;
  GALGAS_uint index_3003_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_3003 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_3003.hasCurrentObject ()) {
      result << "  & kTypeDescriptor_GALGAS_" ;
      result << enumerator_3003.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 45)).stringValue () ;
      result << ",\n" ;
      index_3003_.increment () ;
      enumerator_3003.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    result << "const GALGAS_location & /* \xC2""\xA7""\xC2""\xA7"" inErrorLocation*/\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n" ;
    GALGAS_uint index_4253_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_4253 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_4253.hasCurrentObject ()) {
        result << "  const GALGAS_" ;
        result << enumerator_4253.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " operand" ;
        result << index_4253_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " = GALGAS_" ;
        result << enumerator_4253.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << "::extractObject (inEffectiveParameterArray.objectAtIndex (" ;
        result << index_4253_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " COMMA_HERE), inCompiler COMMA_THERE) ;\n" ;
        index_4253_IDX.increment () ;
        enumerator_4253.gotoNextObject () ;
      }
    }
    result << "  return function_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 68)).stringValue () ;
    result << " (" ;
    GALGAS_uint index_4640_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_4640 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_4640.hasCurrentObject ()) {
        result << "operand" ;
        result << index_4640_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 70)).stringValue () ;
        result << ", " ;
        index_4640_IDX.increment () ;
        enumerator_4640.gotoNextObject () ;
      }
    }
    result << "inCompiler COMMA_THERE).getter_object (THERE) ;\n"
      "}\n" ;
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (C_Compiler * inCompiler,
                                                                                                      const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_string filewrapperTemplate_" ;
  result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class C_Compiler * inCompiler" ;
  GALGAS_uint index_798_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_798 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_798.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << enumerator_798.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue () ;
      result << " & " ;
      result << enumerator_798.current_mFormalArgumentCppName (HERE).stringValue () ;
      index_798_.increment () ;
      enumerator_798.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_907_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_907 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_907.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_907.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue () ;
      result << " & " ;
      const enumGalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (enumerator_907.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "/* " ;
        result << enumerator_907.current_mFormalArgumentCppName (HERE).stringValue () ;
        result << " */" ;
      }else if (kBoolFalse == test_1) {
        result << enumerator_907.current_mFormalArgumentCppName (HERE).stringValue () ;
      }
      index_907_.increment () ;
      enumerator_907.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'recursivlyEnumerateRegularFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursivlyEnumerateRegularFile (const GALGAS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                             const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                             GALGAS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 2316)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2316))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2316)) ;
  cEnumerator_wrapperFileMap enumerator_90560 (constinArgument_inFilewrapperFileMap, kEnumeration_up) ;
  while (enumerator_90560.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 2318)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2318))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2318)) ;
    const enumGalgasBool test_0 = enumerator_90560.current_mIsTextFile (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_90560.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2320))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2320)) ;
    }else if (kBoolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_90560.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2322))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2322)) ;
    }
    enumerator_90560.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_90880 (constinArgument_inFilewrapperDirectoryMap, kEnumeration_up) ;
  while (enumerator_90880.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile (enumerator_90880.current_mRegularFileMap (HERE), enumerator_90880.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2326)) ;
    }
    enumerator_90880.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateWrapperContents'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateWrapperContents (const GALGAS_string constinArgument_inFilewrapperName,
                                      const GALGAS_string constinArgument_inFilewrapperDirectory,
                                      const GALGAS_uint constinArgument_inFilewrapperDirectoryIndex,
                                      const GALGAS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                      const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                      GALGAS_string & ioArgument_ioImplementation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_wrapperFileMap enumerator_92898 (constinArgument_inFilewrapperRegularFileMap, kEnumeration_up) ;
  while (enumerator_92898.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_92898.current_mIsTextFile (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_contents = GALGAS_string::constructor_stringWithContentsOfFile (enumerator_92898.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2383)) ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2384)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2384)).add_operation (enumerator_92898.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2384)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2384)).add_operation (GALGAS_string ("'\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2384)).add_operation (GALGAS_string ("const char * gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2384)).add_operation (enumerator_92898.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2386)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2385)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2386)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2387)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2386)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2387)).add_operation (var_contents.getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2388)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2387)).add_operation (GALGAS_string (" ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2388)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2388)).add_operation (enumerator_92898.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2389)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2389)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2389)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2390)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2389)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2390)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2390)).add_operation (enumerator_92898.current_lkey (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2391)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2391)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2391)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2391)).add_operation (enumerator_92898.current_lkey (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 2392)).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2392)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2392)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2392)).add_operation (GALGAS_string ("  true, // Text file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2392)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2393)).add_operation (var_contents.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 2394)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2394)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2394)).add_operation (GALGAS_string (", // Text length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2394)).add_operation (GALGAS_string ("  gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2394)).add_operation (enumerator_92898.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2395)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2395)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2395)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2395)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2395)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2395)).add_operation (GALGAS_string (") ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2395)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2384)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_data var_contents = GALGAS_data::constructor_dataWithContentsOfFile (enumerator_92898.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2398)) ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2399)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2399)).add_operation (enumerator_92898.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2399)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2399)).add_operation (GALGAS_string ("'\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2399)).add_operation (GALGAS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2399)).add_operation (enumerator_92898.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2401)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2400)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2401)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2402)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2401)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2402)).add_operation (var_contents.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 2402)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2402)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2402)).add_operation (GALGAS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2402)).add_operation (var_contents.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2403)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2402)).add_operation (GALGAS_string ("} ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2403)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2403)).add_operation (enumerator_92898.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2404)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2404)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2404)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2405)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2404)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2405)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2405)).add_operation (enumerator_92898.current_lkey (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2406)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2406)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2406)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2406)).add_operation (enumerator_92898.current_lkey (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 2407)).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2407)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2407)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2407)).add_operation (GALGAS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2407)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2408)).add_operation (var_contents.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 2409)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2409)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2409)).add_operation (GALGAS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2409)).add_operation (GALGAS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2409)).add_operation (enumerator_92898.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2410)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2410)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2410)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2410)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2410)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2410)).add_operation (GALGAS_string (") ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2410)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2399)) ;
    }
    enumerator_92898.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_94771 (constinArgument_inFilewrapperDirectoryMap, kEnumeration_up) ;
  while (enumerator_94771.hasCurrentObject ()) {
    {
    routine_generateWrapperContents (constinArgument_inFilewrapperName, enumerator_94771.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2418)), enumerator_94771.current_mWrapperDirectoryIndex (HERE), enumerator_94771.current_mRegularFileMap (HERE), enumerator_94771.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2416)) ;
    }
    enumerator_94771.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2426)).add_operation (GALGAS_string ("' directory\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2426)).add_operation (GALGAS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2426)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2428)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2427)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2428)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2428)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2428)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2428)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 2429)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2429)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2429)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2429)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2429)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2426)) ;
  cEnumerator_wrapperFileMap enumerator_95351 (constinArgument_inFilewrapperRegularFileMap, kEnumeration_up) ;
  while (enumerator_95351.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperFile_").add_operation (enumerator_95351.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2431)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2431)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2431)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2431)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2431)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2431)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2431)) ;
    enumerator_95351.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2433)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2433)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2436)).add_operation (GALGAS_string ("' directory\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2436)).add_operation (GALGAS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2436)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2438)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2437)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2438)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2438)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2438)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2438)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 2439)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2439)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2439)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2439)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2439)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2436)) ;
  cEnumerator_wrapperDirectoryMap enumerator_95948 (constinArgument_inFilewrapperDirectoryMap, kEnumeration_up) ;
  while (enumerator_95948.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperDirectory_").add_operation (enumerator_95948.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2441)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2441)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2441)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2441)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2441)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2441)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2441)) ;
    enumerator_95948.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2443)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2443)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2446)).add_operation (GALGAS_string ("'\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2446)).add_operation (GALGAS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2446)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2447)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2447)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2447)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2448)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2447)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2448)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2448)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2449)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2449)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2449)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2449)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 2450)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2450)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2450)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2450)).add_operation (GALGAS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2450)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2451)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2451)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2451)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2451)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2451)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2451)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2451)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 2452)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2452)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2452)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2452)).add_operation (GALGAS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2452)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2453)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2453)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2453)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 2453)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2453)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2453)).add_operation (GALGAS_string (") ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2453)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2446)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Filewrapper 'predefinedTypeGenerationTemplate'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/predefined-types.h\"\n"
    "#include \"galgas2/cCollectionElement.h\"\n"
    "#include \"galgas2/cSortedListElement.h\"\n"
    "#include \"galgas2/capSortedListElement.h\"\n"
    "#include \"galgas2/C_Compiler.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cMapElement::cMapElement (const GALGAS_lstring & inLKey\n"
    "                          COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mAttribute_lkey (inLKey) {\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (C_Compiler * /* inCompiler */,
                                                                                                 const GALGAS_stringset & in_TYPE_5F_LIST
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#ifndef GALGAS2_INCLUDED_DEFINITIONS\n"
    "#define GALGAS2_INCLUDED_DEFINITIONS\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "#include \"galgas2/AC_GALGAS_class.h\"\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class C_Compiler ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_1388_ (0) ;
  if (in_TYPE_5F_LIST.isValid ()) {
    cEnumerator_stringset enumerator_1388 (in_TYPE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1388.hasCurrentObject ()) {
      result << "class GALGAS_" ;
      result << enumerator_1388.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("predefined-types-file-header.h.galgasTemplate", 37)).stringValue () ;
      result << " ;\n" ;
      index_1388_.increment () ;
      enumerator_1388.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/cCollectionElement.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cMapElement : public cCollectionElement {\n"
    "//--- Attribut\n"
    "  public : GALGAS_lstring mAttribute_lkey ;\n"
    "\n"
    "//--- Default constructor\n"
    "  public : cMapElement (const GALGAS_lstring & inLKey\n"
    "                        COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- No copy\n"
    "  private : cMapElement (const cMapElement &) ;\n"
    "  private : cMapElement & operator = (const cMapElement &) ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/cSortedListElement.h\"\n"
    "#include \"galgas2/capSortedListElement.h\"\n"
    "#include \"galgas2/C_galgas_function_descriptor.h\"\n"
    "#include \"galgas2/cObjectArray.h\"\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate sint_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@sint type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("sint-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_sint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : int32_t mSIntValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline int32_t intValue (void) const { return mSIntValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_sint (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_sint constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_sint (const int32_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@sint64 type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("sint64-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_sint_36__34_ : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : int64_t mSInt64Value ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline int64_t int64Value (void) const { return mSInt64Value ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_sint_36__34_ (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_sint_36__34_ constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_sint_36__34_ (const int64_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate object_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@object type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("object-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cPtr_object ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_object : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data member\n"
    "  private : cPtr_object * mSharedObject ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedObject != NULL ; }\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_object (void) ;\n"
    "\n"
    "//--------------------------------- Constructor from pointer\n"
    "  public : GALGAS_object (AC_GALGAS_root * inObjectPointer\n"
    "                          COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_object (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_object (const GALGAS_object & inSource) ;\n"
    "  public : GALGAS_object & operator = (const GALGAS_object & inSource) ;\n"
    "\n"
    "//--------------------------------- Embedded Object\n"
    "  public : const AC_GALGAS_root * embeddedObject (void) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate uint_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@uint type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("uint-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_uint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : uint32_t mUIntValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline uint32_t uintValue (void) const { return mUIntValue ; }\n"
    "  public : inline void increment (void) { mUIntValue ++ ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_uint (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_uint constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public : GALGAS_uint (const uint32_t inValue) ;\n"
    "  public : GALGAS_uint (const bool inValid, const uint32_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@uint64 type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("uint64-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_uint_36__34_ : public AC_GALGAS_root\n"
    " {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : uint64_t mUInt64Value ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_uint_36__34_ (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_uint_36__34_ constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_uint_36__34_ (const uint64_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate bool_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@bool type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("bool-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typedef enum {kBoolNotValid, kBoolFalse, kBoolTrue} enumGalgasBool ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_bool : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : bool mBoolValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n"
    "  public : inline bool boolValue (void) const { return mBoolValue ; }\n"
    "  public : enumGalgasBool boolEnum (void) const ;\n"
    "\n"
    "//--------------------------------- Drop\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_bool (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_bool constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public : GALGAS_bool (const bool inValue) ; // Is built\n"
    "  public : GALGAS_bool (const bool inBuilt, const bool inValue) ;\n"
    "\n"
    "//--------------------------------- Constructor for comparison result\n"
    "  public : GALGAS_bool (const typeComparisonKind inComparisonKind,\n"
    "                        const typeComparisonResult inComparisonResult) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@binaryset type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("binaryset-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"bdd/C_BDD.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_binaryset : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : C_BDD mBDD ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline C_BDD bddValue (void) const { return mBDD ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_binaryset (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_binaryset (const C_BDD & inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'predefinedTypeGenerationTemplate function_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@function type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("function-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class C_galgas_function_descriptor ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_function : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data member\n"
    "  private : const C_galgas_function_descriptor * mFunctionDescriptor ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return NULL != mFunctionDescriptor ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mFunctionDescriptor = NULL ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_function (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_function (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_function (const GALGAS_function & inSource) ;\n"
    "  public : GALGAS_function & operator = (const GALGAS_function & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_function (const C_galgas_function_descriptor * inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate type_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@type type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("type-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_type : public AC_GALGAS_root\n"
    " {\n"
    "//--------------------------------- Private data members\n"
    "  private : const C_galgas_type_descriptor * mTypeDescriptor ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : inline bool isValid (void) const { return NULL != mTypeDescriptor ; }\n"
    "  public : inline void drop (void) { mTypeDescriptor = NULL ; }\n"
    "  public : inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_type (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_type (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_type (const GALGAS_type & inSource) ;\n"
    "  public : GALGAS_type & operator = (const GALGAS_type & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_type (const C_galgas_type_descriptor * inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'predefinedTypeGenerationTemplate location_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@location type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("location-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class C_SourceTextInString ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/C_LocationInSource.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_location : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : C_LocationInSource mStartLocationInSource ;\n"
    "  private : C_LocationInSource mEndLocationInSource ;\n"
    "  private : C_SourceTextInString * mSourceText ;\n"
    "  private : bool mIsValid ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "  public : C_LocationInSource startLocation (void) const { return mStartLocationInSource ; }\n"
    "  public : C_LocationInSource endLocation (void) const { return mEndLocationInSource ; }\n"
    "  public : C_SourceTextInString * sourceText (void) const { return mSourceText ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_location (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_location (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_location (const GALGAS_location & inSource) ;\n"
    "  public : GALGAS_location & operator = (const GALGAS_location & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_location (const C_LocationInSource & inStartLocationInSource,\n"
    "                            const C_LocationInSource & inEndLocationInSource,\n"
    "                            C_SourceTextInString * inSourceText) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate data_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@data type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("data-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_data : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : C_Data mData ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline C_Data dataValue (void) const { return mData ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_data (void) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public : GALGAS_data (const C_Data & inData) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate char_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@char type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("char-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_char : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : utf32 mCharValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline utf32 charValue (void) const { return mCharValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_char (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_char constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_char (const utf32 inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate double_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@double type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("double-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_double : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : double mDoubleValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline double doubleValue (void) const { return mDoubleValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_double (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_double constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_double (const double inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate string_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@string type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("string-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "AC_OutputStream & operator << (AC_OutputStream & inStream,\n"
    "                               const GALGAS_string & inString) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "AC_OutputStream & operator << (AC_OutputStream & inStream,\n"
    "                               const GALGAS_lstring & inString) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_string : public AC_GALGAS_root\n"
    " {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : C_String mString ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "  public : inline C_String stringValue (void) const { return mString ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_string (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_string constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Constructor for making an empty string\n"
    "  public : static GALGAS_string makeEmptyString (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_string (const C_String & inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@stringset type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("stringset-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cSharedStringsetRoot ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_stringset : public AC_GALGAS_root\n"
    " {\n"
    "//--------------------------------- Private data members\n"
    "  private : cSharedStringsetRoot * mSharedRoot ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedRoot != NULL ; }\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_stringset (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_stringset (void) ;\n"
    "\n"
    "//--------------------------------- In debug mode : check method\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    protected : void checkStringset (LOCATION_ARGS) const ;\n"
    "  #endif\n"
    "\n"
    "//--------------------------------- Insulate\n"
    "  protected : void insulate (LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@filewrapper type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("filewrapper-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cRegularFileWrapper {\n"
    "  public : const char * mName ;\n"
    "  public : const char * mExtension ;\n"
    "  public : const bool mIsTextFile ; // True: text file, false: binary file\n"
    "  public : const uint32_t mFileLength ;\n"
    "  public : const char * mContents ;\n"
    "\n"
    "//--- Constructor\n"
    "  public : cRegularFileWrapper (const char * inName,\n"
    "                                const char * inExtension,\n"
    "                                const bool inIsTextFile,\n"
    "                                const uint32_t inFileLength,\n"
    "                                const char * inContents) ;\n"
    "\n"
    "//--- No copy\n"
    "  private : cRegularFileWrapper (const cRegularFileWrapper &) ;\n"
    "  private : cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cDirectoryWrapper {\n"
    "  public : const char * mDirectoryName ;\n"
    "  public : const uint32_t mFileCount ;\n"
    "  public : const cRegularFileWrapper * * const mFiles ;\n"
    "  public : const uint32_t mDirectoryCount ;\n"
    "  public : const cDirectoryWrapper * * mDirectories ;\n"
    "\n"
    "//--- Constructor\n"
    "  public : cDirectoryWrapper (const char * inDirectoryName,\n"
    "                              const uint32_t inFileCount,\n"
    "                              const cRegularFileWrapper * * const inFiles,\n"
    "                              const uint32_t inDirectoryCount,\n"
    "                              const cDirectoryWrapper * * inDirectories) ;\n"
    "\n"
    "//--- No copy\n"
    "  private : cDirectoryWrapper (const cDirectoryWrapper &) ;\n"
    "  private : cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_filewrapper : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : const cDirectoryWrapper * mRootDirectoryPtr ;\n"
    "  private : C_String mCurrentDirectory ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return NULL != mRootDirectoryPtr ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mRootDirectoryPtr = NULL ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_filewrapper (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_filewrapper (const GALGAS_filewrapper & inSource) ;\n"
    "  public : GALGAS_filewrapper & operator = (const GALGAS_filewrapper & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'predefinedTypeGenerationTemplate application_type'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@application type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("application-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_application : public AC_GALGAS_root {\n"
    "//--------------------------------- Accessors\n"
    "  public : inline bool isValid (void) const { return false ; }\n"
    "  public : inline void drop (void) { }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_application (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_application (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_application (const GALGAS_application & inSource) ;\n"
    "  public : GALGAS_application & operator = (const GALGAS_application & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@bigint type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("bigint-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_bigint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private properties\n"
    "  private : bool mIsValid ;\n"
    "  private : C_BigInt mValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_bigint (void) ;\n"
    "\n"
    "//--------------------------------- Constructor\n"
    "  public : GALGAS_bigint (const C_BigInt & inValue) ;\n"
    "  public : GALGAS_bigint (const char * inDecimalString, C_Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Destructor\n"
    "  public : virtual ~ GALGAS_bigint (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate timer_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@timer type").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("timer-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_timer : public AC_GALGAS_root {\n"
    "//--------------------------------- Private properties\n"
    "  private : bool mIsValid ;\n"
    "  private : C_Timer mTimer ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) { mIsValid = false ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_timer (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'generatePredefinedTypeFiles'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePredefinedTypeFiles (const GALGAS_string constinArgument_inDirectory,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inDirectory.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = constinArgument_inDirectory.getter_directoryExists (SOURCE_FILE ("semanticGeneration.galgas", 2631)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2631)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2632)), GALGAS_string ("the '").add_operation (constinArgument_inDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2632)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2632))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2632)) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_semanticDeclarationListAST var_predefinedTypeASTlist = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2635)) ;
      {
      routine_appendPredefinedTypesASTs (var_predefinedTypeASTlist, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2636)) ;
      }
      GALGAS_semanticContext var_semanticContext ;
      {
      routine_buildSemanticContext (var_predefinedTypeASTlist, var_semanticContext, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2638)) ;
      }
      GALGAS_semanticDeclarationSortedListForGeneration var_decoratedDeclarationListForGeneration ;
      {
      routine_performSemanticAnalysis (constinArgument_inDirectory, var_predefinedTypeASTlist, var_semanticContext, var_decoratedDeclarationListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2644)) ;
      }
      GALGAS_string var_generatedCode = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler, var_semanticContext.mAttribute_mTypeMap.getter_allKeys (SOURCE_FILE ("semanticGeneration.galgas", 2652)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2651))) ;
      cEnumerator_semanticDeclarationSortedListForGeneration enumerator_105141 (var_decoratedDeclarationListForGeneration, kEnumeration_up) ;
      while (enumerator_105141.hasCurrentObject ()) {
        var_generatedCode.plusAssign_operation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_105141.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2655)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2655)) ;
        enumerator_105141.gotoNextObject () ;
      }
      cEnumerator_semanticDeclarationSortedListForGeneration enumerator_105279 (var_decoratedDeclarationListForGeneration, kEnumeration_up) ;
      while (enumerator_105279.hasCurrentObject ()) {
        GALGAS_stringset var_unusedInclusionSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 2658)) ;
        GALGAS_string var_code ;
        callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_105279.current_mDeclaration (HERE).ptr (), var_unusedInclusionSet, var_code, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2659)) ;
        var_generatedCode.plusAssign_operation(var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2660)) ;
        enumerator_105279.gotoNextObject () ;
      }
      var_generatedCode.plusAssign_operation(GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2662))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2662)) ;
      cEnumerator_semanticDeclarationSortedListForGeneration enumerator_105595 (var_decoratedDeclarationListForGeneration, kEnumeration_up) ;
      while (enumerator_105595.hasCurrentObject ()) {
        GALGAS_stringset var_inclusionSet_32_ = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 2664)) ;
        GALGAS_string var_headerString_32_ ;
        callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_105595.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, var_inclusionSet_32_, var_headerString_32_, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2665)) ;
        var_generatedCode.plusAssign_operation(var_headerString_32_, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2666)) ;
        enumerator_105595.gotoNextObject () ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 2668)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("predefined-types.h"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
          "\n"), var_generatedCode, GALGAS_string ("\n"
          "\n"), GALGAS_string ("#endif\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2669)) ;
        }
      }
      var_generatedCode = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2682))) ;
      cEnumerator_semanticDeclarationSortedListForGeneration enumerator_106437 (var_decoratedDeclarationListForGeneration, kEnumeration_up) ;
      while (enumerator_106437.hasCurrentObject ()) {
        var_generatedCode.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_106437.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2684)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2684)) ;
        GALGAS_stringset joker_106593 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 2685)) ;
        GALGAS_string var_code ;
        callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_106437.current_mDeclaration (HERE).ptr (), GALGAS_unifiedTypeMap::constructor_emptyMap (SOURCE_FILE ("semanticGeneration.galgas", 2685)), joker_106593, var_code, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2685)) ;
        var_generatedCode.plusAssign_operation(var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2686)) ;
        enumerator_106437.gotoNextObject () ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 2688)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("predefined-types.cpp"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
          "\n"), var_generatedCode, GALGAS_string ("\n"
          "\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2689)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'semanticFileGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (C_Compiler * /* inCompiler */,
                                                                                     const GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                     const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#ifndef " ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("semantic-file.h.galgasTemplate", 1)).stringValue () ;
  result << "_ENTITIES_DEFINED\n"
    "#define " ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("semantic-file.h.galgasTemplate", 2)).stringValue () ;
  result << "_ENTITIES_DEFINED\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/predefined-types.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_461_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_461 (in_IMPORTED_5F_COMPONENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_461.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_461.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_461_.increment () ;
      enumerator_461.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (C_Compiler * /* inCompiler */,
                                                                                             const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#include \"galgas2/C_Compiler.h\"\n"
    "#include \"galgas2/C_galgas_io.h\"\n"
    "#include \"galgas2/C_galgas_CLI_Options.h\"\n"
    "#include \"utilities/C_PrologueEpilogue.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_309_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_309 (in_IMPORTED_5F_COMPONENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_309.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_309.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_309_.increment () ;
      enumerator_309.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Routine 'buildLexiqueComponentMapForSemanticAnalysis'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexiqueComponentMapForSemanticAnalysis (const GALGAS_parsedComponentStruct constinArgument_inParsedComponentStruct,
                                                          GALGAS_lexiqueComponentMapForSemanticAnalysis & outArgument_outLexiqueComponentMapForSemanticAnalysis,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexiqueComponentMapForSemanticAnalysis.drop () ; // Release 'out' argument
  outArgument_outLexiqueComponentMapForSemanticAnalysis = GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticsCompilation.galgas", 46)) ;
  cEnumerator_parsedLexiqueComponentMap enumerator_3865 (constinArgument_inParsedComponentStruct.mAttribute_mParsedLexiqueComponentMap, kEnumeration_up) ;
  while (enumerator_3865.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap ;
    {
    routine_buildTerminalMap (enumerator_3865.current_mLexiqueComponentAST (HERE), var_terminalMap, inCompiler  COMMA_SOURCE_FILE ("semanticsCompilation.galgas", 48)) ;
    }
    {
    outArgument_outLexiqueComponentMapForSemanticAnalysis.setter_insertKey (enumerator_3865.current_lkey (HERE), var_terminalMap, enumerator_3865.current_mLexiqueComponentAST (HERE).mAttribute_mIndexingListAST, enumerator_3865.current_mLexiqueComponentAST (HERE).mAttribute_mIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticsCompilation.galgas", 49)) ;
    }
    enumerator_3865.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Routine 'buildGrammarComponentMapForSemanticAnalysis'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGrammarComponentMapForSemanticAnalysis (const GALGAS_grammarComponentASTList constinArgument_inGrammarComponentASTList,
                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_grammarComponentASTList enumerator_4503 (constinArgument_inGrammarComponentASTList, kEnumeration_up) ;
  while (enumerator_4503.hasCurrentObject ()) {
    GALGAS_grammarLabelMap var_grammarLabelMap = GALGAS_grammarLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticsCompilation.galgas", 66)) ;
    cEnumerator_nonTerminalLabelListAST enumerator_4653 (enumerator_4503.current_mGrammarComponentAST (HERE).getter_mStartSymbolLabelList (SOURCE_FILE ("semanticsCompilation.galgas", 67)), kEnumeration_up) ;
    while (enumerator_4653.hasCurrentObject ()) {
      GALGAS_formalParameterSignature var_formalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsCompilation.galgas", 69)) ;
      cEnumerator_formalParameterListAST enumerator_4787 (enumerator_4653.current_mFormalArgumentList (HERE), kEnumeration_up) ;
      while (enumerator_4787.hasCurrentObject ()) {
        var_formalArgumentList.addAssign_operation (enumerator_4787.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_4787.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticsCompilation.galgas", 73)), enumerator_4787.current_mFormalArgumentPassingMode (HERE), enumerator_4787.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticsCompilation.galgas", 71)) ;
        enumerator_4787.gotoNextObject () ;
      }
      {
      var_grammarLabelMap.setter_insertKey (enumerator_4653.current_mLabelName (HERE), var_formalArgumentList, inCompiler COMMA_SOURCE_FILE ("semanticsCompilation.galgas", 77)) ;
      }
      enumerator_4653.gotoNextObject () ;
    }
    {
    ioArgument_ioSemanticContext.mAttribute_mGrammarMap.setter_insertGrammar (enumerator_4503.current_mGrammarComponentAST (HERE).mAttribute_mGrammarComponentName, var_grammarLabelMap, enumerator_4503.current_mGrammarComponentAST (HERE).getter_mHasIndexing (SOURCE_FILE ("semanticsCompilation.galgas", 86)).getter_bool (SOURCE_FILE ("semanticsCompilation.galgas", 86)), enumerator_4503.current_mGrammarComponentAST (HERE).mAttribute_mHasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticsCompilation.galgas", 83)) ;
    }
    enumerator_4503.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'appendPredefinedListTypeAST'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefinedListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                          const GALGAS_string constinArgument_inElementTypeName,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 21)) ;
  GALGAS_lstringlist var_attributeFeatureList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 22)) ;
  var_attributeFeatureList.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("setter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 23))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 23))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 23)) ;
  var_attributeList.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 25))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 25)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26)), var_attributeFeatureList  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 24)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 30)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 30))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 30)), var_attributeList  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 28))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 28)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'appendPredefined2StringListTypeAST'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefined_32_StringListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 38)) ;
  GALGAS_lstringlist var_attributeFeatureList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 39)) ;
  var_attributeFeatureList.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("setter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 40))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 40))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 40)) ;
  var_attributeList.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 42))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 42)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue0"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 43))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 43)), var_attributeFeatureList  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 41)) ;
  var_attributeList.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 46))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 46)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue1"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 47))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 47)), var_attributeFeatureList  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 45)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("2stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 52))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 52)), var_attributeList  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 50))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 50)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'appendPredefined2LStringListTypeAST'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefined_32_LStringListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 60)) ;
  GALGAS_lstringlist var_attributeFeatureList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 61)) ;
  var_attributeFeatureList.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("setter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 62))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 62))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 62)) ;
  var_attributeList.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 64))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 64)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue0"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 65))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 65)), var_attributeFeatureList  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 63)) ;
  var_attributeList.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 68))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 68)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue1"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 69))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 69)), var_attributeFeatureList  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 67)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("2lstringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 74))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 74)), var_attributeList  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 72))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 72)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'appendStructASTForTypeWithLocation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendStructASTForTypeWithLocation (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                 const GALGAS_string constinArgument_inElementTypeName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist var_featureList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 83)) ;
  GALGAS_propertyInCollectionListAST var_attributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 84)) ;
  var_attributeList.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 86))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 86)), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 87))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 87)), var_featureList  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 85)) ;
  var_attributeList.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 90))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 90)), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 91))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 91)), var_featureList  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 89)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 95)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 95))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 95)), var_attributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 93))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 93)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'appendStructASTForRangeType'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendStructASTForRangeType (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 105)) ;
  var_attributeList.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 107))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 107)), GALGAS_lstring::constructor_new (GALGAS_string ("start"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 108))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 108)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 109))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 106)) ;
  var_attributeList.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 111))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 111)), GALGAS_lstring::constructor_new (GALGAS_string ("length"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 112))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 112)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 113))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 110)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("range"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 116))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 116)), var_attributeList, GALGAS_string ("uint")  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 114))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 114)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'appendPredefinedTypesASTs'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefinedTypesASTs (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_applicationPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("application"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_application (SOURCE_FILE ("predefinedTypes.galgas", 127))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 127))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 127)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_bigintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("bigint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bigint (SOURCE_FILE ("predefinedTypes.galgas", 128))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 128))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 128)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_binarysetPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("binaryset"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_binaryset (SOURCE_FILE ("predefinedTypes.galgas", 129))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 129))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 129)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_boolPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("bool"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bool (SOURCE_FILE ("predefinedTypes.galgas", 130))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 130))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 130)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_charPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("char"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_char (SOURCE_FILE ("predefinedTypes.galgas", 131))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 131))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 131)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_dataPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("data"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_data (SOURCE_FILE ("predefinedTypes.galgas", 132))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 132))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 132)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_doublePredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("double"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_double (SOURCE_FILE ("predefinedTypes.galgas", 133))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 133))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 133)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_filewrapperPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_filewrapper (SOURCE_FILE ("predefinedTypes.galgas", 134))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 134))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 134)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_functionPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("function"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_function (SOURCE_FILE ("predefinedTypes.galgas", 135))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 135))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 135)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_locationPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("location"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_location (SOURCE_FILE ("predefinedTypes.galgas", 136))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 136))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 136)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_objectPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("object"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_object (SOURCE_FILE ("predefinedTypes.galgas", 137))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 137))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 137)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("sint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint (SOURCE_FILE ("predefinedTypes.galgas", 138))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 138))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 138)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sint_36__34_PredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("sint64"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint_36__34_ (SOURCE_FILE ("predefinedTypes.galgas", 139))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 139))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 139)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("string"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_string (SOURCE_FILE ("predefinedTypes.galgas", 140))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 140))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 140)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringsetPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("stringset"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_stringset (SOURCE_FILE ("predefinedTypes.galgas", 141))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 141))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 141)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_timerPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("timer"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_timer (SOURCE_FILE ("predefinedTypes.galgas", 142))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 142))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 142)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_typePredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("type"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_type (SOURCE_FILE ("predefinedTypes.galgas", 143))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 143))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 143)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("uint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint (SOURCE_FILE ("predefinedTypes.galgas", 144))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 144))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 144)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uint_36__34_PredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("uint64"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint_36__34_ (SOURCE_FILE ("predefinedTypes.galgas", 145))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 145))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 145)) ;
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("function"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 147)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("luint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 148)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("lstring"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 149)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("object"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 150)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 151)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("type"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 152)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 153)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 154)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 155)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("lbigint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 156)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("bool"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 158)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 159)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("char"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 160)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("double"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 161)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 162)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 163)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 164)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 165)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 166)) ;
  }
  {
  routine_appendPredefined_32_StringListTypeAST (ioArgument_ioDeclarationListASTs, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 168)) ;
  }
  {
  routine_appendPredefined_32_LStringListTypeAST (ioArgument_ioDeclarationListASTs, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 169)) ;
  }
  {
  routine_appendStructASTForRangeType (ioArgument_ioDeclarationListASTs, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 171)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'printFeaturesOfType'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_printFeaturesOfType (const GALGAS_string constinArgument_inTypeName,
                                  const GALGAS_typeKindEnum constinArgument_inTypeKindEnum,
                                  const GALGAS_typedPropertyList constinArgument_inAllTypedAttributeList,
                                  const GALGAS_constructorMap constinArgument_inConstructorMap,
                                  const GALGAS_getterMap constinArgument_inGetterMap,
                                  const GALGAS_setterMap constinArgument_inSetterMap,
                                  const GALGAS_instanceMethodMap constinArgument_inInstanceMethodMap,
                                  const GALGAS_classMethodMap constinArgument_inClassMethodMap,
                                  const GALGAS_uint constinArgument_inHandledOperatorFlags,
                                  const GALGAS_unifiedTypeMapProxyAndParameterList constinArgument_inAddAssignOperatorArguments,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s = GALGAS_string ("Features of @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 251)).add_operation (GALGAS_string (" type:\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 251)) ;
  var_s.plusAssign_operation(GALGAS_string (" - kind: ").add_operation (extensionGetter_kind (constinArgument_inTypeKindEnum, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 252)).add_operation (GALGAS_string (";\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 252)) ;
  cEnumerator_typedPropertyList enumerator_13142 (constinArgument_inAllTypedAttributeList, kEnumeration_up) ;
  const bool bool_0 = true ;
  if (enumerator_13142.hasCurrentObject () && bool_0) {
    var_s.plusAssign_operation(GALGAS_string (" - attribute(s):\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 256)) ;
    while (enumerator_13142.hasCurrentObject () && bool_0) {
      var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (enumerator_13142.current_mAttributeTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 258)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 258)).add_operation (enumerator_13142.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("predefinedTypes.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 258)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 258)) ;
      enumerator_13142.gotoNextObject () ;
    }
  }
  cEnumerator_constructorMap enumerator_13301 (constinArgument_inConstructorMap, kEnumeration_up) ;
  const bool bool_1 = true ;
  if (enumerator_13301.hasCurrentObject () && bool_1) {
    var_s.plusAssign_operation(GALGAS_string (" - constructor(s):\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 263)) ;
    while (enumerator_13301.hasCurrentObject () && bool_1) {
      var_s.plusAssign_operation(GALGAS_string ("    ").add_operation (enumerator_13301.current_lkey (HERE).getter_string (SOURCE_FILE ("predefinedTypes.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 265)) ;
      cEnumerator_functionSignature enumerator_13402 (enumerator_13301.current_mArgumentTypeList (HERE), kEnumeration_up) ;
      while (enumerator_13402.hasCurrentObject ()) {
        GALGAS_string temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_13402.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = enumerator_13402.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 267)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_string::makeEmptyString () ;
        }
        var_s.plusAssign_operation(GALGAS_string (" \?").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 267)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 267)).add_operation (enumerator_13402.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 267)) ;
        enumerator_13402.gotoNextObject () ;
      }
      var_s.plusAssign_operation(GALGAS_string (" -> @").add_operation (enumerator_13301.current_mReturnedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 269)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 269)) ;
      enumerator_13301.gotoNextObject () ;
    }
  }
  cEnumerator_getterMap enumerator_13624 (constinArgument_inGetterMap, kEnumeration_up) ;
  const bool bool_4 = true ;
  if (enumerator_13624.hasCurrentObject () && bool_4) {
    var_s.plusAssign_operation(GALGAS_string (" - getters(s):\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 274)) ;
    while (enumerator_13624.hasCurrentObject () && bool_4) {
      var_s.plusAssign_operation(GALGAS_string ("    ").add_operation (enumerator_13624.current_lkey (HERE).getter_string (SOURCE_FILE ("predefinedTypes.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 276)) ;
      cEnumerator_functionSignature enumerator_13721 (enumerator_13624.current_mArgumentTypeList (HERE), kEnumeration_up) ;
      while (enumerator_13721.hasCurrentObject ()) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_13721.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = enumerator_13721.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 278)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        var_s.plusAssign_operation(GALGAS_string (" \?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 278)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 278)).add_operation (enumerator_13721.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 278)) ;
        enumerator_13721.gotoNextObject () ;
      }
      var_s.plusAssign_operation(GALGAS_string (" -> @").add_operation (enumerator_13624.current_mReturnedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 280)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 280)) ;
      enumerator_13624.gotoNextObject () ;
    }
  }
  cEnumerator_setterMap enumerator_13943 (constinArgument_inSetterMap, kEnumeration_up) ;
  const bool bool_7 = true ;
  if (enumerator_13943.hasCurrentObject () && bool_7) {
    var_s.plusAssign_operation(GALGAS_string (" - setter(s):\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 285)) ;
    while (enumerator_13943.hasCurrentObject () && bool_7) {
      var_s.plusAssign_operation(GALGAS_string ("    ").add_operation (enumerator_13943.current_lkey (HERE).getter_string (SOURCE_FILE ("predefinedTypes.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 287)) ;
      cEnumerator_formalParameterSignature enumerator_14036 (enumerator_13943.current_mParameterList (HERE), kEnumeration_up) ;
      while (enumerator_14036.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_string (enumerator_14036.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 289)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 289)).add_operation (enumerator_14036.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 289)) ;
        enumerator_14036.gotoNextObject () ;
      }
      var_s.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 291)) ;
      enumerator_13943.gotoNextObject () ;
    }
  }
  cEnumerator_instanceMethodMap enumerator_14191 (constinArgument_inInstanceMethodMap, kEnumeration_up) ;
  const bool bool_8 = true ;
  if (enumerator_14191.hasCurrentObject () && bool_8) {
    var_s.plusAssign_operation(GALGAS_string (" - method(s):\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 296)) ;
    while (enumerator_14191.hasCurrentObject () && bool_8) {
      var_s.plusAssign_operation(GALGAS_string ("    ").add_operation (enumerator_14191.current_lkey (HERE).getter_string (SOURCE_FILE ("predefinedTypes.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 298)) ;
      cEnumerator_formalParameterSignature enumerator_14284 (enumerator_14191.current_mParameterList (HERE), kEnumeration_up) ;
      while (enumerator_14284.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_string (enumerator_14284.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 300)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 300)).add_operation (enumerator_14284.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 300)) ;
        enumerator_14284.gotoNextObject () ;
      }
      var_s.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 302)) ;
      enumerator_14191.gotoNextObject () ;
    }
  }
  cEnumerator_classMethodMap enumerator_14436 (constinArgument_inClassMethodMap, kEnumeration_up) ;
  const bool bool_9 = true ;
  if (enumerator_14436.hasCurrentObject () && bool_9) {
    var_s.plusAssign_operation(GALGAS_string (" - type proc(s):\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 307)) ;
    while (enumerator_14436.hasCurrentObject () && bool_9) {
      var_s.plusAssign_operation(GALGAS_string ("    ").add_operation (enumerator_14436.current_lkey (HERE).getter_string (SOURCE_FILE ("predefinedTypes.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 309)) ;
      cEnumerator_formalParameterSignature enumerator_14532 (enumerator_14436.current_mParameterList (HERE), kEnumeration_up) ;
      while (enumerator_14532.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_string (enumerator_14532.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 311)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 311)).add_operation (enumerator_14532.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 311)) ;
        enumerator_14532.gotoNextObject () ;
      }
      var_s.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 313)) ;
      enumerator_14436.gotoNextObject () ;
    }
  }
  var_s.plusAssign_operation(GALGAS_string (" - operators(s):\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 316)) ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 317)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 317)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 318)).add_operation (GALGAS_string (" + @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 318)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 318)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 318)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 318)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 318)) ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 320)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 320)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_11) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 321)).add_operation (GALGAS_string (" &+ @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 321)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 321)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 321)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 321)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 321)) ;
  }
  const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 323)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 323)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 324)).add_operation (GALGAS_string (" - @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 324)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 324)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 324)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 324)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 324)) ;
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 326)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 326)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_13) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 327)).add_operation (GALGAS_string (" &- @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 327)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 327)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 327)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 327)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 327)) ;
  }
  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 329)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 329)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_14) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 330)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 330)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 330)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 330)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 330)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 330)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 332)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 332)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 333)).add_operation (GALGAS_string (" &* @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 333)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 333)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 333)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 333)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 333)) ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 335)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 335)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 336)).add_operation (GALGAS_string (" / @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 336)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 336)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 336)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 336)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 336)) ;
  }
  const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 338)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 338)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 339)).add_operation (GALGAS_string (" &/ @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 339)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 339)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 339)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 339)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 339)) ;
  }
  const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 341)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 341)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_18) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 342)).add_operation (GALGAS_string (" mod @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 342)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 342)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 342)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 342)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 342)) ;
  }
  const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 344)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 344)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_19) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 345)).add_operation (GALGAS_string (" & @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 345)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 345)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 345)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 345)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 345)) ;
  }
  const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 347)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 347)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_20) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 348)).add_operation (GALGAS_string (" | @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 348)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 348)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 348)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 348)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 348)) ;
  }
  const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 350)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 350)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_21) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 351)).add_operation (GALGAS_string (" ^ @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 351)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 351)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 351)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 351)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 351)) ;
  }
  const enumGalgasBool test_22 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 353)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 353)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_22) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 354)).add_operation (GALGAS_string (" >> @uint -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 354)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 354)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 354)) ;
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 355)).add_operation (GALGAS_string (" << @uint -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 355)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 355)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 355)) ;
  }
  const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 357)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 357)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_23) {
    var_s.plusAssign_operation(GALGAS_string ("    + @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 358)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 358)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 358)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 358)) ;
  }
  const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 360)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 360)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_24) {
    var_s.plusAssign_operation(GALGAS_string ("    - @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 361)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 361)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 361)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 361)) ;
  }
  const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 363)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 363)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_25) {
    var_s.plusAssign_operation(GALGAS_string ("    &- @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 364)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 364)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 364)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 364)) ;
  }
  const enumGalgasBool test_26 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 366)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 366)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_26) {
    var_s.plusAssign_operation(GALGAS_string ("    ~ @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 367)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 367)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 367)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 367)) ;
  }
  const enumGalgasBool test_27 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 369)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 369)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_27) {
    var_s.plusAssign_operation(GALGAS_string ("    not @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 370)).add_operation (GALGAS_string (" -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 370)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 370)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 370)) ;
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 372)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 372)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_28) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 373)).add_operation (GALGAS_string (" ++ -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 373)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 373)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 373)) ;
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 374)).add_operation (GALGAS_string (" -- -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 374)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 374)) ;
  }
  const enumGalgasBool test_29 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 376)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 376)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_29) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 377)).add_operation (GALGAS_string (" &++ -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 377)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 377)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 377)) ;
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 378)).add_operation (GALGAS_string (" &-- -> @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 378)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 378)) ;
  }
  cEnumerator_unifiedTypeMapProxyAndParameterList enumerator_17818 (constinArgument_inAddAssignOperatorArguments, kEnumeration_up) ;
  const bool bool_30 = true ;
  if (enumerator_17818.hasCurrentObject () && bool_30) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 382)).add_operation (GALGAS_string (" +="), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 382)) ;
    while (enumerator_17818.hasCurrentObject () && bool_30) {
      var_s.plusAssign_operation(GALGAS_string (" !@").add_operation (enumerator_17818.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 384)) ;
      enumerator_17818.gotoNextObject () ;
    }
    var_s.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 386)) ;
  }
  const enumGalgasBool test_31 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 388)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 388)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_31) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 389)).add_operation (GALGAS_string (" .= @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 389)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 389)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 389)) ;
  }
  const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 391)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 391)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_32) {
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 392)).add_operation (GALGAS_string (" <  @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 392)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 392)).add_operation (GALGAS_string (" -> @bool\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 392)) ;
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 393)).add_operation (GALGAS_string (" <= @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 393)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 393)).add_operation (GALGAS_string (" -> @bool\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 393)) ;
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 394)).add_operation (GALGAS_string (" >  @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 394)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 394)).add_operation (GALGAS_string (" -> @bool\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 394)) ;
    var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 395)).add_operation (GALGAS_string (" >= @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 395)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 395)).add_operation (GALGAS_string (" -> @bool\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 395)) ;
  }
  var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 397)).add_operation (GALGAS_string (" =  @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 397)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 397)).add_operation (GALGAS_string (" -> @bool\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 397)) ;
  var_s.plusAssign_operation(GALGAS_string ("    @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 398)).add_operation (GALGAS_string (" != @"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 398)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 398)).add_operation (GALGAS_string (" -> @bool\n"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 398)) ;
  const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, constinArgument_inHandledOperatorFlags.operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 400)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 400)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_33) {
    var_s.plusAssign_operation(GALGAS_string (" - 'with' accessor\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 401)) ;
  }
  inCompiler->printMessage (var_s  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 410)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'analyzeErrorOrWarningInstruction'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeErrorOrWarningInstruction (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                               const GALGAS_semanticExpressionAST constinArgument_inLocationExpression,
                                               const GALGAS_semanticExpressionAST constinArgument_inMessageExpression,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_string constinArgument_inErrorOrWarningString,
                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                               GALGAS_semanticExpressionForGeneration & outArgument_outLocationExpression,
                                               GALGAS_semanticExpressionForGeneration & outArgument_outMessageExpression,
                                               GALGAS_bool & outArgument_outUseLocationReader,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLocationExpression.drop () ; // Release 'out' argument
  outArgument_outMessageExpression.drop () ; // Release 'out' argument
  outArgument_outUseLocationReader.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMap_2D_proxy var_locationType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location").getter_nowhere (SOURCE_FILE ("instruction-error.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 75)) ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), var_locationType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 79)) ;
  outArgument_outUseLocationReader = GALGAS_bool (kIsNotEqual, outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 86)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLocationType)) ;
  const enumGalgasBool test_0 = outArgument_outUseLocationReader.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_getterMap var_getterMap = outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 88)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 88)) ;
    const cMapElement_getterMap * objectArray_3438 = (const cMapElement_getterMap *) var_getterMap.readAccessForWithInstruction (GALGAS_string ("location")) ;
    if (NULL != objectArray_3438) {
        macroValidSharedObject (objectArray_3438, cMapElement_getterMap) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, objectArray_3438->mAttribute_mArgumentTypeList.getter_length (SOURCE_FILE ("instruction-error.galgas", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 92)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 92)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 92)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 92)).add_operation (GALGAS_string ("' and defines a 'location' getter with arguments; it should be either of the '@location' type, either defines a 'location' getter without argument that"
          " returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 92))  COMMA_SOURCE_FILE ("instruction-error.galgas", 91)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, objectArray_3438->mAttribute_mReturnedType.objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLocationType)).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 96)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 96)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 96)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 96)).add_operation (GALGAS_string ("' and defines a 'location' getter that returns an '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 96)).add_operation (objectArray_3438->mAttribute_mReturnedType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 97)).add_operation (GALGAS_string ("' object; it should be either of the '@location' type, either defines a 'location' getter without argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 97))  COMMA_SOURCE_FILE ("instruction-error.galgas", 95)) ;
        }
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 102)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 102)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 102)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 102)).add_operation (GALGAS_string ("' and does not define a 'location' getter; it should be either of the '@location' type, either defines a 'location' getter without argument that return"
        "s an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 102))  COMMA_SOURCE_FILE ("instruction-error.galgas", 101)) ;
    }
  }
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-error.galgas", 108)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 107)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 114)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 116)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 116)).add_operation (outArgument_outMessageExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 116)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 116)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 116))  COMMA_SOURCE_FILE ("instruction-error.galgas", 115)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Function 'checkModifierImplementationInSuperClasses'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_checkModifierImplementationInSuperClasses (const GALGAS_lstring & constinArgument_inModifierName,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inSuperClass,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inSuperClass.getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 250)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    GALGAS_methodQualifier var_qualifier ;
    GALGAS_methodKind joker_8766_3 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_8766_2 ; // Joker input parameter
    GALGAS_bool joker_8766_1 ; // Joker input parameter
    GALGAS_string joker_8781 ; // Joker input parameter
    constinArgument_inSuperClass.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 254)).method_searchKey (constinArgument_inModifierName, joker_8766_3, joker_8766_2, joker_8766_1, var_qualifier, joker_8781, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 254)) ;
    switch (var_qualifier.enumValue ()) {
    case GALGAS_methodQualifier::kNotBuilt:
      break ;
    case GALGAS_methodQualifier::kEnum_isAbstract:
      {
        result_outResult = GALGAS_string::makeEmptyString () ;
      }
      break ;
    case GALGAS_methodQualifier::kEnum_isBasic:
    case GALGAS_methodQualifier::kEnum_isBasicFinal:
    case GALGAS_methodQualifier::kEnum_isOverriding:
      {
        result_outResult = constinArgument_inSuperClass.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 259)) ;
      }
      break ;
    case GALGAS_methodQualifier::kEnum_isInherited:
    case GALGAS_methodQualifier::kEnum_isOverridingAbstract:
      {
        result_outResult = function_checkModifierImplementationInSuperClasses (constinArgument_inModifierName, constinArgument_inSuperClass.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 261)) ;
      }
      break ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkModifierImplementationInSuperClasses [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkModifierImplementationInSuperClasses (C_Compiler * inCompiler,
                                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                                          const GALGAS_location & /* §§ inErrorLocation */
                                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_unifiedTypeMap_2D_proxy operand1 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  return function_checkModifierImplementationInSuperClasses (operand0,
                                                             operand1,
                                                             inCompiler
                                                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkModifierImplementationInSuperClasses ("checkModifierImplementationInSuperClasses",
                                                                                           functionWithGenericHeader_checkModifierImplementationInSuperClasses,
                                                                                           & kTypeDescriptor_GALGAS_string,
                                                                                           2,
                                                                                           functionArgs_checkModifierImplementationInSuperClasses) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Enumeration\n"
    "  public : typedef enum {\n"
    "    kNotBuilt" ;
  GALGAS_uint index_842_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_842 (in_CONSTANT_5F_LIST, kEnumeration_up) ;
    while (enumerator_842.hasCurrentObject ()) {
      result << ",\n"
        "    kEnum_" ;
      result << enumerator_842.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue () ;
      index_842_.increment () ;
      enumerator_842.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } enumeration ;\n"
    "  \n"
    "//--------------------------------- Private data member\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;\n"
      "  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {\n"
      "    return mAssociatedValues.unsafePointer () ;\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "  private : enumeration mEnum ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }\n"
    "  public : inline enumeration enumValue (void) const { return mEnum ; }\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader2'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "//                                                                                                                     *\n"
      "//" ;
    result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).add_operation (GALGAS_string (" enum, associated values"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).stringValue () ;
    result << "*\n"
      "//                                                                                                                     *\n" ;
    GALGAS_uint index_519_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_519 (in_CONSTANT_5F_LIST, kEnumeration_up) ;
      while (enumerator_519.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_519.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "//---------------------------------------------------------------------------------------------------------------------*\n"
            "\n"
            "class cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_519.current_mConstantName (HERE).stringValue () ;
          result << " : public cEnumAssociatedValues {\n" ;
          GALGAS_uint index_855_idx (0) ;
          if (enumerator_519.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapProxyList enumerator_855 (enumerator_519.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
            while (enumerator_855.hasCurrentObject ()) {
              result << "  public : const GALGAS_" ;
              result << enumerator_855.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " mAssociatedValue" ;
              result << index_855_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " ;\n" ;
              index_855_idx.increment () ;
              enumerator_855.gotoNextObject () ;
            }
          }
          result << "\n"
            "//--- Constructor\n"
            "  public : cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_519.current_mConstantName (HERE).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1137_idx (0) ;
          if (enumerator_519.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapProxyList enumerator_1137 (enumerator_519.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
            while (enumerator_1137.hasCurrentObject ()) {
              result << "const GALGAS_" ;
              result << enumerator_1137.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              result << " & inAssociatedValue" ;
              result << index_1137_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              if (enumerator_1137.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_1137_idx.increment () ;
              enumerator_1137.gotoNextObject () ;
            }
          }
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n"
            "\n"
            "  public : virtual void description (" ;
          columnMarker = result.currentColumn () ;
          result << "C_String & ioString,\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "const int32_t inIndentation) const ;\n"
            "  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;\n"
            "\n"
            "  public : virtual ~ cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_519.current_mConstantName (HERE).stringValue () ;
          result << " (void) {}\n"
            "} ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
        }
        index_519_.increment () ;
        enumerator_519.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    cEnumerator_enumConstantListForGeneration enumerator_27 (in_CONSTANT_5F_LIST, kEnumeration_up) ;
    while (enumerator_27.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_27.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
          cEnumerator_unifiedTypeMapProxyList enumerator_389 (enumerator_27.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
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
          cEnumerator_unifiedTypeMapProxyList enumerator_626 (enumerator_27.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
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
          "//---------------------------------------------------------------------------------------------------------------------*\n"
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
          cEnumerator_unifiedTypeMapProxyList enumerator_1128 (enumerator_27.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
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
          "//---------------------------------------------------------------------------------------------------------------------*\n"
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
          cEnumerator_unifiedTypeMapProxyList enumerator_1857 (enumerator_27.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    cEnumerator_enumConstantListForGeneration enumerator_2383 (in_CONSTANT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2383.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
          cEnumerator_unifiedTypeMapProxyList enumerator_2768 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
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
          cEnumerator_unifiedTypeMapProxyList enumerator_3173 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
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
          cEnumerator_unifiedTypeMapProxyList enumerator_3529 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
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
    cEnumerator_enumConstantListForGeneration enumerator_3796 (in_CONSTANT_5F_LIST, kEnumeration_up) ;
    while (enumerator_3796.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_3796.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::method_" ;
        result << enumerator_3796.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4120_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_4120 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
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
          cEnumerator_unifiedTypeMapProxyList enumerator_4421 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
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
          cEnumerator_unifiedTypeMapProxyList enumerator_4919 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static const char * gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [" ;
  result << in_CONSTANT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 119)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 119)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 119)).stringValue () ;
  result << "] = {\n"
    "  \"(not built)\"" ;
  GALGAS_uint index_5323_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5323 (in_CONSTANT_5F_LIST, kEnumeration_up) ;
    while (enumerator_5323.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << enumerator_5323.current_mConstantName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 122)).stringValue () ;
      index_5323_.increment () ;
      enumerator_5323.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  GALGAS_uint index_5405_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5405 (in_CONSTANT_5F_LIST, kEnumeration_up) ;
    while (enumerator_5405.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_is" ;
      result << enumerator_5405.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 130)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 130)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return GALGAS_bool (kNotBuilt != mEnum, kEnum_" ;
      result << enumerator_5405.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 131)).stringValue () ;
      result << " == mEnum) ;\n"
        "}\n"
        "\n" ;
      index_5405_.increment () ;
      enumerator_5405.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t " ;
  const enumGalgasBool test_5 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "inIndentation" ;
  }else if (kBoolFalse == test_5) {
    result << "/* inIndentation */" ;
  }
  result << ") const {\n"
    "  ioString << \"<enum @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ": \" << gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [mEnum] ;\n" ;
  const enumGalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "  mAssociatedValues.description (ioString, inIndentation) ;\n" ;
  }else if (kBoolFalse == test_6) {
  }
  result << "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  const enumGalgasBool test_7 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;\n" ;
  }else if (kBoolFalse == test_7) {
    result << "      result = kOperandEqual ;\n" ;
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

