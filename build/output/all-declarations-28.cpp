#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-28.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction?&??????static?const!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (const GALGAS_string constinArgument_inFunctionCppRepresentationName,
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
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 385)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_16148 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_16148.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16351 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_16351.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16351.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 391)) ;
    var_unusedVariableCppNameSet_16148.addAssign_operation (enumerator_16351.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 392)) ;
    enumerator_16351.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_16535 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_16576 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_16576.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 397)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_16636 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_16636.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_16636.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_16535, var_unusedVariableCppNameSet_16148, GALGAS_bool (false), var_routineBody_16576, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 399)) ;
    enumerator_16636.gotoNextObject () ;
  }
  {
  var_routineBody_16576.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 407)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsStatic.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 410)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 413)) ;
  GALGAS_uint var_colRef_17159 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 414)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_17260 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_17260.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_17260.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17260.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)) ;
      }
    }
    if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17260.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_16148.getter_hasKey (enumerator_17260.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 422)).boolEnum () ;
      if (kBoolTrue == test_2) {
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_17260.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 425)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 427)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17159, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 428)) ;
    }
    enumerator_17260.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 431)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_16148.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 432)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 432)).boolEnum () ;
    if (kBoolTrue == test_3) {
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 435)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 437)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17159, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 438)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 439)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsConst.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 441)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 443)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 445)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 445)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 446)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 445)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_16576, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 448)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 450)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 453)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetter?&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (const GALGAS_string constinArgument_inFunctionCppRepresentationName,
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
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 467)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_19539 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_19539.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 470))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 470)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_19742 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_19742.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19742.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 473)) ;
    var_unusedVariableCppNameSet_19539.addAssign_operation (enumerator_19742.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)) ;
    enumerator_19742.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_19926 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_19967 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_19967.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 479)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_20027 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_20027.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_20027.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_19926, var_unusedVariableCppNameSet_19539, GALGAS_bool (false), var_routineBody_19967, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 481)) ;
    enumerator_20027.gotoNextObject () ;
  }
  {
  var_routineBody_19967.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 489)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 492)) ;
  GALGAS_uint var_colRef_20489 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 493)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_20590 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_20590.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_20590.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)) ;
      }
    }
    if (kBoolFalse == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)) ;
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_unusedVariableCppNameSet_19539.getter_hasKey (enumerator_20590.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 501)).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" /* ").add_operation (enumerator_20590.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 502)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 502)) ;
      }
    }
    if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_20590.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 504)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 506)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20489, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 507)) ;
    }
    enumerator_20590.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_unusedVariableCppNameSet_19539.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 511)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 511)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 516)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20489, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 517)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS) const {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 518)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 521)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_19967, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 523)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 525)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 526)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 526)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 528)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter???&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (const GALGAS_string constinArgument_inClassName,
                                                                  const GALGAS_string constinArgument_inBaseClassName,
                                                                  const GALGAS_string constinArgument_inMethodName,
                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                  const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                  GALGAS_string & outArgument_outGeneratedCode,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet_22591 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_22591.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 547))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 547)) ;
  var_unusedVariableCppNameSet_22591.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 548)) ;
  cEnumerator_formalParameterListForGeneration enumerator_22726 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_22726.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_22591.addAssign_operation (enumerator_22726.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 550)) ;
    enumerator_22726.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_22870 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_22903 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_22903.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 555)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_22963 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_22963.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_22963.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_22870, var_unusedVariableCppNameSet_22591, GALGAS_bool (false), var_routineBody_22903, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 557)) ;
    enumerator_22963.gotoNextObject () ;
  }
  {
  var_routineBody_22903.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)) ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void extensionSetter_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)) ;
  GALGAS_uint var_colRef_23432 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 568)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 570)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 570)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)) ;
  }
  GALGAS_bool var_currentObjectIsUnused_23697 = var_unusedVariableCppNameSet_22591.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_currentObjectIsUnused_23697.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 576)) ;
    }
  }
  if (kBoolFalse == test_1) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 578)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_23949 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_23949.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23432, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 583)) ;
    }
    switch (enumerator_23949.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23949.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23949.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23949.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23949.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_22591.getter_hasKey (enumerator_23949.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 594)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_23949.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_23949.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 597)) ;
    }
    enumerator_23949.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 601)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23432, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 602)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 603)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_22591.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 604)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 604)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 605)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 605)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 607)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 609)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23432, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 610)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 611)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_currentObjectIsUnused_23697.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 614)).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (ComparisonKind::equal, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 616)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 616)) ;
        }
      }
      if (kBoolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)).add_operation (GALGAS_string (" * object = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)).add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 620)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 620)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_22903, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 622)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 624)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethodNew?&???!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (const GALGAS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                 const GALGAS_string constinArgument_inMethodName,
                                                                 const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                 const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                 GALGAS_string & outArgument_outGeneratedCode,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_string var_className_26581 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 637)).readProperty_typeName ().readProperty_string () ;
  GALGAS_stringset var_unusedVariableCppNameSet_26685 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_26685.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 640))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 640)) ;
  var_unusedVariableCppNameSet_26685.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 641)) ;
  cEnumerator_formalParameterListForGeneration enumerator_26820 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_26820.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_26685.addAssign_operation (enumerator_26820.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 643)) ;
    enumerator_26820.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_26964 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_27005 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_27005.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 648)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_27065 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_27065.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_27065.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_26964, var_unusedVariableCppNameSet_26685, GALGAS_bool (false), var_routineBody_27005, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 650)) ;
    enumerator_27065.gotoNextObject () ;
  }
  {
  var_routineBody_27005.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 658)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_27405 = constinArgument_inReceiverType ;
  GALGAS_bool var_searching_27443 = GALGAS_bool (true) ;
  if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticGeneration.galgas", 662)).isValid ()) {
    uint32_t variant_27462 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticGeneration.galgas", 662)).uintValue () ;
    bool loop_27462 = true ;
    while (loop_27462) {
      loop_27462 = var_searching_27443.isValid () ;
      if (loop_27462) {
        loop_27462 = var_searching_27443.boolValue () ;
      }
      if (loop_27462 && (0 == variant_27462)) {
        loop_27462 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 662)) ;
      }
      if (loop_27462) {
        variant_27462 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = extensionGetter_definition (var_baseType_27405, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 663)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticGeneration.galgas", 663)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 663)).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = extensionGetter_definition (extensionGetter_definition (var_baseType_27405, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)).readProperty_instanceMethodMap ().getter_hasKey (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType_27405 = extensionGetter_definition (var_baseType_27405, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 665)).readProperty_superType () ;
              }
            }
            if (kBoolFalse == test_1) {
              var_searching_27443 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          var_searching_27443 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (var_baseType_27405, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673)).add_operation (constinArgument_inMethodName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 674)) ;
  cEnumerator_formalParameterListForGeneration enumerator_28030 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_28030.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_28030.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)) ;
    enumerator_28030.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("void cPtr_").add_operation (var_className_26581.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 679)).add_operation (GALGAS_string ("::method_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 679)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 679)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 679)) ;
  GALGAS_uint var_colRef_28296 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 680)) ;
  cEnumerator_formalParameterListForGeneration enumerator_28401 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_28401.hasCurrentObject ()) {
    switch (enumerator_28401.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28401.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28401.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 687)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 687)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 687)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28401.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 689)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 689)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 689)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 689)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28401.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_26685.getter_hasKey (enumerator_28401.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 693)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_28401.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 694)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 694)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 694)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_28401.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 696)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 698)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_28296, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 699)) ;
    }
    enumerator_28401.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_26685.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 703)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 703)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 706)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 706)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 708)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_28296, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 709)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 710)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 711)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_27005, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 713)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 715)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- File '/galgas-predefined-types.ggs'

