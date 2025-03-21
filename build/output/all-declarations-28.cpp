#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-28.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument&&?methodName?argType?argName?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                                GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                const GGS_string constinArgument_inClassMethodName,
                                                                                                                const GGS_string constinArgument_inArgumentTypeName,
                                                                                                                const GGS_string constinArgument_inArgumentName,
                                                                                                                const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1749 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex_1749, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 33)) ;
  }
  GGS_formalParameterSignature var_argList_1800 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_1800.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 35)), var_argumentTypeIndex_1749, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 35)), constinArgument_inArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 35)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 37)), inCompiler COMMA_HERE), var_argList_1800, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 36)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments&&?methodName?argType1?argName1?argType2?argName2?argType3?argName3?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                                                                                                         GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                         const GGS_string constinArgument_inClassMethodName,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_31_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_31_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_32_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_32_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_33_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_33_,
                                                                                                                                                                                         const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_argList_2613 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_31__2712 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_31_, var_argumentTypeIndex_31__2712, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 59)) ;
  }
  var_argList_2613.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 60)), var_argumentTypeIndex_31__2712, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 60)), constinArgument_inArgumentName_31_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 60)) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_32__2902 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_32_, var_argumentTypeIndex_32__2902, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 62)) ;
  }
  var_argList_2613.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 63)), var_argumentTypeIndex_32__2902, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 63)), constinArgument_inArgumentName_32_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 63)) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_33__3092 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_33_, var_argumentTypeIndex_33__3092, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 65)) ;
  }
  var_argList_2613.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 66)), var_argumentTypeIndex_33__3092, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 66)), constinArgument_inArgumentName_33_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 66)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 68)), inCompiler COMMA_HERE), var_argList_2613, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 68)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument&&?classMethod?argName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                       const GGS_string constinArgument_inClassMethodName,
                                                                                                       const GGS_string constinArgument_inStringArgumentName,
                                                                                                       const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_3721 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_argumentTypeIndex_3721, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 80)) ;
  }
  GGS_formalParameterSignature var_argList_3772 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_3772.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), var_argumentTypeIndex_3721, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), constinArgument_inStringArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 82)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 84)), inCompiler COMMA_HERE), var_argList_3772, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 83)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledName (const GGS_lstring & constinArgument_inRoutineName,
                                         const GGS_formalParameterSignature & constinArgument_inRoutineFormalParameters,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_str_1466 = constinArgument_inRoutineName.readProperty_string () ;
  UpEnumerator_formalParameterSignature enumerator_1512 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_1512.hasCurrentObject ()) {
    switch (enumerator_1512.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_str_1466.plusAssign_operation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 29)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_str_1466.plusAssign_operation(GGS_string ("&"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 31)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_str_1466.plusAssign_operation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 33)) ;
      }
      break ;
    }
    var_str_1466.plusAssign_operation(enumerator_1512.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 35)) ;
    enumerator_1512.gotoNextObject () ;
  }
  result_result = GGS_lstring::init_21__21_ (var_str_1466, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_routineMangledName [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineMangledName (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_formalParameterSignature operand1 = GGS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_routineMangledName (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledName ("routineMangledName",
                                                                    functionWithGenericHeader_routineMangledName,
                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                    2,
                                                                    functionArgs_routineMangledName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineArgumentFromFormalParameters'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_routineArgumentFromFormalParameters (const GGS_formalParameterSignature & constinArgument_inRoutineFormalParameters,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("(") ;
  UpEnumerator_formalParameterSignature enumerator_2080 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_2080.hasCurrentObject ()) {
    switch (enumerator_2080.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        result_result.plusAssign_operation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 48)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        result_result.plusAssign_operation(GGS_string ("!\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 50)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        result_result.plusAssign_operation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 52)) ;
      }
      break ;
    }
    result_result.plusAssign_operation(enumerator_2080.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 54)) ;
    enumerator_2080.gotoNextObject () ;
    if (enumerator_2080.hasCurrentObject ()) {
      result_result.plusAssign_operation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 56)) ;
    }
  }
  result_result.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 58)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_routineArgumentFromFormalParameters [2] = {
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineArgumentFromFormalParameters (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_formalParameterSignature operand0 = GGS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_routineArgumentFromFormalParameters (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineArgumentFromFormalParameters ("routineArgumentFromFormalParameters",
                                                                                     functionWithGenericHeader_routineArgumentFromFormalParameters,
                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                     1,
                                                                                     functionArgs_routineArgumentFromFormalParameters) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'compilerCppName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_compilerCppName (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outCompilerCppName ; // Returned variable
  result_outCompilerCppName = GGS_string ("inCompiler") ;
//---
  return result_outCompilerCppName ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compilerCppName = false ;
static GGS_string gOnceFunctionResult_compilerCppName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_compilerCppName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compilerCppName) {
    gOnceFunctionResult_compilerCppName = onceFunction_compilerCppName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compilerCppName = true ;
  }
  return gOnceFunctionResult_compilerCppName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compilerCppName (void) {
  gOnceFunctionResult_compilerCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compilerCppName (nullptr,
                                                           releaseOnceFunctionResult_compilerCppName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compilerCppName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compilerCppName (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_compilerCppName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compilerCppName ("compilerCppName",
                                                                 functionWithGenericHeader_compilerCppName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_compilerCppName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'syntaxDirectedTranslationResultVarName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_syntaxDirectedTranslationResultVarName (Compiler *
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outName ; // Returned variable
  result_outName = GGS_string ("ioSyntaxDirectedTranslationResult") ;
//---
  return result_outName ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = false ;
static GGS_string gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_syntaxDirectedTranslationResultVarName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName) {
    gOnceFunctionResult_syntaxDirectedTranslationResultVarName = onceFunction_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = true ;
  }
  return gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName (void) {
  gOnceFunctionResult_syntaxDirectedTranslationResultVarName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_syntaxDirectedTranslationResultVarName (nullptr,
                                                                                  releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxDirectedTranslationResultVarName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_syntaxDirectedTranslationResultVarName (Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GGS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxDirectedTranslationResultVarName ("syntaxDirectedTranslationResultVarName",
                                                                                        functionWithGenericHeader_syntaxDirectedTranslationResultVarName,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        0,
                                                                                        functionArgs_syntaxDirectedTranslationResultVarName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3GrammarComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_GrammarComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  result_result = GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 329)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3SyntaxComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_SyntaxComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  result_result = GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 336)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@predefinedTypeAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_predefinedTypeAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_predefinedTypeAST temp_0 = this ;
  result_result = GGS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 343)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sortedListDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_sortedListDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_sortedListDeclarationAST temp_0 = this ;
  result_result = GGS_string ("sorted list @").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 350)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_filewrapperDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  result_result = GGS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 357)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_optionComponentDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  result_result = GGS_string ("option ").add_operation (temp_0.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 364)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@graphDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_graphDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_graphDeclarationAST temp_0 = this ;
  result_result = GGS_string ("graph @").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 371)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_onceFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  result_result = GGS_string ("once function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 378)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  result_result = GGS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 384)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'addExtensions????&&??isClass&&&&?acceptSetters'
//
//--------------------------------------------------------------------------------------------------

void routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                                    const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                                    const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                                    const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                                    GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    const GGS_lstring constinArgument_inTypeName,
                                                                                                    const GGS_bool constinArgument_inIsClass,
                                                                                                    GGS_initializerMap & ioArgument_ioInitializerMap,
                                                                                                    GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                    GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                    GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                                                    const GGS_bool constinArgument_inAcceptSetters,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 408)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_extensionGetterMapForType var_extensionGetterMapForType_16662 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_16662, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 409)) ;
      UpEnumerator_extensionGetterMapForType enumerator_16745 (var_extensionGetterMapForType_16662) ;
      while (enumerator_16745.hasCurrentObject ()) {
        GGS_functionSignature var_formalArgumentList_16817 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalInputParameterListAST enumerator_16875 (enumerator_16745.current_mInputFormalParameterList (HERE)) ;
        while (enumerator_16875.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_16985 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16875.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_16985, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 413)) ;
          }
          var_formalArgumentList_16817.addAssign_operation (enumerator_16875.current (HERE).readProperty_mFormalSelector (), var_typeIndex_16985, enumerator_16875.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_16875.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 414)) ;
          enumerator_16875.gotoNextObject () ;
        }
        GGS_unifiedTypeMapEntry var_returnedType_17256 ;
        {
        extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16745.current_mResultTypeName (HERE), var_returnedType_17256, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 420)) ;
        }
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, enumerator_16745.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 421)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = ioArgument_ioGetterMap.getter_hasKey (enumerator_16745.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 422)).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 423)), enumerator_16745.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 423)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, enumerator_16745.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 425)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = ioArgument_ioGetterMap.getter_hasKey (enumerator_16745.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 426)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 427)), enumerator_16745.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 427)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_16745.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 429)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 429)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_16745.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 432)), var_formalArgumentList_16817, enumerator_16745.current_lkey (HERE).readProperty_location (), GGS_bool (true), var_returnedType_17256, GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 437)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 430)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_16745.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 443)), var_formalArgumentList_16817, enumerator_16745.current_lkey (HERE).readProperty_location (), GGS_bool (true), var_returnedType_17256, enumerator_16745.current_mQualifier (HERE), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 441)) ;
              }
            }
          }
        }
        enumerator_16745.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 455)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_extensionMethodMapForType var_extensionMethodMapForType_18473 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_18473, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 456)) ;
      UpEnumerator_extensionMethodMapForType enumerator_18535 (var_extensionMethodMapForType_18473) ;
      while (enumerator_18535.hasCurrentObject ()) {
        GGS_formalParameterSignature var_formalArgumentList_18588 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalParameterListAST enumerator_18661 (enumerator_18535.current_mFormalParameterList (HERE)) ;
        while (enumerator_18661.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_18797 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18661.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_18797, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 460)) ;
          }
          var_formalArgumentList_18588.addAssign_operation (enumerator_18661.current (HERE).readProperty_mFormalSelector (), var_typeIndex_18797, enumerator_18661.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_18661.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 464)) ;
          enumerator_18661.gotoNextObject () ;
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_18535.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 470)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_18535.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 471)).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 472)), enumerator_18535.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 472)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_18535.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 474)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_18535.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 475)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 476)), enumerator_18535.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 476)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_18535.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 478)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 478)).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18535.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 481)), var_formalArgumentList_18588, enumerator_18535.current_lkey (HERE).readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 485)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 479)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18535.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 491)), var_formalArgumentList_18588, enumerator_18535.current_lkey (HERE).readProperty_location (), GGS_bool (true), enumerator_18535.current_mQualifier (HERE), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 489)) ;
              }
            }
          }
        }
        enumerator_18535.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 502)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_extensionSetterMapForType var_extensionSetterMapForType_20157 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_20157, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 503)) ;
      UpEnumerator_extensionSetterMapForType enumerator_20198 (var_extensionSetterMapForType_20157) ;
      while (enumerator_20198.hasCurrentObject ()) {
        GGS_formalParameterSignature var_formalArgumentList_20288 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalParameterListAST enumerator_20336 (enumerator_20198.current_mFormalParameterList (HERE)) ;
        while (enumerator_20336.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_20432 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_20336.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_20432, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 507)) ;
          }
          var_formalArgumentList_20288.addAssign_operation (enumerator_20336.current (HERE).readProperty_mFormalSelector (), var_typeIndex_20432, enumerator_20336.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_20336.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 508)) ;
          enumerator_20336.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_20198.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 516)), var_formalArgumentList_20288, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 519)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 514)) ;
        }
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          test_13 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas", 522)).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            TC_Array <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_20198.current_lkey (HERE).readProperty_location (), GGS_string ("a class does not accept any setter; use method instead"), fixItArray14  COMMA_SOURCE_FILE ("semanticContext.galgas", 523)) ;
          }
        }
        enumerator_20198.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = constinArgument_inExtensionInitializerMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 528)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_extensionInitializerMapForType var_initializerMapForType_21182 ;
      constinArgument_inExtensionInitializerMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_initializerMapForType_21182, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 529)) ;
      UpEnumerator_extensionInitializerMapForType enumerator_21219 (var_initializerMapForType_21182) ;
      while (enumerator_21219.hasCurrentObject ()) {
        GGS_functionSignature var_formalArgumentList_21298 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalInputParameterListAST enumerator_21395 (enumerator_21219.current_mFormalParameterList (HERE)) ;
        while (enumerator_21395.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_21495 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21395.current_mFormalArgumentTypeName (HERE), var_typeIndex_21495, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 533)) ;
          }
          var_formalArgumentList_21298.addAssign_operation (enumerator_21395.current_mFormalSelector (HERE), var_typeIndex_21495, enumerator_21395.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_21395.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 534)) ;
          enumerator_21395.gotoNextObject () ;
        }
        {
        ioArgument_ioInitializerMap.setter_insertKey (enumerator_21219.current_lkey (HERE), var_formalArgumentList_21298, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 544)) ;
        }
        enumerator_21219.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories????!!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (const GGS_string constinArgument_inAbsoluteSourcePath,
                                                                              const GGS_string constinArgument_inPathInWrapper,
                                                                              const GGS_wrapperExtensionMap constinArgument_inTextFileExtensionMap,
                                                                              const GGS_wrapperExtensionMap constinArgument_inBinaryFileExtensionMap,
                                                                              GGS_wrapperFileMap & outArgument_outWrapperFileMap,
                                                                              GGS_wrapperDirectoryMap & outArgument_outWrapperDirectoryMap,
                                                                              GGS_uint & ioArgument_ioWrapperFileIndex,
                                                                              GGS_uint & ioArgument_ioWrapperDirectoryIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outWrapperFileMap.drop () ; // Release 'out' argument
  outArgument_outWrapperDirectoryMap.drop () ; // Release 'out' argument
  GGS_uint var_currentDirectoryIndex_22861 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 572)) ;
  GGS_stringlist var_files_22989 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GGS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 574)) ;
  outArgument_outWrapperFileMap = GGS_wrapperFileMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_23073 (var_files_22989) ;
  while (enumerator_23073.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_23073.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 577)) COMMA_SOURCE_FILE ("semanticContext.galgas", 577)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_absoluteFilePath_23179 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 578)).add_operation (enumerator_23073.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 578)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_23073.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 580)), inCompiler COMMA_HERE), var_absoluteFilePath_23179, GGS_bool (true), var_currentDirectoryIndex_22861, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 579)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 586)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_23073.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 587)) COMMA_SOURCE_FILE ("semanticContext.galgas", 587)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_absoluteFilePath_23556 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 588)).add_operation (enumerator_23073.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 588)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_23073.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 590)), inCompiler COMMA_HERE), var_absoluteFilePath_23556, GGS_bool (false), var_currentDirectoryIndex_22861, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 589)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 596)) ;
        }
      }
    }
    enumerator_23073.gotoNextObject () ;
  }
  GGS_stringlist var_directories_23914 = constinArgument_inAbsoluteSourcePath.getter_directories (GGS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 600)) ;
  outArgument_outWrapperDirectoryMap = GGS_wrapperDirectoryMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_24008 (var_directories_23914) ;
  while (enumerator_24008.hasCurrentObject ()) {
    GGS_uint var_theDirectoryIndex_24048 = ioArgument_ioWrapperDirectoryIndex ;
    GGS_wrapperFileMap var_internalWrapperFileMap_24284 ;
    GGS_wrapperDirectoryMap var_internalWrapperDirectoryMap_24318 ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 605)).add_operation (enumerator_24008.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 605)), constinArgument_inPathInWrapper.add_operation (enumerator_24008.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 606)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 606)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_24284, var_internalWrapperDirectoryMap_24318, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 604)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_24008.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 615)), inCompiler COMMA_HERE), var_internalWrapperFileMap_24284, var_internalWrapperDirectoryMap_24318, var_theDirectoryIndex_24048, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 614)) ;
    }
    enumerator_24008.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                               const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                               const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap var_filewrapperTemplateMap_25351 = GGS_filewrapperTemplateMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  UpEnumerator_filewrapperTemplateListAST enumerator_25437 (temp_0.readProperty_mFilewrapperTemplateList ()) ;
  while (enumerator_25437.hasCurrentObject ()) {
    GGS_functionSignature var_templateSignature_25543 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalTemplateInputParameterListAST enumerator_25644 (enumerator_25437.current_mFilewrapperTemplateFormalInputParameters (HERE)) ;
    while (enumerator_25644.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_25764 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_25644.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_25764, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 639)) ;
      }
      var_templateSignature_25543.addAssign_operation (enumerator_25644.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex_25764, enumerator_25644.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_25644.current_mIsUnused (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 640)) ;
      enumerator_25644.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_25351.setter_insertKey (enumerator_25437.current_mFilewrapperTemplateName (HERE), var_templateSignature_25543, enumerator_25437.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 642)) ;
    }
    enumerator_25437.gotoNextObject () ;
  }
  GGS_wrapperExtensionMap var_textExtensionMap_26108 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  UpEnumerator_lstringlist enumerator_26138 (temp_1.readProperty_mFilewrapperTextFileExtensionList ()) ;
  while (enumerator_26138.hasCurrentObject ()) {
    {
    var_textExtensionMap_26108.setter_insertKey (enumerator_26138.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 651)) ;
    }
    enumerator_26138.gotoNextObject () ;
  }
  GGS_wrapperExtensionMap var_binaryFileExtensionMap_26305 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_2 = this ;
  UpEnumerator_lstringlist enumerator_26341 (temp_2.readProperty_mFilewrapperBinaryFileExtensionList ()) ;
  while (enumerator_26341.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_textExtensionMap_26108.getter_hasKey (enumerator_26341.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 656)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_26341.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_26341.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 657)).add_operation (GGS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 657)), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas", 657)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      {
      var_binaryFileExtensionMap_26305.setter_insertKey (enumerator_26341.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 659)) ;
      }
    }
    enumerator_26341.gotoNextObject () ;
  }
  GGS_wrapperFileMap var_regularRootFileMap_26660 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_26706 ;
  GGS_string var_absoluteSourcePath_26740 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 666)).objectCompare (GGS_char (TO_UNICODE (47)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_filewrapperDeclarationAST temp_7 = this ;
      var_absoluteSourcePath_26740 = temp_7.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_filewrapperDeclarationAST temp_8 = this ;
    const GGS_filewrapperDeclarationAST temp_9 = this ;
    var_absoluteSourcePath_26740 = temp_8.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 669)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 669)).add_operation (temp_9.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 669)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_absoluteSourcePath_26740.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 671)).operator_not (SOURCE_FILE ("semanticContext.galgas", 671)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_filewrapperDeclarationAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_26740, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 672)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 672)), fixItArray12  COMMA_SOURCE_FILE ("semanticContext.galgas", 672)) ;
      var_regularRootFileMap_26660.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_26706.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    GGS_uint var_wrapperFileIndex_27257 = GGS_uint (uint32_t (0U)) ;
    GGS_uint var_wrapperDirectoryIndex_27292 = GGS_uint (uint32_t (0U)) ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_26740, GGS_string ("/"), var_textExtensionMap_26108, var_binaryFileExtensionMap_26305, var_regularRootFileMap_26660, var_wrapperDirectoryMap_26706, var_wrapperFileIndex_27257, var_wrapperDirectoryIndex_27292, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 678)) ;
    }
  }
  {
  const GGS_filewrapperDeclarationAST temp_13 = this ;
  const GGS_filewrapperDeclarationAST temp_14 = this ;
  const GGS_filewrapperDeclarationAST temp_15 = this ;
  const GGS_filewrapperDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_13.readProperty_mFilewrapperName (), temp_14.readProperty_mFilewrapperPath (), temp_15.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_26660, var_wrapperDirectoryMap_26706, var_filewrapperTemplateMap_25351, temp_16.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 690)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@externFunctionDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_functionSignature var_functionSignature_28611 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  UpEnumerator_formalInputParameterListAST enumerator_28704 (temp_0.readProperty_mFormalArgumentList ()) ;
  while (enumerator_28704.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_28805 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_28704.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_28805, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 714)) ;
    }
    var_functionSignature_28611.addAssign_operation (enumerator_28704.current_mFormalSelector (HERE), var_parameterTypeIndex_28805, enumerator_28704.current_mFormalArgumentTypeName (HERE).readProperty_string (), enumerator_28704.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 715)) ;
    enumerator_28704.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_resultTypeIndex_29008 ;
  {
  const GGS_externFunctionDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mResultTypeName (), var_resultTypeIndex_29008, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 718)) ;
  }
  {
  const GGS_externFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.readProperty_mFunctionName (), var_functionSignature_28611, var_resultTypeIndex_29008, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 720)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_resultTypeIndex_30012 ;
  {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mResultTypeName (), var_resultTypeIndex_30012, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 739)) ;
  }
  {
  const GGS_onceFunctionDeclarationAST temp_1 = this ;
  const GGS_onceFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_1.readProperty_mFunctionName (), GGS_functionSignature::init (inCompiler COMMA_HERE), var_resultTypeIndex_30012, temp_2.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 741)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 755)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                   const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_grammarLabelMap var_grammarLabelMap_31876 = GGS_grammarLabelMap::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  UpEnumerator_nonTerminalLabelListAST enumerator_31936 (temp_0.readProperty_mStartSymbolLabelList ()) ;
  while (enumerator_31936.hasCurrentObject ()) {
    GGS_formalParameterSignature var_formalArgumentList_32032 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_32153 (enumerator_31936.current_mFormalArgumentList (HERE)) ;
    while (enumerator_32153.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentType_32242 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_32153.current_mFormalArgumentTypeName (HERE), var_argumentType_32242, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 781)) ;
      }
      var_formalArgumentList_32032.addAssign_operation (enumerator_32153.current_mFormalSelector (HERE), var_argumentType_32242, enumerator_32153.current_mFormalArgumentPassingMode (HERE), enumerator_32153.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 782)) ;
      enumerator_32153.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_31876.setter_insertKey (enumerator_31936.current_mLabelName (HERE), var_formalArgumentList_32032, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 788)) ;
    }
    enumerator_31936.gotoNextObject () ;
  }
  {
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_grammarMap.setter_insertGrammar (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_31876, temp_2.readProperty_mHasIndexing ().readProperty_bool (), temp_3.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 794)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  GGS_lstring var_key_33970 = GGS_lstring::init_21__21_ (GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 826)), temp_1.readProperty_mGrammarComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_33970, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 827)) ;
  }
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator_lstringlist enumerator_34127 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_34127.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_33970, GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (enumerator_34127.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 829)), enumerator_34127.current_mValue (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas", 829)) ;
    }
    enumerator_34127.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_lstring var_key_34983 = GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 843)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_34983, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 844)) ;
  }
  {
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_34983, GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 845)), temp_4.readProperty_mLexiqueName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas", 845)) ;
  }
  const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
  UpEnumerator_syntaxRuleListAST enumerator_35260 (temp_5.readProperty_mRuleList ()) ;
  while (enumerator_35260.hasCurrentObject ()) {
    UpEnumerator_syntaxRuleLabelListAST enumerator_35325 (enumerator_35260.current_mLabelList (HERE)) ;
    while (enumerator_35325.hasCurrentObject ()) {
      UpEnumerator_formalParameterListAST enumerator_35411 (enumerator_35325.current_mFormalArguments (HERE)) ;
      while (enumerator_35411.hasCurrentObject ()) {
        switch (enumerator_35411.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_34983, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_35411.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 850)), enumerator_35411.current_mFormalArgumentTypeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas", 850)) ;
            }
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          break ;
        }
        enumerator_35411.gotoNextObject () ;
      }
      enumerator_35325.gotoNextObject () ;
    }
    enumerator_35260.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@externFunctionDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 868)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                      GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 881)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                     GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                     GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                     GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                     GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                     GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                     GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 894)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList&?&&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInstructionList_26__3F__26__26__3F__26_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                              const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                              const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 35)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_1842 (constinArgument_inInstructionList) ;
  while (enumerator_1842.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_1842.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 37)) ;
    enumerator_1842.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 45)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticTypeForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 263)).readProperty_headerFileName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticTypeForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticTypeForGeneration::getter_isPredefined (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 275)).readProperty_isPredefined () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_semanticTypeForGeneration::getter_headerKind (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 281)).readProperty_headerKind () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticDeclarationWithHeaderForGeneration::getter_getImplementationCppFileName (Compiler */* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_implementationCppFileName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_generateHeader () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_semanticDeclarationWithHeaderForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 310)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                                                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                                                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                                                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                                                                                                      const GGS_localConstantList constinArgument_inLocalConstantList,
                                                                                                                                                                                                      const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                                                                                                                                                                                      const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableListNoWarns,
                                                                                                                                                                                                      const GGS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                                                                                                                                                                                      const GGS_location constinArgument_inEndOfBranchLocation,
                                                                                                                                                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                                                                                                      GGS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 70)) ;
  }
  {
  routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inLocalConstantList, constinArgument_inLocalInitializedVariableList, constinArgument_inLocalInitializedVariableListNoWarns, constinArgument_inSemanticInstructionListAST, ioArgument_ioVariableMap, outArgument_outInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 72)) ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 85)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                                                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                                                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                                                                                                               const GGS_localConstantList constinArgument_inLocalConstantList,
                                                                                                                                                                                                               const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                                                                                                                                                                                               const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableListNoWarns,
                                                                                                                                                                                                               const GGS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                                                                                                                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                                                                                                               GGS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_localConstantList enumerator_4744 (constinArgument_inLocalConstantList) ;
  while (enumerator_4744.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_4744.current_mNoWarningIfUnused (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_4744.current_mName (HERE), enumerator_4744.current_mType (HERE), enumerator_4744.current_mCppName (HERE), enumerator_4744.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 106)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_4744.current_mName (HERE), enumerator_4744.current_mType (HERE), enumerator_4744.current_mCppName (HERE), enumerator_4744.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 108)) ;
      }
    }
    enumerator_4744.gotoNextObject () ;
  }
  UpEnumerator_localInitializedVariableList enumerator_5054 (constinArgument_inLocalInitializedVariableList) ;
  while (enumerator_5054.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_5054.current_mName (HERE), GGS_bool (true), enumerator_5054.current_mType (HERE), enumerator_5054.current_mCppName (HERE), enumerator_5054.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 113)) ;
    }
    enumerator_5054.gotoNextObject () ;
  }
  UpEnumerator_localInitializedVariableList enumerator_5238 (constinArgument_inLocalInitializedVariableListNoWarns) ;
  while (enumerator_5238.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_5238.current_mName (HERE), GGS_bool (false), enumerator_5238.current_mType (HERE), enumerator_5238.current_mCppName (HERE), enumerator_5238.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 116)) ;
    }
    enumerator_5238.gotoNextObject () ;
  }
  UpEnumerator_semanticInstructionListAST enumerator_5441 (constinArgument_inSemanticInstructionListAST) ;
  while (enumerator_5441.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_5441.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 120)) ;
    enumerator_5441.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean???!'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean_3F__3F__3F__21_ (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                       const GGS_location constinArgument_inErrorLocation,
                                                       const GGS_semanticExpressionForGeneration constinArgument_inExpression,
                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_unifiedTypeMapEntry var_expressionType_6404 = constinArgument_inExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_boolType_6471 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_expressionType_6404.objectCompare (var_boolType_6471)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outExpression = constinArgument_inExpression ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_6404, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 154)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 154)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (var_expressionType_6404, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).readProperty_propertyMap ().getter_hasKey (GGS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GGS_AccessControl var_accessControl_6845 ;
            GGS_unifiedTypeMapEntry var_attributeType_6904 ;
            GGS_bool joker_6867 ; // Joker input parameter
            extensionGetter_definition (var_expressionType_6404, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)).readProperty_propertyMap ().method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("bool"), constinArgument_inErrorLocation, inCompiler COMMA_HERE), var_accessControl_6845, joker_6867, var_attributeType_6904, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)) ;
            extensionMethod_checkSetAccess (var_accessControl_6845, constinArgument_inAnalysisContext.readProperty_selfAvailability (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 162)) ;
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::equal, var_attributeType_6904.objectCompare (var_boolType_6471)).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_boolType_6471, constinArgument_inErrorLocation, constinArgument_inExpression, GGS_string ("bool"), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              TC_Array <FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_6404, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 175)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 175)).add_operation (GGS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 175)), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 174)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_6404, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)).add_operation (GGS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 179)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      const cMapElement_getterMap * objectArray_7773 = (const cMapElement_getterMap *) extensionGetter_definition (var_expressionType_6404, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 184)).readProperty_getterMap ().readAccessForWithInstruction (GGS_string ("bool")) ;
      if (nullptr != objectArray_7773) {
          macroValidSharedObject (objectArray_7773, cMapElement_getterMap) ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, objectArray_7773->mProperty_mReturnedType.objectCompare (var_boolType_6471)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not @bool, it handles a 'bool' getter, but it does not return a '@bool' value"), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 186)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::greaterThan, objectArray_7773->mProperty_mArgumentTypeList.getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 187)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not @bool, it handles a 'bool' getter that requires argument(s)"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 188)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_8) {
            outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_boolType_6471, constinArgument_inErrorLocation, objectArray_7773->mProperty_mKind, constinArgument_inExpression, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_string ("bool"), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), objectArray_7773->mProperty_mHasCompilerArgument, inCompiler COMMA_HERE) ;
          }
        }
      }else{
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_6404, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)).readProperty_getterMap ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            TC_Array <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_6404, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)).add_operation (GGS_string ("', and this type does not define the 'bool' getter"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          TC_Array <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, EnumFixItKind::fixItReplace, extensionGetter_definition (var_expressionType_6404, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 210)).readProperty_getterMap ().getter_keyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 210))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_6404, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 208)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 208)).add_operation (GGS_string ("', and this type does not define the 'bool' getter "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 208)), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 207)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeGrammarInstructionSDT (const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                      const GGS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                      const GGS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GGS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                      GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeGrammarInstructionSDT (const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                      const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                      const GGS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GGS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                      GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 246)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 247)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                       const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                       GGS_stringlist & ioArgument_ioAssignementList,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 260)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 261)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_type_11395 ;
  GGS_string var_cppName_11413 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_11421 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_11395, var_cppName_11413, joker_11421, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 263)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_11431 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_11431.objectCompare (var_type_11395)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (extensionGetter_identifierRepresentation (var_type_11395, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_11431, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 266)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName_11413.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                               const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                               const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                               GGS_stringlist & ioArgument_ioAssignementList,
                                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 282)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 283)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GGS_string var_cppName_12481 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_12623 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 286)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_12623, var_cppName_12481, var_cppName_12481, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 287)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_12826 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_12826.objectCompare (var_type_12623)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (extensionGetter_identifierRepresentation (var_type_12623, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_12826, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 290)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GGS_string ("GGS_string ").add_operation (var_cppName_12481, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                 const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GGS_stringlist & ioArgument_ioAssignementList,
                                                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 306)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 307)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_13911 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_14053 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 310)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_14053, var_cppName_13911, var_cppName_13911, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_14231 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_14231.objectCompare (var_type_14053)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (extensionGetter_identifierRepresentation (var_type_14053, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_14231, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 314)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GGS_string ("const GGS_string ").add_operation (var_cppName_13911, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures_3F__3F__3F__3F_ (const GGS_formalParameterListForGeneration constinArgument_inTestedSignature,
                                                    const GGS_location constinArgument_inErrorLocation,
                                                    const GGS_formalParameterSignature constinArgument_inReferenceSignature,
                                                    const GGS_location constinArgument_inReferenceLocation,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 33)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 33)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this method declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 34)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (GGS_string (" formal parameter(s), but overriden method declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 35)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 35)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)) ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden method is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 36)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    UpEnumerator_formalParameterSignature enumerator_2120 (constinArgument_inReferenceSignature) ;
    UpEnumerator_formalParameterListForGeneration enumerator_2232 (constinArgument_inTestedSignature) ;
    while (enumerator_2120.hasCurrentObject () && enumerator_2232.hasCurrentObject ()) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_2120.current_mFormalArgumentPassingMode (HERE).objectCompare (enumerator_2232.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_2232.current_mFormalArgumentName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_2232.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)).add_operation (GGS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2232.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)).add_operation (GGS_string (", but overriden method declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2120.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)) ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden method is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)) ;
        }
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_2232.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_2120.current_mFormalSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string var_s_2775 ;
          switch (enumerator_2120.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
          case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
            {
              var_s_2775 = GGS_string ("\?") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
            {
              var_s_2775 = GGS_string ("\?!") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
            {
              var_s_2775 = GGS_string ("!") ;
            }
            break ;
          }
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_2120.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_2120.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 55)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          var_s_2775.plusAssign_operation(temp_7, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 55)) ;
          TC_Array <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_2775) ;
          inCompiler->emitSemanticError (enumerator_2232.current_mFormalSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_2775, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 56)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 56)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 56)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_2232.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 59)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_2120.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 59)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_2232.current_mFormalArgumentName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_2232.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 60)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 60)).add_operation (extensionGetter_definition (enumerator_2232.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 61)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 60)).add_operation (GGS_string ("' type, but overriden method declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 61)).add_operation (extensionGetter_definition (enumerator_2120.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 62)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 61)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 62)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 60)) ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden method is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 63)) ;
        }
      }
      enumerator_2120.gotoNextObject () ;
      enumerator_2232.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (const GGS_formalInputParameterListForGeneration constinArgument_inTestedSignature,
                                                            const GGS_unifiedTypeMapEntry constinArgument_inReturnType,
                                                            const GGS_location constinArgument_inErrorLocation,
                                                            const GGS_functionSignature constinArgument_inReferenceSignature,
                                                            const GGS_unifiedTypeMapEntry constinArgument_inInheritedReturnType,
                                                            const GGS_location constinArgument_inReferenceLocation,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the return type is '@").add_operation (extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)).add_operation (GGS_string ("', but overriden getter names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)).add_operation (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 85)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)).add_operation (GGS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 85)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)) ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden getter is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 86)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 88)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 88)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this getter declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 89)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)).add_operation (GGS_string (" formal parameter(s), but overriden getter declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 90)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 90)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)) ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden getter is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 91)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    UpEnumerator_functionSignature enumerator_5220 (constinArgument_inReferenceSignature) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_5307 (constinArgument_inTestedSignature) ;
    while (enumerator_5220.hasCurrentObject () && enumerator_5307.hasCurrentObject ()) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_5307.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5220.current_mFormalSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_5220.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_5220.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_5421 = GGS_string ("\?").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)) ;
          TC_Array <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_5421) ;
          inCompiler->emitSemanticError (enumerator_5307.current_mFormalSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_5421, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_5307.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 101)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_5220.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 101)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5307.current_mFormalArgumentName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5307.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)).add_operation (extensionGetter_definition (enumerator_5307.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)).add_operation (GGS_string ("' type, but overriden getter declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 103)).add_operation (extensionGetter_definition (enumerator_5220.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 104)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 103)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 104)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)) ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden getter is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 105)) ;
        }
      }
      enumerator_5220.gotoNextObject () ;
      enumerator_5307.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature?&?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalParameterListAST enumerator_7326 (constinArgument_inRoutineSignatureAST) ;
  while (enumerator_7326.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_7359 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7326.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 130)) ;
    GGS_string var_formalArgumentCppName_7454 ;
    switch (enumerator_7326.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_formalArgumentCppName_7454 = GGS_string ("inArgument_").add_operation (enumerator_7326.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 134)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = enumerator_7326.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            {
            extensionSetter_insertInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7326.current (HERE).readProperty_mFormalArgumentName (), var_type_7359, var_formalArgumentCppName_7454, var_formalArgumentCppName_7454, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 137)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          {
          extensionSetter_insertInputFormalArgument (ioArgument_ioVariableMap, enumerator_7326.current (HERE).readProperty_mFormalArgumentName (), var_type_7359, var_formalArgumentCppName_7454, var_formalArgumentCppName_7454, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 144)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_formalArgumentCppName_7454 = GGS_string ("outArgument_").add_operation (enumerator_7326.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 152)) ;
        {
        extensionSetter_insertOutputFormalArgument (ioArgument_ioVariableMap, enumerator_7326.current (HERE).readProperty_mFormalArgumentName (), var_type_7359, var_formalArgumentCppName_7454, var_formalArgumentCppName_7454, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 154)) ;
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_formalArgumentCppName_7454 = GGS_string ("ioArgument_").add_operation (enumerator_7326.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 161)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_7326.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7326.current (HERE).readProperty_mFormalArgumentName (), var_type_7359, var_formalArgumentCppName_7454, var_formalArgumentCppName_7454, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 164)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertInputOutputFormalArgument (ioArgument_ioVariableMap, enumerator_7326.current (HERE).readProperty_mFormalArgumentName (), var_type_7359, var_formalArgumentCppName_7454, var_formalArgumentCppName_7454, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 171)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        var_formalArgumentCppName_7454 = GGS_string ("constinArgument_").add_operation (enumerator_7326.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 179)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = enumerator_7326.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7326.current (HERE).readProperty_mFormalArgumentName (), var_type_7359, var_formalArgumentCppName_7454, var_formalArgumentCppName_7454, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 182)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (ioArgument_ioVariableMap, enumerator_7326.current (HERE).readProperty_mFormalArgumentName (), var_type_7359, var_formalArgumentCppName_7454, var_formalArgumentCppName_7454, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 189)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssign_operation (enumerator_7326.current (HERE).readProperty_mFormalSelector (), enumerator_7326.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_7359, enumerator_7326.current (HERE).readProperty_mFormalArgumentName (), var_formalArgumentCppName_7454  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 197)) ;
    enumerator_7326.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody?&?&??nonMutablePropertyList?mutablePropertyList??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                      const GGS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                                                                                      const GGS_typedPropertyList constinArgument_inNonMutableTypedAttributeList,
                                                                                                                      const GGS_typedPropertyList constinArgument_inMutableTypedAttributeList,
                                                                                                                      const GGS_semanticInstructionListAST constinArgument_inInstructionList,
                                                                                                                      const GGS_location constinArgument_inEndOfMethodLocation,
                                                                                                                      GGS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                                                                      GGS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_10837 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 216)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator_typedPropertyList enumerator_11000 (constinArgument_inNonMutableTypedAttributeList) ;
      while (enumerator_11000.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_10837, enumerator_11000.current (HERE).readProperty_name (), enumerator_11000.current (HERE).readProperty_typeEntry (), constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 221)).add_operation (enumerator_11000.current (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 222)), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 218)) ;
        }
        enumerator_11000.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 228)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      UpEnumerator_typedPropertyList enumerator_11466 (constinArgument_inMutableTypedAttributeList) ;
      while (enumerator_11466.hasCurrentObject ()) {
        {
        extensionSetter_insertMutableProperty (var_variableMap_10837, enumerator_11466.current (HERE).readProperty_name (), enumerator_11466.current (HERE).readProperty_typeEntry (), constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 233)).add_operation (enumerator_11466.current (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 234)), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 230)) ;
        }
        enumerator_11466.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_selfAvailability_2E_available var_selfAvailable_11871 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas", 240)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas", 240)).isValuated ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator_typedPropertyList enumerator_11994 (extensionGetter_definition (var_selfAvailable_11871.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 241)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_11994.hasCurrentObject ()) {
        GGS_bool temp_3 ;
        const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, var_selfAvailable_11871.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("semanticAnalysis.galgas", 242)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          temp_3 = GGS_bool (ComparisonKind::notEqual, enumerator_11994.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 243)))) ;
        }else if (GalgasBool::boolFalse == test_4) {
          temp_3 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_12028 = temp_3 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_10837, enumerator_11994.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_11994.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_11994.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 251)), var_initialized_12028, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 246)) ;
        }
        enumerator_11994.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inRoutineSignatureAST, var_variableMap_10837, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 257)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticInstructionListAST enumerator_12737 (constinArgument_inInstructionList) ;
  while (enumerator_12737.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_12737.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_10837, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 267)) ;
    enumerator_12737.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_10837, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 277)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@externFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument_inProductDirectory */,
                                                                 const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_13647 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 292)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13647, var_nameForUsefulness_13647, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 293)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_13647  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 295)) ;
    }
  }
  GGS_formalInputParameterListForGeneration var_formalArgumentList_13894 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_3 = this ;
  UpEnumerator_formalInputParameterListAST enumerator_14026 (temp_3.readProperty_mFormalArgumentList ()) ;
  while (enumerator_14026.hasCurrentObject ()) {
    var_formalArgumentList_13894.addAssign_operation (enumerator_14026.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14026.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 302)), enumerator_14026.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_14026.current_mFormalArgumentName (HERE), enumerator_14026.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 300)) ;
    enumerator_14026.gotoNextObject () ;
  }
  const GGS_externFunctionDeclarationAST temp_4 = this ;
  const GGS_externFunctionDeclarationAST temp_5 = this ;
  const GGS_externFunctionDeclarationAST temp_6 = this ;
  const GGS_externFunctionDeclarationAST temp_7 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("extern func ").add_operation (temp_4.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 308)), GGS_functionPrototypeDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_bool (true), GGS_string ("func-").add_operation (temp_5.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 311)), temp_6.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_13894, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mResultTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 314)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 307)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody?&?&???????!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              const GGS_formalInputParameterListAST constinArgument_inFunctionSignature,
                                                                                              const GGS_typedPropertyList constinArgument_inTypedAttributeList,
                                                                                              const GGS_string constinArgument_inAttributeVariableNamePrefix,
                                                                                              const GGS_semanticInstructionListAST constinArgument_inInstructionList,
                                                                                              const GGS_lstring constinArgument_inReturnVariableName,
                                                                                              const GGS_lstring constinArgument_inResultTypeName,
                                                                                              const GGS_location constinArgument_inEndOfFunctionLocation,
                                                                                              GGS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                                                                              GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                              GGS_string & outArgument_outResultVariableCppName,
                                                                                              GGS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_15523 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 339)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator_typedPropertyList enumerator_15679 (constinArgument_inTypedAttributeList) ;
      while (enumerator_15679.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_15523, enumerator_15679.current_name (HERE), enumerator_15679.current_typeEntry (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 344)).add_operation (enumerator_15679.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 344)), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 341)) ;
        }
        enumerator_15679.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalInputParameterListAST enumerator_16070 (constinArgument_inFunctionSignature) ;
  while (enumerator_16070.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_16101 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16070.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 352)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_16070.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_string var_cppName_16236 = GGS_string ("constinArgument_").add_operation (enumerator_16070.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 354)) ;
        outArgument_outSignatureForGeneration.addAssign_operation (enumerator_16070.current (HERE).readProperty_mFormalSelector (), var_parameterType_16101, var_cppName_16236, enumerator_16070.current (HERE).readProperty_mFormalArgumentName (), enumerator_16070.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 355)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = enumerator_16070.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_15523, enumerator_16070.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16101, var_cppName_16236, var_cppName_16236, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 362)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_15523, enumerator_16070.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16101, var_cppName_16236, var_cppName_16236, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 364)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GGS_string var_cppName_16853 = GGS_string ("inArgument_").add_operation (enumerator_16070.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 367)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_16070.current (HERE).readProperty_mFormalSelector (), var_parameterType_16101, var_cppName_16853, enumerator_16070.current (HERE).readProperty_mFormalArgumentName (), enumerator_16070.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 368)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = enumerator_16070.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_15523, enumerator_16070.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16101, var_cppName_16853, var_cppName_16853, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 375)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_15523, enumerator_16070.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16101, var_cppName_16853, var_cppName_16853, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 377)) ;
        }
      }
    }
    enumerator_16070.gotoNextObject () ;
  }
  outArgument_outReturnedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inResultTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 382)) ;
  outArgument_outResultVariableCppName = GGS_string ("result_").add_operation (constinArgument_inReturnVariableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 383)) ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_15523, constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 384)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_selfAvailability_2E_available var_selfAvailable_17829 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas", 386)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas", 386)).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      UpEnumerator_typedPropertyList enumerator_17952 (extensionGetter_definition (var_selfAvailable_17829.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 387)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_17952.hasCurrentObject ()) {
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_15523, enumerator_17952.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfFunctionLocation, enumerator_17952.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_17952.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 393)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 388)) ;
        }
        enumerator_17952.gotoNextObject () ;
      }
    }
  }
  outArgument_outSemanticInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticInstructionListAST enumerator_18348 (constinArgument_inInstructionList) ;
  while (enumerator_18348.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_18348.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_15523, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 401)) ;
    enumerator_18348.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_15523, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 411)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                           const GGS_string /* constinArgument_inProductDirectory */,
                                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                           const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                           GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_19240 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 426)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_19240, var_nameForUsefulness_19240, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 427)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_functionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_19240  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 429)) ;
    }
  }
  GGS_analysisContext var_analysisContext_19509 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 436)), GGS_string::makeEmptyString (), GGS_bool (true), inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalInputParameterList_20103 ;
  GGS_unifiedTypeMapEntry var_returnType_20137 ;
  GGS_string var_resultVariableCppName_20157 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_20188 ;
  {
  const GGS_functionDeclarationAST temp_3 = this ;
  const GGS_functionDeclarationAST temp_4 = this ;
  const GGS_functionDeclarationAST temp_5 = this ;
  const GGS_functionDeclarationAST temp_6 = this ;
  const GGS_functionDeclarationAST temp_7 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_19240, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_19509, ioArgument_ioTypeMap, temp_3.readProperty_mFormalArgumentList (), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString (), temp_4.readProperty_mFunctionInstructionList (), temp_5.readProperty_mResultVariableName (), temp_6.readProperty_mResultTypeName (), temp_7.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_20103, var_returnType_20137, var_resultVariableCppName_20157, var_semanticInstructionListForGeneration_20188, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 440)) ;
  }
  const GGS_functionDeclarationAST temp_8 = this ;
  const GGS_functionDeclarationAST temp_9 = this ;
  const GGS_functionDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("function ").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 459)), GGS_functionImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_bool (true), GGS_string ("func-").add_operation (temp_9.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 462)), temp_10.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_20103, var_returnType_20137, var_resultVariableCppName_20157, var_semanticInstructionListForGeneration_20188, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 458)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@onceFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_string /* constinArgument_inProductDirectory */,
                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_21230 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 482)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_21230, var_nameForUsefulness_21230, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 483)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_onceFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_21230  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 485)) ;
    }
  }
  GGS_analysisContext var_analysisContext_21498 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 492)), GGS_string::makeEmptyString (), GGS_bool (true), inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_returnType_22106 ;
  GGS_string var_resultVariableCppName_22126 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_22157 ;
  {
  const GGS_onceFunctionDeclarationAST temp_3 = this ;
  const GGS_onceFunctionDeclarationAST temp_4 = this ;
  const GGS_onceFunctionDeclarationAST temp_5 = this ;
  const GGS_onceFunctionDeclarationAST temp_6 = this ;
  GGS_formalInputParameterListForGeneration joker_22094 ; // Joker input parameter
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_21230, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_21498, ioArgument_ioTypeMap, GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString (), temp_3.readProperty_mFunctionInstructionList (), temp_4.readProperty_mResultVariableName (), temp_5.readProperty_mResultTypeName (), temp_6.readProperty_mEndOfFunctionInstructionList (), joker_22094, var_returnType_22106, var_resultVariableCppName_22126, var_semanticInstructionListForGeneration_22157, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 496)) ;
  }
  const GGS_onceFunctionDeclarationAST temp_7 = this ;
  const GGS_onceFunctionDeclarationAST temp_8 = this ;
  const GGS_onceFunctionDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("once function ").add_operation (temp_7.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 515)), GGS_onceFunctionDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_bool (true), GGS_string ("func-").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 518)), temp_9.readProperty_mFunctionName ().readProperty_string (), var_returnType_22106, var_resultVariableCppName_22126, var_semanticInstructionListForGeneration_22157, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 514)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_string /* constinArgument_inProductDirectory */,
                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                              GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  GGS_lstring var_filewrapperNameForUsefulness_23332 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 541)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_23332, var_filewrapperNameForUsefulness_23332, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 542)) ;
  }
  GGS_wrapperFileMap var_wrapperFileMap_23666 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_23711 ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  GGS_lstring joker_23631 ; // Joker input parameter
  GGS_lstringlist joker_23638 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_23735_2 ; // Joker input parameter
  GGS_bool joker_23735_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), joker_23631, joker_23638, var_wrapperFileMap_23666, var_wrapperDirectoryMap_23711, joker_23735_2, joker_23735_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 544)) ;
  GGS_string var_absoluteSourcePath_23783 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_filewrapperDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 554)).objectCompare (GGS_char (TO_UNICODE (47)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_filewrapperDeclarationAST temp_4 = this ;
      var_absoluteSourcePath_23783 = temp_4.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_filewrapperDeclarationAST temp_5 = this ;
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    var_absoluteSourcePath_23783 = temp_5.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 557)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 557)).add_operation (temp_6.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 557)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_absoluteSourcePath_23783.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 559)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 559)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_filewrapperDeclarationAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_23783, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 560)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 560)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 560)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    GGS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_24299 = GGS_filewrapperTemplateListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperDeclarationAST temp_10 = this ;
    UpEnumerator_filewrapperTemplateListAST enumerator_24401 (temp_10.readProperty_mFilewrapperTemplateList ()) ;
    while (enumerator_24401.hasCurrentObject ()) {
      const GGS_filewrapperDeclarationAST temp_11 = this ;
      GGS_lstring var_filewrapperTemplateNameForUsefulness_24490 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_11.readProperty_mFilewrapperName (), enumerator_24401.current_mFilewrapperTemplateName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 565)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_24490, var_filewrapperTemplateNameForUsefulness_24490, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 569)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_24490, var_filewrapperNameForUsefulness_23332 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 570)) ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::equal, enumerator_24401.current_mFilewrapperTemplatePath (HERE).readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 571)).objectCompare (GGS_char (TO_UNICODE (47)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_24401.current_mFilewrapperTemplatePath (HERE).readProperty_location (), GGS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_23783, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 573)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 573)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 572)) ;
        }
      }
      GGS_string var_absoluteTemplatePath_25123 = var_absoluteSourcePath_23783.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)).add_operation (enumerator_24401.current_mFilewrapperTemplatePath (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)) ;
      GGS_templateInstructionListAST var_resultingInstructionList_25287 ;
      var_resultingInstructionList_25287.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteTemplatePath_25123, enumerator_24401.current_mFilewrapperTemplatePath (HERE).readProperty_location (), inCompiler COMMA_HERE), var_resultingInstructionList_25287  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 577)) ;
      GGS_templateVariableMap var_templateVariableMap_25462 = GGS_templateVariableMap::init (inCompiler COMMA_HERE) ;
      GGS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_25537 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalTemplateInputParameterListAST enumerator_25663 (enumerator_24401.current_mFilewrapperTemplateFormalInputParameters (HERE)) ;
      while (enumerator_25663.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_25726 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_25663.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 583)) ;
        GGS_string var_cppVarName_25810 = GGS_string ("in_").add_operation (enumerator_25663.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 584)) ;
        {
        var_templateVariableMap_25462.setter_insertKey (enumerator_25663.current_mFormalArgumentName (HERE), var_type_25726, var_cppVarName_25810, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 585)) ;
        }
        var_filewrapperTemplateFormalInputParameters_25537.addAssign_operation (enumerator_25663.current_mFormalTemplateSelector (HERE), var_type_25726, var_cppVarName_25810, enumerator_25663.current_mFormalArgumentName (HERE), GGS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 586)) ;
        enumerator_25663.gotoNextObject () ;
      }
      GGS_templateInstructionListForGeneration var_templateInstructionListForGeneration_26135 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_templateAnalysisContext var_templateAnalysisContext_26225 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_25462, inCompiler COMMA_HERE) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_23332, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_26225, ioArgument_ioTypeMap, var_resultingInstructionList_25287, var_templateInstructionListForGeneration_26135, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 595)) ;
      }
      var_filewrapperTemplateListForGeneration_24299.addAssign_operation (enumerator_24401.current_mFilewrapperTemplateName (HERE).readProperty_string (), var_filewrapperTemplateFormalInputParameters_25537, var_templateInstructionListForGeneration_26135  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 604)) ;
      enumerator_24401.gotoNextObject () ;
    }
    const GGS_filewrapperDeclarationAST temp_14 = this ;
    const GGS_filewrapperDeclarationAST temp_15 = this ;
    const GGS_filewrapperDeclarationAST temp_16 = this ;
    const GGS_filewrapperDeclarationAST temp_17 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("filewrapper ").add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 611)), GGS_filewrapperDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_bool (true), GGS_string ("filewrapper-").add_operation (temp_15.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 614)), temp_16.readProperty_mFilewrapperName ().readProperty_string (), temp_17.readProperty_mFilewrapperPath ().readProperty_string (), var_wrapperFileMap_23666, var_wrapperDirectoryMap_23711, var_filewrapperTemplateListForGeneration_24299, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 610)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@galgas3SyntaxComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_27924 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 636)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_27924, var_nameForUsefulness_27924, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 637)) ;
  }
  GGS_terminalMap var_terminalMap_28263 ;
  GGS_indexingListAST var_indexingListAST_28301 ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_bool joker_28238 ; // Joker input parameter
  GGS_terminalDeclarationListAST joker_28359_4 ; // Joker input parameter
  GGS_lexicalAttributeListAST joker_28359_3 ; // Joker input parameter
  GGS_lexicalStyleListAST joker_28359_2 ; // Joker input parameter
  GGS_lexicalListDeclarationListAST joker_28359_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), joker_28238, var_terminalMap_28263, var_indexingListAST_28301, joker_28359_4, joker_28359_3, joker_28359_2, joker_28359_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 639)) ;
  GGS_stringset var_indexNameSet_28446 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_indexingListAST enumerator_28483 (var_indexingListAST_28301) ;
  while (enumerator_28483.hasCurrentObject ()) {
    var_indexNameSet_28446.addAssign_operation (enumerator_28483.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 650)) ;
    enumerator_28483.gotoNextObject () ;
  }
  GGS_bool var_hasIndexing_28565 = GGS_bool (true) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 654)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
      GGS_string var_lexiqueName_28738 = temp_3.readProperty_mLexiqueName ().readProperty_string () ;
      GGS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_29195 ;
      {
      const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_6 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_7 = this ;
      routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (var_nameForUsefulness_27924, ioArgument_ioUsefulEntitiesGraph, temp_4.readProperty_mNonterminalDeclarationList (), temp_5.readProperty_mRuleList (), temp_6.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_28738, constinArgument_inSemanticContext, ioArgument_ioTypeMap, constinArgument_inPredefinedTypes, var_terminalMap_28263, var_indexNameSet_28446, var_hasIndexing_28565, temp_7.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_29195, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 656)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_29195  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 672)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@galgas3GrammarComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string constinArgument_inProductDirectory,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 689)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
      routine_println_3F_ (GGS_string ("*** Analyzing '").add_operation (temp_1.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 690)).add_operation (GGS_string ("' grammar"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 690)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 690)) ;
      }
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  GGS_lstring var_grammarNameForUsefulness_30218 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 693)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_30218, var_grammarNameForUsefulness_30218, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 694)) ;
  }
  GGS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_30525 = GGS_terminalSymbolsMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_30607 = GGS_nonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_lexiqueComponentName_30661 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 698)) ;
  GGS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_30773 = GGS_syntaxComponentListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalToAddList var_nonTerminalToAddList_30845 = GGS_nonTerminalToAddList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_addedNonTerminalCount_30884 = GGS_uint (uint32_t (0U)) ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator_lstringlist enumerator_30917 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_30917.hasCurrentObject ()) {
    GGS_lstring var_syntaxNameForUsefulness_30975 = function_syntaxNameForUsefulEntitiesGraph (enumerator_30917.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 703)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_30218, var_syntaxNameForUsefulness_30975 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 704)) ;
    }
    GGS_uint var_addedNonTerminalCountRef_31160 = var_addedNonTerminalCount_30884 ;
    GGS_lstring var_lexiqueName_31328 ;
    GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_31382 ;
    GGS_syntaxRuleListAST var_ruleList_31439 ;
    GGS_bool var_hasTranslateFeature_31465 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_30917.current_mValue (HERE), var_lexiqueName_31328, var_nonterminalDeclarationList_31382, var_ruleList_31439, var_hasTranslateFeature_31465, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 706)) ;
    GGS_lstring var_lexiqueNameForUsefulness_31499 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_31328, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 713)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_30218, var_lexiqueNameForUsefulness_31499 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)) ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_galgas_33_GrammarComponentAST temp_5 = this ;
      test_4 = temp_5.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_31465.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 716)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 716)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_galgas_33_GrammarComponentAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_30917.current_mValue (HERE).readProperty_location (), GGS_string ("as '").add_operation (temp_6.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 717)).add_operation (GGS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 717)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 717)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_galgas_33_GrammarComponentAST temp_9 = this ;
        test_8 = var_hasTranslateFeature_31465.operator_and (temp_9.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 718)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 718)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_galgas_33_GrammarComponentAST temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mGrammarComponentName ().readProperty_location (), GGS_string ("as '").add_operation (enumerator_30917.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)).add_operation (GGS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)) ;
        }
      }
    }
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::equal, var_lexiqueComponentName_30661.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        var_lexiqueComponentName_30661 = var_lexiqueName_31328 ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_lexiqueName_31328.readProperty_string ().objectCompare (var_lexiqueComponentName_30661.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_30917.current_mValue (HERE).readProperty_location (), GGS_string ("this syntax component uses '").add_operation (var_lexiqueName_31328.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 725)).add_operation (GGS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 726)).add_operation (var_lexiqueComponentName_30661.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 726)).add_operation (GGS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 727)), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 725)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_30607, var_nonterminalDeclarationList_31382, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 730)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_30607, var_ruleList_31439, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 735)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_30607, enumerator_30917.current_mValue (HERE), var_ruleList_31439, var_actuallyUsedTerminalSymbolMap_30525, var_syntaxComponentListForGrammarAnalysis_30773, var_addedNonTerminalCount_30884, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 740)) ;
    }
    GGS_uint var_i_33149 = GGS_uint (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_30884.isValid ()) {
      uint32_t variant_33159 = var_addedNonTerminalCount_30884.uintValue () ;
      bool loop_33159 = true ;
      while (loop_33159) {
        loop_33159 = GGS_bool (ComparisonKind::lowerThan, var_i_33149.objectCompare (var_addedNonTerminalCount_30884.substract_operation (var_addedNonTerminalCountRef_31160, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 749)))).isValid () ;
        if (loop_33159) {
          loop_33159 = GGS_bool (ComparisonKind::lowerThan, var_i_33149.objectCompare (var_addedNonTerminalCount_30884.substract_operation (var_addedNonTerminalCountRef_31160, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 749)))).boolValue () ;
        }
        if (loop_33159 && (0 == variant_33159)) {
          loop_33159 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 749)) ;
        }
        if (loop_33159) {
          variant_33159 -- ;
          var_nonTerminalToAddList_30845.addAssign_operation (enumerator_30917.current_mValue (HERE).readProperty_string (), var_i_33149  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 750)) ;
          var_i_33149.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 751)) ;
        }
      }
    }
    enumerator_30917.gotoNextObject () ;
  }
  GGS_uint var_startSymbolIndex_34319 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_34390 ;
  const GGS_galgas_33_GrammarComponentAST temp_15 = this ;
  var_nonTerminalMapForGrammarAnalysis_30607.method_searchKey (temp_15.readProperty_mStartSymbolName (), var_startSymbolIndex_34319, var_startSymbolAltMap_34390, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 771)) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_16 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_17 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_18 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_16.readProperty_mStartSymbolName ().readProperty_location (), temp_17.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_30607.getter_locationForKey (temp_18.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 780)), var_startSymbolAltMap_34390, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 777)) ;
  }
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_34773 = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_19 = this ;
  UpEnumerator_lstringlist enumerator_34821 (temp_19.readProperty_mUnusedNonterminalList ()) ;
  while (enumerator_34821.hasCurrentObject ()) {
    GGS_uint var_nonterminalIndex_34930 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_34947 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_30607.method_searchKey (enumerator_34821.current_mValue (HERE), var_nonterminalIndex_34930, joker_34947, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 786)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_34773.setter_insertKey (enumerator_34821.current_mValue (HERE), var_nonterminalIndex_34930, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 787)) ;
    }
    enumerator_34821.gotoNextObject () ;
  }
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_35187 = GGS_nonTerminalSymbolSortedListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_35269 (var_nonTerminalMapForGrammarAnalysis_30607) ;
  while (enumerator_35269.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_35187.addAssign_operation (enumerator_35269.current_lkey (HERE), enumerator_35269.current_mNonTerminalIndex (HERE), enumerator_35269.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 792)) ;
    enumerator_35269.gotoNextObject () ;
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = GGS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_21 = this ;
      const GGS_galgas_33_GrammarComponentAST temp_22 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_21.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_30607, var_syntaxComponentListForGrammarAnalysis_30773, temp_22.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 796)) ;
      }
    }
  }
  GGS_string var_dotDocumentFilePath_35925 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 805)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = GGS_bool (gOption_galgas_5F_cli_5F_options_emitClassGraph.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_35925, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 807)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_23) {
    {
    GGS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_35925, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 812)) ;
    }
  }
  GGS_stringset var_implementationFileHeader_36499 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_36551 (var_nonTerminalMapForGrammarAnalysis_30607) ;
  while (enumerator_36551.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_36598 (enumerator_36551.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_36598.hasCurrentObject ()) {
      UpEnumerator_signatureForGrammarAnalysis enumerator_36727 (enumerator_36598.current_mFormalParametersList (HERE)) ;
      while (enumerator_36727.hasCurrentObject ()) {
        switch (enumerator_36727.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            GGS_unifiedTypeMapEntry var_t_36913 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_36727.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 823)) ;
            extensionMethod_addHeaderFileName (var_t_36913, var_implementationFileHeader_36499, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 824)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_36727.gotoNextObject () ;
      }
      enumerator_36598.gotoNextObject () ;
    }
    enumerator_36551.gotoNextObject () ;
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      var_implementationFileHeader_36499 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_25 = this ;
  GGS_string var_HTMLFilePath_37306 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 834)).add_operation (temp_25.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 834)).add_operation (GGS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 834)) ;
  GGS_string var_grammarCppFile_37837 ;
  GGS_string var_grammarHTMLHelperContents_37869 ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_26 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_27 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_28 = this ;
  GGS_string temp_29 ;
  const GalgasBool test_30 = temp_28.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_30) {
    temp_29 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 845)) ;
  }else if (GalgasBool::boolFalse == test_30) {
    temp_29 = GGS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21_ (temp_26.readProperty_mGrammarComponentName (), temp_27.readProperty_mGrammarClass (), var_startSymbolIndex_34319, var_lexiqueComponentName_30661.readProperty_string (), var_actuallyUsedTerminalSymbolMap_30525, var_syntaxComponentListForGrammarAnalysis_30773, var_unusedNonTerminalSymbolsForGrammar_34773, var_HTMLFilePath_37306, var_nonTerminalSymbolSortedListForGrammarAnalysis_35187, temp_29, var_grammarCppFile_37837, var_grammarHTMLHelperContents_37869, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 835)) ;
  }
  GalgasBool test_31 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_31) {
    test_31 = GGS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      var_HTMLFilePath_37306.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 851)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 851)) ;
      GGS_bool joker_38206 ; // Joker input parameter
      var_grammarHTMLHelperContents_37869.method_writeToFileWhenDifferentContents (var_HTMLFilePath_37306, joker_38206, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 852)) ;
    }
  }
  if (GalgasBool::boolFalse == test_31) {
    {
    GGS_string::class_method_deleteFileIfExists (var_HTMLFilePath_37306, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 854)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_32 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_33 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_34 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_35 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_36 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string::makeEmptyString (), GGS_grammarForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("grammar-").add_operation (temp_32.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 861)), temp_33.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_30661.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_30607, var_nonTerminalToAddList_30845, temp_34.readProperty_mSyntaxComponents (), temp_35.readProperty_mStartSymbolName ().readProperty_string (), temp_36.readProperty_mHasTranslateFeature (), var_grammarCppFile_37837, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 857)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes function_buildPredefinedTypes (const GGS_unifiedTypeMap & constinArgument_inTypeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_predefinedTypes result_result ; // Returned variable
  result_result = GGS_predefinedTypes::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("location"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 882)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 882)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("bool"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 883)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 883)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("char"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 884)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 884)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("string"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 885)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 885)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("uint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 886)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 886)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("sint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 887)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 887)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("uint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 888)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 888)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("sint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 889)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 889)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("double"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 890)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 890)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lbool"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 891)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 891)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lchar"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 892)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 892)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lstring"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 893)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 893)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("luint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 894)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 894)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lsint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 895)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 895)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("luint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 896)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 896)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lsint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 897)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 897)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("ldouble"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 898)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 898)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("stringlist"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 899)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 899)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lbigint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 900)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 900)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("stringset"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 902)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 902)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lstringlist"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 903)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 903)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_buildPredefinedTypes [2] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_buildPredefinedTypes (Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_unifiedTypeMap operand0 = GGS_unifiedTypeMap::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_buildPredefinedTypes (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildPredefinedTypes ("buildPredefinedTypes",
                                                                      functionWithGenericHeader_buildPredefinedTypes,
                                                                      & kTypeDescriptor_GALGAS_predefinedTypes,
                                                                      1,
                                                                      functionArgs_buildPredefinedTypes) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'syntaxFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_syntaxFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_syntaxFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_syntaxFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_syntaxFileGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (Compiler * /* inCompiler */,
                                                                                                const GGS_stringset & in_INCLUSION_5F_SET
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  GGS_uint index_29_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_29 (in_INCLUSION_5F_SET) ;
    while (enumerator_29.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_29.current_key (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      enumerator_29.gotoNextObject () ;
      index_29_.increment () ;
    }
  }
  result.appendString ("\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (Compiler * inCompiler,
                                                                                            const GGS_string & in_COMPONENT_5F_NAME,
                                                                                            const GGS_string & in_LEXIQUE_5F_NAME,
                                                                                            const GGS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                            const GGS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                            const GGS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                            const GGS_bool & in_HAS_5F_INDEXING,
                                                                                            const GGS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Parser class '").add_operation (in_COMPONENT_5F_NAME, inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).add_operation (GGS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cParser_") ;
  result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" {\n//--- Virtual destructor\n  public: virtual ~ cParser_") ;
  result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" (void) { }\n\n//--- Non terminal declarations\n") ;
  GGS_uint index_510_ (0) ;
  if (in_NONTERMINAL_5F_MAP.isValid ()) {
    UpEnumerator_nonterminalMap enumerator_510 (in_NONTERMINAL_5F_MAP) ;
    while (enumerator_510.hasCurrentObject ()) {
      GGS_uint index_566_ (0) ;
      if (enumerator_510.current_mLabelMap (HERE).isValid ()) {
        UpEnumerator_nonterminalLabelMap enumerator_566 (enumerator_510.current_mLabelMap (HERE)) ;
        while (enumerator_566.hasCurrentObject ()) {
          result.appendString ("  protected: virtual void nt_") ;
          result.appendString (enumerator_510.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_566.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_799_IDX (0) ;
          if (enumerator_566.current_mSignature (HERE).isValid ()) {
            UpEnumerator_formalParameterSignature enumerator_799 (enumerator_566.current_mSignature (HERE)) ;
            while (enumerator_799.hasCurrentObject ()) {
              const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_799.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              switch (test_0) {
              case GalgasBool::boolTrue : {
                result.appendString ("const class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_799.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                switch (test_1) {
                case GalgasBool::boolTrue : {
                  result.appendString ("class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_799.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  switch (test_2) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              enumerator_799.gotoNextObject () ;
              index_799_IDX.increment () ;
            }
          }
          const GalgasBool test_3 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_3) {
          case GalgasBool::boolTrue : {
            result.appendString ("class String & ") ;
            result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 28)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString ("class Lexique_") ;
          result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
          result.appendString (" * inLexique) = 0 ;\n\n") ;
          enumerator_566.gotoNextObject () ;
          index_566_.increment () ;
        }
      }
      result.appendString ("  protected: virtual void nt_") ;
      result.appendString (enumerator_510.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 33)).stringValue ()) ;
      result.appendString ("_parse (") ;
      columnMarker = result.currentColumn () ;
      const GalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("class String & ") ;
        result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("class Lexique_") ;
      result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
      result.appendString (" * inLexique) = 0 ;\n\n") ;
      const GalgasBool test_5 = in_HAS_5F_INDEXING.boolEnum () ;
      switch (test_5) {
      case GalgasBool::boolTrue : {
        result.appendString ("  protected: virtual void nt_") ;
        result.appendString (enumerator_510.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
        result.appendString ("_indexing (class Lexique_") ;
        result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
        result.appendString (" * inLexique) = 0 ;\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_510.gotoNextObject () ;
      index_510_.increment () ;
    }
  }
  result.appendString ("\n//--- Rule declarations\n") ;
  GGS_uint index_2251_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    UpEnumerator_ruleDeclarationList enumerator_2251 (in_RULE_5F_DECLARATION_5F_LIST) ;
    while (enumerator_2251.hasCurrentObject ()) {
      GGS_uint index_2389_ (0) ;
      if (enumerator_2251.current_mLabelImplementationList (HERE).isValid ()) {
        UpEnumerator_ruleLabelImplementationList enumerator_2389 (enumerator_2251.current_mLabelImplementationList (HERE)) ;
        while (enumerator_2389.hasCurrentObject ()) {
          result.appendString ("  protected: void rule_") ;
          result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_2251.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString ("_i") ;
          result.appendString (enumerator_2251.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_2389.current_mLabelName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_2693_IDX (0) ;
          if (enumerator_2389.current_mSignature (HERE).isValid ()) {
            UpEnumerator_formalParameterSignature enumerator_2693 (enumerator_2389.current_mSignature (HERE)) ;
            while (enumerator_2693.hasCurrentObject ()) {
              const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2693.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 48)))).boolEnum () ;
              switch (test_6) {
              case GalgasBool::boolTrue : {
                result.appendString ("const GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_2693.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_2693_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, enumerator_2693.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 50)))).boolEnum () ;
                switch (test_7) {
                case GalgasBool::boolTrue : {
                  result.appendString ("GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_2693.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_2693_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, enumerator_2693.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 52)))).boolEnum () ;
                  switch (test_8) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2693.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_2693_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2693.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_2693_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              enumerator_2693.gotoNextObject () ;
              index_2693_IDX.increment () ;
            }
          }
          const GalgasBool test_9 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_9) {
          case GalgasBool::boolTrue : {
            result.appendString ("String & ") ;
            result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 60)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString ("Lexique_") ;
          result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
          result.appendString (" * inLexique) ;\n\n") ;
          enumerator_2389.gotoNextObject () ;
          index_2389_.increment () ;
        }
      }
      result.appendString ("  protected: void rule_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2251.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
      result.appendString ("_i") ;
      result.appendString (enumerator_2251.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
      result.appendString ("_parse (") ;
      columnMarker = result.currentColumn () ;
      const GalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      switch (test_10) {
      case GalgasBool::boolTrue : {
        result.appendString ("String & ") ;
        result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("Lexique_") ;
      result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
      result.appendString (" * inLexique) ;\n\n") ;
      const GalgasBool test_11 = in_HAS_5F_INDEXING.boolEnum () ;
      switch (test_11) {
      case GalgasBool::boolTrue : {
        result.appendString ("  protected: void rule_") ;
        result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_2251.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
        result.appendString ("_i") ;
        result.appendString (enumerator_2251.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
        result.appendString ("_indexing (Lexique_") ;
        result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
        result.appendString (" * inLexique) ;\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2251.gotoNextObject () ;
      index_2251_.increment () ;
    }
  }
  result.appendString ("\n\n//--- Select methods\n") ;
  GGS_uint index_4173_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    UpEnumerator_uintlist enumerator_4173 (in_SELECT_5F_METHOD_5F_LIST) ;
    while (enumerator_4173.hasCurrentObject ()) {
      result.appendString ("  protected: virtual int32_t select_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_4173.current_mValue (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue ()) ;
      result.appendString (" (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
      result.appendString (" *) = 0 ;\n\n") ;
      enumerator_4173.gotoNextObject () ;
      index_4173_.increment () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (const GGS_lstring constinArgument_inNonTerminalName,
                                                                   const GGS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                                   GGS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cMapElement_nonterminalMap * objectArray_43363 = (const cMapElement_nonterminalMap *) ioArgument_ioNonterminalDeclarationMap.readAccessForWithInstruction (constinArgument_inNonTerminalName.readProperty_string ()) ;
  if (nullptr != objectArray_43363) {
      macroValidSharedObject (objectArray_43363, cMapElement_nonterminalMap) ;
    GGS_stringset var_firstDeclarationLabelSet_43447 = objectArray_43363->mProperty_mLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 980)) ;
    GGS_stringset var_reDeclarationLabelSet_43512 = constinArgument_inNonterminalLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 981)) ;
    GGS_stringset var_missingLabelSet_43586 = var_firstDeclarationLabelSet_43447.substract_operation (var_reDeclarationLabelSet_43512, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 982)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::greaterThan, var_missingLabelSet_43586.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 983)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_s_43711 = GGS_string::makeEmptyString () ;
        UpEnumerator_stringset enumerator_43729 (var_missingLabelSet_43586) ;
        while (enumerator_43729.hasCurrentObject ()) {
          var_s_43711.plusAssign_operation(GGS_string ("\n-  ").add_operation (enumerator_43729.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 986)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 986)) ;
          enumerator_43729.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 989)).add_operation (GGS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 989)).add_operation (var_s_43711, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 989)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 988)) ;
      }
    }
    GGS_stringset var_newLabelSet_43954 = var_reDeclarationLabelSet_43512.substract_operation (var_firstDeclarationLabelSet_43447, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 991)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_newLabelSet_43954.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 992)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_string var_s_44063 = GGS_string::makeEmptyString () ;
        UpEnumerator_stringset enumerator_44081 (var_newLabelSet_43954) ;
        while (enumerator_44081.hasCurrentObject ()) {
          var_s_44063.plusAssign_operation(GGS_string ("\n-  ").add_operation (enumerator_44081.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 995)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 995)) ;
          enumerator_44081.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 998)).add_operation (GGS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 998)).add_operation (var_s_44063, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 998)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 997)) ;
      }
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, var_missingLabelSet_43586.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1000)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_newLabelSet_43954.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1000)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1000)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        UpEnumerator_nonterminalLabelMap enumerator_44366 (objectArray_43363->mProperty_mLabelMap) ;
        UpEnumerator_nonterminalLabelMap enumerator_44397 (constinArgument_inNonterminalLabelMap) ;
        while (enumerator_44366.hasCurrentObject () && enumerator_44397.hasCurrentObject ()) {
          GGS_formalParameterSignature var_newSignature_44491 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
          UpEnumerator_formalParameterSignature enumerator_44586 (enumerator_44397.current_mSignature (HERE)) ;
          while (enumerator_44586.hasCurrentObject ()) {
            var_newSignature_44491.addAssign_operation (enumerator_44586.current_mFormalSelector (HERE), enumerator_44586.current_mFormalArgumentType (HERE), enumerator_44586.current_mFormalArgumentPassingMode (HERE), enumerator_44586.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1004)) ;
            enumerator_44586.gotoNextObject () ;
          }
          {
          routine_checkMethodSignatures_3F__3F__3F__3F_ (enumerator_44366.current (HERE).readProperty_mSignatureForGeneration (), enumerator_44366.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_44491, enumerator_44397.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1006)) ;
          }
          enumerator_44366.gotoNextObject () ;
          enumerator_44397.gotoNextObject () ;
        }
      }
    }
  }else{
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1015)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (const GGS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                              const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GGS_nonterminalMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonterminalDeclarationListAST enumerator_45536 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_45536.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_45588 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_nonTerminalLabelListAST enumerator_45674 (enumerator_45536.current_mLabels (HERE)) ;
    while (enumerator_45674.hasCurrentObject ()) {
      GGS_formalParameterListForGeneration var_signatureForGeneration_45722 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_formalParameterSignature var_signature_45794 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalParameterListAST enumerator_45933 (enumerator_45674.current_mFormalArgumentList (HERE)) ;
      while (enumerator_45933.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_t_45974 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_45933.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1034)) ;
        var_signatureForGeneration_45722.addAssign_operation (enumerator_45933.current_mFormalSelector (HERE), enumerator_45933.current_mFormalArgumentPassingMode (HERE), var_t_45974, enumerator_45933.current_mFormalArgumentName (HERE), enumerator_45933.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1035)) ;
        var_signature_45794.addAssign_operation (enumerator_45933.current_mFormalSelector (HERE), var_t_45974, enumerator_45933.current_mFormalArgumentPassingMode (HERE), enumerator_45933.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)) ;
        enumerator_45933.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_45588.setter_insertKey (enumerator_45674.current_mLabelName (HERE), var_signatureForGeneration_45722, var_signature_45794, enumerator_45674.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1038)) ;
      }
      enumerator_45674.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_45536.current_mNonterminalName (HERE), var_nonterminalLabelMap_45588, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1040)) ;
    }
    enumerator_45536.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@semanticInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GGS_bool /* constinArgument_inHasTranslateFeature */,
                                                                   const GGS_terminalMap /* constinArgument_inTerminalMap */,
                                                                   const GGS_string /* constinArgument_inLexiqueName */,
                                                                   const GGS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                   const GGS_string /* constinArgument_inComponentName */,
                                                                   const GGS_stringset /* constinArgument_inIndexNameSet */,
                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_semanticInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1082)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputParameterAnonymousVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterAnonymousVariable::method_analyzeInputParameter (const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                         GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         const GGS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                         const GGS_string /* constinArgument_inLexicalAttributeName */,
                                                                         GGS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                         GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputParameterVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                const GGS_string constinArgument_inLexicalAttributeName,
                                                                GGS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_49717 ;
  GGS_string var_cppName_49735 ;
  {
  const GGS_inputParameterVariable temp_0 = this ;
  GGS_string joker_49743 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_49717, var_cppName_49735, joker_49743, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1122)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_49774 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_49774 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_49774 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_49774 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_49774 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_49774 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_49774 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_49774 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_49774 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_expectedType_49774.objectCompare (var_type_49717)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_inputParameterVariable temp_2 = this ;
      const GGS_inputParameterVariable temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136)).add_operation (extensionGetter_identifierRepresentation (var_type_49717, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_49774, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1135)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GGS_string::makeEmptyString (), var_cppName_49735, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputParameterDeclaredVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GGS_string constinArgument_inLexicalAttributeName,
                                                                        GGS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_expectedType_51393 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_51393 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_51393 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_51393 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_51393 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_51393 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_51393 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_51393 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_51393 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredVariable temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredVariable temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_52256 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1168)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_51393.objectCompare (var_type_52256)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredVariable temp_4 = this ;
          const GGS_inputParameterDeclaredVariable temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)).add_operation (extensionGetter_definition (var_type_52256, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)).add_operation (extensionGetter_definition (var_expectedType_51393, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1170)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredVariable temp_7 = this ;
  const GGS_inputParameterDeclaredVariable temp_8 = this ;
  GGS_string var_cppName_52657 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1176)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1176)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176)) ;
  {
  const GGS_inputParameterDeclaredVariable temp_9 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GGS_bool (true), var_expectedType_51393, var_cppName_52657, var_cppName_52657, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1177)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (extensionGetter_definition (var_expectedType_51393, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1185)).readProperty_typeName ().readProperty_string (), var_cppName_52657, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1184)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputParameterDeclaredConstant analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GGS_string constinArgument_inLexicalAttributeName,
                                                                        GGS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_expectedType_53583 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_53583 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_53583 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_53583 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_53583 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_53583 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_53583 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_53583 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_53583 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredConstant temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredConstant temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_54446 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1213)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_53583.objectCompare (var_type_54446)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredConstant temp_4 = this ;
          const GGS_inputParameterDeclaredConstant temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1216)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1216)).add_operation (extensionGetter_definition (var_type_54446, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1216)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1216)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1216)).add_operation (extensionGetter_definition (var_expectedType_53583, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1217)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1217)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1217)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1215)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredConstant temp_7 = this ;
  const GGS_inputParameterDeclaredConstant temp_8 = this ;
  GGS_string var_cppName_54847 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1221)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1221)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1221)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1221)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1221)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1221)) ;
  {
  const GGS_inputParameterDeclaredConstant temp_9 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_53583, var_cppName_54847, var_cppName_54847, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1222)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (extensionGetter_definition (var_expectedType_53583, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1225)).readProperty_typeName ().readProperty_string (), var_cppName_54847, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1224)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeSDT (const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                    GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                    const GGS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                    GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeSDT (const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                    GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                    const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                    GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1254)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1255)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                     const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1266)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1267)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_type_57119 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_57124 ; // Joker input parameter
  GGS_string joker_57127 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_57119, joker_57124, joker_57127, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1269)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_57137 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_57137.objectCompare (var_type_57119)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1273)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1273)).add_operation (extensionGetter_identifierRepresentation (var_type_57119, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1273)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1273)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1273)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_57137, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1274)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1274)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1274)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1272)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1285)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1286)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GGS_string var_cppName_58015 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1288)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1288)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_58157 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1289)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_58157, var_cppName_58015, var_cppName_58015, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1290)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_58383 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_58383.objectCompare (var_type_58157)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1300)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1300)).add_operation (extensionGetter_identifierRepresentation (var_type_58157, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1300)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1300)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1300)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_58383, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1301)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1301)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1301)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1299)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1312)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1313)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_59254 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1315)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1315)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_59396 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1316)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_59396, var_cppName_59254, var_cppName_59254, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1317)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_59574 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_59574.objectCompare (var_type_59396)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1321)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1321)).add_operation (extensionGetter_identifierRepresentation (var_type_59396, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1321)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1321)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_59574, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1322)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1322)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1322)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1320)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_generateCode (const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      const GGS_string constinArgument_inAccessMethodName,
                                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)).add_operation (GGS_string (".appendString ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1343)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1343)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_generateCode (const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      const GGS_string /* constinArgument_inAccessMethodName */,
                                                                                      GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_generateCode (const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                       const GGS_string constinArgument_inAccessMethodName,
                                                                                       GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                       GGS_string & ioArgument_ioGeneratedCode,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
  GGS_string var_cppName_61610 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1363)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1363)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_cppName_61610.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_generateCode (const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                               const GGS_string constinArgument_inAccessMethodName,
                                                                                               GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
  GGS_string var_cppName_62204 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1374)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1374)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1374)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1374)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1374)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1374)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("GGS_string ").add_operation (var_cppName_62204, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1375)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1375)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1375)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1375)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1375)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_generateCode (const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GGS_string constinArgument_inAccessMethodName,
                                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                 GGS_string & ioArgument_ioGeneratedCode,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
  GGS_string var_cppName_62803 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1385)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1385)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1385)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1385)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1385)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1385)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("const GGS_string ").add_operation (var_cppName_62803, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1386)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1386)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1386)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1386)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1386)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList?&?&????????&&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                       const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                       const GGS_string constinArgument_inLexiqueName,
                                                                                                       const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                                       const GGS_string constinArgument_inComponentName,
                                                                                                       const GGS_syntaxInstructionList constinArgument_inSyntaxInstructionListAST,
                                                                                                       const GGS_location constinArgument_inEndOfBranchLocation,
                                                                                                       const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       GGS_uint & ioArgument_ioSelectMethodCount,
                                                                                                       GGS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1409)) ;
  }
  UpEnumerator_syntaxInstructionList enumerator_63955 (constinArgument_inSyntaxInstructionListAST) ;
  while (enumerator_63955.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_63955.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1412)) ;
    enumerator_63955.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1429)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel?&???&???????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                              const GGS_formalParameterListAST constinArgument_inFormalArguments,
                                                                                                              const GGS_syntaxInstructionList constinArgument_inSyntaxInstructionList,
                                                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                              const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                              const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                              const GGS_string constinArgument_inLexiqueName,
                                                                                                              const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                                              const GGS_string constinArgument_inComponentName,
                                                                                                              const GGS_location constinArgument_inEndOfInstructionList,
                                                                                                              const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                              GGS_uint & ioArgument_ioSelectMethodCount,
                                                                                                              GGS_formalParameterListForGeneration & outArgument_outSignatureForGeneration,
                                                                                                              GGS_formalParameterSignature & outArgument_outSignature,
                                                                                                              GGS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_65504 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inFormalArguments, var_variableMap_65504, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1458)) ;
  }
  outArgument_outSignature = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalParameterListForGeneration enumerator_65849 (outArgument_outSignatureForGeneration) ;
  while (enumerator_65849.hasCurrentObject ()) {
    outArgument_outSignature.addAssign_operation (enumerator_65849.current_mFormalSelector (HERE), enumerator_65849.current_mFormalArgumentType (HERE), enumerator_65849.current_mFormalArgumentPassingMode (HERE), enumerator_65849.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1468)) ;
    enumerator_65849.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_syntaxInstructionList enumerator_66182 (constinArgument_inSyntaxInstructionList) ;
  while (enumerator_66182.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_66182.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_65504, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1474)) ;
    enumerator_66182.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_65504, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1491)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent?&?????&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (const GGS_lstring constinArgument_inSyntaxComponentUsefulnessName,
                                                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                        const GGS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                                                                        const GGS_syntaxRuleListAST constinArgument_inRuleList,
                                                                                                        const GGS_string constinArgument_inSyntaxComponentName,
                                                                                                        const GGS_string constinArgument_inLexiqueName,
                                                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                        const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                                                        const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                        const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                        const GGS_bool constinArgument_inHasIndexing,
                                                                                                        const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                        GGS_syntaxDeclarationForGeneration & outArgument_outSyntaxDeclarationForGeneration,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSyntaxDeclarationForGeneration.drop () ; // Release 'out' argument
  GGS_nonterminalMap var_nonterminalMap_67767 ;
  {
  routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, ioArgument_ioTypeMap, var_nonterminalMap_67767, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1517)) ;
  }
  UpEnumerator_syntaxRuleListAST enumerator_67864 (constinArgument_inRuleList) ;
  while (enumerator_67864.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_67922 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_syntaxRuleLabelListAST enumerator_68010 (enumerator_67864.current_mLabelList (HERE)) ;
    while (enumerator_68010.hasCurrentObject ()) {
      GGS_formalParameterListForGeneration var_signatureForGeneration_68074 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_formalParameterSignature var_signature_68139 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalParameterListAST enumerator_68253 (enumerator_68010.current_mFormalArguments (HERE)) ;
      while (enumerator_68253.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_68291 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_68253.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1530)) ;
        var_signatureForGeneration_68074.addAssign_operation (enumerator_68253.current_mFormalSelector (HERE), enumerator_68253.current_mFormalArgumentPassingMode (HERE), var_type_68291, enumerator_68253.current_mFormalArgumentName (HERE), GGS_string ("argument_").add_operation (enumerator_68253.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1531)) ;
        var_signature_68139.addAssign_operation (enumerator_68253.current_mFormalSelector (HERE), var_type_68291, enumerator_68253.current_mFormalArgumentPassingMode (HERE), enumerator_68253.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1537)) ;
        enumerator_68253.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_67922.setter_insertKey (enumerator_68010.current_mLabelName (HERE), var_signatureForGeneration_68074, var_signature_68139, enumerator_68010.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1539)) ;
      }
      enumerator_68010.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_67864.current_mNonterminalName (HERE), var_nonterminalLabelMap_67922, var_nonterminalMap_67767, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1541)) ;
    }
    enumerator_67864.gotoNextObject () ;
  }
  GGS_analysisContext var_analysisContext_68916 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 1548)), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_HERE) ;
  GGS_uint var_selectMethodCount_69181 = GGS_uint (uint32_t (0U)) ;
  GGS_ruleDeclarationList var_ruleDeclarationList_69230 = GGS_ruleDeclarationList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_newRuleIndex_69268 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_syntaxRuleListAST enumerator_69309 (constinArgument_inRuleList) ;
  while (enumerator_69309.hasCurrentObject ()) {
    GGS_ruleLabelImplementationList var_ruleLabelImplementationList_69383 = GGS_ruleLabelImplementationList::init (inCompiler COMMA_HERE) ;
    GGS_uint var_localSelectMethodCount_69431 = var_selectMethodCount_69181 ;
    GGS_nonterminalLabelMap joker_69522 ; // Joker input parameter
    var_nonterminalMap_67767.method_searchKey (enumerator_69309.current_mNonterminalName (HERE), joker_69522, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1560)) ;
    UpEnumerator_syntaxRuleLabelListAST enumerator_69609 (enumerator_69309.current_mLabelList (HERE)) ;
    while (enumerator_69609.hasCurrentObject ()) {
      var_localSelectMethodCount_69431 = var_selectMethodCount_69181 ;
      GGS_formalParameterListForGeneration var_signatureForGeneration_70170 ;
      GGS_formalParameterSignature var_signature_70206 ;
      GGS_semanticInstructionListForGeneration var_instructionListForGeneration_70229 ;
      {
      routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_69609.current_mFormalArguments (HERE), enumerator_69609.current_mSyntaxInstructionList (HERE), var_analysisContext_68916, ioArgument_ioTypeMap, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1572)), var_nonterminalMap_67767, constinArgument_inSyntaxComponentName, enumerator_69609.current_mEndOfInstructionList (HERE), constinArgument_inIndexNameSet, var_localSelectMethodCount_69431, var_signatureForGeneration_70170, var_signature_70206, var_instructionListForGeneration_70229, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)) ;
      }
      var_ruleLabelImplementationList_69383.addAssign_operation (enumerator_69609.current_mLabelName (HERE), var_signatureForGeneration_70170, var_signature_70206, enumerator_69609.current_mEndOfArgumentLocation (HERE), var_instructionListForGeneration_70229  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1582)) ;
      enumerator_69609.gotoNextObject () ;
    }
    var_selectMethodCount_69181 = var_localSelectMethodCount_69431 ;
    GGS_nonterminalLabelMap joker_70547 ; // Joker input parameter
    var_nonterminalMap_67767.method_searchKey (enumerator_69309.current_mNonterminalName (HERE), joker_70547, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1590)) ;
    var_ruleDeclarationList_69230.addAssign_operation (enumerator_69309.current_mNonterminalName (HERE).readProperty_string (), var_newRuleIndex_69268, var_ruleLabelImplementationList_69383  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1591)) ;
    var_newRuleIndex_69268.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)) ;
    enumerator_69309.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GGS_syntaxDeclarationForGeneration::init_21__21__21__21__21__21__21_ (constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_67767, var_ruleDeclarationList_69230, var_selectMethodCount_69181, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitClassGraphFile??'
//
//--------------------------------------------------------------------------------------------------

void routine_emitClassGraphFile_3F__3F_ (const GGS_string constinArgument_inDotDocumentFilePath,
                                         const GGS_unifiedTypeMap constinArgument_inTypeMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  constinArgument_inDotDocumentFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 1612)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1612)) ;
  GGS_string var_document_71248 = GGS_string ("digraph G {\n") ;
  var_document_71248.plusAssign_operation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1614)) ;
  var_document_71248.plusAssign_operation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1615)) ;
  UpEnumerator_unifiedTypeMap enumerator_71392 (constinArgument_inTypeMap) ;
  while (enumerator_71392.hasCurrentObject ()) {
    switch (enumerator_71392.current_mElement (HERE).readProperty_mDefinition ().enumValue ()) {
    case GGS_typeDefinition::Enumeration::invalid:
      break ;
    case GGS_typeDefinition::Enumeration::enum_unsolved:
      break ;
    case GGS_typeDefinition::Enumeration::enum_solved:
      {
        GGS_unifiedTypeDefinition extractedValue_71504_definition_0 ;
        enumerator_71392.current_mElement (HERE).readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_71504_definition_0) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extractedValue_71504_definition_0.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("semanticAnalysis.galgas", 1620)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            switch (extractedValue_71504_definition_0.readProperty_superType ().enumValue ()) {
            case GGS_unifiedTypeMapEntry::Enumeration::invalid:
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
              {
                var_document_71248.plusAssign_operation(GGS_string ("  \"@").add_operation (extractedValue_71504_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1623)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1623)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1623)) ;
              }
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
              {
                GGS_unifiedTypeMapElementClass_2E_weak extractedValue_71707_superType_0 ;
                extractedValue_71504_definition_0.readProperty_superType ().getAssociatedValuesFor_element (extractedValue_71707_superType_0) ;
                GalgasBool test_1 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_1) {
                  const GGS_unifiedTypeMapElementClass var_t_71737 = extractedValue_71707_superType_0.unwrappedValue () ;
                  if (!extractedValue_71707_superType_0.isValuated ()) {
                    test_1 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_1) {
                    const GGS_typeDefinition_2E_solved var_solvedType_71756 = var_t_71737.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas", 1625)).unwrappedValue () ;
                    if (!var_t_71737.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas", 1625)).isValuated ()) {
                      test_1 = GalgasBool::boolFalse ;
                    }
                    if (GalgasBool::boolTrue == test_1) {
                      var_document_71248.plusAssign_operation(GGS_string ("  \"@").add_operation (extractedValue_71504_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1626)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1626)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1626)) ;
                      var_document_71248.plusAssign_operation(GGS_string ("  \"@").add_operation (extractedValue_71504_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1627)).add_operation (GGS_string ("\" -> \"@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1627)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1627)) ;
                      var_document_71248.plusAssign_operation(var_solvedType_71756.readProperty_definition ().readProperty_typeName ().readProperty_string ().add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1628)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1628)) ;
                    }
                  }
                }
              }
              break ;
            }
          }
        }
      }
      break ;
    }
    enumerator_71392.gotoNextObject () ;
  }
  var_document_71248.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)) ;
  GGS_bool joker_72144 ; // Joker input parameter
  var_document_71248.method_writeToFileWhenDifferentContents (constinArgument_inDotDocumentFilePath, joker_72144, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1635)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_string & ioArgument_ioImplementation,
                                                                              GGS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                              GGS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GGS_string & outArgument_outCppName,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 34)) ;
  const GGS_outputActualParameterForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 35)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GGS_string & /* ioArgument_ioImplementation */,
                                                                                   GGS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                   GGS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GGS_string & outArgument_outCppName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputActualParameterForGeneration temp_0 = this ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_2397 (temp_0.readProperty_mTypeList ()) ;
  while (enumerator_2397.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_2397.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 49)) ;
    enumerator_2397.gotoNextObject () ;
  }
  const GGS_outputInputActualParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mOutputInputVariableCppName () ;
  const GGS_outputInputActualParameterForGeneration temp_2 = this ;
  UpEnumerator_lstringlist enumerator_2525 (temp_2.readProperty_mStructAttributeList ()) ;
  while (enumerator_2525.hasCurrentObject ()) {
    outArgument_outCppName.plusAssign_operation(GGS_string (".mProperty_").add_operation (enumerator_2525.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 53)) ;
    enumerator_2525.gotoNextObject () ;
  }
  {
  const GGS_outputInputActualParameterForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mOutputInputVariableCppName () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 55)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GGS_string & /* ioArgument_ioImplementation */,
                                                                             GGS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                             GGS_stringlist & ioArgument_ioOutputVariableList,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_string & outArgument_outCppName,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualParameterForGeneration temp_0 = this ;
  outArgument_outCppName = temp_0.readProperty_mInputActualCppName () ;
  const GGS_inputActualParameterForGeneration temp_1 = this ;
  ioArgument_ioOutputVariableList.addAssign_operation (temp_1.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 69)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 70)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GGS_string & ioArgument_ioImplementation,
                                                                            GGS_stringlist & ioArgument_ioJokerParametersToReleaseList,
                                                                            GGS_stringlist & ioArgument_ioOutputVariableList,
                                                                            GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                            GGS_string & outArgument_outCppName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputJokerParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 83)) ;
  const GGS_inputJokerParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mInputActualCppName () ;
  const GGS_inputJokerParameterForGeneration temp_2 = this ;
  ioArgument_ioImplementation.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)).add_operation (GGS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)) ;
  const GGS_inputJokerParameterForGeneration temp_3 = this ;
  ioArgument_ioJokerParametersToReleaseList.addAssign_operation (temp_3.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 86)) ;
  const GGS_inputJokerParameterForGeneration temp_4 = this ;
  ioArgument_ioOutputVariableList.addAssign_operation (temp_4.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 87)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@semanticBlockInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticBlockInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 98)) ;
  {
  const GGS_semanticBlockInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 99)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 107)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & /* ioArgument_ioImplementation */,
                                                                                     GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & /* ioArgument_ioImplementation */,
                                                                                GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generatePoisonedVariables (GGS_string & ioArgument_ioImplementation,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputJokerParameterForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas", 129)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputJokerParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssign_operation(GGS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)) ;
      const GGS_inputJokerParameterForGeneration temp_3 = this ;
      UpEnumerator__32_stringlist enumerator_5680 (temp_3.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_5680.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_5680.current_mValue_31_ (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 132)) ;
        }
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("  ").add_operation (enumerator_5680.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 133)).add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 133)) ;
        enumerator_5680.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 135)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & ioArgument_ioImplementation,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputActualParameterForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas", 144)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssign_operation(GGS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 145)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 145)) ;
      const GGS_inputActualParameterForGeneration temp_3 = this ;
      UpEnumerator__32_stringlist enumerator_6383 (temp_3.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_6383.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_6383.current_mValue_31_ (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147)) ;
        }
        ioArgument_ioImplementation.plusAssign_operation(GGS_string ("  ").add_operation (enumerator_6383.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 148)).add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 148)) ;
        enumerator_6383.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 150)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                              GGS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarForGeneration temp_0 = this ;
  UpEnumerator_lstringlist enumerator_2163 (temp_0.readProperty_mSyntaxComponents ()) ;
  while (enumerator_2163.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("syntax-").add_operation (enumerator_2163.current_mValue (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 42))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 42)) ;
    enumerator_2163.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_1 = this ;
  const GGS_grammarForGeneration temp_2 = this ;
  const GGS_grammarForGeneration temp_3 = this ;
  const GGS_grammarForGeneration temp_4 = this ;
  const GGS_grammarForGeneration temp_5 = this ;
  const GGS_grammarForGeneration temp_6 = this ;
  const GGS_grammarForGeneration temp_7 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 45)), temp_2.readProperty_mNonTerminalMapForGrammarAnalysis (), temp_3.readProperty_mNonTerminalToAddList (), temp_4.readProperty_mStartSymbolName (), temp_5.readProperty_mHasTranslateFeature (), temp_6.readProperty_mGrammarName (), temp_7.readProperty_mSyntaxComponents () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 44))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outImplementation,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 60))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 60)) ;
  const GGS_grammarForGeneration temp_1 = this ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3054 (temp_1.readProperty_mNonTerminalMapForGrammarAnalysis ()) ;
  while (enumerator_3054.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_3104 (enumerator_3054.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_3104.hasCurrentObject ()) {
      UpEnumerator_signatureForGrammarAnalysis enumerator_3235 (enumerator_3104.current_mFormalParametersList (HERE)) ;
      while (enumerator_3235.hasCurrentObject ()) {
        switch (enumerator_3235.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            GGS_unifiedTypeMapEntry var_t_3427 = extensionGetter_typeMapEntryForLKey (constinArgument_inUnifiedTypeMap, enumerator_3235.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 66)) ;
            extensionMethod_addHeaderFileName (var_t_3427, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 67)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_3235.gotoNextObject () ;
      }
      enumerator_3104.gotoNextObject () ;
    }
    enumerator_3054.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_2 = this ;
  outArgument_outImplementation = temp_2.readProperty_mCppFileContents () ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_grammarForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_grammarForGeneration temp_0 = this ;
  result_result = GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 79)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_grammarForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 91)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_syntaxDeclarationForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  result_result = GGS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_syntaxDeclarationForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_syntaxDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 130)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_syntaxDeclarationForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syntaxDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_string & outArgument_outHeader,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 143))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 143)) ;
  GGS_uintlist var_selectMethodList_6090 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  GGS_uint var_idx_6136 = GGS_uint (uint32_t (0U)) ;
  const GGS_syntaxDeclarationForGeneration temp_1 = this ;
  if (temp_1.readProperty_mSelectMethodCount ().add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 146)).isValid ()) {
    uint32_t variant_6148 = temp_1.readProperty_mSelectMethodCount ().add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 146)).uintValue () ;
    bool loop_6148 = true ;
    while (loop_6148) {
      const GGS_syntaxDeclarationForGeneration temp_2 = this ;
      loop_6148 = GGS_bool (ComparisonKind::lowerThan, var_idx_6136.objectCompare (temp_2.readProperty_mSelectMethodCount ())).isValid () ;
      if (loop_6148) {
        loop_6148 = GGS_bool (ComparisonKind::lowerThan, var_idx_6136.objectCompare (temp_2.readProperty_mSelectMethodCount ())).boolValue () ;
      }
      if (loop_6148 && (0 == variant_6148)) {
        loop_6148 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 146)) ;
      }
      if (loop_6148) {
        variant_6148 -- ;
        var_selectMethodList_6090.addAssign_operation (var_idx_6136  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 148)) ;
        var_idx_6136.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 149)) ;
      }
    }
  }
  const GGS_syntaxDeclarationForGeneration temp_3 = this ;
  const GGS_syntaxDeclarationForGeneration temp_4 = this ;
  const GGS_syntaxDeclarationForGeneration temp_5 = this ;
  const GGS_syntaxDeclarationForGeneration temp_6 = this ;
  const GGS_syntaxDeclarationForGeneration temp_7 = this ;
  const GGS_syntaxDeclarationForGeneration temp_8 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 153)), temp_5.readProperty_mNonterminalDeclarationMap (), temp_6.readProperty_mRuleDeclarationList (), var_selectMethodList_6090, temp_7.readProperty_mHasIndexing (), temp_8.readProperty_mHasTranslateFeature () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 151))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syntaxDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 167))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 167)) ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GGS_stringset::init (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 168))) ;
  const GGS_syntaxDeclarationForGeneration temp_1 = this ;
  GGS_string var_lexiqueCppName_7170 = GGS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)) ;
  const GGS_syntaxDeclarationForGeneration temp_2 = this ;
  UpEnumerator_ruleDeclarationList enumerator_7282 (temp_2.readProperty_mRuleDeclarationList ()) ;
  while (enumerator_7282.hasCurrentObject ()) {
    UpEnumerator_ruleLabelImplementationList enumerator_7435 (enumerator_7282.current_mLabelImplementationList (HERE)) ;
    while (enumerator_7435.hasCurrentObject ()) {
      const GGS_syntaxDeclarationForGeneration temp_3 = this ;
      const GGS_syntaxDeclarationForGeneration temp_4 = this ;
      GGS_string var_ruleName_7517 = GGS_string ("cParser_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 176)).add_operation (GGS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 176)).add_operation (temp_4.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 177)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 177)).add_operation (enumerator_7282.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 177)).add_operation (GGS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 178)).add_operation (enumerator_7282.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 179)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 179)).add_operation (enumerator_7435.current_mLabelName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 179)) ;
      outArgument_outImplementation.plusAssign_operation(GGS_string ("//------------------------------------------------------------------------------------------------\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 180)) ;
      GGS_string var_code_8342 ;
      {
      const GGS_syntaxDeclarationForGeneration temp_5 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), var_ruleName_7517, ioArgument_ioInclusionSet, enumerator_7435.current_mSignatureForGeneration (HERE), enumerator_7435.current_mInstructionListForGeneration (HERE), GGS_bool (false), var_lexiqueCppName_7170, GGS_bool (false), GGS_bool (false), temp_5.readProperty_mHasTranslateFeature (), var_code_8342, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 181)) ;
      }
      outArgument_outImplementation.plusAssign_operation(var_code_8342, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 194)) ;
      enumerator_7435.gotoNextObject () ;
    }
    GGS_semanticInstructionListForGeneration var_parseInstructionList_8489 ;
    GGS_lstring joker_8472 ; // Joker input parameter
    GGS_formalParameterListForGeneration joker_8475 ; // Joker input parameter
    GGS_formalParameterSignature joker_8478 ; // Joker input parameter
    GGS_location joker_8481 ; // Joker input parameter
    enumerator_7282.current_mLabelImplementationList (HERE).method_first (joker_8472, joker_8475, joker_8478, joker_8481, var_parseInstructionList_8489, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)) ;
    const GGS_syntaxDeclarationForGeneration temp_6 = this ;
    const GGS_syntaxDeclarationForGeneration temp_7 = this ;
    GGS_string var_parseRuleName_8529 = GGS_string ("cParser_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 198)).add_operation (GGS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 198)).add_operation (temp_7.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 199)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 199)).add_operation (enumerator_7282.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 199)).add_operation (GGS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 200)).add_operation (enumerator_7282.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 201)).add_operation (GGS_string ("_parse"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 201)) ;
    outArgument_outImplementation.plusAssign_operation(GGS_string ("//------------------------------------------------------------------------------------------------\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 202)) ;
    GGS_string var_parseCode_9332 ;
    {
    const GGS_syntaxDeclarationForGeneration temp_8 = this ;
    routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), var_parseRuleName_8529, ioArgument_ioInclusionSet, GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE), function_syntaxSignatureOfInstructionList (GGS_string ("parse"), var_parseInstructionList_8489, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 208)), GGS_bool (false), var_lexiqueCppName_7170, GGS_bool (false), GGS_bool (true), temp_8.readProperty_mHasTranslateFeature (), var_parseCode_9332, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 203)) ;
    }
    outArgument_outImplementation.plusAssign_operation(var_parseCode_9332, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 216)) ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_syntaxDeclarationForGeneration temp_10 = this ;
      test_9 = temp_10.readProperty_mHasIndexing ().boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GGS_semanticInstructionListForGeneration var_instructionList_9509 ;
        GGS_lstring joker_9492 ; // Joker input parameter
        GGS_formalParameterListForGeneration joker_9495 ; // Joker input parameter
        GGS_formalParameterSignature joker_9498 ; // Joker input parameter
        GGS_location joker_9501 ; // Joker input parameter
        enumerator_7282.current_mLabelImplementationList (HERE).method_first (joker_9492, joker_9495, joker_9498, joker_9501, var_instructionList_9509, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 219)) ;
        const GGS_syntaxDeclarationForGeneration temp_11 = this ;
        const GGS_syntaxDeclarationForGeneration temp_12 = this ;
        GGS_string var_ruleName_9546 = GGS_string ("cParser_").add_operation (temp_11.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 220)).add_operation (GGS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 220)).add_operation (temp_12.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 221)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 221)).add_operation (enumerator_7282.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 221)).add_operation (GGS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 222)).add_operation (enumerator_7282.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 223)).add_operation (GGS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 223)) ;
        outArgument_outImplementation.plusAssign_operation(GGS_string ("//------------------------------------------------------------------------------------------------\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 224)) ;
        GGS_string var_code_10420 ;
        {
        routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), var_ruleName_9546, ioArgument_ioInclusionSet, GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE), function_syntaxSignatureOfInstructionList (GGS_string ("indexing"), var_instructionList_9509, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 230)), GGS_bool (false), var_lexiqueCppName_7170, GGS_bool (false), GGS_bool (false), GGS_bool (false), var_code_10420, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 225)) ;
        }
        outArgument_outImplementation.plusAssign_operation(var_code_10420, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 238)) ;
      }
    }
    enumerator_7282.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure?static?&???????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (const GGS_bool constinArgument_inGenerateStatic,
                                                                                  const GGS_string constinArgument_inProcedureMangledName,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  const GGS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                                  const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                                  const GGS_bool constinArgument_inProcedureIsConst,
                                                                                  const GGS_string constinArgument_inCompilerTypeName,
                                                                                  const GGS_bool constinArgument_inGenerateLocationArgs,
                                                                                  const GGS_bool constinArgument_inGenerateResetTemplateString,
                                                                                  const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GGS_string & outArgument_outGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_stringset var_unusedVariableCppNameSet_11384 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_unusedVariableCppNameSet_11384.addAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 269))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 269)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = constinArgument_inGenerateResetTemplateString.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 271)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_unusedVariableCppNameSet_11384.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)) ;
    }
  }
  UpEnumerator_formalParameterListForGeneration enumerator_11690 (constinArgument_inFormalArgumentList) ;
  while (enumerator_11690.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_11690.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticGeneration.galgas", 275)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_unusedVariableCppNameSet_11384.addAssign_operation (enumerator_11690.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 276)) ;
      }
    }
    enumerator_11690.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_11930 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_11963 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_11963.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_12023 (constinArgument_inInstructionList) ;
  while (enumerator_12023.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_12023.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_11930, var_unusedVariableCppNameSet_11384, constinArgument_inGenerateSyntaxDirectedTranslationString, var_routineBody_11963, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)) ;
    enumerator_12023.gotoNextObject () ;
  }
  {
  var_routineBody_11963.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292)) ;
  }
  UpEnumerator_formalParameterListForGeneration enumerator_12362 (constinArgument_inFormalArgumentList) ;
  while (enumerator_12362.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12362.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 295)) ;
    enumerator_12362.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = constinArgument_inGenerateStatic.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 300)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("void ").add_operation (constinArgument_inProcedureMangledName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 302)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 302)) ;
  GGS_uint var_colRef_12646 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 303)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_12752 (constinArgument_inFormalArgumentList) ;
  while (enumerator_12752.hasCurrentObject ()) {
    switch (enumerator_12752.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12752.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12752.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 310)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 310)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12752.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 312)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 312)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12752.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 314)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 314)) ;
      }
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_unusedVariableCppNameSet_11384.getter_hasKey (enumerator_12752.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 316)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("/* ").add_operation (enumerator_12752.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 317)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 317)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_12752.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 319)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 321)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12646, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 322)) ;
    }
    enumerator_12752.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_unusedVariableCppNameSet_11384.getter_hasKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 326)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 326)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("String & /* ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 327)).add_operation (GGS_string (" */,\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 327)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("String & ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 329)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 329)) ;
      }
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12646, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 331)) ;
      }
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 334)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_unusedVariableCppNameSet_11384.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 335)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 335)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 336)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 336)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 338)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = constinArgument_inGenerateLocationArgs.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 341)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12646, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 342)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 343)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 345)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = constinArgument_inProcedureIsConst.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 347)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 349)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_14671 (constinArgument_inFormalArgumentList) ;
  while (enumerator_14671.hasCurrentObject ()) {
    switch (enumerator_14671.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  ").add_operation (enumerator_14671.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 354)).add_operation (GGS_string (".drop () ; // Release 'out' argument\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 354)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      break ;
    }
    enumerator_14671.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_11963, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 359)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = constinArgument_inGenerateResetTemplateString.boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 362)).add_operation (GGS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 362)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 365)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction?&??????static?const!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (const GGS_string constinArgument_inFunctionCppRepresentationName,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  const GGS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                                  const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                                  const GGS_string constinArgument_inCompilerTypeName,
                                                                                  const GGS_unifiedTypeMapEntry constinArgument_inResultType,
                                                                                  const GGS_string constinArgument_inResultVariableCppName,
                                                                                  const GGS_bool constinArgument_inIsStatic,
                                                                                  const GGS_bool constinArgument_inIsConst,
                                                                                  GGS_string & outArgument_outGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 385)) ;
  GGS_stringset var_unusedVariableCppNameSet_16183 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_16183.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_16388 (constinArgument_inFormalArgumentList) ;
  while (enumerator_16388.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16388.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 391)) ;
    var_unusedVariableCppNameSet_16183.addAssign_operation (enumerator_16388.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 392)) ;
    enumerator_16388.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_16573 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_16614 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_16614.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 397)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_16674 (constinArgument_inInstructionList) ;
  while (enumerator_16674.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_16674.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_16573, var_unusedVariableCppNameSet_16183, GGS_bool (false), var_routineBody_16614, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 399)) ;
    enumerator_16674.gotoNextObject () ;
  }
  {
  var_routineBody_16614.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 407)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsStatic.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 410)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 413)) ;
  GGS_uint var_colRef_17196 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 414)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_17298 (constinArgument_inFormalArgumentList) ;
  while (enumerator_17298.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_17298.current_mIsConstant (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17298.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17298.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_16183.getter_hasKey (enumerator_17298.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 422)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string (" ").add_operation (enumerator_17298.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 425)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 427)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17196, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 428)) ;
    }
    enumerator_17298.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 431)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_16183.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 432)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 432)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 435)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 437)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17196, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 438)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 439)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = constinArgument_inIsConst.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 441)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 443)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 445)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 445)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 446)).add_operation (GGS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 445)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_16614, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 448)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 450)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 453)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetter?&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (const GGS_string constinArgument_inFunctionCppRepresentationName,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      const GGS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                      const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                      const GGS_string constinArgument_inCompilerTypeName,
                                                                      const GGS_unifiedTypeMapEntry constinArgument_inResultType,
                                                                      const GGS_string constinArgument_inResultVariableCppName,
                                                                      GGS_string & outArgument_outGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 467)) ;
  GGS_stringset var_unusedVariableCppNameSet_19576 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_19576.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 470))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 470)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_19781 (constinArgument_inFormalArgumentList) ;
  while (enumerator_19781.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19781.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 473)) ;
    var_unusedVariableCppNameSet_19576.addAssign_operation (enumerator_19781.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)) ;
    enumerator_19781.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_19966 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_20007 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_20007.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 479)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_20067 (constinArgument_inInstructionList) ;
  while (enumerator_20067.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_20067.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_19966, var_unusedVariableCppNameSet_19576, GGS_bool (false), var_routineBody_20007, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 481)) ;
    enumerator_20067.gotoNextObject () ;
  }
  {
  var_routineBody_20007.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 489)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 492)) ;
  GGS_uint var_colRef_20528 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 493)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_20630 (constinArgument_inFormalArgumentList) ;
  while (enumerator_20630.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_20630.current_mIsConstant (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20630.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20630.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)) ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_unusedVariableCppNameSet_19576.getter_hasKey (enumerator_20630.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 501)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string (" /* ").add_operation (enumerator_20630.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 502)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 502)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string (" ").add_operation (enumerator_20630.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 504)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 506)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20528, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 507)) ;
    }
    enumerator_20630.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_unusedVariableCppNameSet_19576.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 511)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 511)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 516)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20528, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 517)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS) const {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 518)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 521)).add_operation (GGS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_20007, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 523)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 525)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 526)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 526)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 528)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter???&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (const GGS_string constinArgument_inClassName,
                                                                  const GGS_string constinArgument_inBaseClassName,
                                                                  const GGS_string constinArgument_inMethodName,
                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                  const GGS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                  const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                  GGS_string & outArgument_outGeneratedCode,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_stringset var_unusedVariableCppNameSet_22631 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_22631.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 547))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 547)) ;
  var_unusedVariableCppNameSet_22631.addAssign_operation (GGS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 548)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_22767 (constinArgument_inFormalArgumentList) ;
  while (enumerator_22767.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_22631.addAssign_operation (enumerator_22767.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 550)) ;
    enumerator_22767.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_22912 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_22945 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_22945.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 555)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_23005 (constinArgument_inInstructionList) ;
  while (enumerator_23005.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_23005.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_22912, var_unusedVariableCppNameSet_22631, GGS_bool (false), var_routineBody_22945, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 557)) ;
    enumerator_23005.gotoNextObject () ;
  }
  {
  var_routineBody_22945.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)) ;
  }
  outArgument_outGeneratedCode = GGS_string ("static void extensionSetter_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)) ;
  GGS_uint var_colRef_23476 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 568)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inBaseClassName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 570)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 570)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)) ;
  }
  GGS_bool var_currentObjectIsUnused_23741 = var_unusedVariableCppNameSet_22631.getter_hasKey (GGS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_currentObjectIsUnused_23741.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 576)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 578)) ;
  }
  UpEnumerator_formalParameterListForGeneration enumerator_23994 (constinArgument_inFormalArgumentList) ;
  while (enumerator_23994.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23476, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 583)) ;
    }
    switch (enumerator_23994.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23994.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23994.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23994.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23994.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)) ;
      }
      break ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_22631.getter_hasKey (enumerator_23994.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 594)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("/* ").add_operation (enumerator_23994.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_23994.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 597)) ;
    }
    enumerator_23994.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 601)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23476, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 602)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 603)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_22631.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 604)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 604)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 605)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 605)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 607)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 609)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23476, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 610)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 611)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_currentObjectIsUnused_23741.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 614)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, constinArgument_inBaseClassName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 616)).add_operation (GGS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 616)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)).add_operation (GGS_string (" * object = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)).add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)).add_operation (GGS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  macroValidSharedObject (object, cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 620)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 620)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_22945, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 622)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 624)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethodNew?&???!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (const GGS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                 const GGS_string constinArgument_inMethodName,
                                                                 const GGS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                 const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                 GGS_string & outArgument_outGeneratedCode,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_string var_className_26618 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 637)).readProperty_typeName ().readProperty_string () ;
  GGS_stringset var_unusedVariableCppNameSet_26723 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_26723.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 640))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 640)) ;
  var_unusedVariableCppNameSet_26723.addAssign_operation (GGS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 641)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_26859 (constinArgument_inFormalArgumentList) ;
  while (enumerator_26859.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_26723.addAssign_operation (enumerator_26859.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 643)) ;
    enumerator_26859.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_27004 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_27045 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_27045.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 648)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_27105 (constinArgument_inInstructionList) ;
  while (enumerator_27105.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_27105.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_27004, var_unusedVariableCppNameSet_26723, GGS_bool (false), var_routineBody_27045, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 650)) ;
    enumerator_27105.gotoNextObject () ;
  }
  {
  var_routineBody_27045.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 658)) ;
  }
  GGS_unifiedTypeMapEntry var_baseType_27447 = constinArgument_inReceiverType ;
  GGS_bool var_searching_27485 = GGS_bool (true) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("semanticGeneration.galgas", 662)).isValid ()) {
    uint32_t variant_27504 = GGS_uint::class_func_max (SOURCE_FILE ("semanticGeneration.galgas", 662)).uintValue () ;
    bool loop_27504 = true ;
    while (loop_27504) {
      loop_27504 = var_searching_27485.isValid () ;
      if (loop_27504) {
        loop_27504 = var_searching_27485.boolValue () ;
      }
      if (loop_27504 && (0 == variant_27504)) {
        loop_27504 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 662)) ;
      }
      if (loop_27504) {
        variant_27504 -- ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extensionGetter_definition (var_baseType_27447, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 663)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticGeneration.galgas", 663)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 663)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = extensionGetter_definition (extensionGetter_definition (var_baseType_27447, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)).readProperty_instanceMethodMap ().getter_hasKey (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)).boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                var_baseType_27447 = extensionGetter_definition (var_baseType_27447, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 665)).readProperty_superType () ;
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              var_searching_27485 = GGS_bool (false) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          var_searching_27485 = GGS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("method-").add_operation (extensionGetter_definition (var_baseType_27447, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673)).add_operation (constinArgument_inMethodName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 674)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_28072 (constinArgument_inFormalArgumentList) ;
  while (enumerator_28072.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_28072.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)) ;
    enumerator_28072.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GGS_string ("void cPtr_").add_operation (var_className_26618.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 679)).add_operation (GGS_string ("::method_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 679)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 679)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 679)) ;
  GGS_uint var_colRef_28339 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 680)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_28445 (constinArgument_inFormalArgumentList) ;
  while (enumerator_28445.hasCurrentObject ()) {
    switch (enumerator_28445.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28445.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28445.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 687)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 687)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 687)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28445.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 689)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 689)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 689)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 689)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28445.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)) ;
      }
      break ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_26723.getter_hasKey (enumerator_28445.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 693)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("/* ").add_operation (enumerator_28445.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 694)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 694)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 694)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_28445.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 696)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 698)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_28339, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 699)) ;
    }
    enumerator_28445.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_26723.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 703)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 703)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 706)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 706)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 708)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_28339, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 709)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 710)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 711)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_27045, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 713)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 715)) ;
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