const char * gWrapperFileContent_0_typeGenerationTemplate = 
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
                                                                                  const GALGAS_initializerMap & in_INITIALIZER_5F_MAP,
                                                                                  const GALGAS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                                  const GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                  const GALGAS_setterMap & in_MODIFIER_5F_MAP,
                                                                                  const GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_optionalMethodMap & in_OPTIONAL_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_subscriptMap & in_READ_5F_SUBSCRIPT_5F_MAP,
                                                                                  const GALGAS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                  const GALGAS_typeFeatures & in_SUPPORTED_5F_OPERATORS,
                                                                                  const GALGAS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                                  const GALGAS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                                  const GALGAS_bool & in_SUPPORT_5F_COLLECTION_5F_VALUE
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//-- Start of type generic part\n\n//--------------------------------- Initializers\n") ;
  GALGAS_uint index_133_ (0) ;
  if (in_INITIALIZER_5F_MAP.isValid ()) {
    cEnumerator_initializerMap enumerator_133 (in_INITIALIZER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_133.hasCurrentObject ()) {
      result.appendString ("  public: static GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" ") ;
      result.appendString (enumerator_133.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 5)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_323_IDX (0) ;
      if (enumerator_133.current_mArgumentTypeList (HERE).isValid ()) {
        cEnumerator_functionSignature enumerator_323 (enumerator_133.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
        while (enumerator_323.hasCurrentObject ()) {
          const enumGalgasBool test_0 = enumerator_323.current_isConstant (HERE).boolEnum () ;
          switch (test_0) {
          case kBoolTrue : {
            result.appendString ("const ") ;
            } break ;
          case kBoolFalse : {
            } break ;
          default :
            break ;
          }
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_323.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 8)).stringValue ()) ;
          result.appendString (" & inOperand") ;
          result.appendString (index_323_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 8)).stringValue ()) ;
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          index_323_IDX.increment () ;
          enumerator_323.gotoNextObject () ;
        }
      }
      result.appendString ("Compiler * inCompiler\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) ;\n") ;
      index_133_.increment () ;
      enumerator_133.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------- Object cloning\n  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;\n\n//--------------------------------- Object extraction\n  public: static GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" extractObject (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_object & inObject,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::greaterThan, in_CLASS_5F_FUNC_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 22)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- GALGAS class functions\n") ;
    GALGAS_uint index_1093_ (0) ;
    if (in_CLASS_5F_FUNC_5F_MAP.isValid ()) {
      cEnumerator_classFunctionMap enumerator_1093 (in_CLASS_5F_FUNC_5F_MAP, EnumerationOrder::up) ;
      while (enumerator_1093.hasCurrentObject ()) {
        result.appendString ("  public: static class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1093.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 25)).stringValue ()) ;
        result.appendString (" class_func_") ;
        result.appendString (enumerator_1093.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 25)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_1332_IDX (0) ;
        if (enumerator_1093.current_mArgumentTypeList (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_1332 (enumerator_1093.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_1332.hasCurrentObject ()) {
            result.appendString ("const class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1332.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 27)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_1332_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 27)).stringValue ()) ;
            if (enumerator_1332.hasNextObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_1332_IDX.increment () ;
            enumerator_1332.gotoNextObject () ;
          }
        }
        const enumGalgasBool test_2 = enumerator_1093.current_mHasCompilerArgument (HERE).operator_and (GALGAS_bool (ComparisonKind::greaterThan, enumerator_1093.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 30)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 30)).boolEnum () ;
        switch (test_2) {
        case kBoolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("class Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_3 = enumerator_1093.current_mHasCompilerArgument (HERE).boolEnum () ;
          switch (test_3) {
          case kBoolTrue : {
            result.appendString ("Compiler * inCompiler\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case kBoolFalse : {
            const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_1093.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 36)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            switch (test_4) {
            case kBoolTrue : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
              } break ;
            case kBoolFalse : {
              result.appendString ("LOCATION_ARGS) ;\n\n") ;
              } break ;
            default :
              break ;
            }
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        index_1093_.increment () ;
        enumerator_1093.gotoNextObject () ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_5 = in_SUPPORTED_5F_OPERATORS.getter_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 44)).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- Handle copy\n  public: GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;\n  public: GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & operator = (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_6 = in_SUPPORTED_5F_OPERATORS.getter_infixShiftOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 50)).boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- << and >> shift operators\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_uint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_bigint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_uint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_bigint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_7 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 66)).boolEnum () ;
  switch (test_7) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- += operator (with expression)\n  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                                       class Compiler * inCompiler\n                                                       COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_8 = in_SUPPORTED_5F_OPERATORS.getter_minusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 73)).boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- -= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                                        class Compiler * inCompiler\n                                                        COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_9 = in_SUPPORTED_5F_OPERATORS.getter_mulEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 80)).boolEnum () ;
  switch (test_9) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- *= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                                      class Compiler * inCompiler\n                                                      COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_10 = in_SUPPORTED_5F_OPERATORS.getter_divEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 87)).boolEnum () ;
  switch (test_10) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- /= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                                      class Compiler * inCompiler\n                                                      COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (ComparisonKind::greaterThan, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 94)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_11) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- += operator (with list of field expressions)\n  public: VIRTUAL_IN_DEBUG void addAssign_operation (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_5033_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_functionSignature enumerator_5033 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_5033.hasCurrentObject ()) {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5033.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)).stringValue ()) ;
        result.appendString (" & inOperand") ;
        result.appendString (index_5033_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)).stringValue ()) ;
        if (enumerator_5033.hasNextObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_5033_IDX.increment () ;
        enumerator_5033.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_12 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 101)).boolEnum () ;
    switch (test_12) {
    case kBoolTrue : {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler") ;
      } break ;
    case kBoolFalse : {
      } break ;
    default :
      break ;
    }
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_13 = in_SUPPORTED_5F_OPERATORS.getter_infixAndOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 108)).boolEnum () ;
  switch (test_13) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- & operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_and (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_14 = in_SUPPORTED_5F_OPERATORS.getter_infixOrOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 114)).boolEnum () ;
  switch (test_14) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- | operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_or (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_15 = in_SUPPORTED_5F_OPERATORS.getter_infixXorOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 120)).boolEnum () ;
  switch (test_15) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- ^ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_xor (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_16 = in_SUPPORTED_5F_OPERATORS.getter_prefixNotOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)).boolEnum () ;
  switch (test_16) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- not operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_not (LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_17 = in_SUPPORTED_5F_OPERATORS.getter_prefixTildeOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 131)).boolEnum () ;
  switch (test_17) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- ~ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_tilde (LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_18 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 136)).boolEnum () ;
  switch (test_18) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- + operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" add_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_19 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 143)).boolEnum () ;
  switch (test_19) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- &+ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" add_operation_no_ovf (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_20 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 148)).boolEnum () ;
  switch (test_20) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- &- operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" substract_operation_no_ovf (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_21 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 153)).boolEnum () ;
  switch (test_21) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- - operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" substract_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_22 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 160)).boolEnum () ;
  switch (test_22) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- * operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" multiply_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_23 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 167)).boolEnum () ;
  switch (test_23) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- &* operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" multiply_operation_no_ovf (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_24 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 172)).boolEnum () ;
  switch (test_24) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- / operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" divide_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_25 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 179)).boolEnum () ;
  switch (test_25) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- &/ operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" divide_operation_no_ovf (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_26 = in_SUPPORTED_5F_OPERATORS.getter_infixModOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 184)).boolEnum () ;
  switch (test_26) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- mod operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" modulo_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_27 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 191)).boolEnum () ;
  switch (test_27) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- prefix - operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_unary_minus (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_28 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 197)).boolEnum () ;
  switch (test_28) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- prefix &- operator\n  public: VIRTUAL_IN_DEBUG GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_unary_minus_no_ovf (void) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_29 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 202)).boolEnum () ;
  switch (test_29) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- ++, -- operators\n  public: VIRTUAL_IN_DEBUG void increment_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: VIRTUAL_IN_DEBUG void decrement_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_30 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 209)).boolEnum () ;
  switch (test_30) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- &++, &-- operators\n  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;\n\n  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_31 = in_SUPPORTED_5F_OPERATORS.getter_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 214)).boolEnum () ;
  switch (test_31) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- Implementation of getter 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_32 = extensionGetter_generateCppObjectComparison (in_SUPPORTED_5F_OPERATORS, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 220)).operator_and (in_SUPPORTED_5F_OPERATORS.getter_doNotGenererateObjectCompare (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 220)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 220)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 220)).boolEnum () ;
  switch (test_32) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- Comparison\n  public: ComparisonResult objectCompare (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------- Setters\n") ;
  GALGAS_uint index_10878_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    cEnumerator_setterMap enumerator_10878 (in_MODIFIER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_10878.hasCurrentObject ()) {
      const enumGalgasBool test_33 = GALGAS_bool (ComparisonKind::equal, enumerator_10878.current_mKind (HERE).objectCompare (GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 230)))).boolEnum () ;
      switch (test_33) {
      case kBoolTrue : {
        const enumGalgasBool test_34 = GALGAS_bool (ComparisonKind::equal, enumerator_10878.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_10878.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)))).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_10878.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_10878.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).boolEnum () ;
        switch (test_34) {
        case kBoolTrue : {
          result.appendString ("  public: VIRTUAL_IN_DEBUG void setter_") ;
          result.appendString (enumerator_10878.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 232)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_11326_IDX (0) ;
          if (enumerator_10878.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_11326 (enumerator_10878.current_mParameterList (HERE), EnumerationOrder::up) ;
            while (enumerator_11326.hasCurrentObject ()) {
              const enumGalgasBool test_35 = GALGAS_bool (ComparisonKind::equal, enumerator_11326.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 234)))).boolEnum () ;
              switch (test_35) {
              case kBoolTrue : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_11326.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_11326_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                const enumGalgasBool test_36 = GALGAS_bool (ComparisonKind::equal, enumerator_11326.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 236)))).boolEnum () ;
                switch (test_36) {
                case kBoolTrue : {
                  result.appendString ("class GALGAS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_11326.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 237)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_11326_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 237)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_37 = GALGAS_bool (ComparisonKind::equal, enumerator_11326.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 238)))).boolEnum () ;
                  switch (test_37) {
                  case kBoolTrue : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_11326.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 239)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_11326_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 239)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_11326.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 241)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_11326_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 241)).stringValue ()) ;
                    } break ;
                  default :
                    break ;
                  }
                  } break ;
                default :
                  break ;
                }
                } break ;
              default :
                break ;
              }
              if (enumerator_11326.hasNextObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_11326_IDX.increment () ;
              enumerator_11326.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_38 = GALGAS_bool (ComparisonKind::equal, enumerator_10878.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 245)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_38) {
          case kBoolTrue : {
            const enumGalgasBool test_39 = enumerator_10878.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_39) {
            case kBoolTrue : {
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case kBoolFalse : {
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("LOCATION_ARGS") ;
              } break ;
            default :
              break ;
            }
            } break ;
          case kBoolFalse : {
            const enumGalgasBool test_40 = enumerator_10878.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_40) {
            case kBoolTrue : {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case kBoolFalse : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            default :
              break ;
            }
            } break ;
          default :
            break ;
          }
          result.appendString (") ;\n\n") ;
          } break ;
        case kBoolFalse : {
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
      index_10878_.increment () ;
      enumerator_10878.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------- Instance Methods\n") ;
  GALGAS_uint index_12721_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_12721 (in_INSTANCE_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_12721.hasCurrentObject ()) {
      const enumGalgasBool test_41 = GALGAS_bool (ComparisonKind::equal, enumerator_12721.current_mKind (HERE).objectCompare (GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 268)))).boolEnum () ;
      switch (test_41) {
      case kBoolTrue : {
        const enumGalgasBool test_42 = GALGAS_bool (ComparisonKind::equal, enumerator_12721.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_12721.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)))).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_12721.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_12721.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).boolEnum () ;
        switch (test_42) {
        case kBoolTrue : {
          result.appendString ("  public: VIRTUAL_IN_DEBUG void method_") ;
          result.appendString (enumerator_12721.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 270)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_13169_IDX (0) ;
          if (enumerator_12721.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_13169 (enumerator_12721.current_mParameterList (HERE), EnumerationOrder::up) ;
            while (enumerator_13169.hasCurrentObject ()) {
              const enumGalgasBool test_43 = GALGAS_bool (ComparisonKind::equal, enumerator_13169.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 272)))).boolEnum () ;
              switch (test_43) {
              case kBoolTrue : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_13169.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_13169_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                const enumGalgasBool test_44 = GALGAS_bool (ComparisonKind::equal, enumerator_13169.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 274)))).boolEnum () ;
                switch (test_44) {
                case kBoolTrue : {
                  result.appendString ("class GALGAS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_13169.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 275)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_13169_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 275)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_45 = GALGAS_bool (ComparisonKind::equal, enumerator_13169.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 276)))).boolEnum () ;
                  switch (test_45) {
                  case kBoolTrue : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_13169.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 277)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_13169_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 277)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_13169.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 279)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_13169_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 279)).stringValue ()) ;
                    } break ;
                  default :
                    break ;
                  }
                  } break ;
                default :
                  break ;
                }
                } break ;
              default :
                break ;
              }
              if (enumerator_13169.hasNextObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_13169_IDX.increment () ;
              enumerator_13169.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_46 = GALGAS_bool (ComparisonKind::equal, enumerator_12721.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 283)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_46) {
          case kBoolTrue : {
            const enumGalgasBool test_47 = enumerator_12721.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_47) {
            case kBoolTrue : {
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case kBoolFalse : {
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("LOCATION_ARGS") ;
              } break ;
            default :
              break ;
            }
            } break ;
          case kBoolFalse : {
            const enumGalgasBool test_48 = enumerator_12721.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_48) {
            case kBoolTrue : {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case kBoolFalse : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            default :
              break ;
            }
            } break ;
          default :
            break ;
          }
          result.appendString (") const ;\n\n") ;
          } break ;
        case kBoolFalse : {
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
      index_12721_.increment () ;
      enumerator_12721.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------- Class Methods\n") ;
  GALGAS_uint index_14511_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_classMethodMap enumerator_14511 (in_CLASS_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_14511.hasCurrentObject ()) {
      result.appendString ("  public: static void class_method_") ;
      result.appendString (enumerator_14511.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 305)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_14712_IDX (0) ;
      if (enumerator_14511.current_mParameterList (HERE).isValid ()) {
        cEnumerator_formalParameterSignature enumerator_14712 (enumerator_14511.current_mParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_14712.hasCurrentObject ()) {
          const enumGalgasBool test_49 = GALGAS_bool (ComparisonKind::equal, enumerator_14712.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 307)))).boolEnum () ;
          switch (test_49) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_14712.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 308)).stringValue ()) ;
            result.appendString (" constinArgument") ;
            result.appendString (index_14712_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 308)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            const enumGalgasBool test_50 = GALGAS_bool (ComparisonKind::equal, enumerator_14712.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 309)))).boolEnum () ;
            switch (test_50) {
            case kBoolTrue : {
              result.appendString ("class GALGAS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_14712.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 310)).stringValue ()) ;
              result.appendString (" & ioArgument") ;
              result.appendString (index_14712_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 310)).stringValue ()) ;
              } break ;
            case kBoolFalse : {
              const enumGalgasBool test_51 = GALGAS_bool (ComparisonKind::equal, enumerator_14712.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 311)))).boolEnum () ;
              switch (test_51) {
              case kBoolTrue : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_14712.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 312)).stringValue ()) ;
                result.appendString (" & outArgument") ;
                result.appendString (index_14712_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 312)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_14712.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 314)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_14712_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 314)).stringValue ()) ;
                } break ;
              default :
                break ;
              }
              } break ;
            default :
              break ;
            }
            } break ;
          default :
            break ;
          }
          if (enumerator_14712.hasNextObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_14712_IDX.increment () ;
          enumerator_14712.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_52 = GALGAS_bool (ComparisonKind::equal, enumerator_14511.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 318)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_52) {
      case kBoolTrue : {
        const enumGalgasBool test_53 = enumerator_14511.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_53) {
        case kBoolTrue : {
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case kBoolFalse : {
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("LOCATION_ARGS") ;
          } break ;
        default :
          break ;
        }
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_54 = enumerator_14511.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_54) {
        case kBoolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      result.appendString (") ;\n\n") ;
      index_14511_.increment () ;
      enumerator_14511.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------- Getters\n") ;
  GALGAS_uint index_15964_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_15964 (in_GETTER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_15964.hasCurrentObject ()) {
      const enumGalgasBool test_55 = GALGAS_bool (ComparisonKind::equal, enumerator_15964.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      switch (test_55) {
      case kBoolTrue : {
        switch (enumerator_15964.current_mKind (HERE).enumValue ()) {
        case GALGAS_methodKind::kNotBuilt :
          break ;
        case GALGAS_methodKind::kEnum_definedAsExtension :
          {
          }
          break ;
        case GALGAS_methodKind::kEnum_definedAsMember :
          {
            const enumGalgasBool test_56 = GALGAS_bool (ComparisonKind::equal, enumerator_15964.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 343)))).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_15964.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 343)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 343)).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_15964.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 343)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 343)).boolEnum () ;
            switch (test_56) {
            case kBoolTrue : {
              result.appendString ("  public: VIRTUAL_IN_DEBUG class GALGAS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_15964.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 344)).stringValue ()) ;
              result.appendString (" getter_") ;
              result.appendString (enumerator_15964.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 344)).stringValue ()) ;
              result.appendString (" (") ;
              columnMarker = result.currentColumn () ;
              GALGAS_uint index_16490_IDX (0) ;
              if (enumerator_15964.current_mArgumentTypeList (HERE).isValid ()) {
                cEnumerator_functionSignature enumerator_16490 (enumerator_15964.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
                while (enumerator_16490.hasCurrentObject ()) {
                  result.appendString ("const class GALGAS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_16490.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 346)).stringValue ()) ;
                  result.appendString (" & constinOperand") ;
                  result.appendString (index_16490_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 346)).stringValue ()) ;
                  if (enumerator_16490.hasNextObject ()) {
                    result.appendString (",\n") ;
                    result.appendSpacesUntilColumn (columnMarker) ;
                  }
                  index_16490_IDX.increment () ;
                  enumerator_16490.gotoNextObject () ;
                }
              }
              const enumGalgasBool test_57 = GALGAS_bool (ComparisonKind::equal, enumerator_15964.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 349)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
              switch (test_57) {
              case kBoolTrue : {
                const enumGalgasBool test_58 = enumerator_15964.current_mHasCompilerArgument (HERE).boolEnum () ;
                switch (test_58) {
                case kBoolTrue : {
                  result.appendString ("Compiler * inCompiler\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                case kBoolFalse : {
                  result.appendString ("LOCATION_ARGS") ;
                  } break ;
                default :
                  break ;
                }
                } break ;
              case kBoolFalse : {
                const enumGalgasBool test_59 = enumerator_15964.current_mHasCompilerArgument (HERE).boolEnum () ;
                switch (test_59) {
                case kBoolTrue : {
                  result.appendString (",\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("Compiler * inCompiler\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                case kBoolFalse : {
                  result.appendString ("\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                default :
                  break ;
                }
                } break ;
              default :
                break ;
              }
              result.appendString (") const ;\n\n") ;
              } break ;
            case kBoolFalse : {
              } break ;
            default :
              break ;
            }
          }
          break ;
        }
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_15964_.increment () ;
      enumerator_15964.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------- Read subscripts\n") ;
  GALGAS_uint index_17211_ (0) ;
  if (in_READ_5F_SUBSCRIPT_5F_MAP.isValid ()) {
    cEnumerator_subscriptMap enumerator_17211 (in_READ_5F_SUBSCRIPT_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_17211.hasCurrentObject ()) {
      result.appendString ("  public: VIRTUAL_IN_DEBUG class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_17211.current_valueType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 372)).stringValue ()) ;
      result.appendString (" readSubscript_") ;
      result.appendString (enumerator_17211.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_17439_IDX (0) ;
      if (enumerator_17211.current_argumentTypeList (HERE).isValid ()) {
        cEnumerator_functionSignature enumerator_17439 (enumerator_17211.current_argumentTypeList (HERE), EnumerationOrder::up) ;
        while (enumerator_17439.hasCurrentObject ()) {
          result.appendString ("const class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_17439.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 375)).stringValue ()) ;
          result.appendString (" & in") ;
          result.appendString (index_17439_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 375)).stringValue ()) ;
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          index_17439_IDX.increment () ;
          enumerator_17439.gotoNextObject () ;
        }
      }
      result.appendString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
      index_17211_.increment () ;
      enumerator_17211.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------- Optional Methods\n") ;
  GALGAS_uint index_17731_ (0) ;
  if (in_OPTIONAL_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_optionalMethodMap enumerator_17731 (in_OPTIONAL_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_17731.hasCurrentObject ()) {
      result.appendString ("  public: VIRTUAL_IN_DEBUG bool optional_") ;
      result.appendString (enumerator_17731.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 383)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_17936_IDX (0) ;
      if (enumerator_17731.current_mArgumentTypeList (HERE).isValid ()) {
        cEnumerator_optionalMethodSignature enumerator_17936 (enumerator_17731.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
        while (enumerator_17936.hasCurrentObject ()) {
          const enumGalgasBool test_60 = enumerator_17936.current_mInputArgument (HERE).boolEnum () ;
          switch (test_60) {
          case kBoolTrue : {
            result.appendString ("const class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_17936.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 387)).stringValue ()) ;
            result.appendString (" & constinOperand") ;
            result.appendString (index_17936_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 387)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_17936.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 389)).stringValue ()) ;
            result.appendString (" & outOperand") ;
            result.appendString (index_17936_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 389)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          if (enumerator_17936.hasNextObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_17936_IDX.increment () ;
          enumerator_17936.gotoNextObject () ;
        }
      }
      result.appendString (") const ;\n\n") ;
      index_17731_.increment () ;
      enumerator_17731.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------- Introspection\n  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;\n") ;
  const enumGalgasBool test_61 = in_SUPPORTED_5F_OPERATORS.getter_generateEnumerationHelperMethods (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 401)).boolEnum () ;
  switch (test_61) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- Enumeration helper methods\n  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_62 = in_SUPPORTED_5F_OPERATORS.getter_supportWithAccessor (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 407)).boolEnum () ;
  switch (test_62) {
  case kBoolTrue : {
    result.appendString ("  public: VIRTUAL_IN_DEBUG cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * readWriteAccessForWithInstruction (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_string & inKey\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_63 = in_SUPPORT_5F_COLLECTION_5F_VALUE.boolEnum () ;
  switch (test_63) {
  case kBoolTrue : {
    result.appendString ("\n//--- Append element\n  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 415)).stringValue ()) ;
    result.appendString (" & inValue,\n                                              Compiler * /* inCompiler */\n                                              COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_64 = GALGAS_bool (ComparisonKind::greaterThan, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 420)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_64) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- Friend\n  friend class cEnumerator_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString (" \n} ; // End of GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" class\n\n") ;
  const enumGalgasBool test_65 = GALGAS_bool (ComparisonKind::greaterThan, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 427)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_65) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Enumerator declaration                                                                      \n//--------------------------------------------------------------------------------------------------\n\nclass cEnumerator_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" : public cGenericAbstractEnumerator {\n  public: cEnumerator_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inEnumeratedObject,\n     ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const EnumerationOrder inOrder) ;\n\n//--- Current element access\n") ;
    GALGAS_uint index_20125_ (0) ;
    if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
      cEnumerator_enumerationDescriptorList enumerator_20125 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_20125.hasCurrentObject ()) {
        result.appendString ("  public: class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_20125.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 438)).stringValue ()) ;
        result.appendString (" current_") ;
        result.appendString (enumerator_20125.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 438)).stringValue ()) ;
        result.appendString (" (LOCATION_ARGS) const ;\n") ;
        index_20125_.increment () ;
        enumerator_20125.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_66 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 440)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 440)).boolEnum () ;
    switch (test_66) {
    case kBoolTrue : {
      result.appendString ("//--- Current element access\n  public: class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 442)).stringValue ()) ;
      result.appendString (" current (LOCATION_ARGS) const ;\n") ;
      } break ;
    case kBoolFalse : {
      } break ;
    default :
      break ;
    }
    result.appendString ("} ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nextern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForPackage'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (Compiler * inCompiler,
                                                                                     const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                     const GALGAS_string & /* in_TYPE_5F_IDENTIFIER */,
                                                                                     const GALGAS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                                     const GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//-- Start of package generic part\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_CLASS_5F_FUNC_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 4)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- GALGAS class getters\n") ;
    GALGAS_uint index_220_ (0) ;
    if (in_CLASS_5F_FUNC_5F_MAP.isValid ()) {
      cEnumerator_classFunctionMap enumerator_220 (in_CLASS_5F_FUNC_5F_MAP, EnumerationOrder::up) ;
      while (enumerator_220.hasCurrentObject ()) {
        result.appendString ("  public: static class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_220.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 7)).stringValue ()) ;
        result.appendString (" class_func_") ;
        result.appendString (enumerator_220.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 7)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_459_IDX (0) ;
        if (enumerator_220.current_mArgumentTypeList (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_459 (enumerator_220.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_459.hasCurrentObject ()) {
            result.appendString ("const class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_459.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 9)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_459_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 9)).stringValue ()) ;
            if (enumerator_459.hasNextObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_459_IDX.increment () ;
            enumerator_459.gotoNextObject () ;
          }
        }
        const enumGalgasBool test_1 = enumerator_220.current_mHasCompilerArgument (HERE).operator_and (GALGAS_bool (ComparisonKind::greaterThan, enumerator_220.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 12)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 12)).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("class Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = enumerator_220.current_mHasCompilerArgument (HERE).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("Compiler * inCompiler\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case kBoolFalse : {
            const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_220.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 18)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            switch (test_3) {
            case kBoolTrue : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
              } break ;
            case kBoolFalse : {
              result.appendString ("LOCATION_ARGS) ;\n\n") ;
              } break ;
            default :
              break ;
            }
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        index_220_.increment () ;
        enumerator_220.gotoNextObject () ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------- Class Methods\n") ;
  GALGAS_uint index_1115_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_classMethodMap enumerator_1115 (in_CLASS_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1115.hasCurrentObject ()) {
      result.appendString ("  public: static void class_method_") ;
      result.appendString (enumerator_1115.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_1316_IDX (0) ;
      if (enumerator_1115.current_mParameterList (HERE).isValid ()) {
        cEnumerator_formalParameterSignature enumerator_1316 (enumerator_1115.current_mParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_1316.hasCurrentObject ()) {
          const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_1316.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 31)))).boolEnum () ;
          switch (test_4) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1316.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 32)).stringValue ()) ;
            result.appendString (" constinArgument") ;
            result.appendString (index_1316_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 32)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_1316.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 33)))).boolEnum () ;
            switch (test_5) {
            case kBoolTrue : {
              result.appendString ("class GALGAS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_1316.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 34)).stringValue ()) ;
              result.appendString (" & ioArgument") ;
              result.appendString (index_1316_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 34)).stringValue ()) ;
              } break ;
            case kBoolFalse : {
              const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_1316.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 35)))).boolEnum () ;
              switch (test_6) {
              case kBoolTrue : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_1316.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 36)).stringValue ()) ;
                result.appendString (" & outArgument") ;
                result.appendString (index_1316_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 36)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_1316.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 38)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_1316_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 38)).stringValue ()) ;
                } break ;
              default :
                break ;
              }
              } break ;
            default :
              break ;
            }
            } break ;
          default :
            break ;
          }
          if (enumerator_1316.hasNextObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_1316_IDX.increment () ;
          enumerator_1316.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_1115.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 42)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_7) {
      case kBoolTrue : {
        const enumGalgasBool test_8 = enumerator_1115.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_8) {
        case kBoolTrue : {
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case kBoolFalse : {
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("LOCATION_ARGS") ;
          } break ;
        default :
          break ;
        }
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_9 = enumerator_1115.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_9) {
        case kBoolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      result.appendString (") ;\n\n") ;
      index_1115_.increment () ;
      enumerator_1115.gotoNextObject () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
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
                                                                                    const GALGAS_unifiedTypeMapEntry & in_SUPER_5F_TYPE_5F_INDEX
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     ") ;
  result.appendString (GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" generic code implementation"), inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("\"") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\",\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  const enumGalgasBool test_0 = in_SUPER_5F_TYPE_5F_INDEX.getter_isNull (SOURCE_FILE ("generic-type.cpp.galgasTemplate", 8)).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("nullptr") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("& kTypeDescriptor_GALGAS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_SUPER_5F_TYPE_5F_INDEX, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 8)).stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::staticTypeDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nAC_GALGAS_root * GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::clonedObject (void) const {\n  AC_GALGAS_root * result = nullptr ;\n  if (isValid ()) {\n    macroMyNew (result, GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (*this)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::extractObject (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_object & inObject,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inObject.embeddedObject () ;\n  if (nullptr != p) {\n    if (nullptr != dynamic_cast <const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> (p)) {\n      result = *p ;\n    }else{\n      inCompiler->castError (\"") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\", p->dynamicTypeDescriptor () COMMA_THERE) ;\n    }  \n  }\n  return result ;\n}\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" extern type"), inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n//  Predeclarations (from GALGAS extern type declaration\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_PRE_5F_DECLARATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//---\n  public: virtual bool isValid (void) const override ;\n  public: virtual void drop (void) override ;\n\n//--- For log instruction\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--- Code (from GALGAS extern type declaration)\n") ;
  result.appendString (in_CODE.stringValue ()) ;
  result.appendString ("\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_graph {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_graph () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyGraph (LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyGraph (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyGraph (THERE) ;\n  return result ;\n}\n\n") ;
  GALGAS_uint index_986_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    cEnumerator_graphInsertModifierList enumerator_986 (in_INSERT_5F_MODIFIER_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_986.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_986.current_mInsertModifierName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_1342_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).readProperty_addAssignOperatorArguments ().isValid ()) {
        cEnumerator_functionSignature enumerator_1342 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).readProperty_addAssignOperatorArguments (), EnumerationOrder::up) ;
        while (enumerator_1342.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_1342.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 32)).stringValue ()) ;
          result.appendString (" inArgument_") ;
          result.appendString (index_1342_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 32)).stringValue ()) ;
          index_1342_IDX.increment () ;
          enumerator_1342.gotoNextObject () ;
        }
      }
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 37)).stringValue ()) ;
      result.appendString ("::makeAttributesFromObjects (attributes") ;
      GALGAS_uint index_1783_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 38)).readProperty_addAssignOperatorArguments ().isValid ()) {
        cEnumerator_functionSignature enumerator_1783 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 38)).readProperty_addAssignOperatorArguments (), EnumerationOrder::up) ;
        while (enumerator_1783.hasCurrentObject ()) {
          result.appendString (", inArgument_") ;
          result.appendString (index_1783_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 39)).stringValue ()) ;
          index_1783_IDX.increment () ;
          enumerator_1783.gotoNextObject () ;
        }
      }
      result.appendString (" COMMA_THERE) ;\n  const char * kErrorMessage = ") ;
      result.appendString (enumerator_986.current_mInsertErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 42)).stringValue ()) ;
      result.appendString (" ;\n  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;\n}\n\n") ;
      index_986_.increment () ;
      enumerator_986.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_topologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 51)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray sortedList ;\n  capCollectionElementArray unsortedList ;\n  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 60)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 61)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_depthFirstTopologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 66)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 68)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray sortedList ;\n  capCollectionElementArray unsortedList ;\n  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 75)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 76)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_reversedGraph (LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.reversedGraphFromGraph (*this COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_circularities (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 90)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoSuccessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 100)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 105)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoPredecessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 110)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 115)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subgraphFromNodes (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_lstringlist & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GALGAS_stringset & inKeysToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 131)).stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_nodeList (UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 132)).stringValue ()) ;
  result.appendString (" resultingList ;\n  if (isValid ()) {\n    resultingList = graph () ;\n  }\n  return resultingList ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_lstringlist GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_accessibleNodesFrom (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_lstringlist & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GALGAS_stringset & inNodesToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_lstringlist result ;\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" resultingGraph ;\n  subGraph (resultingGraph,\n            inStartKeyList,\n            inNodesToExclude,\n            inCompiler\n            COMMA_THERE) ;\n  if (resultingGraph.isValid ()) {\n    result = resultingGraph.getter_lkeyList (THERE) ;\n  }\n  return result ;\n}\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n") ;
  GALGAS_uint index_351_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_351 (in_SEARCH_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_351.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nextern const char * kSearchErrorMessage_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_351.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      index_351_.increment () ;
      enumerator_351.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_map {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  \n") ;
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
                                                                            const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                            const GALGAS_bool & in_GENERATE_5F_COMPARISON
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 2: class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cMapElement {\n//--- Map attributes\n") ;
  GALGAS_uint index_455_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_455 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_455.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_455.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_455.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_455_.increment () ;
      enumerator_455.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--- Constructors\n  public: cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element & inValue\n             ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n \n  public: cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_926_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_926 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_926.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_926.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_926.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 20)).stringValue ()) ;
      index_926_.increment () ;
      enumerator_926.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n") ;
  const enumGalgasBool test_0 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cMapElement * copy (void) ;\n\n//--- Description\n public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n} ;\n\n") ;
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
                                                                                        const GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE,
                                                                                        const GALGAS_bool & in_GENERATE_5F_COMPARISON
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\ncMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element & inValue\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncMapElement (inValue.mProperty_lkey COMMA_THERE)") ;
  GALGAS_uint index_354_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_354 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_354.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_354.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 7)).stringValue ()) ;
      result.appendString (" (inValue.mProperty_") ;
      result.appendString (enumerator_354.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 7)).stringValue ()) ;
      result.appendString (")") ;
      index_354_.increment () ;
      enumerator_354.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_784_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_784 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_784.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_784.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_784.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 16)).stringValue ()) ;
      index_784_.increment () ;
      enumerator_784.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncMapElement (inKey COMMA_THERE)") ;
  GALGAS_uint index_1060_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1060 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1060.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_1060.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (" (in_") ;
      result.appendString (enumerator_1060.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (")") ;
      index_1060_.increment () ;
      enumerator_1060.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mProperty_lkey.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement * cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cMapElement * result = nullptr ;\n  macroMyNew (result, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mProperty_lkey") ;
  GALGAS_uint index_1708_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1708 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1708.hasCurrentObject ()) {
      result.appendString (", mProperty_") ;
      result.appendString (enumerator_1708.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 39)).stringValue ()) ;
      index_1708_.increment () ;
      enumerator_1708.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 47)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("void cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::description (String & /* ioString */, const int32_t /* inIndentation */) const {\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("void cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
    GALGAS_uint index_2280_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2280 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2280.hasCurrentObject ()) {
        result.appendString ("  ioString.appendNewLine () ;\n  ioString.appendStringMultiple (\"| \", inIndentation) ;\n  ioString.appendCString (") ;
        result.appendString (enumerator_2280.current_name (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 54)).stringValue ()) ;
        result.appendString (" \":\") ;\n  mProperty_") ;
        result.appendString (enumerator_2280.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 55)).stringValue ()) ;
        result.appendString (".description (ioString, inIndentation) ;\n") ;
        index_2280_.increment () ;
        enumerator_2280.gotoNextObject () ;
      }
    }
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n") ;
  const enumGalgasBool test_1 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::compare (const cCollectionElement * inOperand) const {\n  cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * operand = (cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) inOperand ;\n  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;\n") ;
    GALGAS_uint index_3101_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3101 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3101.hasCurrentObject ()) {
        result.appendString ("  if (ComparisonResult::operandEqual == result) {\n    result = mProperty_") ;
        result.appendString (enumerator_3101.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 68)).stringValue ()) ;
        result.appendString (".objectCompare (operand->mProperty_") ;
        result.appendString (enumerator_3101.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 68)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        index_3101_.increment () ;
        enumerator_3101.gotoNextObject () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
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
  result.appendString (" (void) :\nAC_GALGAS_map () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_map (inSource) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  * ((AC_GALGAS_map *) this) = inSource ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyMap (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyMap (LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyMap (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_mapWithMapToOverride (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMapToOverride\n                                                   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_overriddenMap (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  getOverridenMap (result, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterElement (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element & inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inValue COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  const char * kInsertErrorMessage = \"@") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" insert error: '%K' already in map\" ;\n  const char * kShadowErrorMessage = \"\" ;\n  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_6452_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6452 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6452.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6452.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 146)).stringValue ()) ;
      result.appendString (" & inArgument") ;
      result.appendString (index_6452_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 146)).stringValue ()) ;
      index_6452_IDX.increment () ;
      enumerator_6452.gotoNextObject () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inKey") ;
  GALGAS_uint index_6823_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6823 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6823.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_6823_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue ()) ;
      index_6823_IDX.increment () ;
      enumerator_6823.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n") ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 159)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 159)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 159)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 159)).uintValue ())) ;
  }
  result.appendString ("const char * kInsertErrorMessage = \"@") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" insert error: '%K' already in map\" ;\nconst char * kShadowErrorMessage = \"\" ;\nperformInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n") ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 159)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 159)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 159)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 159)).uintValue ())) ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = *this ;\n  cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" enumerator (inOperand, EnumerationOrder::up) ;\n  while (enumerator.hasCurrentObject ()) {\n    result.addAssign_operation (enumerator.current_lkey (HERE)") ;
  GALGAS_uint index_7863_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7863 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7863.hasCurrentObject ()) {
      result.appendString (", enumerator.current_") ;
      result.appendString (enumerator_7863.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString (" (HERE)") ;
      index_7863_.increment () ;
      enumerator_7863.gotoNextObject () ;
    }
  }
  result.appendString (", inCompiler COMMA_THERE) ;\n    enumerator.gotoNextObject () ;\n  }\n  return result ;\n}\n\n") ;
  GALGAS_uint index_8111_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_8111 (in_INSERT_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8111.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_8111.current_mInsertMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 186)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_8398_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8398 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_8398.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_8398.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 188)).stringValue ()) ;
          result.appendString (" inArgument") ;
          result.appendString (index_8398_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 188)).stringValue ()) ;
          index_8398_IDX.increment () ;
          enumerator_8398.gotoNextObject () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" (inKey") ;
      GALGAS_uint index_8784_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8784 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_8784.hasCurrentObject ()) {
          result.appendString (", inArgument") ;
          result.appendString (index_8784_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 195)).stringValue ()) ;
          index_8784_IDX.increment () ;
          enumerator_8784.gotoNextObject () ;
        }
      }
      result.appendString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n") ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).isValid ()) {
        result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).uintValue ())) ;
      }
      result.appendString ("const char * kInsertErrorMessage = ") ;
      result.appendString (enumerator_8111.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 202)).stringValue ()) ;
      result.appendString (" ;\nconst char * kShadowErrorMessage = ") ;
      result.appendString (enumerator_8111.current_mShadowErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 203)).stringValue ()) ;
      result.appendString (" ;\nperformInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n") ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).isValid ()) {
        result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).uintValue ())) ;
      }
      result.appendString ("}\n\n") ;
      index_8111_.increment () ;
      enumerator_8111.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9367_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_9367 (in_SEARCH_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9367.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nconst char * kSearchErrorMessage_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_9367.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 211)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_9367.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 211)).stringValue ()) ;
      result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::method_") ;
      result.appendString (enumerator_9367.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 213)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_9968_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9968 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_9968.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_9968.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 215)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_9968_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 215)).stringValue ()) ;
          index_9968_IDX.increment () ;
          enumerator_9968.gotoNextObject () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) performSearch (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("inKey,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("inCompiler,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("kSearchErrorMessage_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_9367.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 221)).stringValue ()) ;
      result.appendString ("\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_THERE) ;\n  if (nullptr == p) {\n") ;
      GALGAS_uint index_10559_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10559 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_10559.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_10559_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 225)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          index_10559_IDX.increment () ;
          enumerator_10559.gotoNextObject () ;
        }
      }
      result.appendString ("  }else{\n    macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n") ;
      GALGAS_uint index_10794_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10794 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_10794.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_10794_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 230)).stringValue ()) ;
          result.appendString (" = p->mProperty_") ;
          result.appendString (enumerator_10794.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 230)).stringValue ()) ;
          result.appendString (" ;\n") ;
          index_10794_IDX.increment () ;
          enumerator_10794.gotoNextObject () ;
        }
      }
      result.appendString ("  }\n}\n\n") ;
      index_9367_.increment () ;
      enumerator_9367.gotoNextObject () ;
    }
  }
  GALGAS_uint index_10985_ (0) ;
  if (in_REMOVE_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapRemoveMethodListAST enumerator_10985 (in_REMOVE_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10985.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_10985.current_mMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 239)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_11301_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_11301 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_11301.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_11301.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 241)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_11301_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 241)).stringValue ()) ;
          index_11301_IDX.increment () ;
          enumerator_11301.gotoNextObject () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  const char * kRemoveErrorMessage = ") ;
      result.appendString (enumerator_10985.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 245)).stringValue ()) ;
      result.appendString (" ;\n  capCollectionElement attributes ;\n  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;\n  cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
      GALGAS_uint index_11925_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_11925 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_11925.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_11925_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 251)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          index_11925_IDX.increment () ;
          enumerator_11925.gotoNextObject () ;
        }
      }
      result.appendString ("  }else{\n    macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n") ;
      GALGAS_uint index_12162_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_12162 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_12162.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_12162_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 256)).stringValue ()) ;
          result.appendString (" = p->mProperty_") ;
          result.appendString (enumerator_12162.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 256)).stringValue ()) ;
          result.appendString (" ;\n") ;
          index_12162_IDX.increment () ;
          enumerator_12162.gotoNextObject () ;
        }
      }
      result.appendString ("  }\n}\n\n") ;
      index_10985_.increment () ;
      enumerator_10985.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::setter_insertOrReplace (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("GALGAS_lstring inKey") ;
    GALGAS_uint index_12616_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_12616 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_12616.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_12616.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 267)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_12616_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 267)).stringValue ()) ;
        index_12616_IDX.increment () ;
        enumerator_12616.gotoNextObject () ;
      }
    }
    result.appendString ("\n ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inKey") ;
    GALGAS_uint index_12966_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_12966 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_12966.hasCurrentObject ()) {
        result.appendString (", inArgument") ;
        result.appendString (index_12966_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 273)).stringValue ()) ;
        index_12966_IDX.increment () ;
        enumerator_12966.gotoNextObject () ;
      }
    }
    result.appendString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  performInsertOrReplace (attributes) ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_13291_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13291 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13291.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_13291.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 285)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_13291.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 285)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GALGAS_string & inKey,\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;\n  const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) attributes ;\n  GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_13291.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" result ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    result = p->mProperty_") ;
      result.appendString (enumerator_13291.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 293)).stringValue ()) ;
      result.appendString (" ;\n  }\n  return result ;\n}\n\n") ;
      index_13291_IDX.increment () ;
      enumerator_13291.gotoNextObject () ;
    }
  }
  GALGAS_uint index_14350_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14350 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14350.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_set") ;
      result.appendString (enumerator_14350.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 301)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 301)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_14350.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 301)).stringValue ()) ;
      result.appendString (" inAttributeValue,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GALGAS_string inKey,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;\n  cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) attributes ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    p->mProperty_") ;
      result.appendString (enumerator_14350.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 309)).stringValue ()) ;
      result.appendString (" = inAttributeValue ;\n  }\n}\n\n") ;
      index_14350_IDX.increment () ;
      enumerator_14350.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\ncMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readWriteAccessForWithInstruction (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GALGAS_string & inKey\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * result = (cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;\n  macroNullOrValidSharedObject (result, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const EnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  const cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element (p->mProperty_lkey") ;
  GALGAS_uint index_16755_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16755 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_16755.hasCurrentObject ()) {
      result.appendString (", p->mProperty_") ;
      result.appendString (enumerator_16755.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 341)).stringValue ()) ;
      index_16755_.increment () ;
      enumerator_16755.gotoNextObject () ;
    }
  }
  result.appendString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_lstring cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_lkey (LOCATION_ARGS) const {\n  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement) ;\n  return p->mProperty_lkey ;\n}\n\n") ;
  GALGAS_uint index_17256_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17256 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_17256.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_17256.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 356)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_17256.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 356)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mProperty_") ;
      result.appendString (enumerator_17256.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 359)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_17256_IDX.increment () ;
      enumerator_17256.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::optional_searchKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_string & inKey") ;
  GALGAS_uint index_18099_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18099 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_18099.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_18099.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 366)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_18099_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 366)).stringValue ()) ;
      index_18099_IDX.increment () ;
      enumerator_18099.gotoNextObject () ;
    }
  }
  result.appendString (") const {\n  const cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) searchForKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("inKey) ;\n  const bool result = nullptr != p ;\n  if (result) {\n    macroValidSharedObject (p, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_18548_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18548 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_18548.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_18548_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 374)).stringValue ()) ;
      result.appendString (" = p->mProperty_") ;
      result.appendString (enumerator_18548.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 374)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_18548_IDX.increment () ;
      enumerator_18548.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n") ;
  GALGAS_uint index_18755_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18755 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_18755.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_18755_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 378)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_18755_IDX.increment () ;
      enumerator_18755.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n  return result ;\n}\n\n") ;
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
//Filewrapper template 'semanticComponentGenerationTemplate initializerImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (Compiler * inCompiler,
                                                                                                 const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                 const GALGAS_string & in_INITIALIZER_5F_NAME,
                                                                                                 const GALGAS_formalInputParameterListForGeneration & /* in_FORMAL_5F_ARGUMENT_5F_LIST */,
                                                                                                 const GALGAS_string & in_INITIALIZER_5F_IMPLEMENTATION
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   ") ;
  result.appendString (GALGAS_string ("INITIALIZER @").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).add_operation (in_INITIALIZER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_INITIALIZER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n\n") ;
  return GALGAS_string (result) ;
}

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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_599_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_599 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_599.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_599.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_599_.increment () ;
      enumerator_599.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_587_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_587 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_587.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_587.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_587.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_587.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_587.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_587.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_587_.increment () ;
      enumerator_587.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_1239_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1239 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1239.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1239.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (", ") ;
      index_1239_.increment () ;
      enumerator_1239.gotoNextObject () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_584_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_584 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_584.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_584.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_584_.increment () ;
      enumerator_584.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_706_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_706 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_706.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_706.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_706.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_706.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_706.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_706.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_706_.increment () ;
      enumerator_706.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_1358_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1358 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1358.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1358.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (", ") ;
      index_1358_.increment () ;
      enumerator_1358.gotoNextObject () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Overriding extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_624_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_624 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_624.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_624_IDX.increment () ;
      enumerator_624.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 26)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString (" inModifier) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_2145_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2145 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2145.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        switch (test_4) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          switch (test_5) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_2145_.increment () ;
      enumerator_2145.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic TC_UniqueArray <extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("> gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" inModifier) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (inClassIndex, inModifier, nullptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" (void) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue ()) ;
  result.appendString (".removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("nullptr,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue ()) ;
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_2130_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2130 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2130.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_2130.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 32)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_2130.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 34)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_2130.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_2130_.increment () ;
      enumerator_2130.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GALGAS_uint index_3167_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3167 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3167.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_3167.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 47)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_3167.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 48)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_3167_.increment () ;
      enumerator_3167.gotoNextObject () ;
    }
  }
  result.appendString ("//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (") ;\n    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue ()) ;
  result.appendString (" f = nullptr ;\n    if (classIndex < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString (".count ()) {\n      f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue ()) ;
  result.appendString (" (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue ()) ;
  result.appendString (".count ()) {\n           f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
  result.appendString (" (p->mSlotID COMMA_HERE) ;\n         }\n         p = p->mSuperclassDescriptor ;\n       }\n       gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (classIndex, f, nullptr) ;\n    }\n    f (inObject, ") ;
  GALGAS_uint index_4856_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4856 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4856.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_4856.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 72)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_4856.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 73)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_4856.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 74)))).boolEnum () ;
        switch (test_5) {
        case kBoolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_4856.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 75)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_4856.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 76)))).boolEnum () ;
          switch (test_6) {
          case kBoolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_4856.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 77)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_4856.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 79)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      result.appendString (", ") ;
      index_4856_.increment () ;
      enumerator_4856.gotoNextObject () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_615_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_615 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_615.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_615_IDX.increment () ;
      enumerator_615.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 26)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString (" inModifier) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_2149_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2149 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2149.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        switch (test_4) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          switch (test_5) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_2149_.increment () ;
      enumerator_2149.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic TC_UniqueArray <extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("> gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" inModifier) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (inClassIndex, inModifier, nullptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_1414_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1414 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1414.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_1414.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 21)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_1414.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 23)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_1414.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 25)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_1414_.increment () ;
      enumerator_1414.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GALGAS_uint index_2451_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2451 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2451.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_2451.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_2451.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_2451_.increment () ;
      enumerator_2451.gotoNextObject () ;
    }
  }
  result.appendString ("//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString (") ;\n    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.appendString (" f = nullptr ;\n    if (classIndex < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue ()) ;
  result.appendString (".count ()) {\n      f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue ()) ;
  result.appendString (" (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString (".count ()) {\n           f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" (p->mSlotID COMMA_HERE) ;\n         }\n         p = p->mSuperclassDescriptor ;\n       }\n       gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (classIndex, f, nullptr) ;\n    }\n    f (inObject, ") ;
  GALGAS_uint index_4140_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4140 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4140.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_4140.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 61)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_4140.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 62)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_4140.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 63)))).boolEnum () ;
        switch (test_5) {
        case kBoolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_4140.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_4140.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 65)))).boolEnum () ;
          switch (test_6) {
          case kBoolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_4140.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 66)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_4140.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      result.appendString (", ") ;
      index_4140_.increment () ;
      enumerator_4140.gotoNextObject () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_MODIFIER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nstatic void defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.appendString (" (void) {\n  enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("kTypeDescriptor_GALGAS_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.appendString (".mSlotID,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.appendString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue ()) ;
  result.appendString (" (void) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue ()) ;
  result.appendString (".removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString (",\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.appendString (") ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Overriding extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_MODIFIER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nstatic void defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue ()) ;
  result.appendString (" (void) {\n  enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("kTypeDescriptor_GALGAS_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (".mSlotID,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString (" (defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString (", nullptr) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_558_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_558 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_558.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_558_.increment () ;
      enumerator_558.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension method '@").add_operation (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_616_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_616 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_616.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_616_.increment () ;
      enumerator_616.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GALGAS_uint index_1653_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1653 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1653.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_1653.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 25)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1653.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 26)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1653_.increment () ;
      enumerator_1653.gotoNextObject () ;
    }
  }
  result.appendString ("//--- Find method\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_2205_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2205 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2205.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_2205.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2205.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_2205.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case kBoolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2205.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_2205.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case kBoolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2205.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2205.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      result.appendString (", ") ;
      index_2205_.increment () ;
      enumerator_2205.gotoNextObject () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_549.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_671_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_671 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_671.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 16)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 18)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_671_.increment () ;
      enumerator_671.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
  GALGAS_uint index_1680_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1680 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1680.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_1680.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 28)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1680.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1680_.increment () ;
      enumerator_1680.gotoNextObject () ;
    }
  }
  result.appendString ("  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 33)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 34)).stringValue ()) ;
  result.appendString ("  (") ;
  GALGAS_uint index_2183_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2183 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2183.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 37)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
        switch (test_5) {
        case kBoolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 39)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 40)))).boolEnum () ;
          switch (test_6) {
          case kBoolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 43)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      result.appendString (", ") ;
      index_2183_.increment () ;
      enumerator_2183.gotoNextObject () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Overriding extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_307_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_307 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_307.hasCurrentObject ()) {
      result.appendString ("extern const char * gWrapperFileContent_") ;
      result.appendString (enumerator_307.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_307_idx.increment () ;
      enumerator_307.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_577_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_577 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_577.hasCurrentObject ()) {
      result.appendString ("extern const uint8_t gWrapperFileContent_") ;
      result.appendString (enumerator_577.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" [] ;\n") ;
      index_577_idx.increment () ;
      enumerator_577.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_841_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_841 (in_FILE_5F_INDEX_5F_STRING_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_841.hasCurrentObject ()) {
      result.appendString ("extern const cRegularFileWrapper gWrapperFile_") ;
      result.appendString (enumerator_841.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_841_idx.increment () ;
      enumerator_841.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1108_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1108 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1108.hasCurrentObject ()) {
      result.appendString ("extern const cDirectoryWrapper gWrapperDirectory_") ;
      result.appendString (enumerator_1108.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_1108_.increment () ;
      enumerator_1108.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" extensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GALGAS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & inObject") ;
  GALGAS_uint index_588_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_588 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_588.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_588.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_588.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_588_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_588.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_588_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_588_IDX.increment () ;
      enumerator_588.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GALGAS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" inObject") ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_549.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class GALGAS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & ioObject") ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_549.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" function_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_473_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_473 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_473.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_473.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_473.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_473_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_473.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_473_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      default :
        break ;
      }
      index_473_IDX.increment () ;
      enumerator_473.gotoNextObject () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const C_galgas_type_descriptor * functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("] = {\n") ;
  GALGAS_uint index_850_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_850 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_850.hasCurrentObject ()) {
      result.appendString ("  & kTypeDescriptor_GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_850.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 15)).stringValue ()) ;
      result.appendString (",\n") ;
      index_850_.increment () ;
      enumerator_850.gotoNextObject () ;
    }
  }
  result.appendString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 23)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("static GALGAS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 24)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 28)).stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("static GALGAS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 31)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
    GALGAS_uint index_2160_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2160 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2160.hasCurrentObject ()) {
        result.appendString ("  const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2160.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString (" operand") ;
        result.appendString (index_2160_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString (" = GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2160.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString ("::extractObject (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("inEffectiveParameterArray.objectAtIndex (") ;
        result.appendString (index_2160_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" COMMA_HERE),\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("inCompiler\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_THERE) ;\n") ;
        index_2160_IDX.increment () ;
        enumerator_2160.gotoNextObject () ;
      }
    }
    result.appendString ("  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 41)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_2656_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2656 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2656.hasCurrentObject ()) {
        result.appendString ("operand") ;
        result.appendString (index_2656_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_2656_IDX.increment () ;
        enumerator_2656.gotoNextObject () ;
      }
    }
    result.appendString ("inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nC_galgas_function_descriptor functionDescriptor_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString (in_FUNCTION_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionWithGenericHeader_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("& kTypeDescriptor_GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 55)).stringValue ()) ;
  result.appendString (") ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid routine_") ;
  result.appendString (in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_450_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_450 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_450.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          } break ;
        default :
          break ;
        }
        } break ;
      default :
        break ;
      }
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_450_IDX.increment () ;
      enumerator_450.gotoNextObject () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_ROUTINE_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//  Function implementation                                                                      \n//--------------------------------------------------------------------------------------------------\n\nstatic bool gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (" = false ;\nstatic GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 14)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" function_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" (") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (! gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.appendString (") {\n    gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue ()) ;
  result.appendString (" = onceFunction_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue ()) ;
  result.appendString (" (inCompiler COMMA_THERE) ;\n    gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" = true ;\n  }\n  return gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void releaseOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.appendString (" (void) {\n  gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 30)).stringValue ()) ;
  result.appendString (".drop () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gEpilogueForOnceFunction_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 35)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("nullptr,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("releaseOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const C_galgas_type_descriptor * functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString ("] = {\n") ;
  GALGAS_uint index_2587_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_2587 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2587.hasCurrentObject ()) {
      result.appendString ("  & kTypeDescriptor_GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2587.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (",\n") ;
      index_2587_.increment () ;
      enumerator_2587.gotoNextObject () ;
    }
  }
  result.appendString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 53)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("static GALGAS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 54)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 58)).stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("static GALGAS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 61)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_location & /* inErrorLocation*/\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
    GALGAS_uint index_3896_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_3896 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3896.hasCurrentObject ()) {
        result.appendString ("  const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3896.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" operand") ;
        result.appendString (index_3896_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" = GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3896.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString ("::extractObject (inEffectiveParameterArray.objectAtIndex (") ;
        result.appendString (index_3896_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" COMMA_HERE), inCompiler COMMA_THERE) ;\n") ;
        index_3896_IDX.increment () ;
        enumerator_3896.gotoNextObject () ;
      }
    }
    result.appendString ("  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 68)).stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_4369_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_4369 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4369.hasCurrentObject ()) {
        result.appendString ("operand") ;
        result.appendString (index_4369_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 70)).stringValue ()) ;
        result.appendString (", ") ;
        index_4369_IDX.increment () ;
        enumerator_4369.gotoNextObject () ;
      }
    }
    result.appendString ("inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nC_galgas_function_descriptor functionDescriptor_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString (in_FUNCTION_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionWithGenericHeader_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 79)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("& kTypeDescriptor_GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.appendString (") ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class Compiler * inCompiler") ;
  GALGAS_uint index_568_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_568 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_568.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_568.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" & ") ;
      result.appendString (enumerator_568.current_mFormalArgumentCppName (HERE).stringValue ()) ;
      index_568_.increment () ;
      enumerator_568.gotoNextObject () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * ") ;
  const enumGalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("/* ") ;
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 9)).stringValue ()) ;
    result.appendString (" */") ;
    } break ;
  case kBoolFalse : {
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 11)).stringValue ()) ;
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_677_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_677 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_677.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_677.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" & ") ;
      const enumGalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (enumerator_677.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("/* ") ;
        result.appendString (enumerator_677.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        result.appendString (" */") ;
        } break ;
      case kBoolFalse : {
        result.appendString (enumerator_677.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_677_.increment () ;
      enumerator_677.gotoNextObject () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  String result ;\n") ;
  const enumGalgasBool test_2 = in_USES_5F_COLUMN_5F_MARKER.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  uint32_t columnMarker = 0 ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString (in_GENERATED_5F_INSTRUCTION_5F_STRING.stringValue ()) ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString ("  return GALGAS_string (result) ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_functionPrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 992)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), temp_1.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1003)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1000))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_onceFunctionDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1010)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_1.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1021)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1018))) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_41619 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1030)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::equal, var_selfTypeDefinition_41619.readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_packageType (SOURCE_FILE ("semanticGeneration.galgas", 1031)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_semanticTypeForGeneration temp_2 = this ;
    result_result = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, var_selfTypeDefinition_41619.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1036)), var_selfTypeDefinition_41619.readProperty_superType () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1034))) ;
  }
//---
  return result_result ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1050)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1050))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1050)) ;
  GALGAS_string var_code_42758 ;
  {
  const GALGAS_functionImplementationForGeneration temp_1 = this ;
  const GALGAS_functionImplementationForGeneration temp_2 = this ;
  const GALGAS_functionImplementationForGeneration temp_3 = this ;
  const GALGAS_functionImplementationForGeneration temp_4 = this ;
  const GALGAS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GALGAS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1052)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1052)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GALGAS_string ("Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_42758, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1051)) ;
  }
  const GALGAS_functionImplementationForGeneration temp_6 = this ;
  const GALGAS_functionImplementationForGeneration temp_7 = this ;
  const GALGAS_functionImplementationForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.readProperty_mFunctionName (), var_code_42758, temp_7.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_8.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1067)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1063))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1078)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1078))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1078)) ;
  GALGAS_string var_code_43669 ;
  {
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GALGAS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1080)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1080)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), temp_2.readProperty_mFunctionInstructionList (), GALGAS_string ("Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GALGAS_bool (true), GALGAS_bool (false), var_code_43669, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1079)) ;
  }
  const GALGAS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.readProperty_mFunctionName (), var_code_43669, GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1095)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1091))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1104)) ;
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
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperLexiqueName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexiqueDeclarationForGeneration temp_3 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1114)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1114))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1114)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1124)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1124))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1124)) ;
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
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1135)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1135)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1135))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1135)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_2 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1138)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1138)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1138)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_2.readProperty_mObjcCocoaHeader (), GALGAS_string ("\n\n"), GALGAS_string ("\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1136)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_3 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1148)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1148)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1148))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1148)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_4 = this ;
  ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_4.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1149)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1149)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1149))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1149)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_5 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_6 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_5.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1152)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1152)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1152)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_6.readProperty_mObjcCocoaImplementation (), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1150)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_7 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_7.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1162)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1162)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1162))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1162)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_8 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_9 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_8.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1165)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1165)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1165)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_9.readProperty_mSwiftCocoaImplementation (), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1163)) ;
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
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1181)) ;
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
  ioArgument_ioInclusionSet.plusAssign_operation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1190)) ;
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
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1201)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const GALGAS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                                                     const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                                     GALGAS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                                                     GALGAS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                                                     GALGAS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                                                     GALGAS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1213)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1213))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1213)) ;
  cEnumerator_wrapperFileMap enumerator_48572 (constinArgument_inFilewrapperFileMap, EnumerationOrder::up) ;
  while (enumerator_48572.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1215)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1215))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1215)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_48572.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_48572.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1217))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1217)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_48572.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1219))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1219)) ;
    }
    enumerator_48572.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_48935 (constinArgument_inFilewrapperDirectoryMap, EnumerationOrder::up) ;
  while (enumerator_48935.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_48935.current_mRegularFileMap (HERE), enumerator_48935.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223)) ;
    }
    enumerator_48935.gotoNextObject () ;
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
  GALGAS_stringlist var_regularFileIndexStringList_49466 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList_49516 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  GALGAS_stringlist var_regularTextContentIndexStringList_49575 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  GALGAS_stringlist var_directoryIndexStringList_49632 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_49466, var_directoryIndexStringList_49632, var_regularTextContentIndexStringList_49575, var_regularBinaryContentIndexStringList_49516, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1243)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_49466, var_directoryIndexStringList_49632, var_regularTextContentIndexStringList_49575, var_regularBinaryContentIndexStringList_49516, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1251))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_50282 (temp_3.readProperty_mFilewrapperTemplateListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_50282.hasCurrentObject ()) {
    const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_50282.current_mFilewrapperTemplateName (HERE), enumerator_50282.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1260))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1260)) ;
    enumerator_50282.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const GALGAS_string constinArgument_inFilewrapperName,
                                                              const GALGAS_string constinArgument_inFilewrapperDirectory,
                                                              const GALGAS_uint constinArgument_inFilewrapperDirectoryIndex,
                                                              const GALGAS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                                              const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                              GALGAS_string & ioArgument_ioImplementation,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_wrapperFileMap enumerator_51005 (constinArgument_inFilewrapperRegularFileMap, EnumerationOrder::up) ;
  while (enumerator_51005.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_51005.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_contents_51092 = GALGAS_string::class_func_stringWithContentsOfFile (enumerator_51005.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1280)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1281)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1281)).add_operation (enumerator_51005.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1281)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1281)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1281)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_51005.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1283)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1283)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1284)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1285)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1285)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1286)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_contents_51092.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1287)).objectCompare (GALGAS_uint (uint32_t (100U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_stringlist var_components_51544 = var_contents_51092.getter_componentsSeparatedByString (GALGAS_string ("\n") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1288)) ;
            GALGAS_string var_lastLine_51637 ;
            {
            var_components_51544.setter_popLast (var_lastLine_51637, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1289)) ;
            }
            cEnumerator_stringlist enumerator_51660 (var_components_51544, EnumerationOrder::up) ;
            const bool bool_2 = true ;
            if (enumerator_51660.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)) ;
              while (enumerator_51660.hasCurrentObject () && bool_2) {
                GALGAS_string var_s_51756 = enumerator_51660.current_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)) ;
                ioArgument_ioImplementation.plusAssign_operation(var_s_51756.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1295)).add_operation (GALGAS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1295)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1295)) ;
                enumerator_51660.gotoNextObject () ;
              }
            }
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_lastLine_51637.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1297)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
              if (kBoolTrue == test_3) {
                ioArgument_ioImplementation.plusAssign_operation(var_lastLine_51637.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1298)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1298)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_1) {
          ioArgument_ioImplementation.plusAssign_operation(var_contents_51092.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1301)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)) ;
        }
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (" ;\n\nconst cRegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_51005.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1304)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1304)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1305)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1306)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1306)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1307)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_51005.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1308)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1308)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1309)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_51005.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1310)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1310)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1310)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)) ;
        ioArgument_ioImplementation.plusAssign_operation(var_contents_51092.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1312)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1312)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1312)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1313)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_51005.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1314)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1314)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1315)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1316)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1316)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1317)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_data var_contents_52934 = GALGAS_data::class_func_dataWithContentsOfFile (enumerator_51005.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)) ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1320)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1320)).add_operation (enumerator_51005.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1320)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1320)).add_operation (GALGAS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1320)).add_operation (enumerator_51005.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1322)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1322)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1323)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1322)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1323)).add_operation (var_contents_52934.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1323)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1323)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1323)).add_operation (GALGAS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1323)).add_operation (var_contents_52934.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1324)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1323)).add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)).add_operation (enumerator_51005.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1325)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1325)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1325)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1326)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1325)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1326)).add_operation (enumerator_51005.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1327)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1327)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1327)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1327)).add_operation (enumerator_51005.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1328)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1328)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1328)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1328)).add_operation (GALGAS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1328)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1329)).add_operation (var_contents_52934.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1330)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1330)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1330)).add_operation (GALGAS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1330)).add_operation (GALGAS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1330)).add_operation (enumerator_51005.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1331)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1331)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1320)) ;
    }
    enumerator_51005.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_53940 (constinArgument_inFilewrapperDirectoryMap, EnumerationOrder::up) ;
  while (enumerator_53940.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_53940.current_lkey (HERE).readProperty_string (), enumerator_53940.current_mWrapperDirectoryIndex (HERE), enumerator_53940.current_mRegularFileMap (HERE), enumerator_53940.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1337)) ;
    }
    enumerator_53940.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1347)).add_operation (GALGAS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1347)).add_operation (GALGAS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1347)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1349)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1349)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1349)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1349)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1349)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1350)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1350)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1350)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1350)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1350)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1347)) ;
  cEnumerator_wrapperFileMap enumerator_54546 (constinArgument_inFilewrapperRegularFileMap, EnumerationOrder::up) ;
  while (enumerator_54546.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperFile_").add_operation (enumerator_54546.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1352)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1352)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1352)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1352)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1352)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1352)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1352)) ;
    enumerator_54546.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  nullptr\n").add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1354)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1354)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1357)).add_operation (GALGAS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1357)).add_operation (GALGAS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1357)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1359)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1358)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1359)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1359)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1359)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1359)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1360)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1360)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1360)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1360)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1360)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1357)) ;
  cEnumerator_wrapperDirectoryMap enumerator_55169 (constinArgument_inFilewrapperDirectoryMap, EnumerationOrder::up) ;
  while (enumerator_55169.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperDirectory_").add_operation (enumerator_55169.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1362)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1362)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1362)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1362)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1362)) ;
    enumerator_55169.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  nullptr\n").add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1364)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1364)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1367)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1367)).add_operation (GALGAS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1367)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1368)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1369)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1370)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1370)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1370)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1370)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1371)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1371)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)).add_operation (GALGAS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1372)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1372)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1372)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1372)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1372)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1372)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1372)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1373)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1373)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1373)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1373)).add_operation (GALGAS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1373)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1374)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1374)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1374)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1374)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1374)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1374)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1367)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1384))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1384)) ;
  GALGAS_string var_filewrapperImplementation_56526 = GALGAS_string::makeEmptyString () ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (temp_1.readProperty_mFilewrapperName (), GALGAS_string::makeEmptyString (), GALGAS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_56526, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1386)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_56526 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1394))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_5 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_56986 (temp_5.readProperty_mFilewrapperTemplateListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_56986.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList_57139 = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex_57190 = GALGAS_uint (uint32_t (0U)) ;
    GALGAS_stringset var_unusedVariableCppNameSet_57236 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
    var_unusedVariableCppNameSet_57236.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1404))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1404)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_57356 (enumerator_56986.current_mFilewrapperTemplateFormalInputParameters (HERE), EnumerationOrder::up) ;
    while (enumerator_57356.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_57236.addAssign_operation (enumerator_57356.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1406)) ;
      enumerator_57356.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker_57487 = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_56986.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_57139, ioArgument_ioInclusionSet, var_temporaryVariableIndex_57190, var_unusedVariableCppNameSet_57236, var_useColumnMarker_57487, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)) ;
    }
    const GALGAS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_56986.current_mFilewrapperTemplateName (HERE), enumerator_56986.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_57236, var_useColumnMarker_57487, var_generatedCodeForInstructionList_57139 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)) ;
    enumerator_56986.gotoNextObject () ;
  }
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
  ioArgument_ioHeader.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1441)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1441)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1441)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_primitiveTypeForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mCppDeclarationString () ;
  const GALGAS_primitiveTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_58979 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1448)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_primitiveTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_isPackage ().boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_primitiveTypeForGeneration temp_4 = this ;
      result_result.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (inCompiler, var_selfTypeDefinition_58979.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)), var_selfTypeDefinition_58979.readProperty_classFunctionMap (), var_selfTypeDefinition_58979.readProperty_classMethodMap () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_primitiveTypeForGeneration temp_5 = this ;
    result_result.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_58979.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)), var_selfTypeDefinition_58979.readProperty_isConcrete (), var_selfTypeDefinition_58979.readProperty_initializerMap (), var_selfTypeDefinition_58979.readProperty_classFunctionMap (), var_selfTypeDefinition_58979.readProperty_getterMap (), var_selfTypeDefinition_58979.readProperty_setterMap (), var_selfTypeDefinition_58979.readProperty_instanceMethodMap (), var_selfTypeDefinition_58979.readProperty_classMethodMap (), var_selfTypeDefinition_58979.readProperty_optionalMethodMap (), var_selfTypeDefinition_58979.readProperty_readSubscriptMap (), var_selfTypeDefinition_58979.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_58979.readProperty_features (), var_selfTypeDefinition_58979.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_58979.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_58979.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles??&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__26__26__26_ (const GALGAS_string constinArgument_inDirectory,
                                                              const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationListForGeneration,
                                                              GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                                              GALGAS_stringlist & ioArgument_ioToolCppFileList,
                                                              GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_generatedCode_60852 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1494))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_60953 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_60953.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_60953.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1496)).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((cPtr_semanticDeclarationForGeneration *) enumerator_60953.current_mDeclaration (HERE).ptr (), var_generatedCode_60852, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1497)) ;
      }
    }
    enumerator_60953.gotoNextObject () ;
  }
  var_generatedCode_60852.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1500)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_61170 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_61170.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_61170.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1502)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generatedCode_60852.plusAssign_operation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_61170.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1503)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1503)) ;
      }
    }
    enumerator_61170.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_61361 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_61361.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_61361.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1507)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_stringset joker_61499 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
        GALGAS_string var_code_61524 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_61361.current_mDeclaration (HERE).ptr (), joker_61499, var_code_61524, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1508)) ;
        var_generatedCode_60852.plusAssign_operation(var_code_61524, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1509)) ;
      }
    }
    enumerator_61361.gotoNextObject () ;
  }
  var_generatedCode_60852.plusAssign_operation(GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1512))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1512)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_61672 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_61672.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_61672.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1514)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_stringset joker_61823 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
        GALGAS_string var_headerString_32__61848 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_61672.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_61823, var_headerString_32__61848, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1515)) ;
        var_generatedCode_60852.plusAssign_operation(var_headerString_32__61848, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1516)) ;
      }
    }
    enumerator_61672.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1519)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1520)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1521)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.h"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_generatedCode_60852, GALGAS_string ("\n\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1522)) ;
      }
    }
  }
  var_generatedCode_60852 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1535))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_62614 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_62614.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_62614.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1537)).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_generatedCode_60852.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_62614.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1538)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1538)) ;
        GALGAS_stringset joker_62837 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
        GALGAS_string var_code_62862 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_62614.current_mDeclaration (HERE).ptr (), GALGAS_unifiedTypeMap::init (inCompiler COMMA_HERE), joker_62837, var_code_62862, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1539)) ;
        var_generatedCode_60852.plusAssign_operation(var_code_62862, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1540)) ;
      }
    }
    enumerator_62614.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1543)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1544)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1545)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.cpp"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_generatedCode_60852, GALGAS_string ("\n\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1546)) ;
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
  result.appendString ("#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_295_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_295 (in_IMPORTED_5F_COMPONENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_295.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_295.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_295_.increment () ;
      enumerator_295.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
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
  result.appendString ("#include \"Compiler.h\"\n#include \"galgas-input-output.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"PrologueEpilogue.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_264_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_264 (in_IMPORTED_5F_COMPONENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_264.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_264.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_264_.increment () ;
      enumerator_264.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities_3F__3F__3F_ (const GALGAS_usefulEntitiesGraph constinArgument_inUsefulEntitiesGraph,
                                              const GALGAS_lstringlist constinArgument_inRootEntities,
                                              const GALGAS_string /* constinArgument_inProductDirectory */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("useful-entities-computation.galgas", 43)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringlist var_undefinedNodeList_2079 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas", 45)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_2079.getter_count (SOURCE_FILE ("useful-entities-computation.galgas", 46)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_string var_s_2196 = GALGAS_string ("usefulness computation, undefined nodes:") ;
            cEnumerator_stringlist enumerator_2254 (var_undefinedNodeList_2079, EnumerationOrder::up) ;
            while (enumerator_2254.hasCurrentObject ()) {
              var_s_2196.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_2254.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 49)) ;
              enumerator_2254.gotoNextObject () ;
            }
            TC_Array <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 51)), var_s_2196, fixItArray2  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 51)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_lstringlist var_usefullEntityList_2420 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GALGAS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 54)) ;
          GALGAS_stringset var_usefullEntitySet_2514 = GALGAS_stringset::class_func_setWithLStringList (var_usefullEntityList_2420  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)) ;
          GALGAS_stringset var_allEntitySet_2594 = GALGAS_stringset::class_func_setWithStringList (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas", 56))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)) ;
          GALGAS_stringset var_unusedEntities_2683 = var_allEntitySet_2594.substract_operation (var_usefullEntitySet_2514, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 57)) ;
          GALGAS_uselessEntityLocationMap var_uselessEntityLocationMap_2768 = GALGAS_uselessEntityLocationMap::init (inCompiler COMMA_HERE) ;
          cEnumerator_stringset enumerator_2809 (var_unusedEntities_2683, EnumerationOrder::up) ;
          while (enumerator_2809.hasCurrentObject ()) {
            GALGAS_location var_l_2856 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2809.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 60)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (ComparisonKind::equal, var_l_2856.objectCompare (GALGAS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 61)))).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticWarning (GALGAS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 62)), GALGAS_string ("unused entity, '").add_operation (enumerator_2809.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GALGAS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)), fixItArray4  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)) ;
              }
            }
            if (kBoolFalse == test_3) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_uselessEntityLocationMap_2768.getter_hasKey (var_l_2856.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas", 64)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  {
                  var_uselessEntityLocationMap_2768.setter_insertKey (var_l_2856.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 65)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 65)), var_l_2856, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 65)) ;
                  }
                }
              }
            }
            enumerator_2809.gotoNextObject () ;
          }
          cEnumerator_uselessEntityLocationMap enumerator_3311 (var_uselessEntityLocationMap_2768, EnumerationOrder::up) ;
          while (enumerator_3311.hasCurrentObject ()) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_3311.current_mLocation (HERE), GALGAS_string ("unused entity, due to option --").add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)), fixItArray6  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)) ;
            enumerator_3311.gotoNextObject () ;
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
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("getter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)).add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)), constinArgument_inGetterName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("setter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)).add_operation (constinArgument_inSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)), constinArgument_inSetterName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("method @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
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
//Function 'initializerNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_initializerNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inTypeName,
                                                               const GALGAS_string & constinArgument_inParameterSignature,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 97)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 97)).add_operation (constinArgument_inParameterSignature, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 97)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_initializerNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_initializerNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                                      const GALGAS_location & /* inErrorLocation */
                                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_initializerNameForUsefulEntitiesGraph (operand0,
                                                         operand1,
                                                         inCompiler
                                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_initializerNameForUsefulEntitiesGraph ("initializerNameForUsefulEntitiesGraph",
                                                                                       functionWithGenericHeader_initializerNameForUsefulEntitiesGraph,
                                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                                       2,
                                                                                       functionArgs_initializerNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_lexiqueNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inLexiqueName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("lexique ").add_operation (constinArgument_inLexiqueName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 103)), constinArgument_inLexiqueName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("grammar ").add_operation (constinArgument_inGrammarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 109)), constinArgument_inGrammarName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("syntax ").add_operation (constinArgument_inSyntaxName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 115)), constinArgument_inSyntaxName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("option ").add_operation (constinArgument_inOptionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 121)), constinArgument_inOptionName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("filewrapper ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 127)), constinArgument_inFilewrapperName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("filewrapper template ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 134)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 134)).add_operation (constinArgument_inTemplateName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 134)), constinArgument_inTemplateName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("function ").add_operation (constinArgument_inFunctionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 140)), constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
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