GGS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (Compiler * inCompiler,
                                                                               const GGS_string & /* in_TYPE_5F_NAME */,
                                                                               const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const GGS_bool & /* in_IS_5F_CONCRETE */,
                                                                               const GGS_initializerMap & in_INITIALIZER_5F_MAP,
                                                                               const GGS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                               const GGS_getterMap & in_GETTER_5F_MAP,
                                                                               const GGS_setterMap & in_MODIFIER_5F_MAP,
                                                                               const GGS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                               const GGS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                               const GGS_subscriptMap & in_READ_5F_SUBSCRIPT_5F_MAP,
                                                                               const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                               const GGS_typeFeatures & in_SUPPORTED_5F_OPERATORS,
                                                                               const GGS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                               const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                               const GGS_bool & in_SUPPORT_5F_COLLECTION_5F_VALUE
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//-- Start of type generic part\n\n//--------------------------------- Initializers\n") ;
  GGS_uint index_133_ (0) ;
  if (in_INITIALIZER_5F_MAP.isValid ()) {
    UpEnumerator_initializerMap enumerator_133 (in_INITIALIZER_5F_MAP) ;
    while (enumerator_133.hasCurrentObject ()) {
      result.appendString ("  public: static GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" ") ;
      result.appendString (enumerator_133.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 5)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_320_IDX (0) ;
      if (enumerator_133.current_mArgumentTypeList (HERE).isValid ()) {
        UpEnumerator_functionSignature enumerator_320 (enumerator_133.current_mArgumentTypeList (HERE)) ;
        while (enumerator_320.hasCurrentObject ()) {
          const GalgasBool test_0 = enumerator_320.current_isConstant (HERE).boolEnum () ;
          switch (test_0) {
          case GalgasBool::boolTrue : {
            result.appendString ("const class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_320.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 9)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_320_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 9)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_320.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 11)).stringValue ()) ;
            result.appendString (" inOperand") ;
            result.appendString (index_320_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 11)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_320.gotoNextObject () ;
          index_320_IDX.increment () ;
        }
      }
      result.appendString ("Compiler * inCompiler\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) ;\n") ;
      enumerator_133.gotoNextObject () ;
      index_133_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Object cloning\n  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;\n\n//--------------------------------- Object extraction\n  public: static GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" extractObject (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_object & inObject,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_CLASS_5F_FUNC_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- GALGAS class functions\n") ;
    GGS_uint index_1200_ (0) ;
    if (in_CLASS_5F_FUNC_5F_MAP.isValid ()) {
      UpEnumerator_classFunctionMap enumerator_1200 (in_CLASS_5F_FUNC_5F_MAP) ;
      while (enumerator_1200.hasCurrentObject ()) {
        result.appendString ("  public: static class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1200.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (" class_func_") ;
        result.appendString (enumerator_1200.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_1436_IDX (0) ;
        if (enumerator_1200.current_mArgumentTypeList (HERE).isValid ()) {
          UpEnumerator_functionSignature enumerator_1436 (enumerator_1200.current_mArgumentTypeList (HERE)) ;
          while (enumerator_1436.hasCurrentObject ()) {
            result.appendString ("const class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1436.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 31)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_1436_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 31)).stringValue ()) ;
            enumerator_1436.gotoNextObject () ;
            if (enumerator_1436.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_1436_IDX.increment () ;
          }
        }
        const GalgasBool test_2 = enumerator_1200.current_mHasCompilerArgument (HERE).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_1200.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).boolEnum () ;
        switch (test_2) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("class Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_3 = enumerator_1200.current_mHasCompilerArgument (HERE).boolEnum () ;
          switch (test_3) {
          case GalgasBool::boolTrue : {
            result.appendString ("Compiler * inCompiler\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_1200.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            switch (test_4) {
            case GalgasBool::boolTrue : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("LOCATION_ARGS) ;\n\n") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_1200.gotoNextObject () ;
        index_1200_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_5 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 48)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 48)).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Handle copy\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & operator = (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_6 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 54)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 54)).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- << and >> shift operators\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_uint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_bigint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_uint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_bigint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_7 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_andAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void andAssign_operation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                                     class Compiler * inCompiler\n                                                     COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_8 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_orAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- |= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void orAssign_operation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                                    class Compiler * inCompiler\n                                                    COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_9 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_xorAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)).boolEnum () ;
  switch (test_9) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- ^= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void xorAssign_operation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                                     class Compiler * inCompiler\n                                                     COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_10 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)).boolEnum () ;
  switch (test_10) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- += operator (with expression)\n  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                                       class Compiler * inCompiler\n                                                       COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_11 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)).boolEnum () ;
  switch (test_11) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- -= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                                        class Compiler * inCompiler\n                                                        COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_12 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 105)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 105)).boolEnum () ;
  switch (test_12) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- *= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                                      class Compiler * inCompiler\n                                                      COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_13 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 112)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 112)).boolEnum () ;
  switch (test_13) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- /= operator (with expression)\n  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                                      class Compiler * inCompiler\n                                                      COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_14 = GGS_bool (ComparisonKind::greaterThan, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 119)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_14) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- += operator (with list of field expressions)\n  public: VIRTUAL_IN_DEBUG void addAssign_operation (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_6547_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_functionSignature enumerator_6547 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_6547.hasCurrentObject ()) {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_6547.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 123)).stringValue ()) ;
        result.appendString (" & inOperand") ;
        result.appendString (index_6547_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 123)).stringValue ()) ;
        enumerator_6547.gotoNextObject () ;
        if (enumerator_6547.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_6547_IDX.increment () ;
      }
    }
    const GalgasBool test_15 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)).boolEnum () ;
    switch (test_15) {
    case GalgasBool::boolTrue : {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_16 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 133)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 133)).boolEnum () ;
  switch (test_16) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- & operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_and (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_17 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 139)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 139)).boolEnum () ;
  switch (test_17) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- | operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_or (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_18 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 145)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 145)).boolEnum () ;
  switch (test_18) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- ^ operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_xor (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_19 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 151)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 151)).boolEnum () ;
  switch (test_19) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- not operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_not (LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_20 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 156)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 156)).boolEnum () ;
  switch (test_20) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- ~ operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_tilde (LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_21 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 161)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 161)).boolEnum () ;
  switch (test_21) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- + operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" add_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_22 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 168)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 168)).boolEnum () ;
  switch (test_22) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &+ operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" add_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_23 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 173)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 173)).boolEnum () ;
  switch (test_23) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &- operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" substract_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_24 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 178)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 178)).boolEnum () ;
  switch (test_24) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- - operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" substract_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_25 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 185)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 185)).boolEnum () ;
  switch (test_25) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- * operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" multiply_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_26 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 192)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 192)).boolEnum () ;
  switch (test_26) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &* operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" multiply_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_27 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 197)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 197)).boolEnum () ;
  switch (test_27) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- / operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" divide_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_28 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 204)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 204)).boolEnum () ;
  switch (test_28) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &/ operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" divide_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_29 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 209)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 209)).boolEnum () ;
  switch (test_29) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- mod operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" modulo_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_30 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 216)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 216)).boolEnum () ;
  switch (test_30) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- prefix - operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_unary_minus (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_31 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 222)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 222)).boolEnum () ;
  switch (test_31) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- prefix &- operator\n  public: VIRTUAL_IN_DEBUG GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_unary_minus_no_ovf (void) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_32 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).boolEnum () ;
  switch (test_32) {
  case GalgasBool::boolTrue : {
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
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_33 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 234)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 234)).boolEnum () ;
  switch (test_33) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &++, &-- operators\n  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;\n\n  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_34 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 239)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 239)).boolEnum () ;
  switch (test_34) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Implementation of getter 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_35 = extensionGetter_generateCppObjectComparison (in_SUPPORTED_5F_OPERATORS, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 245)).operator_and (in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 246)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 246)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 246)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 245)).boolEnum () ;
  switch (test_35) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Comparison\n  public: ComparisonResult objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------- Setters\n") ;
  GGS_uint index_12850_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    UpEnumerator_setterMap enumerator_12850 (in_MODIFIER_5F_MAP) ;
    while (enumerator_12850.hasCurrentObject ()) {
      const GalgasBool test_36 = GGS_bool (ComparisonKind::equal, enumerator_12850.current_mKind (HERE).objectCompare (GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 256)))).boolEnum () ;
      switch (test_36) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_37 = GGS_bool (ComparisonKind::equal, enumerator_12850.current_mErrorMessage (HERE).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (ComparisonKind::equal, enumerator_12850.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 257)))).operator_or (GGS_bool (ComparisonKind::equal, enumerator_12850.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 257)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 257)).operator_or (GGS_bool (ComparisonKind::equal, enumerator_12850.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 257)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 257)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 257)).boolEnum () ;
        switch (test_37) {
        case GalgasBool::boolTrue : {
          result.appendString ("  public: VIRTUAL_IN_DEBUG void setter_") ;
          result.appendString (enumerator_12850.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 258)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_13298_IDX (0) ;
          if (enumerator_12850.current_mParameterList (HERE).isValid ()) {
            UpEnumerator_formalParameterSignature enumerator_13298 (enumerator_12850.current_mParameterList (HERE)) ;
            while (enumerator_13298.hasCurrentObject ()) {
              const GalgasBool test_38 = GGS_bool (ComparisonKind::equal, enumerator_13298.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 260)))).boolEnum () ;
              switch (test_38) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_13298.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 261)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_13298_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 261)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_39 = GGS_bool (ComparisonKind::equal, enumerator_13298.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 262)))).boolEnum () ;
                switch (test_39) {
                case GalgasBool::boolTrue : {
                  result.appendString ("class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_13298.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_13298_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_40 = GGS_bool (ComparisonKind::equal, enumerator_13298.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 264)))).boolEnum () ;
                  switch (test_40) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_13298.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_13298_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_13298.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_13298_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              enumerator_13298.gotoNextObject () ;
              if (enumerator_13298.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_13298_IDX.increment () ;
            }
          }
          const GalgasBool test_41 = GGS_bool (ComparisonKind::equal, enumerator_12850.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 271)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_41) {
          case GalgasBool::boolTrue : {
            const GalgasBool test_42 = enumerator_12850.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_42) {
            case GalgasBool::boolTrue : {
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_43 = enumerator_12850.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_43) {
            case GalgasBool::boolTrue : {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString (") ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_12850.gotoNextObject () ;
      index_12850_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Instance Methods\n") ;
  GGS_uint index_14682_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_instanceMethodMap enumerator_14682 (in_INSTANCE_5F_METHOD_5F_MAP) ;
    while (enumerator_14682.hasCurrentObject ()) {
      const GalgasBool test_44 = GGS_bool (ComparisonKind::equal, enumerator_14682.current_mKind (HERE).objectCompare (GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 294)))).boolEnum () ;
      switch (test_44) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_45 = GGS_bool (ComparisonKind::equal, enumerator_14682.current_mErrorMessage (HERE).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (ComparisonKind::equal, enumerator_14682.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)))).operator_or (GGS_bool (ComparisonKind::equal, enumerator_14682.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)).operator_or (GGS_bool (ComparisonKind::equal, enumerator_14682.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)).boolEnum () ;
        switch (test_45) {
        case GalgasBool::boolTrue : {
          result.appendString ("  public: VIRTUAL_IN_DEBUG void method_") ;
          result.appendString (enumerator_14682.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 296)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_15130_IDX (0) ;
          if (enumerator_14682.current_mParameterList (HERE).isValid ()) {
            UpEnumerator_formalParameterSignature enumerator_15130 (enumerator_14682.current_mParameterList (HERE)) ;
            while (enumerator_15130.hasCurrentObject ()) {
              const GalgasBool test_46 = GGS_bool (ComparisonKind::equal, enumerator_15130.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)))).boolEnum () ;
              switch (test_46) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_15130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 299)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_15130_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 299)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_47 = GGS_bool (ComparisonKind::equal, enumerator_15130.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)))).boolEnum () ;
                switch (test_47) {
                case GalgasBool::boolTrue : {
                  result.appendString ("class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_15130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 301)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_15130_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 301)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_48 = GGS_bool (ComparisonKind::equal, enumerator_15130.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)))).boolEnum () ;
                  switch (test_48) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_15130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_15130_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_15130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 305)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_15130_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 305)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              enumerator_15130.gotoNextObject () ;
              if (enumerator_15130.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_15130_IDX.increment () ;
            }
          }
          const GalgasBool test_49 = GGS_bool (ComparisonKind::equal, enumerator_14682.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 309)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_49) {
          case GalgasBool::boolTrue : {
            const GalgasBool test_50 = enumerator_14682.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_50) {
            case GalgasBool::boolTrue : {
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_51 = enumerator_14682.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_51) {
            case GalgasBool::boolTrue : {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString (") const ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_14682.gotoNextObject () ;
      index_14682_.increment () ;
    }
  }
  result.appendString ("//--------------------------------- Class Methods\n") ;
  GGS_uint index_16461_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_classMethodMap enumerator_16461 (in_CLASS_5F_METHOD_5F_MAP) ;
    while (enumerator_16461.hasCurrentObject ()) {
      result.appendString ("  public: static void class_method_") ;
      result.appendString (enumerator_16461.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 331)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_16662_IDX (0) ;
      if (enumerator_16461.current_mParameterList (HERE).isValid ()) {
        UpEnumerator_formalParameterSignature enumerator_16662 (enumerator_16461.current_mParameterList (HERE)) ;
        while (enumerator_16662.hasCurrentObject ()) {
          const GalgasBool test_52 = GGS_bool (ComparisonKind::equal, enumerator_16662.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)))).boolEnum () ;
          switch (test_52) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_16662.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 334)).stringValue ()) ;
            result.appendString (" constinArgument") ;
            result.appendString (index_16662_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 334)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_53 = GGS_bool (ComparisonKind::equal, enumerator_16662.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 335)))).boolEnum () ;
            switch (test_53) {
            case GalgasBool::boolTrue : {
              result.appendString ("class GGS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_16662.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 336)).stringValue ()) ;
              result.appendString (" & ioArgument") ;
              result.appendString (index_16662_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 336)).stringValue ()) ;
              } break ;
            case GalgasBool::boolFalse : {
              const GalgasBool test_54 = GGS_bool (ComparisonKind::equal, enumerator_16662.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 337)))).boolEnum () ;
              switch (test_54) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_16662.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 338)).stringValue ()) ;
                result.appendString (" & outArgument") ;
                result.appendString (index_16662_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 338)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_16662.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 340)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_16662_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 340)).stringValue ()) ;
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_16662.gotoNextObject () ;
          if (enumerator_16662.hasCurrentObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_16662_IDX.increment () ;
        }
      }
      const GalgasBool test_55 = GGS_bool (ComparisonKind::equal, enumerator_16461.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 344)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_55) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_56 = enumerator_16461.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_56) {
        case GalgasBool::boolTrue : {
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_57 = enumerator_16461.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_57) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (") ;\n\n") ;
      enumerator_16461.gotoNextObject () ;
      index_16461_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Getters\n") ;
  GGS_uint index_17903_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    UpEnumerator_getterMap enumerator_17903 (in_GETTER_5F_MAP) ;
    while (enumerator_17903.hasCurrentObject ()) {
      const GalgasBool test_58 = GGS_bool (ComparisonKind::equal, enumerator_17903.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_58) {
      case GalgasBool::boolTrue : {
        switch (enumerator_17903.current_mKind (HERE).enumValue ()) {
        case GGS_methodKind::Enumeration::invalid :
          break ;
        case GGS_methodKind::Enumeration::enum_definedAsExtension :
          {
          }
          break ;
        case GGS_methodKind::Enumeration::enum_definedAsMember :
          {
            const GalgasBool test_59 = GGS_bool (ComparisonKind::equal, enumerator_17903.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 369)))).operator_or (GGS_bool (ComparisonKind::equal, enumerator_17903.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 369)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 369)).operator_or (GGS_bool (ComparisonKind::equal, enumerator_17903.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 369)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 369)).boolEnum () ;
            switch (test_59) {
            case GalgasBool::boolTrue : {
              result.appendString ("  public: VIRTUAL_IN_DEBUG class GGS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_17903.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 370)).stringValue ()) ;
              result.appendString (" getter_") ;
              result.appendString (enumerator_17903.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 370)).stringValue ()) ;
              result.appendString (" (") ;
              columnMarker = result.currentColumn () ;
              GGS_uint index_18426_IDX (0) ;
              if (enumerator_17903.current_mArgumentTypeList (HERE).isValid ()) {
                UpEnumerator_functionSignature enumerator_18426 (enumerator_17903.current_mArgumentTypeList (HERE)) ;
                while (enumerator_18426.hasCurrentObject ()) {
                  result.appendString ("const class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_18426.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 372)).stringValue ()) ;
                  result.appendString (" & constinOperand") ;
                  result.appendString (index_18426_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 372)).stringValue ()) ;
                  enumerator_18426.gotoNextObject () ;
                  if (enumerator_18426.hasCurrentObject ()) {
                    result.appendString (",\n") ;
                    result.appendSpacesUntilColumn (columnMarker) ;
                  }
                  index_18426_IDX.increment () ;
                }
              }
              const GalgasBool test_60 = GGS_bool (ComparisonKind::equal, enumerator_17903.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 375)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              switch (test_60) {
              case GalgasBool::boolTrue : {
                const GalgasBool test_61 = enumerator_17903.current_mHasCompilerArgument (HERE).boolEnum () ;
                switch (test_61) {
                case GalgasBool::boolTrue : {
                  result.appendString ("Compiler * inCompiler\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolFalse : {
                  result.appendString ("LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_62 = enumerator_17903.current_mHasCompilerArgument (HERE).boolEnum () ;
                switch (test_62) {
                case GalgasBool::boolTrue : {
                  result.appendString (",\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("Compiler * inCompiler\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolFalse : {
                  result.appendString ("\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              result.appendString (") const ;\n\n") ;
              } break ;
            case GalgasBool::boolFalse : {
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
          }
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_17903.gotoNextObject () ;
      index_17903_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Read subscripts\n") ;
  GGS_uint index_19144_ (0) ;
  if (in_READ_5F_SUBSCRIPT_5F_MAP.isValid ()) {
    UpEnumerator_subscriptMap enumerator_19144 (in_READ_5F_SUBSCRIPT_5F_MAP) ;
    while (enumerator_19144.hasCurrentObject ()) {
      result.appendString ("  public: VIRTUAL_IN_DEBUG class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_19144.current_valueType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 398)).stringValue ()) ;
      result.appendString (" readSubscript_") ;
      result.appendString (enumerator_19144.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 399)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_19369_IDX (0) ;
      if (enumerator_19144.current_argumentTypeList (HERE).isValid ()) {
        UpEnumerator_functionSignature enumerator_19369 (enumerator_19144.current_argumentTypeList (HERE)) ;
        while (enumerator_19369.hasCurrentObject ()) {
          result.appendString ("const class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_19369.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 401)).stringValue ()) ;
          result.appendString (" & in") ;
          result.appendString (index_19369_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 401)).stringValue ()) ;
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          enumerator_19369.gotoNextObject () ;
          index_19369_IDX.increment () ;
        }
      }
      result.appendString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
      enumerator_19144.gotoNextObject () ;
      index_19144_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Introspection\n  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;\n") ;
  const GalgasBool test_63 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_supportWithAccessor (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 411)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 411)).boolEnum () ;
  switch (test_63) {
  case GalgasBool::boolTrue : {
    result.appendString ("  public: VIRTUAL_IN_DEBUG cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * readWriteAccessForWithInstruction (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_string & inKey\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_64 = in_SUPPORT_5F_COLLECTION_5F_VALUE.boolEnum () ;
  switch (test_64) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n//--- Append element\n  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 419)).stringValue ()) ;
    result.appendString (" & inValue,\n                                              Compiler * /* inCompiler */\n                                              COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_65 = GGS_bool (ComparisonKind::greaterThan, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 424)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_65) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Friend\n  friend class UpEnumerator_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n  friend class DownEnumerator_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" \n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nextern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForPackage'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (Compiler * inCompiler,
                                                                                  const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GGS_string & /* in_TYPE_5F_IDENTIFIER */,
                                                                                  const GGS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                                  const GGS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//-- Start of package generic part\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_CLASS_5F_FUNC_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 4)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- GALGAS class getters\n") ;
    GGS_uint index_220_ (0) ;
    if (in_CLASS_5F_FUNC_5F_MAP.isValid ()) {
      UpEnumerator_classFunctionMap enumerator_220 (in_CLASS_5F_FUNC_5F_MAP) ;
      while (enumerator_220.hasCurrentObject ()) {
        result.appendString ("  public: static class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_220.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 7)).stringValue ()) ;
        result.appendString (" class_func_") ;
        result.appendString (enumerator_220.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 7)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_456_IDX (0) ;
        if (enumerator_220.current_mArgumentTypeList (HERE).isValid ()) {
          UpEnumerator_functionSignature enumerator_456 (enumerator_220.current_mArgumentTypeList (HERE)) ;
          while (enumerator_456.hasCurrentObject ()) {
            result.appendString ("const class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_456.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 9)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_456_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 9)).stringValue ()) ;
            enumerator_456.gotoNextObject () ;
            if (enumerator_456.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_456_IDX.increment () ;
          }
        }
        const GalgasBool test_1 = enumerator_220.current_mHasCompilerArgument (HERE).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_220.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 12)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 12)).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("class Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = enumerator_220.current_mHasCompilerArgument (HERE).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("Compiler * inCompiler\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_220.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 18)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            switch (test_3) {
            case GalgasBool::boolTrue : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("LOCATION_ARGS) ;\n\n") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_220.gotoNextObject () ;
        index_220_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------- Class Methods\n") ;
  GGS_uint index_1109_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_classMethodMap enumerator_1109 (in_CLASS_5F_METHOD_5F_MAP) ;
    while (enumerator_1109.hasCurrentObject ()) {
      result.appendString ("  public: static void class_method_") ;
      result.appendString (enumerator_1109.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_1310_IDX (0) ;
      if (enumerator_1109.current_mParameterList (HERE).isValid ()) {
        UpEnumerator_formalParameterSignature enumerator_1310 (enumerator_1109.current_mParameterList (HERE)) ;
        while (enumerator_1310.hasCurrentObject ()) {
          const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_1310.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 31)))).boolEnum () ;
          switch (test_4) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 32)).stringValue ()) ;
            result.appendString (" constinArgument") ;
            result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 32)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_1310.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 33)))).boolEnum () ;
            switch (test_5) {
            case GalgasBool::boolTrue : {
              result.appendString ("class GGS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 34)).stringValue ()) ;
              result.appendString (" & ioArgument") ;
              result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 34)).stringValue ()) ;
              } break ;
            case GalgasBool::boolFalse : {
              const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_1310.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 35)))).boolEnum () ;
              switch (test_6) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 36)).stringValue ()) ;
                result.appendString (" & outArgument") ;
                result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 36)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 38)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 38)).stringValue ()) ;
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_1310.gotoNextObject () ;
          if (enumerator_1310.hasCurrentObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_1310_IDX.increment () ;
        }
      }
      const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, enumerator_1109.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 42)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_7) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_8 = enumerator_1109.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_8) {
        case GalgasBool::boolTrue : {
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_9 = enumerator_1109.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_9) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (") ;\n\n") ;
      enumerator_1109.gotoNextObject () ;
      index_1109_.increment () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate genericTypeImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (Compiler * inCompiler,
                                                                                 const GGS_string & in_TYPE_5F_NAME,
                                                                                 const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const GGS_unifiedTypeMapEntry & in_SUPER_5F_TYPE_5F_INDEX
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//     ") ;
  result.appendString (GGS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 2)).add_operation (GGS_string (" generic code implementation"), inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("\"") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\",\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  const GalgasBool test_0 = in_SUPER_5F_TYPE_5F_INDEX.getter_isNull (SOURCE_FILE ("generic-type.cpp.galgasTemplate", 6)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("nullptr") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("& kTypeDescriptor_GALGAS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_SUPER_5F_TYPE_5F_INDEX, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 6)).stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::staticTypeDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nAC_GALGAS_root * GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::clonedObject (void) const {\n  AC_GALGAS_root * result = nullptr ;\n  if (isValid ()) {\n    macroMyNew (result, GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (*this)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::extractObject (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_object & inObject,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inObject.embeddedObject () ;\n  if (nullptr != p) {\n    if (nullptr != dynamic_cast <const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> (p)) {\n      result = *p ;\n    }else{\n      inCompiler->castError (\"") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\", p->dynamicTypeDescriptor () COMMA_THERE) ;\n    }  \n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate externTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (Compiler * inCompiler,
                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                            const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GGS_string & in_PRE_5F_DECLARATION,
                                                                            const GGS_string & in_CODE
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).add_operation (GGS_string (" extern type"), inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n//  Predeclarations (from GALGAS extern type declaration\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_PRE_5F_DECLARATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//---\n  public: virtual bool isValid (void) const override ;\n  public: virtual void drop (void) override ;\n\n//--- For log instruction\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--- Code (from GALGAS extern type declaration)\n") ;
  result.appendString (in_CODE.stringValue ()) ;
  result.appendString ("\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (Compiler * inCompiler,
                                                                           const GGS_string & in_TYPE_5F_NAME,
                                                                           const GGS_string & in_TYPE_5F_IDENTIFIER
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).add_operation (GGS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_graph {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (Compiler * inCompiler,
                                                                                       const GGS_unifiedTypeMapEntry & /* in_TYPE */,
                                                                                       const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                       const GGS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).add_operation (GGS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_graph () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyGraph (LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyGraph (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyGraph (THERE) ;\n  return result ;\n}\n\n") ;
  GGS_uint index_962_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    UpEnumerator_graphInsertModifierList enumerator_962 (in_INSERT_5F_MODIFIER_5F_LIST) ;
    while (enumerator_962.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_962.current_mInsertModifierName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inKey") ;
      GGS_uint index_1312_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).readProperty_addAssignOperatorArguments ().isValid ()) {
        UpEnumerator_functionSignature enumerator_1312 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).readProperty_addAssignOperatorArguments ()) ;
        while (enumerator_1312.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_1312.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 32)).stringValue ()) ;
          result.appendString (" inArgument_") ;
          result.appendString (index_1312_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 32)).stringValue ()) ;
          enumerator_1312.gotoNextObject () ;
          index_1312_IDX.increment () ;
        }
      }
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 37)).stringValue ()) ;
      result.appendString ("::makeAttributesFromObjects (attributes") ;
      GGS_uint index_1747_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 38)).readProperty_addAssignOperatorArguments ().isValid ()) {
        UpEnumerator_functionSignature enumerator_1747 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 38)).readProperty_addAssignOperatorArguments ()) ;
        while (enumerator_1747.hasCurrentObject ()) {
          result.appendString (", inArgument_") ;
          result.appendString (index_1747_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 39)).stringValue ()) ;
          enumerator_1747.gotoNextObject () ;
          index_1747_IDX.increment () ;
        }
      }
      result.appendString (" COMMA_THERE) ;\n  const char * kErrorMessage = ") ;
      result.appendString (enumerator_962.current_mInsertErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 42)).stringValue ()) ;
      result.appendString (" ;\n  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;\n}\n\n") ;
      enumerator_962.gotoNextObject () ;
      index_962_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_topologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 51)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray sortedList ;\n  capCollectionElementArray unsortedList ;\n  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 60)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 61)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_depthFirstTopologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 66)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 68)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray sortedList ;\n  capCollectionElementArray unsortedList ;\n  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 75)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 76)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_reversedGraph (LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.reversedGraphFromGraph (*this COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_circularities (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 90)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoSuccessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 100)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 105)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoPredecessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 110)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 115)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subgraphFromNodes (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_lstringlist & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_stringset & inKeysToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 131)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_nodeList (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 132)).stringValue ()) ;
  result.appendString (" resultingList ;\n  if (isValid ()) {\n    resultingList = graph () ;\n  }\n  return resultingList ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_lstringlist GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_accessibleNodesFrom (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_lstringlist & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_stringset & inNodesToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_lstringlist result ;\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" resultingGraph ;\n  subGraph (resultingGraph,\n            inStartKeyList,\n            inNodesToExclude,\n            inCompiler\n            COMMA_THERE) ;\n  if (resultingGraph.isValid ()) {\n    result = resultingGraph.getter_lkeyList (THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
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

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (Compiler * inCompiler,
                                                                                              const GGS_string & in_CLASS_5F_NAME,
                                                                                              const GGS_string & in_INITIALIZER_5F_NAME,
                                                                                              const GGS_formalInputParameterListForGeneration & /* in_FORMAL_5F_ARGUMENT_5F_LIST */,
                                                                                              const GGS_string & in_INITIALIZER_5F_IMPLEMENTATION
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   ") ;
  result.appendString (GGS_string ("INITIALIZER @").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).add_operation (in_INITIALIZER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_INITIALIZER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (Compiler * inCompiler,
                                                                                                       const GGS_string & in_CLASS_5F_NAME,
                                                                                                       const GGS_string & in_GETTER_5F_NAME,
                                                                                                       const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                       const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_596_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_596 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_596.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_596.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_596.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_596.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_596.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_596.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_596.gotoNextObject () ;
      index_596_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                          const GGS_string & in_CLASS_5F_NAME,
                                                                                                          const GGS_string & in_GETTER_5F_NAME,
                                                                                                          const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_584_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_584 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_584.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_584.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_584.gotoNextObject () ;
      index_584_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_1227_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_1227 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1227.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1227.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_1227.gotoNextObject () ;
      index_1227_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_GETTER_5F_NAME,
                                                                                               const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                               const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_581_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_581 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_581.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_581.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_581.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_581.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_581.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_581.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_581.gotoNextObject () ;
      index_581_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_GETTER_5F_NAME,
                                                                                                  const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                  const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_703_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_703 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_703.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_703.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_703.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_703.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_703.gotoNextObject () ;
      index_703_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_1346_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_1346 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1346.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1346.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_1346.gotoNextObject () ;
      index_1346_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_CLASS_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                            const GGS_unifiedTypeMapEntry & /* in_RETURN_5F_TYPE */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Overriding extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (Compiler * inCompiler,
                                                                                                       const GGS_string & in_CLASS_5F_NAME,
                                                                                                       const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                       const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_624_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_624 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_624.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_624.gotoNextObject () ;
      index_624_IDX.increment () ;
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
  GGS_uint index_2134_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2134 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2134.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_2134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          switch (test_5) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2134.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2134.gotoNextObject () ;
      index_2134_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (Compiler * inCompiler,
                                                                                                          const GGS_string & in_CLASS_5F_NAME,
                                                                                                          const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                          const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
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
  GGS_uint index_2130_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2130 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2130.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_2130.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 32)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_2130.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 34)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_2130.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2130.gotoNextObject () ;
      index_2130_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GGS_uint index_3156_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_3156 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_3156.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_3156.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 47)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_3156.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 48)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3156.gotoNextObject () ;
      index_3156_.increment () ;
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
  GGS_uint index_4845_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_4845 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_4845.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_4845.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 72)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_4845.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 73)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_4845.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 74)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_4845.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 75)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_4845.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 76)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_4845.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 77)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_4845.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 79)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", ") ;
      enumerator_4845.gotoNextObject () ;
      index_4845_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_MODIFIER_5F_NAME,
                                                                                               const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_615_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_615 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_615.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_615.gotoNextObject () ;
      index_615_IDX.increment () ;
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
  GGS_uint index_2138_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2138 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2138.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_2138.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2138.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2138.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2138.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2138.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2138.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2138.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          switch (test_5) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2138.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2138.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2138.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2138.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2138.gotoNextObject () ;
      index_2138_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionsetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                  const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
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
  GGS_uint index_1414_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1414 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1414.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_1414.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 21)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_1414.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 23)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1414.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 25)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1414.gotoNextObject () ;
      index_1414_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GGS_uint index_2440_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2440 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2440.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_2440.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_2440.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2440.gotoNextObject () ;
      index_2440_.increment () ;
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
  GGS_uint index_4129_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_4129 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_4129.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_4129.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 61)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_4129.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 62)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_4129.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 63)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_4129.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_4129.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 65)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_4129.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 66)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_4129.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", ") ;
      enumerator_4129.gotoNextObject () ;
      index_4129_.increment () ;
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
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_CLASS_5F_NAME,
                                                                                                            const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                            const GGS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Overriding extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
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
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (Compiler * inCompiler,
                                                                                                       const GGS_string & in_CLASS_5F_NAME,
                                                                                                       const GGS_string & in_METHOD_5F_NAME,
                                                                                                       const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_558_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_558 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_558.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_558.gotoNextObject () ;
      index_558_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                          const GGS_unifiedTypeMapEntry & in_RECEIVER_5F_TYPE,
                                                                                                          const GGS_string & in_METHOD_5F_NAME,
                                                                                                          const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension method '@").add_operation (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_616_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_616 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_616.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_616.gotoNextObject () ;
      index_616_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GGS_uint index_1642_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1642 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1642.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1642.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 25)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1642.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 26)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1642.gotoNextObject () ;
      index_1642_.increment () ;
    }
  }
  result.appendString ("//--- Find method\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2194_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2194 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2194.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2194.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2194.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2194.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2194.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2194.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2194.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2194.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", ") ;
      enumerator_2194.gotoNextObject () ;
      index_2194_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_METHOD_5F_NAME,
                                                                                               const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_549.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_549.gotoNextObject () ;
      index_549_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_METHOD_5F_NAME,
                                                                                                  const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 2)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_665_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_665 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_665.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_665.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 12)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_665.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_665.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_665.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_665.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_665.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_665.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 16)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_665.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_665.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_665.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_665.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_665.gotoNextObject () ;
      index_665_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
  GGS_uint index_1663_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1663 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1663.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1663.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 26)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1663.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 27)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1663.gotoNextObject () ;
      index_1663_.increment () ;
    }
  }
  result.appendString ("  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2165_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2165 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2165.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2165.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2165.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2165.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2165.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2165.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2165.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2165.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", ") ;
      enumerator_2165.gotoNextObject () ;
      index_2165_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_CLASS_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Overriding extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 2)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (Compiler * inCompiler,
                                                                                           const GGS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_string & in_FILEWRAPPER_5F_NAME
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_307_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_307 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_307.hasCurrentObject ()) {
      result.appendString ("extern const char * gWrapperFileContent_") ;
      result.appendString (enumerator_307.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_307.gotoNextObject () ;
      index_307_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_577_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_577 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_577.hasCurrentObject ()) {
      result.appendString ("extern const uint8_t gWrapperFileContent_") ;
      result.appendString (enumerator_577.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" [] ;\n") ;
      enumerator_577.gotoNextObject () ;
      index_577_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_841_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_841 (in_FILE_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_841.hasCurrentObject ()) {
      result.appendString ("extern const cRegularFileWrapper gWrapperFile_") ;
      result.appendString (enumerator_841.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_841.gotoNextObject () ;
      index_841_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1108_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_1108 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_1108.hasCurrentObject ()) {
      result.appendString ("extern const cDirectoryWrapper gWrapperDirectory_") ;
      result.appendString (enumerator_1108.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_1108.gotoNextObject () ;
      index_1108_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (Compiler * inCompiler,
                                                                                              const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                              const GGS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_GETTER_5F_NAME,
                                                                                                         const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" extensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & inObject") ;
  GGS_uint index_582_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_582 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_582.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_582.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_582.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_582_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_582.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_582_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_582.gotoNextObject () ;
      index_582_IDX.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_NAME,
                                                                                                            const GGS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("  Extension Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_METHOD_5F_NAME,
                                                                                                         const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" inObject") ;
  GGS_uint index_546_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_546 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_546.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_546.gotoNextObject () ;
      index_546_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                         const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & ioObject") ;
  GGS_uint index_546_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_546 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_546.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_546.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_546.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_546.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_546.gotoNextObject () ;
      index_546_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (Compiler * inCompiler,
                                                                                        const GGS_string & in_FUNCTION_5F_NAME,
                                                                                        const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                        const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" function_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_470_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_470 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_470.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_470.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_470.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_470_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_470.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_470_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_470.gotoNextObject () ;
      index_470_IDX.increment () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (Compiler * inCompiler,
                                                                                           const GGS_string & in_FUNCTION_5F_NAME,
                                                                                           const GGS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                           const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const C_galgas_type_descriptor * functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("] = {\n") ;
  GGS_uint index_850_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_850 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_850.hasCurrentObject ()) {
      result.appendString ("  & kTypeDescriptor_GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_850.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 15)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_850.gotoNextObject () ;
      index_850_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 23)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 24)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 28)).stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 31)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
    GGS_uint index_2148_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_2148 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_2148.hasCurrentObject ()) {
        result.appendString ("  const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2148.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString (" operand") ;
        result.appendString (index_2148_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString (" = GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2148.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString ("::extractObject (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("inEffectiveParameterArray.objectAtIndex (") ;
        result.appendString (index_2148_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" COMMA_HERE),\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("inCompiler\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_THERE) ;\n") ;
        enumerator_2148.gotoNextObject () ;
        index_2148_IDX.increment () ;
      }
    }
    result.appendString ("  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 41)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_2638_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_2638 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_2638.hasCurrentObject ()) {
        result.appendString ("operand") ;
        result.appendString (index_2638_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        enumerator_2638.gotoNextObject () ;
        index_2638_IDX.increment () ;
      }
    }
    result.appendString ("inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
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
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (Compiler * inCompiler,
                                                                                       const GGS_string & in_ROUTINE_5F_NAME,
                                                                                       const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid routine_") ;
  result.appendString (in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_450_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_450 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_450.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_450.gotoNextObject () ;
      index_450_IDX.increment () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (Compiler * inCompiler,
                                                                                          const GGS_string & in_ROUTINE_5F_NAME,
                                                                                          const GGS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_ROUTINE_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (Compiler * inCompiler,
                                                                                               const GGS_string & in_FUNCTION_5F_NAME,
                                                                                               const GGS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                               const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                               const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//  Function implementation                                                                      \n//--------------------------------------------------------------------------------------------------\n\nstatic bool gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (" = false ;\nstatic GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 14)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
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
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString ("] = {\n") ;
  GGS_uint index_2581_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_2581 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2581.hasCurrentObject ()) {
      result.appendString ("  & kTypeDescriptor_GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2581.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_2581.gotoNextObject () ;
      index_2581_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 53)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 54)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 58)).stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 61)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation*/\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
    GGS_uint index_3878_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_3878 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_3878.hasCurrentObject ()) {
        result.appendString ("  const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3878.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" operand") ;
        result.appendString (index_3878_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" = GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3878.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString ("::extractObject (inEffectiveParameterArray.objectAtIndex (") ;
        result.appendString (index_3878_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" COMMA_HERE), inCompiler COMMA_THERE) ;\n") ;
        enumerator_3878.gotoNextObject () ;
        index_3878_IDX.increment () ;
      }
    }
    result.appendString ("  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 68)).stringValue ()) ;
    result.appendString (" (") ;
    GGS_uint index_4345_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_4345 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_4345.hasCurrentObject ()) {
        result.appendString ("operand") ;
        result.appendString (index_4345_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 70)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_4345.gotoNextObject () ;
        index_4345_IDX.increment () ;
      }
    }
    result.appendString ("inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
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
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (Compiler * inCompiler,
                                                                                                   const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                   const GGS_string & in_TEMPLATE_5F_NAME,
                                                                                                   const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class Compiler * inCompiler") ;
  GGS_uint index_565_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_565 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_565.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_565.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" & ") ;
      result.appendString (enumerator_565.current_mFormalArgumentCppName (HERE).stringValue ()) ;
      enumerator_565.gotoNextObject () ;
      index_565_.increment () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (Compiler * inCompiler,
                                                                                                      const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const GGS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                      const GGS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                      const GGS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                      const GGS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * ") ;
  const GalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ") ;
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 9)).stringValue ()) ;
    result.appendString (" */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 11)).stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_674_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_674 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_674.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_674.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" & ") ;
      const GalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (enumerator_674.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("/* ") ;
        result.appendString (enumerator_674.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        result.appendString (" */") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (enumerator_674.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_674.gotoNextObject () ;
      index_674_.increment () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  String result ;\n") ;
  const GalgasBool test_2 = in_USES_5F_COLUMN_5F_MARKER.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  uint32_t columnMarker = 0 ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  if (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString (in_GENERATED_5F_INSTRUCTION_5F_STRING.stringValue ()) ;
  if (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString ("  return GGS_string (result) ;\n}\n\n") ;
  return GGS_string (result) ;
}