//--------------------------------------------------------------------------------------------------
//
//Function 'procedureNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_procedureNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inProcName,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("procedure ").add_operation (constinArgument_inProcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 146)), constinArgument_inProcName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_procedureNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_procedureNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_procedureNameForUsefulEntitiesGraph (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_procedureNameForUsefulEntitiesGraph ("procedureNameForUsefulEntitiesGraph",
                                                                                     functionWithGenericHeader_procedureNameForUsefulEntitiesGraph,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_procedureNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'typeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_typeNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("type @").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 152)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_typeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_typeNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_typeNameForUsefulEntitiesGraph (operand0,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_typeNameForUsefulEntitiesGraph ("typeNameForUsefulEntitiesGraph",
                                                                                functionWithGenericHeader_typeNameForUsefulEntitiesGraph,
                                                                                & kTypeDescriptor_GALGAS_lstring,
                                                                                1,
                                                                                functionArgs_typeNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'afterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_afterNameForUsefulEntitiesGraph (const GALGAS_location & constinArgument_inLocation,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("after"), constinArgument_inLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_afterNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_afterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_afterNameForUsefulEntitiesGraph (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_afterNameForUsefulEntitiesGraph ("afterNameForUsefulEntitiesGraph",
                                                                                 functionWithGenericHeader_afterNameForUsefulEntitiesGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_afterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'beforeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_beforeNameForUsefulEntitiesGraph (const GALGAS_location & constinArgument_inLocation,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("before"), constinArgument_inLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_beforeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_beforeNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_beforeNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_beforeNameForUsefulEntitiesGraph ("beforeNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_beforeNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_beforeNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'rootRuleNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_rootRuleNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFileExtension,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (GALGAS_string ("rule .").add_operation (constinArgument_inFileExtension.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 170)), constinArgument_inFileExtension.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_rootRuleNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_rootRuleNameForUsefulEntitiesGraph (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_rootRuleNameForUsefulEntitiesGraph ("rootRuleNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_rootRuleNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 183)) ;
  const GALGAS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 184)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_8646 ;
  const GALGAS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8646, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 199)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_9004 ;
  const GALGAS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9004, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 209)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_9084 = var_leftExpression_8646.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_9131 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8646.ptr ())) ;
    if (nullptr == var_left_9131.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_9204 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_9004.ptr ())) ;
      if (nullptr == var_right_9204.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_rightShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_9131.readProperty_mValue ().right_shift_operation (var_right_9204.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 225)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_9473 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8646.ptr ())) ;
      if (nullptr == var_left_9473.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_9546 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_9004.ptr ())) ;
        if (nullptr == var_right_9546.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_rightShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_9473.readProperty_mValue ().right_shift_operation (var_right_9546.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 232)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_9084, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 234)).readProperty_features ().getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 234)).operator_not (SOURCE_FILE ("expression-additive.galgas", 234)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_rightShiftExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_9084, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 235)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_rightShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_9084, temp_9.readProperty_mOperatorLocation (), var_leftExpression_8646, GALGAS_binaryOperator::class_func_rightShift (SOURCE_FILE ("expression-additive.galgas", 244)), var_rightExpression_9004, inCompiler COMMA_HERE) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 255)) ;
  const GALGAS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 256)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_11479 ;
  const GALGAS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11479, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 271)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_11837 ;
  const GALGAS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_11837, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 281)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_11917 = var_leftExpression_11479.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_11964 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11479.ptr ())) ;
    if (nullptr == var_left_11964.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_12037 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_11837.ptr ())) ;
      if (nullptr == var_right_12037.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_leftShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_11964.readProperty_mValue ().left_shift_operation (var_right_12037.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 297)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_12306 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11479.ptr ())) ;
      if (nullptr == var_left_12306.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_12379 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_11837.ptr ())) ;
        if (nullptr == var_right_12379.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_leftShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_12306.readProperty_mValue ().left_shift_operation (var_right_12379.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 304)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_11917, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 306)).readProperty_features ().getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 306)).operator_not (SOURCE_FILE ("expression-additive.galgas", 306)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_leftShiftExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_11917, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 307)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_leftShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_11917, temp_9.readProperty_mOperatorLocation (), var_leftExpression_11479, GALGAS_binaryOperator::class_func_leftShift (SOURCE_FILE ("expression-additive.galgas", 316)), var_rightExpression_11837, inCompiler COMMA_HERE) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 327)) ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 328)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_14319 ;
  const GALGAS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14319, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 343)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14654 ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14319.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14654, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 353)) ;
  {
  const GALGAS_addExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14319.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 364)).readProperty_features ().getter_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 364)), GALGAS_string ("&+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14319, var_rightExpression_14654, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 363)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_14947 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_14319.ptr ())) ;
    if (nullptr == var_leftBigint_14947.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_15027 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_14654.ptr ())) ;
      if (nullptr == var_rightBigint_15027.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_14947.readProperty_mValue ().add_operation (var_rightBigint_15027.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 376)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14319.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_14319, GALGAS_binaryOperator::class_func_addNoOverflow (SOURCE_FILE ("expression-additive.galgas", 383)), var_rightExpression_14654, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 394)) ;
  const GALGAS_addExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 395)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_16710 ;
  const GALGAS_addExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16710, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 409)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_17045 ;
  const GALGAS_addExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16710.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_17045, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 419)) ;
  {
  const GALGAS_addExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16710.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 430)).readProperty_features ().getter_infixAddOperator (SOURCE_FILE ("expression-additive.galgas", 430)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16710, var_rightExpression_17045, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 429)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_17332 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_16710.ptr ())) ;
    if (nullptr == var_leftBigint_17332.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_17412 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_17045.ptr ())) ;
      if (nullptr == var_rightBigint_17412.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_17332.readProperty_mValue ().add_operation (var_rightBigint_17412.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 442)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16710.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_16710, GALGAS_binaryOperator::class_func_add (SOURCE_FILE ("expression-additive.galgas", 449)), var_rightExpression_17045, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 460)) ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 461)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_19105 ;
  const GALGAS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_19105, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 476)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_19440 ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_19105.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_19440, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 486)) ;
  {
  const GALGAS_subExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_19105.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 497)).readProperty_features ().getter_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 497)), GALGAS_string ("&-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_19105, var_rightExpression_19440, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 496)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_19733 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_19105.ptr ())) ;
    if (nullptr == var_leftBigint_19733.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_19813 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_19440.ptr ())) ;
      if (nullptr == var_rightBigint_19813.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_19733.readProperty_mValue ().substract_operation (var_rightBigint_19813.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 509)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_19105.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_19105, GALGAS_binaryOperator::class_func_subNoOverflow (SOURCE_FILE ("expression-additive.galgas", 516)), var_rightExpression_19440, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_subExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 527)) ;
  const GALGAS_subExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 528)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_21496 ;
  const GALGAS_subExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_21496, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 542)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_21831 ;
  const GALGAS_subExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_21496.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_21831, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 552)) ;
  {
  const GALGAS_subExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_21496.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 563)).readProperty_features ().getter_infixSubOperator (SOURCE_FILE ("expression-additive.galgas", 563)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_21496, var_rightExpression_21831, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 562)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_22118 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_21496.ptr ())) ;
    if (nullptr == var_leftBigint_22118.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_22198 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_21831.ptr ())) ;
      if (nullptr == var_rightBigint_22198.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_22118.readProperty_mValue ().substract_operation (var_rightBigint_22198.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 575)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_21496.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_21496, GALGAS_binaryOperator::class_func_sub (SOURCE_FILE ("expression-additive.galgas", 582)), var_rightExpression_21831, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binaryOperatorExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_binaryOperatorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 625)) ;
  GALGAS_string var_leftTemporaryOperand_24173 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_24173, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 627)) ;
  GALGAS_string var_rightTemporaryOperand_24354 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_24354, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 629)) ;
  GALGAS_string var_operatorString_24416 ;
  GALGAS_bool var_hasCompilerOption_24443 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mOperator ().enumValue ()) {
  case GALGAS_binaryOperator::kNotBuilt:
    break ;
  case GALGAS_binaryOperator::kEnum_rightShift:
    {
      var_operatorString_24416 = GALGAS_string ("right_shift_operation") ;
      var_hasCompilerOption_24443 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_leftShift:
    {
      var_operatorString_24416 = GALGAS_string ("left_shift_operation") ;
      var_hasCompilerOption_24443 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_add:
    {
      var_operatorString_24416 = GALGAS_string ("add_operation") ;
      var_hasCompilerOption_24443 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_addNoOverflow:
    {
      var_operatorString_24416 = GALGAS_string ("add_operation_no_ovf") ;
      var_hasCompilerOption_24443 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_sub:
    {
      var_operatorString_24416 = GALGAS_string ("substract_operation") ;
      var_hasCompilerOption_24443 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_subNoOverflow:
    {
      var_operatorString_24416 = GALGAS_string ("substract_operation_no_ovf") ;
      var_hasCompilerOption_24443 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_and:
    {
      var_operatorString_24416 = GALGAS_string ("operator_and") ;
      var_hasCompilerOption_24443 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_or:
    {
      var_operatorString_24416 = GALGAS_string ("operator_or") ;
      var_hasCompilerOption_24443 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_xor:
    {
      var_operatorString_24416 = GALGAS_string ("operator_xor") ;
      var_hasCompilerOption_24443 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24416 = GALGAS_string ("multiply_operation_no_ovf") ;
      var_hasCompilerOption_24443 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation:
    {
      var_operatorString_24416 = GALGAS_string ("multiply_operation") ;
      var_hasCompilerOption_24443 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation:
    {
      var_operatorString_24416 = GALGAS_string ("divide_operation") ;
      var_hasCompilerOption_24443 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24416 = GALGAS_string ("divide_operation_no_ovf") ;
      var_hasCompilerOption_24443 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_modulo_5F_operation:
    {
      var_operatorString_24416 = GALGAS_string ("modulo_operation") ;
      var_hasCompilerOption_24443 = GALGAS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_24173.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)).add_operation (var_operatorString_24416, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)) ;
  outArgument_outCppExpression.plusAssign_operation(var_rightTemporaryOperand_24354, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 678)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_hasCompilerOption_24443.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 680)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 681)) COMMA_SOURCE_FILE ("expression-additive.galgas", 681)) ;
      }
    }
  }
  const GALGAS_binaryOperatorExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 683)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 683)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 103)) ;
  const GALGAS_andExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 104)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_5455 ;
  const GALGAS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_5455, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 118)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_5790 ;
  const GALGAS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_5455.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_5790, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 128)) ;
  {
  const GALGAS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_5455.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 139)).readProperty_features ().getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 139)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_5455, var_rightExpression_5790, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 138)) ;
  }
  const GALGAS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_5455.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_5455, GALGAS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("expression-and.galgas", 150)), var_rightExpression_5790, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 160)) ;
  const GALGAS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 161)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_7462 ;
  const GALGAS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7462, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 175)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7797 ;
  const GALGAS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7462.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7797, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 185)) ;
  {
  const GALGAS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7462.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 196)).readProperty_features ().getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 196)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7462, var_rightExpression_7797, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 195)) ;
  }
  const GALGAS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_7462.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7462, var_rightExpression_7797, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 227)) ;
  GALGAS_string var_leftTemporaryOperand_9268 ;
  const GALGAS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_9268, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 229)) ;
  GALGAS_string var_testVar_9324 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 237)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_9324, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (var_leftTemporaryOperand_9268, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 238)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_9324, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 239)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 239)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 241)) ;
  }
  GALGAS_string var_rightTemporaryOperand_9796 ;
  const GALGAS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_9796, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_9324.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)).add_operation (var_rightTemporaryOperand_9796, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 250)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 251)) ;
  outArgument_outCppExpression = var_testVar_9324 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 75)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4085 ;
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-bang.galgas", 93)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4085, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 90)) ;
  GALGAS_unifiedTypeMapEntry var_type_4160 = var_expression_4085.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMapEntry var_classIndex_4265 ;
    const bool optionalResult4227 = extensionGetter_definition (var_type_4160, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 101)).readProperty_typeKind ().optional_weakReferenceType (var_classIndex_4265) ;
    if (!optionalResult4227) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      const GALGAS_bangExpressionAST temp_2 = this ;
      outArgument_outExpression = GALGAS_bangExpressionForGeneration::init_21__21__21__21_ (var_classIndex_4265, temp_2.readProperty_mOperatorLocation (), var_expression_4085, extensionGetter_definition (var_type_4160, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 106)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_bangExpressionAST temp_3 = this ;
    TC_Array <FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4160, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)).add_operation (GALGAS_string ("' and does not support the '°' operator"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)), fixItArray4  COMMA_SOURCE_FILE ("expression-bang.galgas", 109)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bangExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 131)) ;
  GALGAS_string var_operand_5846 ;
  const GALGAS_bangExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5846, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 133)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 141)) COMMA_SOURCE_FILE ("expression-bang.galgas", 141)) ;
  }
  const GALGAS_bangExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5846.add_operation (GALGAS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 142)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-bang.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 142)) ;
  const GALGAS_bangExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 143)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classFuncExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_classFuncExpressionAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_5153 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_typeName (), joker_5153, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 137)) ;
      }
    }
  }
  const GALGAS_classFuncExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_expressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 139)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedType_6210 ;
  GALGAS_unifiedTypeMapEntry var_classFuncType_6255 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_6317 ;
  GALGAS_bool var_hasCompilerArgument_6368 ;
  {
  const GALGAS_classFuncExpressionAST temp_0 = this ;
  const GALGAS_classFuncExpressionAST temp_1 = this ;
  const GALGAS_classFuncExpressionAST temp_2 = this ;
  const GALGAS_classFuncExpressionAST temp_3 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_typeName (), temp_1.readProperty_classFuncName (), temp_2.readProperty_expressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_6210, var_classFuncType_6255, var_constructorEffectiveParameterList_6317, var_hasCompilerArgument_6368, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 152)) ;
  }
  const GALGAS_classFuncExpressionAST temp_4 = this ;
  GALGAS_lstring var_constructorTypeUsefulnessName_6402 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (extensionGetter_definition (var_classFuncType_6255, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 168)).readProperty_typeName ().readProperty_string (), temp_4.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 168)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_6402 COMMA_SOURCE_FILE ("expression-class-func.galgas", 169)) ;
  }
  const GALGAS_classFuncExpressionAST temp_5 = this ;
  GALGAS_lstring var_returnedTypeUsefulnessName_6641 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (extensionGetter_definition (var_returnedType_6210, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 170)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 170)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_6641 COMMA_SOURCE_FILE ("expression-class-func.galgas", 171)) ;
  }
  const GALGAS_classFuncExpressionAST temp_6 = this ;
  const GALGAS_classFuncExpressionAST temp_7 = this ;
  outArgument_outExpression = GALGAS_classFuncExpressionForGeneration::init_21__21__21__21__21__21_ (var_returnedType_6210, temp_6.readProperty_classFuncName ().readProperty_location (), var_classFuncType_6255, temp_7.readProperty_classFuncName ().readProperty_string (), var_constructorEffectiveParameterList_6317, var_hasCompilerArgument_6368, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&????!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                   const GALGAS_lstring constinArgument_inTypeName,
                                                                                                   const GALGAS_lstring constinArgument_inConstructorName,
                                                                                                   const GALGAS_actualOutputArgumentList constinArgument_inInitializerEffectiveParameterExpressions,
                                                                                                   const GALGAS_location constinArgument_inLocationForOldStyleCollectionInitializerError,
                                                                                                   GALGAS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                                   GALGAS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                                                                                   GALGAS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                                   GALGAS_bool & outArgument_outHasCompilerArgument,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outConstructorType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 205)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-class-func.galgas", 207)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-class-func.galgas", 208)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_classFunctionMap var_classFunctionMap_8651 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 213)).readProperty_classFunctionMap () ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_bool test_4 = GALGAS_bool (ComparisonKind::equal, constinArgument_inConstructorName.readProperty_string ().objectCompare (GALGAS_string ("new"))) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 215)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-class-func.galgas", 215)))) ;
      }
      test_3 = test_4.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_initializerSignature_8864 = extensionGetter_initializerSignature (constinArgument_inInitializerEffectiveParameterExpressions, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 216)) ;
        GALGAS_initializerMap var_initializerMap_8963 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 217)).readProperty_initializerMap () ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = var_initializerMap_8963.getter_hasKey (var_initializerSignature_8864 COMMA_SOURCE_FILE ("expression-class-func.galgas", 218)).operator_not (SOURCE_FILE ("expression-class-func.galgas", 218)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("initializer @").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 220)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 220)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 220)).add_operation (var_initializerSignature_8864, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 221)).add_operation (GALGAS_string (" does not exist"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 221)), fixItArray6  COMMA_SOURCE_FILE ("expression-class-func.galgas", 219)) ;
          }
        }
      }
    }
    GALGAS_functionSignature var_constructorFormalArgumentTypeList_9321 ;
    const cMapElement_classFunctionMap * objectArray_9359 = (const cMapElement_classFunctionMap *) var_classFunctionMap_8651.readAccessForWithInstruction (constinArgument_inConstructorName.readProperty_string ()) ;
    if (nullptr != objectArray_9359) {
        macroValidSharedObject (objectArray_9359, cMapElement_classFunctionMap) ;
      var_constructorFormalArgumentTypeList_9321 = objectArray_9359->mProperty_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_9359->mProperty_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_9359->mProperty_mReturnedType ;
    }else{
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (ComparisonKind::equal, var_classFunctionMap_8651.getter_count (SOURCE_FILE ("expression-class-func.galgas", 231)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 233)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 233)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 233)), fixItArray8  COMMA_SOURCE_FILE ("expression-class-func.galgas", 232)) ;
          var_constructorFormalArgumentTypeList_9321.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <FixItDescription> fixItArray9 ;
        appendFixItActions (fixItArray9, kFixItReplace, var_classFunctionMap_8651.getter_keyList (SOURCE_FILE ("expression-class-func.galgas", 241))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 238)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 238)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 238)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 239)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 239)), fixItArray9  COMMA_SOURCE_FILE ("expression-class-func.galgas", 237)) ;
        var_constructorFormalArgumentTypeList_9321.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas", 245)).objectCompare (var_constructorFormalArgumentTypeList_9321.getter_count (SOURCE_FILE ("expression-class-func.galgas", 245)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 247)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 247)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 248)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 247)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 248)).add_operation (var_constructorFormalArgumentTypeList_9321.getter_count (SOURCE_FILE ("expression-class-func.galgas", 249)).getter_string (SOURCE_FILE ("expression-class-func.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 248)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 249)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas", 250)).getter_string (SOURCE_FILE ("expression-class-func.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 249)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 250)), fixItArray11  COMMA_SOURCE_FILE ("expression-class-func.galgas", 246)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    cEnumerator_actualOutputArgumentList enumerator_10772 (constinArgument_inInitializerEffectiveParameterExpressions, EnumerationOrder::up) ;
    cEnumerator_functionSignature enumerator_10837 (var_constructorFormalArgumentTypeList_9321, EnumerationOrder::up) ;
    while (enumerator_10772.hasCurrentObject () && enumerator_10837.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_11203 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10772.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10837.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11203, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 255)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10837.current (HERE).readProperty_mFormalArgumentType (), var_exp_11203.readProperty_mResultType (), enumerator_10772.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_11203, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 264)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_11203  COMMA_SOURCE_FILE ("expression-class-func.galgas", 270)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::notEqual, enumerator_10837.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10772.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (ComparisonKind::notEqual, enumerator_10837.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = enumerator_10837.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 273)) ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_11567 = GALGAS_string ("!").add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 272)) ;
          TC_Array <FixItDescription> fixItArray15 ;
          appendFixItActions (fixItArray15, kFixItReplace, var_s_11567) ;
          inCompiler->emitSemanticError (enumerator_10772.current (HERE).readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11567, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 277)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 277)), fixItArray15  COMMA_SOURCE_FILE ("expression-class-func.galgas", 276)) ;
        }
      }
      enumerator_10772.gotoNextObject () ;
      enumerator_10837.gotoNextObject () ;
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    GALGAS_bool test_17 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()) ;
    if (kBoolTrue == test_17.boolEnum ()) {
      test_17 = GALGAS_bool (ComparisonKind::equal, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas", 283)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    }
    test_16 = test_17.boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_stringset temp_18 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 284)) ;
      temp_18.enterElement (GALGAS_string ("emptyList"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 284)) ;
      temp_18.enterElement (GALGAS_string ("emptyMap"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 284)) ;
      temp_18.enterElement (GALGAS_string ("emptySortedList"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 284)) ;
      temp_18.enterElement (GALGAS_string ("emptyDict"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 284)) ;
      GALGAS_stringset var_oldCollectionInitializers_12002 = temp_18 ;
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_oldCollectionInitializers_12002.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-class-func.galgas", 285)).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, GALGAS_string (" ()")) ;
          inCompiler->emitSemanticError (constinArgument_inLocationForOldStyleCollectionInitializerError, GALGAS_string ("old style collection initializer call (due to '--error-old-syle-collection-initializer' option)"), fixItArray20  COMMA_SOURCE_FILE ("expression-class-func.galgas", 286)) ;
        }
      }
    }
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorUsingNewInsteadOfInit.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_stringset temp_22 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 292)) ;
      temp_22.enterElement (GALGAS_string ("emptyGraph"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 292)) ;
      temp_22.enterElement (GALGAS_string ("new"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 292)) ;
      GALGAS_stringset var_oldInitializers_12462 = temp_22 ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        test_23 = var_oldInitializers_12462.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-class-func.galgas", 293)).boolEnum () ;
        if (kBoolTrue == test_23) {
          TC_Array <FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("old style constructor, use initializer '.init (...)'"), fixItArray24  COMMA_SOURCE_FILE ("expression-class-func.galgas", 294)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       GALGAS_string & outArgument_outCppExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classFuncExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 318)) ;
  GALGAS_stringlist var_parameterList_13577 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_classFuncExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_13605 (temp_1.readProperty_mEffectiveParameterList (), EnumerationOrder::up) ;
  while (enumerator_13605.hasCurrentObject ()) {
    GALGAS_string var_parameter_13835 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_13605.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_13835, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 321)) ;
    var_parameterList_13577.addAssign_operation (var_parameter_13835  COMMA_SOURCE_FILE ("expression-class-func.galgas", 328)) ;
    enumerator_13605.gotoNextObject () ;
  }
  const GALGAS_classFuncExpressionForGeneration temp_2 = this ;
  const GALGAS_classFuncExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mConstructorType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 330)).add_operation (GALGAS_string ("::class_func_"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 330)).add_operation (temp_3.readProperty_classFuncName ().getter_identifierRepresentation (SOURCE_FILE ("expression-class-func.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 331)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 331)) ;
  cEnumerator_stringlist enumerator_14104 (var_parameterList_13577, EnumerationOrder::up) ;
  while (enumerator_14104.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_14104.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 334)) ;
    if (enumerator_14104.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 335)) ;
    }
    enumerator_14104.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma_14226 = GALGAS_bool (ComparisonKind::greaterThan, var_parameterList_13577.getter_count (SOURCE_FILE ("expression-class-func.galgas", 337)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classFuncExpressionForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needsComma_14226.boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 340)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 342)) COMMA_SOURCE_FILE ("expression-class-func.galgas", 342)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 343)) ;
      var_needsComma_14226 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_needsComma_14226.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_classFuncExpressionForGeneration temp_8 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 347)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 347)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_classFuncExpressionForGeneration temp_9 = this ;
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 349)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 349)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_collectionValueAST temp_0 = this ;
  cEnumerator_collectionValueElementList enumerator_4193 (temp_0.readProperty_mExpressionList (), EnumerationOrder::up) ;
  while (enumerator_4193.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4193.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 112)) ;
    enumerator_4193.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_4856 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_collectionValueAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_targetType_4856 = constinArgument_inType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_collectionValueAST temp_2 = this ;
    var_targetType_4856 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 131)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::equal, var_targetType_4856.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-collection-value.galgas", 134)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_collectionValueAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 135)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_4856, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 136)).readProperty_supportCollectionValue ().operator_not (SOURCE_FILE ("expression-collection-value.galgas", 136)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_collectionValueAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (extensionGetter_definition (var_targetType_4856, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 138)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 138)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 138)), fixItArray8  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 137)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_initializerMap var_initializerMap_5357 = extensionGetter_definition (var_targetType_4856, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 141)).readProperty_initializerMap () ;
      GALGAS_functionSignature var_emptyArgumentList_5442 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_initializerMap_5357.getter_hasKey (extensionGetter_initializerSignature (var_emptyArgumentList_5442, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 143)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 143)).operator_not (SOURCE_FILE ("expression-collection-value.galgas", 143)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_collectionValueAST temp_10 = this ;
          const GALGAS_collectionValueAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 144)).add_operation (GALGAS_string (" has no init () initializer"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 144)), fixItArray12  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 144)) ;
        }
      }
      GALGAS_unifiedTypeMapEntry var_elementType_5657 = extensionGetter_definition (var_targetType_4856, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 146)).readProperty_typeForEnumeratedElement () ;
      GALGAS_collectionValueElementListForGeneration var_expressionListForGeneration_5771 = GALGAS_collectionValueElementListForGeneration::init (inCompiler COMMA_HERE) ;
      const GALGAS_collectionValueAST temp_13 = this ;
      cEnumerator_collectionValueElementList enumerator_5826 (temp_13.readProperty_mExpressionList (), EnumerationOrder::up) ;
      while (enumerator_5826.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expressionForGeneration_6141 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5826.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_elementType_5657, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_6141, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 149)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_elementType_5657, var_expressionForGeneration_6141.readProperty_mResultType (), enumerator_5826.current_location (HERE), var_expressionForGeneration_6141, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 159)) ;
        }
        var_expressionListForGeneration_5771.addAssign_operation (var_expressionForGeneration_6141, enumerator_5826.current_location (HERE)  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 165)) ;
        enumerator_5826.gotoNextObject () ;
      }
      const GALGAS_collectionValueAST temp_14 = this ;
      outArgument_outExpression = GALGAS_expressionCollectionForGeneration::init_21__21__21_ (var_targetType_4856, temp_14.readProperty_mEndOfCollectionValue (), var_expressionListForGeneration_5771, inCompiler COMMA_HERE) ;
      GALGAS_lstring var_typeUsefulnessName_6694 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4856, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 173)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 173)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_6694 COMMA_SOURCE_FILE ("expression-collection-value.galgas", 174)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 202)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-collection-value.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 204)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 205)) ;
  const GALGAS_expressionCollectionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 207)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 207)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 207)) ;
  const GALGAS_expressionCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 208)) ;
  const GALGAS_expressionCollectionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("::init (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 209)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 209)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 209)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 210)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 210)) ;
  }
  const GALGAS_expressionCollectionForGeneration temp_4 = this ;
  cEnumerator_collectionValueElementListForGeneration enumerator_8576 (temp_4.readProperty_expressionList (), EnumerationOrder::up) ;
  while (enumerator_8576.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_8785 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8576.current_expression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_8785, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 213)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (".enterElement ("), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 220)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(var_argumentCppName_8785.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 221)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 222)).add_operation (extensionGetter_commaSourceFile (enumerator_8576.current_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 222)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 222)) ;
    enumerator_8576.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 181)) ;
  const GALGAS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 182)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_8775 ;
  const GALGAS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8775, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 197)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_9114 ;
  const GALGAS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8775.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9114, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 207)) ;
  GALGAS_bool var_isEquatable_9159 = extensionGetter_definition (var_leftExpression_8775.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 217)).readProperty_features ().getter_equatable (SOURCE_FILE ("expression-comparison.galgas", 217)) ;
  GALGAS_bool var_isComparable_9240 = extensionGetter_definition (var_leftExpression_8775.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 218)).readProperty_features ().getter_comparable (SOURCE_FILE ("expression-comparison.galgas", 218)) ;
  GALGAS_bool var_isReferenceEquatable_9323 = extensionGetter_definition (var_leftExpression_8775.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 219)).readProperty_features ().getter_referenceEquatable (SOURCE_FILE ("expression-comparison.galgas", 219)) ;
  GALGAS_bool var_operatorIsAvailable_9428 ;
  GALGAS_string var_operatorName_9462 ;
  const GALGAS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
    {
      var_operatorName_9462 = GALGAS_string ("==") ;
      var_operatorIsAvailable_9428 = var_isEquatable_9159 ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
    {
      var_operatorName_9462 = GALGAS_string ("!=") ;
      var_operatorIsAvailable_9428 = var_isEquatable_9159 ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_9462 = GALGAS_string ("<=") ;
      var_operatorIsAvailable_9428 = var_isComparable_9240 ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_9462 = GALGAS_string ("<") ;
      var_operatorIsAvailable_9428 = var_isComparable_9240 ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_9462 = GALGAS_string (">=") ;
      var_operatorIsAvailable_9428 = var_isComparable_9240 ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_9462 = GALGAS_string (">") ;
      var_operatorIsAvailable_9428 = var_isComparable_9240 ;
    }
    break ;
  case GALGAS_comparison::kEnum_sameInstance:
    {
      var_operatorName_9462 = GALGAS_string ("===") ;
      var_operatorIsAvailable_9428 = var_isReferenceEquatable_9323 ;
    }
    break ;
  case GALGAS_comparison::kEnum_differentInstances:
    {
      var_operatorName_9462 = GALGAS_string ("!==") ;
      var_operatorIsAvailable_9428 = var_isReferenceEquatable_9323 ;
    }
    break ;
  }
  {
  const GALGAS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (var_operatorIsAvailable_9428, var_operatorName_9462, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8775, var_rightExpression_9114, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 249)) ;
  }
  const GALGAS_comparisonExpressionAST temp_4 = this ;
  const GALGAS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_8775, temp_5.readProperty_mComparison (), var_rightExpression_9114, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_comparisonExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 285)) ;
  GALGAS_string var_leftTemporaryOperand_11689 ;
  const GALGAS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_11689, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 287)) ;
  GALGAS_string var_rightTemporaryOperand_11894 ;
  const GALGAS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_11894, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 295)) ;
  GALGAS_string var_operatorName_11953 ;
  const GALGAS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
  case GALGAS_comparison::kEnum_sameInstance:
    {
      var_operatorName_11953 = GALGAS_string ("ComparisonKind::equal") ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
  case GALGAS_comparison::kEnum_differentInstances:
    {
      var_operatorName_11953 = GALGAS_string ("ComparisonKind::notEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_11953 = GALGAS_string ("ComparisonKind::lowerOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_11953 = GALGAS_string ("ComparisonKind::lowerThan") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_11953 = GALGAS_string ("ComparisonKind::greaterOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_11953 = GALGAS_string ("ComparisonKind::greaterThan") ;
    }
    break ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_operatorName_11953, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (var_leftTemporaryOperand_11689, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (var_rightTemporaryOperand_11894, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_5431 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 142)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5431 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 143)) ;
  }
  GALGAS_lstring var_filewrapperPath_5753 ;
  GALGAS_bool var_isInternal_5792 ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_1 = this ;
  GALGAS_lstringlist joker_5773_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_5773_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_5773_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_5773_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), var_filewrapperPath_5753, joker_5773_4, joker_5773_3, joker_5773_2, joker_5773_1, var_isInternal_5792, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 145)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_5792.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_3 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_5856 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_3.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 153)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 154)).objectCompare (var_filewrapperDeclarationLocation_5856.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 154)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_5856.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)), fixItArray7  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)) ;
        }
      }
    }
  }
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_8 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_9 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_10 = this ;
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("filewrapper"), temp_8.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 160)), temp_9.readProperty_mFilewrapperName ().readProperty_location (), temp_10.readProperty_mFilewrapperName ().readProperty_string (), var_filewrapperPath_5753.readProperty_string (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  cEnumerator_actualOutputArgumentList enumerator_6713 (temp_0.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_6713.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_6713.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 172)) ;
    enumerator_6713.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_1 = this ;
  GALGAS_lstring var_usefulnessName_7382 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), temp_1.readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 187)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_7382 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 188)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_7722 ;
  GALGAS_bool var_isInternal_7761 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_2 = this ;
  GALGAS_lstring joker_7684_4 ; // Joker input parameter
  GALGAS_lstringlist joker_7684_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_7684_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_7684_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_2.readProperty_mFilewrapperName (), joker_7684_4, joker_7684_3, joker_7684_2, joker_7684_1, var_filewrapperTemplateMap_7722, var_isInternal_7761, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_isInternal_7761.boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_4 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_7826 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_4.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperTemplateInExpressionAST temp_6 = this ;
        test_5 = GALGAS_bool (ComparisonKind::notEqual, temp_6.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)).objectCompare (var_filewrapperDeclarationLocation_7826.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_filewrapperTemplateInExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_7826.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)) ;
        }
      }
    }
  }
  GALGAS_functionSignature var_templateSignature_8280 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_9 = this ;
  GALGAS_lstring joker_8298 ; // Joker input parameter
  var_filewrapperTemplateMap_7722.method_searchKey (temp_9.readProperty_mFilewrapperTemplateName (), var_templateSignature_8280, joker_8298, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 204)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_8369 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_filewrapperTemplateInExpressionAST temp_11 = this ;
    test_10 = GALGAS_bool (ComparisonKind::notEqual, temp_11.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 207)).objectCompare (var_templateSignature_8280.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_12 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_13 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_14 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mFilewrapperTemplateName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mFilewrapperTemplateName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (var_templateSignature_8280.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 210)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 210)).add_operation (temp_15.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 211)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 210)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 211)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 208)) ;
      var_effectiveParameterList_8369.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_effectiveParameterList_8369 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GALGAS_filewrapperTemplateInExpressionAST temp_17 = this ;
    cEnumerator_actualOutputArgumentList enumerator_8868 (temp_17.readProperty_mExpressions (), EnumerationOrder::up) ;
    cEnumerator_functionSignature enumerator_8954 (var_templateSignature_8280, EnumerationOrder::up) ;
    while (enumerator_8868.hasCurrentObject () && enumerator_8954.hasCurrentObject ()) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8954.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8868.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_string temp_19 ;
          const enumGalgasBool test_20 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8954.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = enumerator_8954.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 217)) ;
          }else if (kBoolFalse == test_20) {
            temp_19 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_9064 = GALGAS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 217)) ;
          TC_Array <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, kFixItReplace, var_s_9064) ;
          inCompiler->emitSemanticError (enumerator_8868.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_9064, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)), fixItArray21  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_9551 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8868.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8954.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9551, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 220)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8954.current_mFormalArgumentType (HERE), var_exp_9551.readProperty_mResultType (), enumerator_8868.current_mEndOfExpressionLocation (HERE), var_exp_9551, inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 229)) ;
      }
      var_effectiveParameterList_8369.addAssign_operation (var_exp_9551  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 230)) ;
      enumerator_8868.gotoNextObject () ;
      enumerator_8954.gotoNextObject () ;
    }
  }
  const GALGAS_filewrapperTemplateInExpressionAST temp_22 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_23 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_24 = this ;
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mFilewrapperName ().readProperty_location (), temp_23.readProperty_mFilewrapperName ().readProperty_string (), temp_24.readProperty_mFilewrapperTemplateName ().readProperty_string (), var_effectiveParameterList_8369, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_10788 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 260)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_10788 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 261)) ;
  }
  GALGAS_stringlist var_directoryList_10996 ;
  GALGAS_string var_fileName_11024 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_filewrapperInExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mFilewrapperPath ().readProperty_string ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 265)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_filewrapperInExpressionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)) ;
      var_directoryList_10996.drop () ; // Release error dropped variable
      var_fileName_11024.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_6 = this ;
      test_5 = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-filewrapper.galgas", 267)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperInExpressionAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 268)) ;
        var_directoryList_10996.drop () ; // Release error dropped variable
        var_fileName_11024.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_9 = this ;
      var_directoryList_10996 = temp_9.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 270)) ;
      {
      var_directoryList_10996.setter_popLast (var_fileName_11024, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 271)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_11604 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_11653 ;
  GALGAS_bool var_isInternal_11699 ;
  const GALGAS_filewrapperInExpressionAST temp_10 = this ;
  GALGAS_lstring joker_11569 ; // Joker input parameter
  GALGAS_lstringlist joker_11576 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_11681 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_10.readProperty_mFilewrapperName (), joker_11569, joker_11576, var_filewrapperFileMap_11604, var_filewrapperDirectoryMap_11653, joker_11681, var_isInternal_11699, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 274)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_isInternal_11699.boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_filewrapperInExpressionAST temp_12 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_11763 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_12.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 285)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_filewrapperInExpressionAST temp_14 = this ;
        test_13 = GALGAS_bool (ComparisonKind::notEqual, temp_14.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)).objectCompare (var_filewrapperDeclarationLocation_11763.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_filewrapperInExpressionAST temp_15 = this ;
          TC_Array <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_11763.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)) ;
        }
      }
    }
  }
  GALGAS_string var_builtPath_12156 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_11653.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 292)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 292)).isValid ()) {
    uint32_t variant_12173 = var_filewrapperDirectoryMap_11653.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 292)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 292)).uintValue () ;
    bool loop_12173 = true ;
    while (loop_12173) {
      loop_12173 = GALGAS_bool (ComparisonKind::greaterThan, var_directoryList_10996.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 293)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_12173) {
        loop_12173 = GALGAS_bool (ComparisonKind::greaterThan, var_directoryList_10996.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 293)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_12173 && (0 == variant_12173)) {
        loop_12173 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-filewrapper.galgas", 292)) ;
      }
      if (loop_12173) {
        variant_12173 -- ;
        GALGAS_string var_directoryName_12288 ;
        {
        var_directoryList_10996.setter_popFirst (var_directoryName_12288, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 294)) ;
        }
        var_builtPath_12156.plusAssign_operation(var_directoryName_12288.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 295)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_11653.getter_hasKey (var_directoryName_12288 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)).boolEnum () ;
          if (kBoolTrue == test_17) {
            GALGAS_uint joker_12561 ; // Joker input parameter
            var_filewrapperDirectoryMap_11653.method_searchKey (GALGAS_lstring::init_21__21_ (var_directoryName_12288, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 298)), inCompiler COMMA_HERE), var_filewrapperFileMap_11604, var_filewrapperDirectoryMap_11653, joker_12561, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 297)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GALGAS_filewrapperInExpressionAST temp_18 = this ;
          const GALGAS_filewrapperInExpressionAST temp_19 = this ;
          TC_Array <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_builtPath_12156, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)), fixItArray20  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)) ;
          var_filewrapperFileMap_11604.drop () ; // Release error dropped variable
          var_directoryList_10996 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_12819 ;
  GALGAS_bool var_isTextFile_12841 ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_filewrapperFileMap_11604.getter_hasKey (var_fileName_11024 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 310)).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_string joker_12972 ; // Joker input parameter
      GALGAS_uint joker_12987 ; // Joker input parameter
      var_filewrapperFileMap_11604.method_searchKey (GALGAS_lstring::init_21__21_ (var_fileName_11024, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 311)), inCompiler COMMA_HERE), joker_12972, var_isTextFile_12841, joker_12987, var_fileIndex_12819, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 311)) ;
    }
  }
  if (kBoolFalse == test_21) {
    const GALGAS_filewrapperInExpressionAST temp_22 = this ;
    const GALGAS_filewrapperInExpressionAST temp_23 = this ;
    TC_Array <FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_fileName_11024, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (var_builtPath_12156, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)), fixItArray24  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 313)) ;
    var_fileIndex_12819.drop () ; // Release error dropped variable
    var_isTextFile_12841.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMapEntry temp_25 ;
  const enumGalgasBool test_26 = var_isTextFile_12841.boolEnum () ;
  if (kBoolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  }else if (kBoolFalse == test_26) {
    temp_25 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("data"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 321)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 321)) ;
  }
  const GALGAS_filewrapperInExpressionAST temp_27 = this ;
  const GALGAS_filewrapperInExpressionAST temp_28 = this ;
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::init_21__21__21__21__21_ (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_12819, var_isTextFile_12841, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 346))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 346)) ;
  const GALGAS_filewrapperInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 367))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 367)) ;
  GALGAS_stringlist var_parameterList_15289 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_15327 (temp_1.readProperty_mActualOutputParameterList (), EnumerationOrder::up) ;
  while (enumerator_15327.hasCurrentObject ()) {
    GALGAS_string var_parameter_15540 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_15327.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_15540, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 370)) ;
    var_parameterList_15289.addAssign_operation (var_parameter_15540  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 377)) ;
    enumerator_15327.gotoNextObject () ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_2 = this ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (temp_2.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (temp_3.readProperty_mFilewrapperTemplateName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 380)) ;
  cEnumerator_stringlist enumerator_15822 (var_parameterList_15289, EnumerationOrder::up) ;
  while (enumerator_15822.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_15822.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 382)) ;
    enumerator_15822.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 384)) COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 384)) ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405)) ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_1 = this ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mIsTextFile ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("GALGAS_string") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string ("GALGAS_data") ;
  }
  outArgument_outCppExpression = temp_2 ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_4 = this ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  cEnumerator_actualOutputArgumentList enumerator_4491 (temp_0.readProperty_mExpressionList (), EnumerationOrder::up) ;
  while (enumerator_4491.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4491.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 110)) ;
    enumerator_4491.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_5154 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 125)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5154 COMMA_SOURCE_FILE ("expression-function-call.galgas", 126)) ;
  }
  GALGAS_functionSignature var_functionSignature_5454 ;
  GALGAS_unifiedTypeMapEntry var_resultType_5502 ;
  GALGAS_bool var_isInternal_5528 ;
  const GALGAS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_5454, var_resultType_5502, var_isInternal_5528, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 128)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_5528.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_functionCallExpressionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_5592 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 136)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_functionCallExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)).objectCompare (var_procDeclarationLocation_5592.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_functionCallExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_5592.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_functionCallExpressionAST temp_9 = this ;
    test_8 = GALGAS_bool (ComparisonKind::notEqual, var_functionSignature_5454.getter_count (SOURCE_FILE ("expression-function-call.galgas", 142)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 142)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_functionCallExpressionAST temp_10 = this ;
      const GALGAS_functionCallExpressionAST temp_11 = this ;
      const GALGAS_functionCallExpressionAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (var_functionSignature_5454.getter_count (SOURCE_FILE ("expression-function-call.galgas", 144)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 145)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 145)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 145)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas", 143)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_6314 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GALGAS_functionCallExpressionAST temp_14 = this ;
    cEnumerator_functionSignature enumerator_6413 (var_functionSignature_5454, EnumerationOrder::up) ;
    cEnumerator_actualOutputArgumentList enumerator_6450 (temp_14.readProperty_mExpressionList (), EnumerationOrder::up) ;
    while (enumerator_6413.hasCurrentObject () && enumerator_6450.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_6789 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6450.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_6413.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6789, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 151)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_6413.current (HERE).readProperty_mFormalArgumentType (), var_expression_6789.readProperty_mResultType (), enumerator_6450.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_6789, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 160)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (ComparisonKind::notEqual, enumerator_6413.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_6450.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (ComparisonKind::notEqual, enumerator_6413.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_6413.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 168)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_7105 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 167)) ;
          TC_Array <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_7105) ;
          inCompiler->emitSemanticError (enumerator_6450.current (HERE).readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_7105, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)) ;
        }
      }
      var_semanticExpressionListForGeneration_6314.addAssign_operation (var_expression_6789  COMMA_SOURCE_FILE ("expression-function-call.galgas", 174)) ;
      enumerator_6413.gotoNextObject () ;
      enumerator_6450.gotoNextObject () ;
    }
    const GALGAS_functionCallExpressionAST temp_19 = this ;
    const GALGAS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_5502, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_6314, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 201)) ;
  const GALGAS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 203))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 203)) ;
  GALGAS_stringlist var_parameterList_8679 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_functionCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_8719 (temp_2.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_8719.hasCurrentObject ()) {
    GALGAS_string var_parameter_8890 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8719.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_8890, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 207)) ;
    var_parameterList_8679.addAssign_operation (var_parameter_8890  COMMA_SOURCE_FILE ("expression-function-call.galgas", 208)) ;
    enumerator_8719.gotoNextObject () ;
  }
  const GALGAS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 210)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 210)) ;
  cEnumerator_stringlist enumerator_9042 (var_parameterList_8679, EnumerationOrder::up) ;
  while (enumerator_9042.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_9042.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 212)) ;
    enumerator_9042.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 214)) COMMA_SOURCE_FILE ("expression-function-call.galgas", 214)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 215)) ;
  const GALGAS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 63)) ;
  const GALGAS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mActualArgumentList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 64)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_getterCallExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionAST *> (temp_1.readProperty_mReceiver ().ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_getterCallExpressionAST temp_2 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 79)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_receiverExpression_4270 ;
  const GALGAS_getterCallExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 85)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_4270, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 82)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_4324 = var_receiverExpression_4270.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_getterCallExpressionAST temp_5 = this ;
    GALGAS_methodKind var_kind_4531 ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_4549 ;
    GALGAS_location var_unused_0_4587 ;
    GALGAS_bool var_hasCompilerArgument_4608 ;
    GALGAS_unifiedTypeMapEntry var_returnedType_4662 ;
    GALGAS_methodQualifier var_unused_0_4684 ;
    GALGAS_string var_replacementGetter_4699 ;
    const bool optionalResult4475 = extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 93)).readProperty_getterMap ().optional_searchKey (temp_5.readProperty_mGetterName ().readProperty_string (), var_kind_4531, var_getterFormalArgumentTypeList_4549, var_unused_0_4587, var_hasCompilerArgument_4608, var_returnedType_4662, var_unused_0_4684, var_replacementGetter_4699) ;
    if (!optionalResult4475) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        GALGAS_bool test_7 = GALGAS_bool (ComparisonKind::notEqual, var_replacementGetter_4699.objectCompare (GALGAS_string::makeEmptyString ())) ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_6 = test_7.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_getterCallExpressionAST temp_8 = this ;
          TC_Array <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_replacementGetter_4699) ;
          inCompiler->emitSemanticError (temp_8.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray9  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 103)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_getterCallExpressionAST temp_11 = this ;
        GALGAS_bool test_12 = temp_11.readProperty_errorOnGetterCallInsteadOfPropertyRead () ;
        if (kBoolTrue == test_12.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_13 = this ;
          test_12 = extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).readProperty_propertyMap ().getter_hasKey (temp_13.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)) ;
        }
        GALGAS_bool test_14 = test_12 ;
        if (kBoolTrue == test_14.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_15 = this ;
          test_14 = GALGAS_bool (ComparisonKind::equal, temp_15.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 107)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        }
        test_10 = test_14.boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_getterCallExpressionAST temp_16 = this ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray17  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 108)) ;
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        const GALGAS_getterCallExpressionAST temp_19 = this ;
        test_18 = GALGAS_bool (ComparisonKind::notEqual, temp_19.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 111)).objectCompare (var_getterFormalArgumentTypeList_4549.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 111)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          const GALGAS_getterCallExpressionAST temp_20 = this ;
          const GALGAS_getterCallExpressionAST temp_21 = this ;
          const GALGAS_getterCallExpressionAST temp_22 = this ;
          TC_Array <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_21.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).add_operation (var_getterFormalArgumentTypeList_4549.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 113)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 113)).add_operation (temp_22.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 114)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 113)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 114)), fixItArray23  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_18) {
        GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_5719 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
        const GALGAS_getterCallExpressionAST temp_24 = this ;
        cEnumerator_actualOutputArgumentList enumerator_5799 (temp_24.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
        cEnumerator_functionSignature enumerator_5904 (var_getterFormalArgumentTypeList_4549, EnumerationOrder::up) ;
        while (enumerator_5799.hasCurrentObject () && enumerator_5904.hasCurrentObject ()) {
          GALGAS_semanticExpressionForGeneration var_exp_6274 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5799.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5904.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_6274, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 119)) ;
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            test_25 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5904.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5799.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_25) {
              GALGAS_string temp_26 ;
              const enumGalgasBool test_27 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5904.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_27) {
                temp_26 = enumerator_5904.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 129)) ;
              }else if (kBoolFalse == test_27) {
                temp_26 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_6381 = GALGAS_string ("!").add_operation (temp_26, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 129)) ;
              TC_Array <FixItDescription> fixItArray28 ;
              appendFixItActions (fixItArray28, kFixItReplace, var_s_6381) ;
              inCompiler->emitSemanticError (enumerator_5799.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_6381, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)), fixItArray28  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5904.current_mFormalArgumentType (HERE), var_exp_6274.readProperty_mResultType (), enumerator_5799.current_mEndOfExpressionLocation (HERE), var_exp_6274, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 132)) ;
          }
          var_constructorEffectiveParameterList_5719.addAssign_operation (var_exp_6274  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 133)) ;
          enumerator_5799.gotoNextObject () ;
          enumerator_5904.gotoNextObject () ;
        }
        const GALGAS_getterCallExpressionAST temp_29 = this ;
        GALGAS_string temp_30 ;
        const enumGalgasBool test_31 = GALGAS_bool (ComparisonKind::equal, var_replacementGetter_4699.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_31) {
          const GALGAS_getterCallExpressionAST temp_32 = this ;
          temp_30 = temp_32.readProperty_mGetterName ().readProperty_string () ;
        }else if (kBoolFalse == test_31) {
          temp_30 = var_replacementGetter_4699 ;
        }
        outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_4662, temp_29.readProperty_mGetterName ().readProperty_location (), var_kind_4531, var_receiverExpression_4270, GALGAS_stringlist::init (inCompiler COMMA_HERE), temp_30, var_constructorEffectiveParameterList_5719, var_hasCompilerArgument_4608, inCompiler COMMA_HERE) ;
        enumGalgasBool test_33 = kBoolTrue ;
        if (kBoolTrue == test_33) {
          GALGAS_bool test_34 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_galgas_34_ () ;
          if (kBoolTrue == test_34.boolEnum ()) {
            const GALGAS_getterCallExpressionAST temp_35 = this ;
            test_34 = GALGAS_bool (ComparisonKind::equal, temp_35.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 146)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
          }
          GALGAS_bool test_36 = test_34 ;
          if (kBoolTrue == test_36.boolEnum ()) {
            test_36 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnGetterCallWithNoArgument.readProperty_value ()) ;
          }
          test_33 = test_36.boolEnum () ;
          if (kBoolTrue == test_33) {
            const GALGAS_getterCallExpressionAST temp_37 = this ;
            TC_Array <FixItDescription> fixItArray38 ;
            fixItArray38.appendObject (FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (temp_37.readProperty_mExpressionLocation (), GALGAS_string ("getter with no argument, remove parenthesis"), fixItArray38  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 148)) ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_39 = kBoolTrue ;
    if (kBoolTrue == test_39) {
      const GALGAS_getterCallExpressionAST temp_40 = this ;
      test_39 = GALGAS_bool (ComparisonKind::equal, temp_40.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 152)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_39) {
        const GALGAS_getterCallExpressionAST temp_41 = this ;
        GALGAS_AccessControl var_accessControl_7663 ;
        GALGAS_bool var_unused_0_7678 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_7685 ;
        const bool optionalResult7623 = extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 152)).readProperty_propertyMap ().optional_searchKey (temp_41.readProperty_mGetterName ().readProperty_string (), var_accessControl_7663, var_unused_0_7678, var_propertyType_7685) ;
        if (!optionalResult7623) {
          test_39 = kBoolFalse ;
        }
        if (kBoolTrue == test_39) {
          const GALGAS_getterCallExpressionAST temp_42 = this ;
          extensionMethod_checkGetAccess (var_accessControl_7663, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_42.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 153)) ;
          const GALGAS_getterCallExpressionAST temp_43 = this ;
          const GALGAS_getterCallExpressionAST temp_44 = this ;
          outArgument_outExpression = GALGAS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_propertyType_7685, temp_43.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4270, temp_44.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
          enumGalgasBool test_45 = kBoolTrue ;
          if (kBoolTrue == test_45) {
            const GALGAS_getterCallExpressionAST temp_46 = this ;
            test_45 = temp_46.readProperty_errorOnGetterCallInsteadOfPropertyRead ().boolEnum () ;
            if (kBoolTrue == test_45) {
              const GALGAS_getterCallExpressionAST temp_47 = this ;
              TC_Array <FixItDescription> fixItArray48 ;
              inCompiler->emitSemanticError (temp_47.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray48  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 161)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_39) {
      GALGAS_uint var_matchingReaderCount_8324 = GALGAS_uint (uint32_t (0U)) ;
      enumGalgasBool test_49 = kBoolTrue ;
      if (kBoolTrue == test_49) {
        test_49 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 166)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-getter-call.galgas", 166)))).boolEnum () ;
        if (kBoolTrue == test_49) {
          GALGAS_functionSignature var_getterFormalArgumentTypeList_8443 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
          GALGAS_bool var_hasCompilerArgument_8489 = GALGAS_bool (true) ;
          GALGAS_unifiedTypeMapEntry var_returnedType_8528 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 169)) ;
          GALGAS_methodKind var_kind_8581 = GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas", 170)) ;
          GALGAS_stringlist var_fieldList_8643 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_string var_obsoletedByGetter_8670 = GALGAS_string::makeEmptyString () ;
          cEnumerator_typedPropertyList enumerator_8738 (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 173)).readProperty_currentTypedPropertyList (), EnumerationOrder::up) ;
          while (enumerator_8738.hasCurrentObject ()) {
            GALGAS_unifiedTypeMapEntry var_propertyType_8812 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (extensionGetter_definition (enumerator_8738.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 174)).readProperty_typeName ().readProperty_string (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 174)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 174)) ;
            GALGAS_getterMap var_aMap_8937 = extensionGetter_definition (var_propertyType_8812, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 175)).readProperty_getterMap () ;
            const GALGAS_getterCallExpressionAST temp_50 = this ;
            const cMapElement_getterMap * objectArray_8990 = (const cMapElement_getterMap *) var_aMap_8937.readAccessForWithInstruction (temp_50.readProperty_mGetterName ().readProperty_string ()) ;
            if (nullptr != objectArray_8990) {
                macroValidSharedObject (objectArray_8990, cMapElement_getterMap) ;
              enumGalgasBool test_51 = kBoolTrue ;
              if (kBoolTrue == test_51) {
                test_51 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_propertyType_8812, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 177)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_8738.current_name (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_51) {
                  var_matchingReaderCount_8324.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 178)) ;
                  var_getterFormalArgumentTypeList_8443 = objectArray_8990->mProperty_mArgumentTypeList ;
                  var_hasCompilerArgument_8489 = objectArray_8990->mProperty_mHasCompilerArgument ;
                  var_returnedType_8528 = objectArray_8990->mProperty_mReturnedType ;
                  const GALGAS_getterCallExpressionAST temp_52 = this ;
                  var_receiverExpression_4270 = GALGAS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_returnedType_8528, temp_52.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4270, enumerator_8738.current_name (HERE).readProperty_string (), inCompiler COMMA_HERE) ;
                  var_kind_8581 = objectArray_8990->mProperty_mKind ;
                  var_obsoletedByGetter_8670 = objectArray_8990->mProperty_mGetterNameThatObsoletesInvokationName ;
                }
              }
            }
            enumerator_8738.gotoNextObject () ;
          }
          enumGalgasBool test_53 = kBoolTrue ;
          if (kBoolTrue == test_53) {
            test_53 = GALGAS_bool (ComparisonKind::equal, var_matchingReaderCount_8324.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_53) {
              const GALGAS_getterCallExpressionAST temp_54 = this ;
              const GALGAS_getterCallExpressionAST temp_55 = this ;
              TC_Array <FixItDescription> fixItArray56 ;
              inCompiler->emitSemanticError (temp_54.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 195)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 195)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 195)).add_operation (temp_55.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 195)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 195)), fixItArray56  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 194)) ;
              var_getterFormalArgumentTypeList_8443.drop () ; // Release error dropped variable
              var_hasCompilerArgument_8489.drop () ; // Release error dropped variable
              var_returnedType_8528.drop () ; // Release error dropped variable
              var_kind_8581.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_53) {
            enumGalgasBool test_57 = kBoolTrue ;
            if (kBoolTrue == test_57) {
              test_57 = GALGAS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_8324.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_57) {
                GALGAS_string var_s_10106 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_10128 (var_fieldList_8643, EnumerationOrder::up) ;
                while (enumerator_10128.hasCurrentObject ()) {
                  var_s_10106.plusAssign_operation(enumerator_10128.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 201)) ;
                  if (enumerator_10128.hasNextObject ()) {
                    var_s_10106.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 202)) ;
                  }
                  enumerator_10128.gotoNextObject () ;
                }
                const GALGAS_getterCallExpressionAST temp_58 = this ;
                const GALGAS_getterCallExpressionAST temp_59 = this ;
                TC_Array <FixItDescription> fixItArray60 ;
                inCompiler->emitSemanticError (temp_58.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (temp_59.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (var_s_10106, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)), fixItArray60  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 204)) ;
                var_getterFormalArgumentTypeList_8443.drop () ; // Release error dropped variable
                var_hasCompilerArgument_8489.drop () ; // Release error dropped variable
                var_returnedType_8528.drop () ; // Release error dropped variable
                var_kind_8581.drop () ; // Release error dropped variable
              }
            }
          }
          enumGalgasBool test_61 = kBoolTrue ;
          if (kBoolTrue == test_61) {
            const GALGAS_getterCallExpressionAST temp_62 = this ;
            test_61 = GALGAS_bool (ComparisonKind::notEqual, temp_62.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 210)).objectCompare (var_getterFormalArgumentTypeList_8443.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 210)))).boolEnum () ;
            if (kBoolTrue == test_61) {
              const GALGAS_getterCallExpressionAST temp_63 = this ;
              const GALGAS_getterCallExpressionAST temp_64 = this ;
              const GALGAS_getterCallExpressionAST temp_65 = this ;
              TC_Array <FixItDescription> fixItArray66 ;
              inCompiler->emitSemanticError (temp_63.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_64.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).add_operation (var_getterFormalArgumentTypeList_8443.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 212)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 212)).add_operation (temp_65.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 213)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 212)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 213)), fixItArray66  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_61) {
            GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11102 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
            const GALGAS_getterCallExpressionAST temp_67 = this ;
            cEnumerator_actualOutputArgumentList enumerator_11184 (temp_67.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
            cEnumerator_functionSignature enumerator_11291 (var_getterFormalArgumentTypeList_8443, EnumerationOrder::up) ;
            while (enumerator_11184.hasCurrentObject () && enumerator_11291.hasCurrentObject ()) {
              GALGAS_semanticExpressionForGeneration var_exp_11677 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11184.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11291.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11677, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 218)) ;
              enumGalgasBool test_68 = kBoolTrue ;
              if (kBoolTrue == test_68) {
                test_68 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11291.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11184.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_68) {
                  GALGAS_string temp_69 ;
                  const enumGalgasBool test_70 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11291.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_70) {
                    temp_69 = enumerator_11291.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)) ;
                  }else if (kBoolFalse == test_70) {
                    temp_69 = GALGAS_string::makeEmptyString () ;
                  }
                  GALGAS_string var_s_11790 = GALGAS_string ("!").add_operation (temp_69, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)) ;
                  TC_Array <FixItDescription> fixItArray71 ;
                  appendFixItActions (fixItArray71, kFixItReplace, var_s_11790) ;
                  inCompiler->emitSemanticError (enumerator_11184.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11790, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)), fixItArray71  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11291.current_mFormalArgumentType (HERE), var_exp_11677.readProperty_mResultType (), enumerator_11184.current_mEndOfExpressionLocation (HERE), var_exp_11677, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 231)) ;
              }
              var_constructorEffectiveParameterList_11102.addAssign_operation (var_exp_11677  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 232)) ;
              enumerator_11184.gotoNextObject () ;
              enumerator_11291.gotoNextObject () ;
            }
            enumGalgasBool test_72 = kBoolTrue ;
            if (kBoolTrue == test_72) {
              GALGAS_bool test_73 = GALGAS_bool (ComparisonKind::notEqual, var_obsoletedByGetter_8670.objectCompare (GALGAS_string::makeEmptyString ())) ;
              if (kBoolTrue == test_73.boolEnum ()) {
                test_73 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
              }
              test_72 = test_73.boolEnum () ;
              if (kBoolTrue == test_72) {
                const GALGAS_getterCallExpressionAST temp_74 = this ;
                TC_Array <FixItDescription> fixItArray75 ;
                appendFixItActions (fixItArray75, kFixItReplace, var_obsoletedByGetter_8670) ;
                inCompiler->emitSemanticError (temp_74.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray75  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 235)) ;
              }
            }
            const GALGAS_getterCallExpressionAST temp_76 = this ;
            GALGAS_string temp_77 ;
            const enumGalgasBool test_78 = GALGAS_bool (ComparisonKind::equal, var_obsoletedByGetter_8670.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_78) {
              const GALGAS_getterCallExpressionAST temp_79 = this ;
              temp_77 = temp_79.readProperty_mGetterName ().readProperty_string () ;
            }else if (kBoolFalse == test_78) {
              temp_77 = var_obsoletedByGetter_8670 ;
            }
            outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_8528, temp_76.readProperty_mGetterName ().readProperty_location (), var_kind_8581, var_receiverExpression_4270, var_fieldList_8643, temp_77, var_constructorEffectiveParameterList_11102, var_hasCompilerArgument_8489, inCompiler COMMA_HERE) ;
          }
        }
      }
      if (kBoolFalse == test_49) {
        enumGalgasBool test_80 = kBoolTrue ;
        if (kBoolTrue == test_80) {
          test_80 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 248)).readProperty_getterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 248)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_80) {
            const GALGAS_getterCallExpressionAST temp_81 = this ;
            TC_Array <FixItDescription> fixItArray82 ;
            inCompiler->emitSemanticError (temp_81.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)), fixItArray82  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 249)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_80) {
          const GALGAS_getterCallExpressionAST temp_83 = this ;
          const GALGAS_getterCallExpressionAST temp_84 = this ;
          TC_Array <FixItDescription> fixItArray85 ;
          appendFixItActions (fixItArray85, kFixItReplace, extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 256)).readProperty_getterMap ().getter_keyList (SOURCE_FILE ("expression-getter-call.galgas", 256))) ;
          inCompiler->emitSemanticError (temp_83.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 254)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 254)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 254)).add_operation (temp_84.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 254)).add_operation (GALGAS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 254)), fixItArray85  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 253)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}
