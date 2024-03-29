#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith2Arguments&&?getterName?????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                     const GALGAS_string constinArgument_inGetterName,
                                                                                                                                     const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                     const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                     const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                     const GALGAS_string constinArgument_inArgument_32_Name,
                                                                                                                                     const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                     const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_11321 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_11321, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 281)) ;
  }
  GALGAS_functionSignature var_argList_11365 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 282)) ;
  GALGAS_unifiedTypeMapEntry var_t_11463 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_11463, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 283)) ;
  }
  var_argList_11365.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 284)), var_t_11463, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 284)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_11463, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 285)) ;
  }
  var_argList_11365.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 286)), var_t_11463, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 286)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 288)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 289)), var_argList_11365, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 291)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_11321, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 294)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 287)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith3Arguments&&????????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GALGAS_string constinArgument_inGetterName,
                                                                                                                                   const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                   const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                   const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                   const GALGAS_string constinArgument_inArgument_32_Name,
                                                                                                                                   const GALGAS_string constinArgument_inArgument_33_TypeName,
                                                                                                                                   const GALGAS_string constinArgument_inArgument_33_Name,
                                                                                                                                   const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_12536 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_12536, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 314)) ;
  }
  GALGAS_functionSignature var_argList_12580 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 315)) ;
  GALGAS_unifiedTypeMapEntry var_t_12678 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_12678, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 316)) ;
  }
  var_argList_12580.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 317)), var_t_12678, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 317)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_12678, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 318)) ;
  }
  var_argList_12580.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 319)), var_t_12678, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 319)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_12678, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 320)) ;
  }
  var_argList_12580.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 321)), var_t_12678, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 321)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 323)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 324)), var_argList_12580, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 326)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_12536, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 329)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 322)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'commonGetterMapForAllTypes&!'
//
//--------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes_26__21_ (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                 GALGAS_getterMap & outArgument_outMap,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap.drop () ; // Release 'out' argument
  outArgument_outMap = GALGAS_getterMap::class_func_emptyMap (SOURCE_FILE ("semanticsGetters.galgas", 338)) ;
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("description"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 339)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("staticType"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 347)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dynamicType"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 355)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("object"), GALGAS_string::makeEmptyString (), GALGAS_string ("object"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 363)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument&&?argTypeName?argName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (GALGAS_setterMap & ioArgument_ioSetterMap,
                                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                            const GALGAS_string constinArgument_inInputArgumentTypeName,
                                                                                                            const GALGAS_string constinArgument_inInputArgumentName,
                                                                                                            const GALGAS_string constinArgument_inSetterName,
                                                                                                            const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_1724 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_1724, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 33)) ;
  }
  GALGAS_formalParameterSignature var_argList_1775 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 34)) ;
  var_argList_1775.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 35)), var_argumentTypeIndex_1724, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 35)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 35)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inSetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 37)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 38)), var_argList_1775, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 41)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 36)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments&&?outputArgTypeName?outputArgName?inputArgTypeName?inputArgName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (GALGAS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                      const GALGAS_string constinArgument_inOutputArgumentTypeName,
                                                                                                                                                                      const GALGAS_string constinArgument_inOutputArgumentName,
                                                                                                                                                                      const GALGAS_string constinArgument_inInputArgumentTypeName,
                                                                                                                                                                      const GALGAS_string constinArgument_inInputArgumentName,
                                                                                                                                                                      const GALGAS_string constinArgument_inSetterName,
                                                                                                                                                                      const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_outputArgumentTypeIndex_2662 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_2662, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 58)) ;
  }
  GALGAS_unifiedTypeMapEntry var_inputArgumentTypeIndex_2759 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_2759, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 59)) ;
  }
  GALGAS_formalParameterSignature var_argList_2815 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 60)) ;
  var_argList_2815.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 61)), var_outputArgumentTypeIndex_2662, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticsSetters.galgas", 61)), constinArgument_inOutputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 61)) ;
  var_argList_2815.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 62)), var_inputArgumentTypeIndex_2759, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 62)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 62)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inSetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 64)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 65)), var_argList_2815, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 68)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 63)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments&&?arg1TypeName?arg1Name?arg2TypeName?arg2Name?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (GALGAS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                           const GALGAS_string constinArgument_inInputArgument_31_TypeName,
                                                                                                                                                           const GALGAS_string constinArgument_inInputArgument_31_Name,
                                                                                                                                                           const GALGAS_string constinArgument_inInputArgument_32_TypeName,
                                                                                                                                                           const GALGAS_string constinArgument_inInputArgument_32_Name,
                                                                                                                                                           const GALGAS_string constinArgument_inSetterName,
                                                                                                                                                           const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_argList_3728 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 85)) ;
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_3831 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_3831, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 86)) ;
  }
  var_argList_3728.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 87)), var_argumentTypeIndex_3831, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 87)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 87)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_3831, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 88)) ;
  }
  var_argList_3728.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 89)), var_argumentTypeIndex_3831, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 89)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 89)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inSetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 91)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 92)), var_argList_3728, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 95)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 90)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument&??compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (GALGAS_setterMap & ioArgument_ioSetterMap,
                                                                  const GALGAS_string constinArgument_inSetterName,
                                                                  const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inSetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 108)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 109)), GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 110)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 112)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 107)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument&?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                       const GALGAS_string constinArgument_inInstanceMethodName,
                                                                       const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 31)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 32)), GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 33)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 34)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 36)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 30)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument&&?inputArgTypeName?inputArgName?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                 const GALGAS_string constinArgument_inInputArgumentTypeName,
                                                                                                                 const GALGAS_string constinArgument_inInputArgumentName,
                                                                                                                 const GALGAS_string constinArgument_inInstanceMethodName,
                                                                                                                 const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_2435 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2435, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)) ;
  }
  GALGAS_formalParameterSignature var_argList_2486 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 50)) ;
  var_argList_2486.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)), var_argumentTypeIndex_2435, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 53)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 54)), var_argList_2486, GALGAS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 56)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 58)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 52)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument&&?methodName?argType?argName?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                const GALGAS_string constinArgument_inClassMethodName,
                                                                                                                const GALGAS_string constinArgument_inArgumentTypeName,
                                                                                                                const GALGAS_string constinArgument_inArgumentName,
                                                                                                                const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_1728 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex_1728, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 33)) ;
  }
  GALGAS_formalParameterSignature var_argList_1779 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 34)) ;
  var_argList_1779.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 35)), var_argumentTypeIndex_1728, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 35)), constinArgument_inArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 35)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inClassMethodName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 37)), var_argList_1779, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 36)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments&&?methodName?argType1?argName1?argType2?argName2?argType3?argName3?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                         const GALGAS_string constinArgument_inClassMethodName,
                                                                                                                                                                                         const GALGAS_string constinArgument_inArgumentTypeName_31_,
                                                                                                                                                                                         const GALGAS_string constinArgument_inArgumentName_31_,
                                                                                                                                                                                         const GALGAS_string constinArgument_inArgumentTypeName_32_,
                                                                                                                                                                                         const GALGAS_string constinArgument_inArgumentName_32_,
                                                                                                                                                                                         const GALGAS_string constinArgument_inArgumentTypeName_33_,
                                                                                                                                                                                         const GALGAS_string constinArgument_inArgumentName_33_,
                                                                                                                                                                                         const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_argList_2595 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 57)) ;
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_31__2692 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_31_, var_argumentTypeIndex_31__2692, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 59)) ;
  }
  var_argList_2595.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 60)), var_argumentTypeIndex_31__2692, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 60)), constinArgument_inArgumentName_31_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 60)) ;
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_32__2881 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_32_, var_argumentTypeIndex_32__2881, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 62)) ;
  }
  var_argList_2595.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 63)), var_argumentTypeIndex_32__2881, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 63)), constinArgument_inArgumentName_32_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 63)) ;
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_33__3070 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_33_, var_argumentTypeIndex_33__3070, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 65)) ;
  }
  var_argList_2595.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 66)), var_argumentTypeIndex_33__3070, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 66)), constinArgument_inArgumentName_33_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 66)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inClassMethodName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 68)), var_argList_2595, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 68)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument&&?classMethod?argName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                       const GALGAS_string constinArgument_inClassMethodName,
                                                                                                       const GALGAS_string constinArgument_inStringArgumentName,
                                                                                                       const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_3702 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_argumentTypeIndex_3702, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 80)) ;
  }
  GALGAS_formalParameterSignature var_argList_3753 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 81)) ;
  var_argList_3753.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), var_argumentTypeIndex_3702, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), constinArgument_inStringArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 82)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inClassMethodName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 84)), var_argList_3753, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 83)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseOptionalMethodWithArgument&&?optionalMethodName??'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseOptionalMethodWithArgument_26__26__3F_optionalMethodName_3F__3F_ (GALGAS_optionalMethodMap & ioArgument_ioMap,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                        const GALGAS_string constinArgument_inOptionalMethodName,
                                                                                        const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                        const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodSignature var_argList_1632 = GALGAS_optionalMethodSignature::class_func_emptyList (SOURCE_FILE ("semanticsOptionalMethods.galgas", 32)) ;
  GALGAS_unifiedTypeMapEntry var_t_1713 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_1713, inCompiler COMMA_SOURCE_FILE ("semanticsOptionalMethods.galgas", 33)) ;
  }
  var_argList_1632.addAssign_operation (GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsOptionalMethods.galgas", 34)), var_t_1713, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsOptionalMethods.galgas", 34)) ;
  {
  ioArgument_ioMap.setter_insertKey (GALGAS_lstring::class_func_new (constinArgument_inOptionalMethodName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsOptionalMethods.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("semanticsOptionalMethods.galgas", 36)), var_argList_1632, inCompiler COMMA_SOURCE_FILE ("semanticsOptionalMethods.galgas", 35)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_routineMangledName (const GALGAS_lstring & constinArgument_inRoutineName,
                                            const GALGAS_formalParameterSignature & constinArgument_inRoutineFormalParameters,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_str_1447 = constinArgument_inRoutineName.readProperty_string () ;
  cEnumerator_formalParameterSignature enumerator_1493 (constinArgument_inRoutineFormalParameters, EnumerationOrder::up) ;
  while (enumerator_1493.hasCurrentObject ()) {
    switch (enumerator_1493.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        var_str_1447.plusAssign_operation(GALGAS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 29)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        var_str_1447.plusAssign_operation(GALGAS_string ("&"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 31)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        var_str_1447.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 33)) ;
      }
      break ;
    }
    var_str_1447.plusAssign_operation(enumerator_1493.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 35)) ;
    enumerator_1493.gotoNextObject () ;
  }
  result_result = GALGAS_lstring::class_func_new (var_str_1447, constinArgument_inRoutineName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 37)) ;
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

static GALGAS_object functionWithGenericHeader_routineMangledName (Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_formalParameterSignature operand1 = GALGAS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

GALGAS_string function_routineArgumentFromFormalParameters (const GALGAS_formalParameterSignature & constinArgument_inRoutineFormalParameters,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("(") ;
  cEnumerator_formalParameterSignature enumerator_2062 (constinArgument_inRoutineFormalParameters, EnumerationOrder::up) ;
  while (enumerator_2062.hasCurrentObject ()) {
    switch (enumerator_2062.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        result_result.plusAssign_operation(GALGAS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 48)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        result_result.plusAssign_operation(GALGAS_string ("!\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 50)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        result_result.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 52)) ;
      }
      break ;
    }
    result_result.plusAssign_operation(enumerator_2062.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 54)) ;
    if (enumerator_2062.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 56)) ;
    }
    enumerator_2062.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 58)) ;
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

static GALGAS_object functionWithGenericHeader_routineArgumentFromFormalParameters (Compiler * inCompiler,
                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_formalParameterSignature operand0 = GALGAS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

static GALGAS_string onceFunction_compilerCppName (Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCompilerCppName ; // Returned variable
  result_outCompilerCppName = GALGAS_string ("inCompiler") ;
//---
  return result_outCompilerCppName ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compilerCppName = false ;
static GALGAS_string gOnceFunctionResult_compilerCppName ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_compilerCppName (class Compiler * inCompiler
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

static GALGAS_object functionWithGenericHeader_compilerCppName (Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
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

static GALGAS_string onceFunction_syntaxDirectedTranslationResultVarName (Compiler *
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("ioSyntaxDirectedTranslationResult") ;
//---
  return result_outName ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = false ;
static GALGAS_string gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_syntaxDirectedTranslationResultVarName (class Compiler * inCompiler
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

static GALGAS_object functionWithGenericHeader_syntaxDirectedTranslationResultVarName (Compiler * inCompiler,
                                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                                       const GALGAS_location & /* inErrorLocation */
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

GALGAS_string cPtr_galgas_33_GrammarComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = this ;
  result_result = GALGAS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 310)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3SyntaxComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_galgas_33_SyntaxComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = this ;
  result_result = GALGAS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 317)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@predefinedTypeAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_predefinedTypeAST::getter_keyRepresentation (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_predefinedTypeAST temp_0 = this ;
  result_result = GALGAS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 324)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_enumDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_enumDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("enum @").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 331)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sortedListDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sortedListDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("sorted list @").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 338)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@listDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_listDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_listDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("list @").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 345)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@listmapDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_listmapDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("listmap @").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 352)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_filewrapperDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_filewrapperDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 359)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_optionComponentDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("option ").add_operation (temp_0.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 366)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@graphDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_graphDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_graphDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("graph @").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 373)) ;
//---
  return result_result ;
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
  result_result = GALGAS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 380)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_onceFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_onceFunctionDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("once function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 387)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_externFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_externFunctionDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 393)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'addExtensions???&&??isClass&&&?acceptSetters'
//
//--------------------------------------------------------------------------------------------------

void routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                            const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                            const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                            GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            const GALGAS_lstring constinArgument_inTypeName,
                                                                                            const GALGAS_bool constinArgument_inIsClass,
                                                                                            GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                            GALGAS_setterMap & ioArgument_ioSetterMap,
                                                                                            GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                                            const GALGAS_bool constinArgument_inAcceptSetters,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 414)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_extensionGetterMapForType var_extensionGetterMapForType_16737 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_16737, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 415)) ;
      cEnumerator_extensionGetterMapForType enumerator_16820 (var_extensionGetterMapForType_16737, EnumerationOrder::up) ;
      while (enumerator_16820.hasCurrentObject ()) {
        GALGAS_functionSignature var_formalArgumentList_16892 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 417)) ;
        cEnumerator_formalInputParameterListAST enumerator_16989 (enumerator_16820.current_mInputFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_16989.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_17085 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16989.current_mFormalArgumentTypeName (HERE), var_typeIndex_17085, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 419)) ;
          }
          var_formalArgumentList_16892.addAssign_operation (enumerator_16989.current_mFormalSelector (HERE), var_typeIndex_17085, enumerator_16989.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 420)) ;
          enumerator_16989.gotoNextObject () ;
        }
        GALGAS_unifiedTypeMapEntry var_returnedType_17243 ;
        {
        extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16820.current_mResultTypeName (HERE), var_returnedType_17243, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 422)) ;
        }
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_16820.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 423)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = ioArgument_ioGetterMap.getter_hasKey (enumerator_16820.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 424)).boolEnum () ;
              if (kBoolTrue == test_2) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 425)), enumerator_16820.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 425)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_16820.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 427)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = ioArgument_ioGetterMap.getter_hasKey (enumerator_16820.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 428)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 429)), enumerator_16820.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 429)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = constinArgument_inIsClass.operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_16820.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 431)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 431)).boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_16820.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 434)), var_formalArgumentList_16892, enumerator_16820.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), var_returnedType_17243, GALGAS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 439)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 432)) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_16820.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 445)), var_formalArgumentList_16892, enumerator_16820.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), var_returnedType_17243, enumerator_16820.current_mQualifier (HERE), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 443)) ;
              }
            }
          }
        }
        enumerator_16820.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 457)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_extensionMethodMapForType var_extensionMethodMapForType_18458 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_18458, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 458)) ;
      cEnumerator_extensionMethodMapForType enumerator_18520 (var_extensionMethodMapForType_18458, EnumerationOrder::up) ;
      while (enumerator_18520.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_formalArgumentList_18573 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 460)) ;
        cEnumerator_formalParameterListAST enumerator_18646 (enumerator_18520.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_18646.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_18782 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18646.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_18782, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 462)) ;
          }
          var_formalArgumentList_18573.addAssign_operation (enumerator_18646.current (HERE).readProperty_mFormalSelector (), var_typeIndex_18782, enumerator_18646.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_18646.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 466)) ;
          enumerator_18646.gotoNextObject () ;
        }
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_18520.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 472)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_18520.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 473)).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 474)), enumerator_18520.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 474)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (ComparisonKind::equal, enumerator_18520.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 476)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                test_10 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_18520.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 477)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 478)), enumerator_18520.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 478)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = constinArgument_inIsClass.operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_18520.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 480)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 480)).boolEnum () ;
              if (kBoolTrue == test_11) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18520.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 483)), var_formalArgumentList_18573, enumerator_18520.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 487)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 481)) ;
                }
              }
            }
            if (kBoolFalse == test_11) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18520.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 493)), var_formalArgumentList_18573, enumerator_18520.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), enumerator_18520.current_mQualifier (HERE), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 491)) ;
              }
            }
          }
        }
        enumerator_18520.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 504)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_extensionSetterMapForType var_extensionSetterMapForType_20140 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_20140, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 505)) ;
      cEnumerator_extensionSetterMapForType enumerator_20181 (var_extensionSetterMapForType_20140, EnumerationOrder::up) ;
      while (enumerator_20181.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_formalArgumentList_20271 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 507)) ;
        cEnumerator_formalParameterListAST enumerator_20318 (enumerator_20181.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_20318.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_20414 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_20318.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_20414, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 509)) ;
          }
          var_formalArgumentList_20271.addAssign_operation (enumerator_20318.current (HERE).readProperty_mFormalSelector (), var_typeIndex_20414, enumerator_20318.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_20318.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 510)) ;
          enumerator_20318.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_20181.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 518)), var_formalArgumentList_20271, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 521)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 516)) ;
        }
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          test_13 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas", 524)).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_20181.current_lkey (HERE).readProperty_location (), GALGAS_string ("a refclass does not accept any setter; use method instead"), fixItArray14  COMMA_SOURCE_FILE ("semanticContext.galgas", 525)) ;
          }
        }
        enumerator_20181.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'elementTypeNameSuffix'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_elementTypeNameSuffix (Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("-element") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_elementTypeNameSuffix = false ;
static GALGAS_string gOnceFunctionResult_elementTypeNameSuffix ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_elementTypeNameSuffix (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_elementTypeNameSuffix) {
    gOnceFunctionResult_elementTypeNameSuffix = onceFunction_elementTypeNameSuffix (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_elementTypeNameSuffix = true ;
  }
  return gOnceFunctionResult_elementTypeNameSuffix ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_elementTypeNameSuffix (void) {
  gOnceFunctionResult_elementTypeNameSuffix.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_elementTypeNameSuffix (nullptr,
                                                                 releaseOnceFunctionResult_elementTypeNameSuffix) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_elementTypeNameSuffix [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_elementTypeNameSuffix (Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_elementTypeNameSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_elementTypeNameSuffix ("elementTypeNameSuffix",
                                                                       functionWithGenericHeader_elementTypeNameSuffix,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_elementTypeNameSuffix) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories????!!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (const GALGAS_string constinArgument_inAbsoluteSourcePath,
                                                                              const GALGAS_string constinArgument_inPathInWrapper,
                                                                              const GALGAS_wrapperExtensionMap constinArgument_inTextFileExtensionMap,
                                                                              const GALGAS_wrapperExtensionMap constinArgument_inBinaryFileExtensionMap,
                                                                              GALGAS_wrapperFileMap & outArgument_outWrapperFileMap,
                                                                              GALGAS_wrapperDirectoryMap & outArgument_outWrapperDirectoryMap,
                                                                              GALGAS_uint & ioArgument_ioWrapperFileIndex,
                                                                              GALGAS_uint & ioArgument_ioWrapperDirectoryIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outWrapperFileMap.drop () ; // Release 'out' argument
  outArgument_outWrapperDirectoryMap.drop () ; // Release 'out' argument
  GALGAS_uint var_currentDirectoryIndex_22460 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 566)) ;
  GALGAS_stringlist var_files_22587 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 568)) ;
  outArgument_outWrapperFileMap = GALGAS_wrapperFileMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 569)) ;
  cEnumerator_stringlist enumerator_22670 (var_files_22587, EnumerationOrder::up) ;
  while (enumerator_22670.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_22670.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 571)) COMMA_SOURCE_FILE ("semanticContext.galgas", 571)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_absoluteFilePath_22776 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 572)).add_operation (enumerator_22670.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 572)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::class_func_new (enumerator_22670.current_mValue (HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 574)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 574)), var_absoluteFilePath_22776, GALGAS_bool (true), var_currentDirectoryIndex_22460, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 573)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 580)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_22670.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 581)) COMMA_SOURCE_FILE ("semanticContext.galgas", 581)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string var_absoluteFilePath_23156 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 582)).add_operation (enumerator_22670.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 582)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::class_func_new (enumerator_22670.current_mValue (HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 584)), var_absoluteFilePath_23156, GALGAS_bool (false), var_currentDirectoryIndex_22460, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 583)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 590)) ;
        }
      }
    }
    enumerator_22670.gotoNextObject () ;
  }
  GALGAS_stringlist var_directories_23516 = constinArgument_inAbsoluteSourcePath.getter_directories (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 594)) ;
  outArgument_outWrapperDirectoryMap = GALGAS_wrapperDirectoryMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 595)) ;
  cEnumerator_stringlist enumerator_23609 (var_directories_23516, EnumerationOrder::up) ;
  while (enumerator_23609.hasCurrentObject ()) {
    GALGAS_uint var_theDirectoryIndex_23649 = ioArgument_ioWrapperDirectoryIndex ;
    GALGAS_wrapperFileMap var_internalWrapperFileMap_23885 ;
    GALGAS_wrapperDirectoryMap var_internalWrapperDirectoryMap_23919 ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 599)).add_operation (enumerator_23609.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 599)), constinArgument_inPathInWrapper.add_operation (enumerator_23609.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 600)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 600)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_23885, var_internalWrapperDirectoryMap_23919, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 598)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GALGAS_lstring::class_func_new (enumerator_23609.current_mValue (HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 609)), var_internalWrapperFileMap_23885, var_internalWrapperDirectoryMap_23919, var_theDirectoryIndex_23649, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 608)) ;
    }
    enumerator_23609.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_24799 = GALGAS_filewrapperTemplateMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 627)) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = this ;
  cEnumerator_filewrapperTemplateListAST enumerator_24884 (temp_0.readProperty_mFilewrapperTemplateList (), EnumerationOrder::up) ;
  while (enumerator_24884.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature_24990 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 629)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_25090 (enumerator_24884.current_mFilewrapperTemplateFormalInputParameters (HERE), EnumerationOrder::up) ;
    while (enumerator_25090.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_25201 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_25090.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_25201, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 631)) ;
      }
      var_templateSignature_24990.addAssign_operation (enumerator_25090.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex_25201, enumerator_25090.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 632)) ;
      enumerator_25090.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_24799.setter_insertKey (enumerator_24884.current_mFilewrapperTemplateName (HERE), var_templateSignature_24990, enumerator_24884.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 634)) ;
    }
    enumerator_24884.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap_25532 = GALGAS_wrapperExtensionMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 641)) ;
  const GALGAS_filewrapperDeclarationAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_25561 (temp_1.readProperty_mFilewrapperTextFileExtensionList (), EnumerationOrder::up) ;
  while (enumerator_25561.hasCurrentObject ()) {
    {
    var_textExtensionMap_25532.setter_insertKey (enumerator_25561.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 643)) ;
    }
    enumerator_25561.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap_25727 = GALGAS_wrapperExtensionMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 646)) ;
  const GALGAS_filewrapperDeclarationAST temp_2 = this ;
  cEnumerator_lstringlist enumerator_25762 (temp_2.readProperty_mFilewrapperBinaryFileExtensionList (), EnumerationOrder::up) ;
  while (enumerator_25762.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_textExtensionMap_25532.getter_hasKey (enumerator_25762.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 648)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_25762.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_25762.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 649)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 649)), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas", 649)) ;
      }
    }
    if (kBoolFalse == test_3) {
      {
      var_binaryFileExtensionMap_25727.setter_insertKey (enumerator_25762.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 651)) ;
      }
    }
    enumerator_25762.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap_26080 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_26126 ;
  GALGAS_string var_absoluteSourcePath_26160 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_filewrapperDeclarationAST temp_6 = this ;
    test_5 = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 658)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperDeclarationAST temp_7 = this ;
      var_absoluteSourcePath_26160 = temp_7.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_filewrapperDeclarationAST temp_8 = this ;
    const GALGAS_filewrapperDeclarationAST temp_9 = this ;
    var_absoluteSourcePath_26160 = temp_8.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 661)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 661)).add_operation (temp_9.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 661)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_absoluteSourcePath_26160.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 663)).operator_not (SOURCE_FILE ("semanticContext.galgas", 663)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperDeclarationAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_26160, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 664)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 664)), fixItArray12  COMMA_SOURCE_FILE ("semanticContext.galgas", 664)) ;
      var_regularRootFileMap_26080.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_26126.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    GALGAS_uint var_wrapperFileIndex_26676 = GALGAS_uint (uint32_t (0U)) ;
    GALGAS_uint var_wrapperDirectoryIndex_26711 = GALGAS_uint (uint32_t (0U)) ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_26160, GALGAS_string ("/"), var_textExtensionMap_25532, var_binaryFileExtensionMap_25727, var_regularRootFileMap_26080, var_wrapperDirectoryMap_26126, var_wrapperFileIndex_26676, var_wrapperDirectoryIndex_26711, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 670)) ;
    }
  }
  {
  const GALGAS_filewrapperDeclarationAST temp_13 = this ;
  const GALGAS_filewrapperDeclarationAST temp_14 = this ;
  const GALGAS_filewrapperDeclarationAST temp_15 = this ;
  const GALGAS_filewrapperDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_13.readProperty_mFilewrapperName (), temp_14.readProperty_mFilewrapperPath (), temp_15.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_26080, var_wrapperDirectoryMap_26126, var_filewrapperTemplateMap_24799, temp_16.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 682)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionSignature var_functionSignature_27871 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 702)) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = this ;
  cEnumerator_formalInputParameterListAST enumerator_27964 (temp_0.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_27964.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_28056 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_27964.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_28056, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 704)) ;
    }
    var_functionSignature_27871.addAssign_operation (enumerator_27964.current_mFormalSelector (HERE), var_parameterTypeIndex_28056, enumerator_27964.current_mFormalArgumentTypeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 705)) ;
    enumerator_27964.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_resultTypeIndex_28246 ;
  {
  const GALGAS_externFunctionDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mResultTypeName (), var_resultTypeIndex_28246, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 708)) ;
  }
  {
  const GALGAS_externFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.readProperty_mFunctionName (), var_functionSignature_27871, var_resultTypeIndex_28246, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 710)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_resultTypeIndex_29091 ;
  {
  const GALGAS_onceFunctionDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mResultTypeName (), var_resultTypeIndex_29091, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 727)) ;
  }
  {
  const GALGAS_onceFunctionDeclarationAST temp_1 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_1.readProperty_mFunctionName (), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 729)), var_resultTypeIndex_29091, temp_2.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 729)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_2 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 741)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_grammarLabelMap var_grammarLabelMap_30640 = GALGAS_grammarLabelMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 760)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = this ;
  cEnumerator_nonTerminalLabelListAST enumerator_30699 (temp_0.readProperty_mStartSymbolLabelList (), EnumerationOrder::up) ;
  while (enumerator_30699.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_formalArgumentList_30794 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 763)) ;
    cEnumerator_formalParameterListAST enumerator_30914 (enumerator_30699.current_mFormalArgumentList (HERE), EnumerationOrder::up) ;
    while (enumerator_30914.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentType_31003 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_30914.current_mFormalArgumentTypeName (HERE), var_argumentType_31003, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 765)) ;
      }
      var_formalArgumentList_30794.addAssign_operation (enumerator_30914.current_mFormalSelector (HERE), var_argumentType_31003, enumerator_30914.current_mFormalArgumentPassingMode (HERE), enumerator_30914.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 766)) ;
      enumerator_30914.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_30640.setter_insertKey (enumerator_30699.current_mLabelName (HERE), var_formalArgumentList_30794, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 772)) ;
    }
    enumerator_30699.gotoNextObject () ;
  }
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_1 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_mGrammarMap.setter_insertGrammar (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_30640, temp_2.readProperty_mHasIndexing ().readProperty_bool (), temp_3.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 778)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_1 = this ;
  GALGAS_lstring var_key_33291 = GALGAS_lstring::class_func_new (GALGAS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 819)), temp_1.readProperty_mGrammarComponentName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 819)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_33291, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 820)) ;
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = this ;
  cEnumerator_lstringlist enumerator_33452 (temp_3.readProperty_mSyntaxComponents (), EnumerationOrder::up) ;
  while (enumerator_33452.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_33291, GALGAS_lstring::class_func_new (GALGAS_string ("syntax ").add_operation (enumerator_33452.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 822)), enumerator_33452.current_mValue (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 822)) COMMA_SOURCE_FILE ("semanticContext.galgas", 822)) ;
    }
    enumerator_33452.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GALGAS_lstring var_key_34254 = GALGAS_lstring::class_func_new (GALGAS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 835)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 835)) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_34254, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 836)) ;
  }
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_34254, GALGAS_lstring::class_func_new (GALGAS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 837)), temp_4.readProperty_mLexiqueName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 837)) COMMA_SOURCE_FILE ("semanticContext.galgas", 837)) ;
  }
  const GALGAS_galgas_33_SyntaxComponentAST temp_5 = this ;
  cEnumerator_syntaxRuleListAST enumerator_34539 (temp_5.readProperty_mRuleList (), EnumerationOrder::up) ;
  while (enumerator_34539.hasCurrentObject ()) {
    cEnumerator_syntaxRuleLabelListAST enumerator_34604 (enumerator_34539.current_mLabelList (HERE), EnumerationOrder::up) ;
    while (enumerator_34604.hasCurrentObject ()) {
      cEnumerator_formalParameterListAST enumerator_34690 (enumerator_34604.current_mFormalArguments (HERE), EnumerationOrder::up) ;
      while (enumerator_34690.hasCurrentObject ()) {
        switch (enumerator_34690.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_34254, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (enumerator_34690.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 842)), enumerator_34690.current_mFormalArgumentTypeName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 842)) COMMA_SOURCE_FILE ("semanticContext.galgas", 842)) ;
            }
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
          }
          break ;
        }
        enumerator_34690.gotoNextObject () ;
      }
      enumerator_34604.gotoNextObject () ;
    }
    enumerator_34539.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 859)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                      GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 871)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                     GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                     GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                     GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                     GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 883)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList&?&&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInstructionList_26__3F__26__26__3F__26_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                              const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                              const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 35)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_1820 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_1820.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_1820.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 37)) ;
    enumerator_1820.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 45)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration implementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticTypeForGeneration::getter_implementationCppFileName (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 263)).readProperty_mHeaderFileName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_semanticTypeForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_semanticTypeForGeneration::getter_isPredefined (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 275)).readProperty_isPredefined () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_semanticTypeForGeneration::getter_headerKind (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  const GALGAS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 281)).readProperty_mHeaderKind () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration implementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticDeclarationWithHeaderForGeneration::getter_implementationCppFileName (Compiler */* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mImplementationCppFileName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_generateHeader () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_semanticDeclarationWithHeaderForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 310)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                                                                                                      const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                                                                                                                                                                                      const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                                                                                                                                                                                      const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableListNoWarns,
                                                                                                                                                                                                      const GALGAS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                                                                                                                                                                                      const GALGAS_location constinArgument_inEndOfBranchLocation,
                                                                                                                                                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                                                                                                      GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
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

void routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                                                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                                                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                                                                                                               const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                                                                                                                                                                                               const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                                                                                                                                                                                               const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableListNoWarns,
                                                                                                                                                                                                               const GALGAS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                                                                                                                                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                                                                                                               GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 102)) ;
  cEnumerator_localConstantList enumerator_4715 (constinArgument_inLocalConstantList, EnumerationOrder::up) ;
  while (enumerator_4715.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_4715.current_mNoWarningIfUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_4715.current_mName (HERE), enumerator_4715.current_mType (HERE), enumerator_4715.current_mCppName (HERE), enumerator_4715.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 106)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      {
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_4715.current_mName (HERE), enumerator_4715.current_mType (HERE), enumerator_4715.current_mCppName (HERE), enumerator_4715.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 108)) ;
      }
    }
    enumerator_4715.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_5024 (constinArgument_inLocalInitializedVariableList, EnumerationOrder::up) ;
  while (enumerator_5024.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_5024.current_mName (HERE), GALGAS_bool (true), enumerator_5024.current_mType (HERE), enumerator_5024.current_mCppName (HERE), enumerator_5024.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 113)) ;
    }
    enumerator_5024.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_5208 (constinArgument_inLocalInitializedVariableListNoWarns, EnumerationOrder::up) ;
  while (enumerator_5208.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_5208.current_mName (HERE), GALGAS_bool (false), enumerator_5208.current_mType (HERE), enumerator_5208.current_mCppName (HERE), enumerator_5208.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 116)) ;
    }
    enumerator_5208.gotoNextObject () ;
  }
  cEnumerator_semanticInstructionListAST enumerator_5410 (constinArgument_inSemanticInstructionListAST, EnumerationOrder::up) ;
  while (enumerator_5410.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_5410.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 120)) ;
    enumerator_5410.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean???!'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean_3F__3F__3F__21_ (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                       const GALGAS_location constinArgument_inErrorLocation,
                                                       const GALGAS_semanticExpressionForGeneration constinArgument_inExpression,
                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMapEntry var_expressionType_6370 = constinArgument_inExpression.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_boolType_6436 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, var_expressionType_6370.objectCompare (var_boolType_6436)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outExpression = constinArgument_inExpression ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 154)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 154)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).readProperty_propertyMap ().getter_hasKey (GALGAS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_AccessControl var_accessControl_6815 ;
            GALGAS_unifiedTypeMapEntry var_attributeType_6874 ;
            GALGAS_bool joker_6837 ; // Joker input parameter
            extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)).readProperty_propertyMap ().method_searchKey (GALGAS_lstring::class_func_new (GALGAS_string ("bool"), constinArgument_inErrorLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 157)), var_accessControl_6815, joker_6837, var_attributeType_6874, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)) ;
            extensionMethod_checkSetAccess (var_accessControl_6815, constinArgument_inAnalysisContext.readProperty_selfType (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 162)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (ComparisonKind::equal, var_attributeType_6874.objectCompare (var_boolType_6436)).boolEnum () ;
              if (kBoolTrue == test_3) {
                outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::class_func_new (var_boolType_6436, constinArgument_inErrorLocation, constinArgument_inExpression, GALGAS_string ("bool")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 167)) ;
              }
            }
            if (kBoolFalse == test_3) {
              TC_Array <FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 175)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 175)).add_operation (GALGAS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 175)), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 174)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
        if (kBoolFalse == test_2) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)).add_operation (GALGAS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 179)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (kBoolFalse == test_1) {
      const cMapElement_getterMap * objectArray_7742 = (const cMapElement_getterMap *) extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 184)).readProperty_mGetterMap ().readAccessForWithInstruction (GALGAS_string ("bool")) ;
      if (nullptr != objectArray_7742) {
          macroValidSharedObject (objectArray_7742, cMapElement_getterMap) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (ComparisonKind::notEqual, objectArray_7742->mProperty_mReturnedType.objectCompare (var_boolType_6436)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter, but it does not return a '@bool' value"), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 186)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (ComparisonKind::greaterThan, objectArray_7742->mProperty_mArgumentTypeList.getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 187)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter that requires argument(s)"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 188)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_8) {
            outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::class_func_new (var_boolType_6436, constinArgument_inErrorLocation, objectArray_7742->mProperty_mKind, constinArgument_inExpression, GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)), GALGAS_string ("bool"), GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 197)), objectArray_7742->mProperty_mHasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 190)) ;
          }
        }
      }else{
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)).readProperty_mGetterMap ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_10) {
          TC_Array <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, kFixItReplace, extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 210)).readProperty_mGetterMap ().getter_keyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 210))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 208)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 208)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 208)), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 207)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeGrammarInstructionSDT (const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                      const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                      const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                      GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeGrammarInstructionSDT (const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                      const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                      const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                      GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 246)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 247)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeGrammarInstructionSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                       const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                       GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 260)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 261)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_type_11369 ;
  GALGAS_string var_cppName_11387 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GALGAS_string joker_11395 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_11369, var_cppName_11387, joker_11395, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 263)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_11405 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_11405.objectCompare (var_type_11369)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (extensionGetter_identifierRepresentation (var_type_11369, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_11405, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 266)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName_11387.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeGrammarInstructionSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                               const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                               GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 282)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 283)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GALGAS_string var_cppName_12459 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_12601 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 286)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GALGAS_bool (true), var_type_12601, var_cppName_12459, var_cppName_12459, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 287)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_12804 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_12804.objectCompare (var_type_12601)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (extensionGetter_identifierRepresentation (var_type_12601, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_12804, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 290)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName_12459, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeGrammarInstructionSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 306)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 307)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GALGAS_string var_cppName_13893 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_14035 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 310)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_14035, var_cppName_13893, var_cppName_13893, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_14213 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_14213.objectCompare (var_type_14035)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (extensionGetter_identifierRepresentation (var_type_14035, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_14213, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 314)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_13893, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures_3F__3F__3F__3F_ (const GALGAS_formalParameterListForGeneration constinArgument_inTestedSignature,
                                                    const GALGAS_location constinArgument_inErrorLocation,
                                                    const GALGAS_formalParameterSignature constinArgument_inReferenceSignature,
                                                    const GALGAS_location constinArgument_inReferenceLocation,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 33)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 33)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this method declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 34)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (GALGAS_string (" formal parameter(s), but overriden method declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 35)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 35)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)) ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 36)) ;
    }
  }
  if (kBoolFalse == test_0) {
    cEnumerator_formalParameterSignature enumerator_2098 (constinArgument_inReferenceSignature, EnumerationOrder::up) ;
    cEnumerator_formalParameterListForGeneration enumerator_2210 (constinArgument_inTestedSignature, EnumerationOrder::up) ;
    while (enumerator_2098.hasCurrentObject () && enumerator_2210.hasCurrentObject ()) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::notEqual, enumerator_2098.current_mFormalArgumentPassingMode (HERE).objectCompare (enumerator_2210.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_2210.current_mFormalArgumentName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_2210.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)).add_operation (GALGAS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2210.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)).add_operation (GALGAS_string (", but overriden method declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2098.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)) ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (ComparisonKind::notEqual, enumerator_2210.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_2098.current_mFormalSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string var_s_2753 ;
          switch (enumerator_2098.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
            {
              var_s_2753 = GALGAS_string ("\?") ;
            }
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
            {
              var_s_2753 = GALGAS_string ("\?!") ;
            }
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
            {
              var_s_2753 = GALGAS_string ("!") ;
            }
            break ;
          }
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::notEqual, enumerator_2098.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_2098.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 55)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          var_s_2753.plusAssign_operation(temp_7, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 55)) ;
          TC_Array <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_2753) ;
          inCompiler->emitSemanticError (enumerator_2210.current_mFormalSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_2753, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 56)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 56)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 56)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_2210.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 59)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_2098.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 59)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_2210.current_mFormalArgumentName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_2210.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 60)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 60)).add_operation (extensionGetter_definition (enumerator_2210.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 61)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 60)).add_operation (GALGAS_string ("' type, but overriden method declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 61)).add_operation (extensionGetter_definition (enumerator_2098.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 62)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 61)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 62)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 60)) ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 63)) ;
        }
      }
      enumerator_2098.gotoNextObject () ;
      enumerator_2210.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (const GALGAS_formalInputParameterListForGeneration constinArgument_inTestedSignature,
                                                            const GALGAS_unifiedTypeMapEntry constinArgument_inReturnType,
                                                            const GALGAS_location constinArgument_inErrorLocation,
                                                            const GALGAS_functionSignature constinArgument_inReferenceSignature,
                                                            const GALGAS_unifiedTypeMapEntry constinArgument_inInheritedReturnType,
                                                            const GALGAS_location constinArgument_inReferenceLocation,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the return type is '@").add_operation (extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)).add_operation (GALGAS_string ("', but overriden getter names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)).add_operation (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 85)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)).add_operation (GALGAS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 85)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)) ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 86)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 88)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 88)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this getter declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 89)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)).add_operation (GALGAS_string (" formal parameter(s), but overriden getter declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 90)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 90)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)) ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 91)) ;
    }
  }
  if (kBoolFalse == test_3) {
    cEnumerator_functionSignature enumerator_5190 (constinArgument_inReferenceSignature, EnumerationOrder::up) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_5277 (constinArgument_inTestedSignature, EnumerationOrder::up) ;
    while (enumerator_5190.hasCurrentObject () && enumerator_5277.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5277.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5190.current_mFormalSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5190.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_5190.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_5391 = GALGAS_string ("\?").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)) ;
          TC_Array <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_5391) ;
          inCompiler->emitSemanticError (enumerator_5277.current_mFormalSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_5391, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_5277.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 101)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_5190.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 101)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5277.current_mFormalArgumentName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5277.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)).add_operation (extensionGetter_definition (enumerator_5277.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)).add_operation (GALGAS_string ("' type, but overriden getter declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 103)).add_operation (extensionGetter_definition (enumerator_5190.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 104)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 103)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 104)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)) ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 105)) ;
        }
      }
      enumerator_5190.gotoNextObject () ;
      enumerator_5277.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature?&?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 143)) ;
  cEnumerator_formalParameterListAST enumerator_8064 (constinArgument_inRoutineSignatureAST, EnumerationOrder::up) ;
  while (enumerator_8064.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_8111 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8064.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 145)) ;
    GALGAS_string var_formalArgumentCppName_8191 ;
    switch (enumerator_8064.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        var_formalArgumentCppName_8191 = GALGAS_string ("inArgument_").add_operation (enumerator_8064.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 149)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = enumerator_8064.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            extensionSetter_insertInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_8064.current_mFormalArgumentName (HERE), var_type_8111, var_formalArgumentCppName_8191, var_formalArgumentCppName_8191, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 151)) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          {
          extensionSetter_insertInputFormalArgument (ioArgument_ioVariableMap, enumerator_8064.current_mFormalArgumentName (HERE), var_type_8111, var_formalArgumentCppName_8191, var_formalArgumentCppName_8191, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 153)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        var_formalArgumentCppName_8191 = GALGAS_string ("outArgument_").add_operation (enumerator_8064.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 156)) ;
        {
        extensionSetter_insertOutputFormalArgument (ioArgument_ioVariableMap, enumerator_8064.current_mFormalArgumentName (HERE), var_type_8111, var_formalArgumentCppName_8191, var_formalArgumentCppName_8191, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 157)) ;
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        var_formalArgumentCppName_8191 = GALGAS_string ("ioArgument_").add_operation (enumerator_8064.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 159)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = enumerator_8064.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_8064.current_mFormalArgumentName (HERE), var_type_8111, var_formalArgumentCppName_8191, var_formalArgumentCppName_8191, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 161)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          extensionSetter_insertInputOutputFormalArgument (ioArgument_ioVariableMap, enumerator_8064.current_mFormalArgumentName (HERE), var_type_8111, var_formalArgumentCppName_8191, var_formalArgumentCppName_8191, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 168)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        var_formalArgumentCppName_8191 = GALGAS_string ("constinArgument_").add_operation (enumerator_8064.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 176)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_8064.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_8064.current_mFormalArgumentName (HERE), var_type_8111, var_formalArgumentCppName_8191, var_formalArgumentCppName_8191, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 178)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (ioArgument_ioVariableMap, enumerator_8064.current_mFormalArgumentName (HERE), var_type_8111, var_formalArgumentCppName_8191, var_formalArgumentCppName_8191, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 185)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssign_operation (enumerator_8064.current_mFormalSelector (HERE), enumerator_8064.current_mFormalArgumentPassingMode (HERE), var_type_8111, enumerator_8064.current_mFormalArgumentName (HERE), var_formalArgumentCppName_8191  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 193)) ;
    enumerator_8064.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody?&?&??nonMutablePropertyList?mutablePropertyList??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                      const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                                                                                      const GALGAS_typedPropertyList constinArgument_inNonMutableTypedAttributeList,
                                                                                                                      const GALGAS_typedPropertyList constinArgument_inMutableTypedAttributeList,
                                                                                                                      const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                                                                                                      const GALGAS_location constinArgument_inEndOfMethodLocation,
                                                                                                                      GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                                                                      GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GALGAS_localVarManager var_variableMap_11130 = GALGAS_localVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 210)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 212)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_11316 (constinArgument_inNonMutableTypedAttributeList, EnumerationOrder::up) ;
      while (enumerator_11316.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_11130, enumerator_11316.current_mPropertyName (HERE), enumerator_11316.current_mPropertyTypeEntry (HERE), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 217)).add_operation (enumerator_11316.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 217)), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 214)) ;
        }
        enumerator_11316.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 223)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_typedPropertyList enumerator_11800 (constinArgument_inMutableTypedAttributeList, EnumerationOrder::up) ;
      while (enumerator_11800.hasCurrentObject ()) {
        {
        extensionSetter_insertMutableProperty (var_variableMap_11130, enumerator_11800.current_mPropertyName (HERE), enumerator_11800.current_mPropertyTypeEntry (HERE), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 228)).add_operation (enumerator_11800.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 228)), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 225)) ;
        }
        enumerator_11800.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), ioArgument_ioTypeMap, constinArgument_inRoutineSignatureAST, var_variableMap_11130, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 234)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 242)) ;
  cEnumerator_semanticInstructionListAST enumerator_12450 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_12450.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_12450.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_11130, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 244)) ;
    enumerator_12450.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_11130, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 254)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externFunctionDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_13358 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 269)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13358, var_nameForUsefulness_13358, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 270)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_externFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_13358  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 272)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList_13604 = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 275)) ;
  const GALGAS_externFunctionDeclarationAST temp_3 = this ;
  cEnumerator_formalInputParameterListAST enumerator_13736 (temp_3.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_13736.hasCurrentObject ()) {
    var_formalArgumentList_13604.addAssign_operation (enumerator_13736.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_13736.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 279)), enumerator_13736.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_13736.current_mFormalArgumentName (HERE), enumerator_13736.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 277)) ;
    enumerator_13736.gotoNextObject () ;
  }
  const GALGAS_externFunctionDeclarationAST temp_4 = this ;
  const GALGAS_externFunctionDeclarationAST temp_5 = this ;
  const GALGAS_externFunctionDeclarationAST temp_6 = this ;
  const GALGAS_externFunctionDeclarationAST temp_7 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (temp_4.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 285)), GALGAS_functionPrototypeDeclarationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_5.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 288)), temp_6.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_13604, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mResultTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 291))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 286))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 284)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody?&?&???????!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              const GALGAS_formalInputParameterListAST constinArgument_inFunctionSignature,
                                                                                              const GALGAS_typedPropertyList constinArgument_inTypedAttributeList,
                                                                                              const GALGAS_string constinArgument_inAttributeVariableNamePrefix,
                                                                                              const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                                                                              const GALGAS_lstring constinArgument_inReturnVariableName,
                                                                                              const GALGAS_lstring constinArgument_inResultTypeName,
                                                                                              const GALGAS_location constinArgument_inEndOfFunctionLocation,
                                                                                              GALGAS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                                                                              GALGAS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                              GALGAS_string & outArgument_outResultVariableCppName,
                                                                                              GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_localVarManager var_variableMap_15267 = GALGAS_localVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 314)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 317)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_15517 (constinArgument_inTypedAttributeList, EnumerationOrder::up) ;
      while (enumerator_15517.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_15267, enumerator_15517.current_mPropertyName (HERE), enumerator_15517.current_mPropertyTypeEntry (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 322)).add_operation (enumerator_15517.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 322)), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 319)) ;
        }
        enumerator_15517.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 328)) ;
  cEnumerator_formalInputParameterListAST enumerator_15993 (constinArgument_inFunctionSignature, EnumerationOrder::up) ;
  while (enumerator_15993.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_16040 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_15993.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 330)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_15993.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_cppName_16155 = GALGAS_string ("constinArgument_").add_operation (enumerator_15993.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 332)) ;
        outArgument_outSignatureForGeneration.addAssign_operation (enumerator_15993.current_mFormalSelector (HERE), var_parameterType_16040, var_cppName_16155, enumerator_15993.current_mFormalArgumentName (HERE), enumerator_15993.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 333)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_15993.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_15267, enumerator_15993.current_mFormalArgumentName (HERE), var_parameterType_16040, var_cppName_16155, var_cppName_16155, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 340)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_15267, enumerator_15993.current_mFormalArgumentName (HERE), var_parameterType_16040, var_cppName_16155, var_cppName_16155, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 342)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_string var_cppName_16702 = GALGAS_string ("inArgument_").add_operation (enumerator_15993.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 345)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_15993.current_mFormalSelector (HERE), var_parameterType_16040, var_cppName_16702, enumerator_15993.current_mFormalArgumentName (HERE), enumerator_15993.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 346)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = enumerator_15993.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_15267, enumerator_15993.current_mFormalArgumentName (HERE), var_parameterType_16040, var_cppName_16702, var_cppName_16702, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 353)) ;
          }
        }
      }
      if (kBoolFalse == test_3) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_15267, enumerator_15993.current_mFormalArgumentName (HERE), var_parameterType_16040, var_cppName_16702, var_cppName_16702, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 355)) ;
        }
      }
    }
    enumerator_15993.gotoNextObject () ;
  }
  outArgument_outReturnedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inResultTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 360)) ;
  outArgument_outResultVariableCppName = GALGAS_string ("result_").add_operation (constinArgument_inReturnVariableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 361)) ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_15267, constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 362)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 364)) ;
  cEnumerator_semanticInstructionListAST enumerator_17660 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_17660.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_17660.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_15267, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 366)) ;
    enumerator_17660.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_15267, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 376)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_18550 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 391)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_18550, var_nameForUsefulness_18550, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 392)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_functionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_18550  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 394)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_18818 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 401)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 397)) ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList_19347 ;
  GALGAS_unifiedTypeMapEntry var_returnType_19381 ;
  GALGAS_string var_resultVariableCppName_19401 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_19432 ;
  {
  const GALGAS_functionDeclarationAST temp_3 = this ;
  const GALGAS_functionDeclarationAST temp_4 = this ;
  const GALGAS_functionDeclarationAST temp_5 = this ;
  const GALGAS_functionDeclarationAST temp_6 = this ;
  const GALGAS_functionDeclarationAST temp_7 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_18550, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_18818, ioArgument_ioTypeMap, temp_3.readProperty_mFormalArgumentList (), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 411)), GALGAS_string::makeEmptyString (), temp_4.readProperty_mFunctionInstructionList (), temp_5.readProperty_mResultVariableName (), temp_6.readProperty_mResultTypeName (), temp_7.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_19347, var_returnType_19381, var_resultVariableCppName_19401, var_semanticInstructionListForGeneration_19432, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 405)) ;
  }
  const GALGAS_functionDeclarationAST temp_8 = this ;
  const GALGAS_functionDeclarationAST temp_9 = this ;
  const GALGAS_functionDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 424)), GALGAS_functionImplementationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_9.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 427)), temp_10.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_19347, var_returnType_19381, var_resultVariableCppName_19401, var_semanticInstructionListForGeneration_19432  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 425))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 423)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_20476 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 447)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_20476, var_nameForUsefulness_20476, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 448)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_onceFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_20476  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 450)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_20743 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 457)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 453)) ;
  GALGAS_unifiedTypeMapEntry var_returnType_21286 ;
  GALGAS_string var_resultVariableCppName_21306 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_21337 ;
  {
  const GALGAS_onceFunctionDeclarationAST temp_3 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_4 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_5 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_6 = this ;
  GALGAS_formalInputParameterListForGeneration joker_21274 ; // Joker input parameter
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_20476, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_20743, ioArgument_ioTypeMap, GALGAS_formalInputParameterListAST::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 466)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 467)), GALGAS_string::makeEmptyString (), temp_3.readProperty_mFunctionInstructionList (), temp_4.readProperty_mResultVariableName (), temp_5.readProperty_mResultTypeName (), temp_6.readProperty_mEndOfFunctionInstructionList (), joker_21274, var_returnType_21286, var_resultVariableCppName_21306, var_semanticInstructionListForGeneration_21337, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 461)) ;
  }
  const GALGAS_onceFunctionDeclarationAST temp_7 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_8 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (temp_7.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 480)), GALGAS_onceFunctionDeclarationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 483)), temp_9.readProperty_mFunctionName ().readProperty_string (), var_returnType_21286, var_resultVariableCppName_21306, var_semanticInstructionListForGeneration_21337  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 481))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 479)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_string /* constinArgument_inProductDirectory */,
                                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                              GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperDeclarationAST temp_0 = this ;
  GALGAS_lstring var_filewrapperNameForUsefulness_22511 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 506)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_22511, var_filewrapperNameForUsefulness_22511, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 507)) ;
  }
  GALGAS_wrapperFileMap var_wrapperFileMap_22844 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_22889 ;
  const GALGAS_filewrapperDeclarationAST temp_1 = this ;
  GALGAS_lstring joker_22809 ; // Joker input parameter
  GALGAS_lstringlist joker_22816 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_22913_2 ; // Joker input parameter
  GALGAS_bool joker_22913_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), joker_22809, joker_22816, var_wrapperFileMap_22844, var_wrapperDirectoryMap_22889, joker_22913_2, joker_22913_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 509)) ;
  GALGAS_string var_absoluteSourcePath_22960 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::equal, temp_3.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 519)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperDeclarationAST temp_4 = this ;
      var_absoluteSourcePath_22960 = temp_4.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_5 = this ;
    const GALGAS_filewrapperDeclarationAST temp_6 = this ;
    var_absoluteSourcePath_22960 = temp_5.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 522)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 522)).add_operation (temp_6.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 522)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_absoluteSourcePath_22960.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 524)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 524)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_filewrapperDeclarationAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_22960, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 525)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 525)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 525)) ;
    }
  }
  if (kBoolFalse == test_7) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_23476 = GALGAS_filewrapperTemplateListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 528)) ;
    const GALGAS_filewrapperDeclarationAST temp_10 = this ;
    cEnumerator_filewrapperTemplateListAST enumerator_23577 (temp_10.readProperty_mFilewrapperTemplateList (), EnumerationOrder::up) ;
    while (enumerator_23577.hasCurrentObject ()) {
      const GALGAS_filewrapperDeclarationAST temp_11 = this ;
      GALGAS_lstring var_filewrapperTemplateNameForUsefulness_23666 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_11.readProperty_mFilewrapperName (), enumerator_23577.current_mFilewrapperTemplateName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 530)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_23666, var_filewrapperTemplateNameForUsefulness_23666, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 534)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_23666, var_filewrapperNameForUsefulness_22511 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 535)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::equal, enumerator_23577.current_mFilewrapperTemplatePath (HERE).readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 536)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_23577.current_mFilewrapperTemplatePath (HERE).readProperty_location (), GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_22960, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 538)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 538)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 537)) ;
        }
      }
      GALGAS_string var_absoluteTemplatePath_24299 = var_absoluteSourcePath_22960.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 540)).add_operation (enumerator_23577.current_mFilewrapperTemplatePath (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 540)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList_24462 ;
      var_resultingInstructionList_24462.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::class_func_new (var_absoluteTemplatePath_24299, enumerator_23577.current_mFilewrapperTemplatePath (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 543)), var_resultingInstructionList_24462  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 542)) ;
      GALGAS_templateVariableMap var_templateVariableMap_24640 = GALGAS_templateVariableMap::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 545)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_24714 = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 546)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_24839 (enumerator_23577.current_mFilewrapperTemplateFormalInputParameters (HERE), EnumerationOrder::up) ;
      while (enumerator_24839.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_type_24902 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_24839.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 548)) ;
        GALGAS_string var_cppVarName_24986 = GALGAS_string ("in_").add_operation (enumerator_24839.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 549)) ;
        {
        var_templateVariableMap_24640.setter_insertKey (enumerator_24839.current_mFormalArgumentName (HERE), var_type_24902, var_cppVarName_24986, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 550)) ;
        }
        var_filewrapperTemplateFormalInputParameters_24714.addAssign_operation (enumerator_24839.current_mFormalTemplateSelector (HERE), var_type_24902, var_cppVarName_24986, enumerator_24839.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 551)) ;
        enumerator_24839.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration_25310 = GALGAS_templateInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 554)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext_25400 = GALGAS_templateAnalysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_24640, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 555)) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_22511, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_25400, ioArgument_ioTypeMap, var_resultingInstructionList_24462, var_templateInstructionListForGeneration_25310, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 560)) ;
      }
      var_filewrapperTemplateListForGeneration_23476.addAssign_operation (enumerator_23577.current_mFilewrapperTemplateName (HERE).readProperty_string (), var_filewrapperTemplateFormalInputParameters_24714, var_templateInstructionListForGeneration_25310  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 569)) ;
      enumerator_23577.gotoNextObject () ;
    }
    const GALGAS_filewrapperDeclarationAST temp_14 = this ;
    const GALGAS_filewrapperDeclarationAST temp_15 = this ;
    const GALGAS_filewrapperDeclarationAST temp_16 = this ;
    const GALGAS_filewrapperDeclarationAST temp_17 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 576)), GALGAS_filewrapperDeclarationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (temp_15.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 579)), temp_16.readProperty_mFilewrapperName ().readProperty_string (), temp_17.readProperty_mFilewrapperPath ().readProperty_string (), var_wrapperFileMap_22844, var_wrapperDirectoryMap_22889, var_filewrapperTemplateListForGeneration_23476  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 577))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_27105 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 601)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_27105, var_nameForUsefulness_27105, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 602)) ;
  }
  GALGAS_terminalMap var_terminalMap_27444 ;
  GALGAS_indexingListAST var_indexingListAST_27482 ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GALGAS_bool joker_27419 ; // Joker input parameter
  GALGAS_terminalDeclarationListAST joker_27539_4 ; // Joker input parameter
  GALGAS_lexicalAttributeListAST joker_27539_3 ; // Joker input parameter
  GALGAS_lexicalStyleListAST joker_27539_2 ; // Joker input parameter
  GALGAS_lexicalListDeclarationListAST joker_27539_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), joker_27419, var_terminalMap_27444, var_indexingListAST_27482, joker_27539_4, joker_27539_3, joker_27539_2, joker_27539_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 604)) ;
  GALGAS_stringset var_indexNameSet_27626 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 613)) ;
  cEnumerator_indexingListAST enumerator_27662 (var_indexingListAST_27482, EnumerationOrder::up) ;
  while (enumerator_27662.hasCurrentObject ()) {
    var_indexNameSet_27626.addAssign_operation (enumerator_27662.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 615)) ;
    enumerator_27662.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing_27744 = GALGAS_bool (true) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 619)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_galgas_33_SyntaxComponentAST temp_3 = this ;
      GALGAS_string var_lexiqueName_27915 = temp_3.readProperty_mLexiqueName ().readProperty_string () ;
      GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_28372 ;
      {
      const GALGAS_galgas_33_SyntaxComponentAST temp_4 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_5 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_6 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_7 = this ;
      routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (var_nameForUsefulness_27105, ioArgument_ioUsefulEntitiesGraph, temp_4.readProperty_mNonterminalDeclarationList (), temp_5.readProperty_mRuleList (), temp_6.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_27915, constinArgument_inSemanticContext, ioArgument_ioTypeMap, constinArgument_inPredefinedTypes, var_terminalMap_27444, var_indexNameSet_27626, var_hasIndexing_27744, temp_7.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_28372, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 621)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_28372  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 637)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string constinArgument_inProductDirectory,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 654)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_galgas_33_GrammarComponentAST temp_1 = this ;
      routine_println_3F_ (GALGAS_string ("*** Analyzing '").add_operation (temp_1.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)).add_operation (GALGAS_string ("' grammar"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)) ;
      }
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = this ;
  GALGAS_lstring var_grammarNameForUsefulness_29393 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 658)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_29393, var_grammarNameForUsefulness_29393, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 659)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_29700 = GALGAS_terminalSymbolsMapForGrammarAnalysis::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 661)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_29781 = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 662)) ;
  GALGAS_lstring var_lexiqueComponentName_29833 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 663)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_29944 = GALGAS_syntaxComponentListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 664)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList_30015 = GALGAS_nonTerminalToAddList::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 665)) ;
  GALGAS_uint var_addedNonTerminalCount_30053 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = this ;
  cEnumerator_lstringlist enumerator_30086 (temp_3.readProperty_mSyntaxComponents (), EnumerationOrder::up) ;
  while (enumerator_30086.hasCurrentObject ()) {
    GALGAS_lstring var_syntaxNameForUsefulness_30144 = function_syntaxNameForUsefulEntitiesGraph (enumerator_30086.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 668)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_29393, var_syntaxNameForUsefulness_30144 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 669)) ;
    }
    GALGAS_uint var_addedNonTerminalCountRef_30329 = var_addedNonTerminalCount_30053 ;
    GALGAS_lstring var_lexiqueName_30497 ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_30551 ;
    GALGAS_syntaxRuleListAST var_ruleList_30608 ;
    GALGAS_bool var_hasTranslateFeature_30634 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_30086.current_mValue (HERE), var_lexiqueName_30497, var_nonterminalDeclarationList_30551, var_ruleList_30608, var_hasTranslateFeature_30634, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 671)) ;
    GALGAS_lstring var_lexiqueNameForUsefulness_30668 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_30497, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 678)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_29393, var_lexiqueNameForUsefulness_30668 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 679)) ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GALGAS_galgas_33_GrammarComponentAST temp_5 = this ;
      test_4 = temp_5.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_30634.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 681)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 681)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_galgas_33_GrammarComponentAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_30086.current_mValue (HERE).readProperty_location (), GALGAS_string ("as '").add_operation (temp_6.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 682)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 682)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 682)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_galgas_33_GrammarComponentAST temp_9 = this ;
        test_8 = var_hasTranslateFeature_30634.operator_and (temp_9.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 683)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 683)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_galgas_33_GrammarComponentAST temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mGrammarComponentName ().readProperty_location (), GALGAS_string ("as '").add_operation (enumerator_30086.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 684)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 684)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 684)) ;
        }
      }
    }
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (ComparisonKind::equal, var_lexiqueComponentName_29833.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        var_lexiqueComponentName_29833 = var_lexiqueName_30497 ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::notEqual, var_lexiqueName_30497.readProperty_string ().objectCompare (var_lexiqueComponentName_29833.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_30086.current_mValue (HERE).readProperty_location (), GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName_30497.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 690)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 691)).add_operation (var_lexiqueComponentName_29833.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 691)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 692)), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 690)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_29781, var_nonterminalDeclarationList_30551, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 695)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_29781, var_ruleList_30608, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 700)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_29781, enumerator_30086.current_mValue (HERE), var_ruleList_30608, var_actuallyUsedTerminalSymbolMap_29700, var_syntaxComponentListForGrammarAnalysis_29944, var_addedNonTerminalCount_30053, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 705)) ;
    }
    GALGAS_uint var_i_32313 = GALGAS_uint (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_30053.isValid ()) {
      uint32_t variant_32323 = var_addedNonTerminalCount_30053.uintValue () ;
      bool loop_32323 = true ;
      while (loop_32323) {
        loop_32323 = GALGAS_bool (ComparisonKind::lowerThan, var_i_32313.objectCompare (var_addedNonTerminalCount_30053.substract_operation (var_addedNonTerminalCountRef_30329, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)))).isValid () ;
        if (loop_32323) {
          loop_32323 = GALGAS_bool (ComparisonKind::lowerThan, var_i_32313.objectCompare (var_addedNonTerminalCount_30053.substract_operation (var_addedNonTerminalCountRef_30329, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)))).boolValue () ;
        }
        if (loop_32323 && (0 == variant_32323)) {
          loop_32323 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 714)) ;
        }
        if (loop_32323) {
          variant_32323 -- ;
          var_nonTerminalToAddList_30015.addAssign_operation (enumerator_30086.current_mValue (HERE).readProperty_string (), var_i_32313  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 715)) ;
          var_i_32313.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 716)) ;
        }
      }
    }
    enumerator_30086.gotoNextObject () ;
  }
  GALGAS_uint var_startSymbolIndex_33464 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_33535 ;
  const GALGAS_galgas_33_GrammarComponentAST temp_15 = this ;
  var_nonTerminalMapForGrammarAnalysis_29781.method_searchKey (temp_15.readProperty_mStartSymbolName (), var_startSymbolIndex_33464, var_startSymbolAltMap_33535, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 736)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_16 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_17 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_18 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_16.readProperty_mStartSymbolName ().readProperty_location (), temp_17.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_29781.getter_locationForKey (temp_18.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)), var_startSymbolAltMap_33535, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 742)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_33917 = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 749)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_19 = this ;
  cEnumerator_lstringlist enumerator_33964 (temp_19.readProperty_mUnusedNonterminalList (), EnumerationOrder::up) ;
  while (enumerator_33964.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex_34073 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_34090 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_29781.method_searchKey (enumerator_33964.current_mValue (HERE), var_nonterminalIndex_34073, joker_34090, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 751)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_33917.setter_insertKey (enumerator_33964.current_mValue (HERE), var_nonterminalIndex_34073, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 752)) ;
    }
    enumerator_33964.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_34330 = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::class_func_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 755)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_34411 (var_nonTerminalMapForGrammarAnalysis_29781, EnumerationOrder::up) ;
  while (enumerator_34411.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_34330.addAssign_operation (enumerator_34411.current_lkey (HERE), enumerator_34411.current_mNonTerminalIndex (HERE), enumerator_34411.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 757)) ;
    enumerator_34411.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_20) {
      {
      const GALGAS_galgas_33_GrammarComponentAST temp_21 = this ;
      const GALGAS_galgas_33_GrammarComponentAST temp_22 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_21.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_29781, var_syntaxComponentListForGrammarAnalysis_29944, temp_22.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 761)) ;
      }
    }
  }
  GALGAS_string var_dotDocumentFilePath_35067 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 770)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitClassGraph.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_23) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_35067, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 772)) ;
      }
    }
  }
  if (kBoolFalse == test_23) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_35067, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 777)) ;
    }
  }
  GALGAS_stringset var_implementationFileHeader_35639 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 782)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_35690 (var_nonTerminalMapForGrammarAnalysis_29781, EnumerationOrder::up) ;
  while (enumerator_35690.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_35737 (enumerator_35690.current (HERE).readProperty_mNonterminalSymbolParametersMap (), EnumerationOrder::up) ;
    while (enumerator_35737.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_35866 (enumerator_35737.current_mFormalParametersList (HERE), EnumerationOrder::up) ;
      while (enumerator_35866.hasCurrentObject ()) {
        switch (enumerator_35866.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMapEntry var_t_36049 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_35866.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 788)) ;
            extensionMethod_addHeaderFileName (var_t_36049, var_implementationFileHeader_35639, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 789)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_35866.gotoNextObject () ;
      }
      enumerator_35737.gotoNextObject () ;
    }
    enumerator_35690.gotoNextObject () ;
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_24) {
      var_implementationFileHeader_35639 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 796)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_25 = this ;
  GALGAS_string var_HTMLFilePath_36441 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 799)).add_operation (temp_25.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 799)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 799)) ;
  GALGAS_string var_grammarCppFile_36972 ;
  GALGAS_string var_grammarHTMLHelperContents_37004 ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_26 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_27 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_28 = this ;
  GALGAS_string temp_29 ;
  const enumGalgasBool test_30 = temp_28.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_30) {
    temp_29 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 810)) ;
  }else if (kBoolFalse == test_30) {
    temp_29 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21_ (temp_26.readProperty_mGrammarComponentName (), temp_27.readProperty_mGrammarClass (), var_startSymbolIndex_33464, var_lexiqueComponentName_29833.readProperty_string (), var_actuallyUsedTerminalSymbolMap_29700, var_syntaxComponentListForGrammarAnalysis_29944, var_unusedNonTerminalSymbolsForGrammar_33917, var_HTMLFilePath_36441, var_nonTerminalSymbolSortedListForGrammarAnalysis_34330, temp_29, var_grammarCppFile_36972, var_grammarHTMLHelperContents_37004, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 800)) ;
  }
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    test_31 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_31) {
      var_HTMLFilePath_36441.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 816)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 816)) ;
      GALGAS_bool joker_37341 ; // Joker input parameter
      var_grammarHTMLHelperContents_37004.method_writeToFileWhenDifferentContents (var_HTMLFilePath_36441, joker_37341, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 817)) ;
    }
  }
  if (kBoolFalse == test_31) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath_36441, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 819)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_32 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_33 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_34 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_35 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_36 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (temp_32.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 826)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 826)), temp_33.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_29833.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_29781, var_nonTerminalToAddList_30015, temp_34.readProperty_mSyntaxComponents (), temp_35.readProperty_mStartSymbolName ().readProperty_string (), temp_36.readProperty_mHasTranslateFeature (), var_grammarCppFile_36972  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 824))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 822)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes function_buildPredefinedTypes (const GALGAS_unifiedTypeMap & constinArgument_inTypeMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result_outPredefinedTypes ; // Returned variable
  result_outPredefinedTypes = GALGAS_predefinedTypes::class_func_new (extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("location"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 847)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 847)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 847)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("bool"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 848)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 848)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 848)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("char"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("string"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 850)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 850)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 850)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("uint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 851)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 851)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 851)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("sint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 852)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 852)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 852)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("uint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 853)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 853)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("sint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 854)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 854)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 854)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("double"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 855)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 855)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 855)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lbool"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 856)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 856)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 856)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lchar"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 857)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 857)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 857)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lstring"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 858)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 858)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 858)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("luint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 859)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 859)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 859)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lsint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 860)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 860)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 860)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("luint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 861)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 861)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lsint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 862)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 862)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 862)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("ldouble"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 863)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 863)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 863)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("stringlist"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 864)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 864)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 864)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lbigint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 865)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 865)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("bigint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 866)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 866)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 866)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("stringset"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 867)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 867)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 867)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lstringlist"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 868)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 868)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 868)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 846)) ;
//---
  return result_outPredefinedTypes ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_buildPredefinedTypes [2] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_buildPredefinedTypes (Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap operand0 = GALGAS_unifiedTypeMap::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (Compiler * /* inCompiler */,
                                                                                                   const GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  GALGAS_uint index_29_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_29 (in_INCLUSION_5F_SET, EnumerationOrder::up) ;
    while (enumerator_29.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_29.current_key (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_29_.increment () ;
      enumerator_29.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (Compiler * inCompiler,
                                                                                               const GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                               const GALGAS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                               const GALGAS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                               const GALGAS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                               const GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                               const GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Parser class '").add_operation (in_COMPONENT_5F_NAME, inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cParser_") ;
  result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" {\n//--- Virtual destructor\n  public: virtual ~ cParser_") ;
  result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" (void) {}\n\n//--- Non terminal declarations\n") ;
  GALGAS_uint index_509_ (0) ;
  if (in_NONTERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonterminalMap enumerator_509 (in_NONTERMINAL_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_509.hasCurrentObject ()) {
      GALGAS_uint index_565_ (0) ;
      if (enumerator_509.current_mLabelMap (HERE).isValid ()) {
        cEnumerator_nonterminalLabelMap enumerator_565 (enumerator_509.current_mLabelMap (HERE), EnumerationOrder::up) ;
        while (enumerator_565.hasCurrentObject ()) {
          result.appendString ("  protected: virtual void nt_") ;
          result.appendString (enumerator_509.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_565.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_798_IDX (0) ;
          if (enumerator_565.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_798 (enumerator_565.current_mSignature (HERE), EnumerationOrder::up) ;
            while (enumerator_798.hasCurrentObject ()) {
              const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_798.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              switch (test_0) {
              case kBoolTrue : {
                result.appendString ("const class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_798.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_798_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_798.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                switch (test_1) {
                case kBoolTrue : {
                  result.appendString ("class GALGAS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_798.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_798_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_798.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  switch (test_2) {
                  case kBoolTrue : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_798.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_798_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_798.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_798_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue ()) ;
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
              index_798_IDX.increment () ;
              enumerator_798.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_3 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_3) {
          case kBoolTrue : {
            result.appendString ("class String & ") ;
            result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 28)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case kBoolFalse : {
            } break ;
          default :
            break ;
          }
          result.appendString ("class Lexique_") ;
          result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
          result.appendString (" * inLexique) = 0 ;\n\n") ;
          index_565_.increment () ;
          enumerator_565.gotoNextObject () ;
        }
      }
      result.appendString ("  protected: virtual void nt_") ;
      result.appendString (enumerator_509.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 33)).stringValue ()) ;
      result.appendString ("_parse (") ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("class String & ") ;
        result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("class Lexique_") ;
      result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
      result.appendString (" * inLexique) = 0 ;\n\n") ;
      const enumGalgasBool test_5 = in_HAS_5F_INDEXING.boolEnum () ;
      switch (test_5) {
      case kBoolTrue : {
        result.appendString ("  protected: virtual void nt_") ;
        result.appendString (enumerator_509.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
        result.appendString ("_indexing (class Lexique_") ;
        result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
        result.appendString (" * inLexique) = 0 ;\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_509_.increment () ;
      enumerator_509.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--- Rule declarations\n") ;
  GALGAS_uint index_2261_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    cEnumerator_ruleDeclarationList enumerator_2261 (in_RULE_5F_DECLARATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2261.hasCurrentObject ()) {
      GALGAS_uint index_2399_ (0) ;
      if (enumerator_2261.current_mLabelImplementationList (HERE).isValid ()) {
        cEnumerator_ruleLabelImplementationList enumerator_2399 (enumerator_2261.current_mLabelImplementationList (HERE), EnumerationOrder::up) ;
        while (enumerator_2399.hasCurrentObject ()) {
          result.appendString ("  protected: void rule_") ;
          result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_2261.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString ("_i") ;
          result.appendString (enumerator_2261.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_2399.current_mLabelName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_2703_IDX (0) ;
          if (enumerator_2399.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_2703 (enumerator_2399.current_mSignature (HERE), EnumerationOrder::up) ;
            while (enumerator_2703.hasCurrentObject ()) {
              const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_2703.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 48)))).boolEnum () ;
              switch (test_6) {
              case kBoolTrue : {
                result.appendString ("const GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_2703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_2703_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_2703.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 50)))).boolEnum () ;
                switch (test_7) {
                case kBoolTrue : {
                  result.appendString ("GALGAS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_2703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_2703_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::equal, enumerator_2703.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 52)))).boolEnum () ;
                  switch (test_8) {
                  case kBoolTrue : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_2703_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_2703_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue ()) ;
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
              index_2703_IDX.increment () ;
              enumerator_2703.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_9 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_9) {
          case kBoolTrue : {
            result.appendString ("String & ") ;
            result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 60)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case kBoolFalse : {
            } break ;
          default :
            break ;
          }
          result.appendString ("Lexique_") ;
          result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
          result.appendString (" * inLexique) ;\n\n") ;
          index_2399_.increment () ;
          enumerator_2399.gotoNextObject () ;
        }
      }
      result.appendString ("  protected: void rule_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2261.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
      result.appendString ("_i") ;
      result.appendString (enumerator_2261.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
      result.appendString ("_parse (") ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      switch (test_10) {
      case kBoolTrue : {
        result.appendString ("String & ") ;
        result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("Lexique_") ;
      result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
      result.appendString (" * inLexique) ;\n\n") ;
      const enumGalgasBool test_11 = in_HAS_5F_INDEXING.boolEnum () ;
      switch (test_11) {
      case kBoolTrue : {
        result.appendString ("  protected: void rule_") ;
        result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_2261.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
        result.appendString ("_i") ;
        result.appendString (enumerator_2261.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
        result.appendString ("_indexing (Lexique_") ;
        result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
        result.appendString (" * inLexique) ;\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_2261_.increment () ;
      enumerator_2261.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--- Select methods\n") ;
  GALGAS_uint index_4194_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_uintlist enumerator_4194 (in_SELECT_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4194.hasCurrentObject ()) {
      result.appendString ("  protected: virtual int32_t select_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_4194.current_mValue (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue ()) ;
      result.appendString (" (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
      result.appendString (" *) = 0 ;\n\n") ;
      index_4194_.increment () ;
      enumerator_4194.gotoNextObject () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (const GALGAS_lstring constinArgument_inNonTerminalName,
                                                                   const GALGAS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                                   GALGAS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cMapElement_nonterminalMap * objectArray_43089 = (const cMapElement_nonterminalMap *) ioArgument_ioNonterminalDeclarationMap.readAccessForWithInstruction (constinArgument_inNonTerminalName.readProperty_string ()) ;
  if (nullptr != objectArray_43089) {
      macroValidSharedObject (objectArray_43089, cMapElement_nonterminalMap) ;
    GALGAS_stringset var_firstDeclarationLabelSet_43173 = objectArray_43089->mProperty_mLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 957)) ;
    GALGAS_stringset var_reDeclarationLabelSet_43238 = constinArgument_inNonterminalLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 958)) ;
    GALGAS_stringset var_missingLabelSet_43312 = var_firstDeclarationLabelSet_43173.substract_operation (var_reDeclarationLabelSet_43238, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::greaterThan, var_missingLabelSet_43312.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 960)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_43437 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_43455 (var_missingLabelSet_43312, EnumerationOrder::up) ;
        while (enumerator_43455.hasCurrentObject ()) {
          var_s_43437.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (enumerator_43455.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 963)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 963)) ;
          enumerator_43455.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 966)).add_operation (GALGAS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 966)).add_operation (var_s_43437, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 966)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 965)) ;
      }
    }
    GALGAS_stringset var_newLabelSet_43680 = var_reDeclarationLabelSet_43238.substract_operation (var_firstDeclarationLabelSet_43173, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 968)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_newLabelSet_43680.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 969)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_43789 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_43807 (var_newLabelSet_43680, EnumerationOrder::up) ;
        while (enumerator_43807.hasCurrentObject ()) {
          var_s_43789.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (enumerator_43807.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 972)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 972)) ;
          enumerator_43807.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 975)).add_operation (GALGAS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 975)).add_operation (var_s_43789, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 975)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 974)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::equal, var_missingLabelSet_43312.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 977)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::equal, var_newLabelSet_43680.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 977)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_nonterminalLabelMap enumerator_44092 (objectArray_43089->mProperty_mLabelMap, EnumerationOrder::up) ;
        cEnumerator_nonterminalLabelMap enumerator_44123 (constinArgument_inNonterminalLabelMap, EnumerationOrder::up) ;
        while (enumerator_44092.hasCurrentObject () && enumerator_44123.hasCurrentObject ()) {
          GALGAS_formalParameterSignature var_newSignature_44217 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 979)) ;
          cEnumerator_formalParameterSignature enumerator_44311 (enumerator_44123.current_mSignature (HERE), EnumerationOrder::up) ;
          while (enumerator_44311.hasCurrentObject ()) {
            var_newSignature_44217.addAssign_operation (enumerator_44311.current_mFormalSelector (HERE), enumerator_44311.current_mFormalArgumentType (HERE), enumerator_44311.current_mFormalArgumentPassingMode (HERE), enumerator_44311.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 981)) ;
            enumerator_44311.gotoNextObject () ;
          }
          {
          routine_checkMethodSignatures_3F__3F__3F__3F_ (enumerator_44092.current (HERE).readProperty_mSignatureForGeneration (), enumerator_44092.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_44217, enumerator_44123.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 983)) ;
          }
          enumerator_44092.gotoNextObject () ;
          enumerator_44123.gotoNextObject () ;
        }
      }
    }
  }else{
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 992)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                              const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GALGAS_nonterminalMap::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1003)) ;
  cEnumerator_nonterminalDeclarationListAST enumerator_45260 (constinArgument_inNonterminalDeclarationList, EnumerationOrder::up) ;
  while (enumerator_45260.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_45312 = GALGAS_nonterminalLabelMap::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1006)) ;
    cEnumerator_nonTerminalLabelListAST enumerator_45398 (enumerator_45260.current_mLabels (HERE), EnumerationOrder::up) ;
    while (enumerator_45398.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_45446 = GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1008)) ;
      GALGAS_formalParameterSignature var_signature_45518 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1009)) ;
      cEnumerator_formalParameterListAST enumerator_45657 (enumerator_45398.current_mFormalArgumentList (HERE), EnumerationOrder::up) ;
      while (enumerator_45657.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_t_45698 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_45657.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1011)) ;
        var_signatureForGeneration_45446.addAssign_operation (enumerator_45657.current_mFormalSelector (HERE), enumerator_45657.current_mFormalArgumentPassingMode (HERE), var_t_45698, enumerator_45657.current_mFormalArgumentName (HERE), enumerator_45657.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1012)) ;
        var_signature_45518.addAssign_operation (enumerator_45657.current_mFormalSelector (HERE), var_t_45698, enumerator_45657.current_mFormalArgumentPassingMode (HERE), enumerator_45657.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1013)) ;
        enumerator_45657.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_45312.setter_insertKey (enumerator_45398.current_mLabelName (HERE), var_signatureForGeneration_45446, var_signature_45518, enumerator_45398.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1015)) ;
      }
      enumerator_45398.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_45260.current_mNonterminalName (HERE), var_nonterminalLabelMap_45312, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1017)) ;
    }
    enumerator_45260.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@semanticInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                   const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                   const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                   const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                   const GALGAS_string /* constinArgument_inComponentName */,
                                                                   const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_semanticInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1059)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterAnonymousVariable analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterAnonymousVariable::method_analyzeInputParameter (const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         const GALGAS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                         const GALGAS_string /* constinArgument_inLexicalAttributeName */,
                                                                         GALGAS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                         GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterVariable analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::method_analyzeInputParameter (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_type_49438 ;
  GALGAS_string var_cppName_49456 ;
  {
  const GALGAS_inputParameterVariable temp_0 = this ;
  GALGAS_string joker_49464 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_49438, var_cppName_49456, joker_49464, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1099)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_49495 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_49495 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_49495 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_49495 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_49495 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_49495 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_49495 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_49495 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_49495 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_49495.objectCompare (var_type_49438)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_inputParameterVariable temp_2 = this ;
      const GALGAS_inputParameterVariable temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1113)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1113)).add_operation (extensionGetter_identifierRepresentation (var_type_49438, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1113)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1113)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1113)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_49495, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1114)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1114)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1114)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1112)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName_49456, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterDeclaredVariable analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::method_analyzeInputParameter (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                        GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_expectedType_51120 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_51120 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_51120 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_51120 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_51120 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_51120 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_51120 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_51120 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_51120 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredVariable temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredVariable temp_2 = this ;
      GALGAS_unifiedTypeMapEntry var_type_51990 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1145)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_51120.objectCompare (var_type_51990)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredVariable temp_4 = this ;
          const GALGAS_inputParameterDeclaredVariable temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)).add_operation (extensionGetter_definition (var_type_51990, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)).add_operation (extensionGetter_definition (var_expectedType_51120, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredVariable temp_7 = this ;
  const GALGAS_inputParameterDeclaredVariable temp_8 = this ;
  GALGAS_string var_cppName_52390 = GALGAS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1153)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1153)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1153)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1153)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1153)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1153)) ;
  {
  const GALGAS_inputParameterDeclaredVariable temp_9 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GALGAS_bool (true), var_expectedType_51120, var_cppName_52390, var_cppName_52390, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1154)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (extensionGetter_definition (var_expectedType_51120, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)).readProperty_typeName ().readProperty_string (), var_cppName_52390, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterDeclaredConstant analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::method_analyzeInputParameter (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                        GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_expectedType_53315 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_53315 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_53315 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_53315 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_53315 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_53315 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_53315 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_53315 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_53315 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredConstant temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredConstant temp_2 = this ;
      GALGAS_unifiedTypeMapEntry var_type_54185 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1190)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_53315.objectCompare (var_type_54185)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredConstant temp_4 = this ;
          const GALGAS_inputParameterDeclaredConstant temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)).add_operation (extensionGetter_definition (var_type_54185, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)).add_operation (extensionGetter_definition (var_expectedType_53315, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1194)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1194)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1194)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1192)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredConstant temp_7 = this ;
  const GALGAS_inputParameterDeclaredConstant temp_8 = this ;
  GALGAS_string var_cppName_54585 = GALGAS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1198)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1198)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1198)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1198)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1198)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1198)) ;
  {
  const GALGAS_inputParameterDeclaredConstant temp_9 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_53315, var_cppName_54585, var_cppName_54585, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1199)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (extensionGetter_definition (var_expectedType_53315, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1202)).readProperty_typeName ().readProperty_string (), var_cppName_54585, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1201)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeSDT (const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                    const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                    GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeSDT (const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                    const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                    GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1231)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1232)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                     const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1243)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1244)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_type_56856 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GALGAS_string joker_56861 ; // Joker input parameter
  GALGAS_string joker_56864 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_56856, joker_56861, joker_56864, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1246)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_56874 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_56874.objectCompare (var_type_56856)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1250)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1250)).add_operation (extensionGetter_identifierRepresentation (var_type_56856, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1250)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1250)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1250)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_56874, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1251)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1251)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1251)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1249)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1262)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1263)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GALGAS_string var_cppName_57753 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1265)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1265)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_57895 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1266)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GALGAS_bool (true), var_type_57895, var_cppName_57753, var_cppName_57753, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1267)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_58121 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_58121.objectCompare (var_type_57895)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1277)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1277)).add_operation (extensionGetter_identifierRepresentation (var_type_57895, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1277)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1277)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1277)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_58121, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1278)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1278)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1278)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1276)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1289)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1290)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GALGAS_string var_cppName_58993 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1292)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1292)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_59135 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1293)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_59135, var_cppName_58993, var_cppName_58993, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1294)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_59313 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_59313.objectCompare (var_type_59135)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1298)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1298)).add_operation (extensionGetter_identifierRepresentation (var_type_59135, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1298)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1298)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_59313, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1299)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1299)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1299)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1297)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_generateCode (const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      const GALGAS_string constinArgument_inAccessMethodName,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1319)).add_operation (GALGAS_string (".appendString ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1319)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1319)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1319)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1319)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1320)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1320)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_generateCode (const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      const GALGAS_string /* constinArgument_inAccessMethodName */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_generateCode (const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                       const GALGAS_string constinArgument_inAccessMethodName,
                                                                                       GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_0 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
  GALGAS_string var_cppName_61350 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1340)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1340)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1340)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1340)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1340)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1340)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_cppName_61350.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1341)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1341)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1341)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1341)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_generateCode (const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                               const GALGAS_string constinArgument_inAccessMethodName,
                                                                                               GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_0 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
  GALGAS_string var_cppName_61947 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1351)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1351)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1351)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1351)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1351)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1351)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_string ").add_operation (var_cppName_61947, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1352)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1352)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1352)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1352)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1352)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_generateCode (const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_0 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
  GALGAS_string var_cppName_62549 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_62549, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList?&?&????????&&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                       const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                                                       const GALGAS_string constinArgument_inLexiqueName,
                                                                                                       const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                                       const GALGAS_string constinArgument_inComponentName,
                                                                                                       const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionListAST,
                                                                                                       const GALGAS_location constinArgument_inEndOfBranchLocation,
                                                                                                       const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                                                       GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1384)) ;
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1386)) ;
  }
  cEnumerator_syntaxInstructionList enumerator_63702 (constinArgument_inSyntaxInstructionListAST, EnumerationOrder::up) ;
  while (enumerator_63702.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_63702.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1389)) ;
    enumerator_63702.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1406)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel?&???&???????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                              const GALGAS_formalParameterListAST constinArgument_inFormalArguments,
                                                                                                              const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionList,
                                                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                              const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                              const GALGAS_string constinArgument_inLexiqueName,
                                                                                                              const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                                              const GALGAS_string constinArgument_inComponentName,
                                                                                                              const GALGAS_location constinArgument_inEndOfInstructionList,
                                                                                                              const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                                                              GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                                                              GALGAS_formalParameterListForGeneration & outArgument_outSignatureForGeneration,
                                                                                                              GALGAS_formalParameterSignature & outArgument_outSignature,
                                                                                                              GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_localVarManager var_variableMap_65247 = GALGAS_localVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1434)) ;
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), ioArgument_ioTypeMap, constinArgument_inFormalArguments, var_variableMap_65247, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1435)) ;
  }
  outArgument_outSignature = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1443)) ;
  cEnumerator_formalParameterListForGeneration enumerator_65593 (outArgument_outSignatureForGeneration, EnumerationOrder::up) ;
  while (enumerator_65593.hasCurrentObject ()) {
    outArgument_outSignature.addAssign_operation (enumerator_65593.current_mFormalSelector (HERE), enumerator_65593.current_mFormalArgumentType (HERE), enumerator_65593.current_mFormalArgumentPassingMode (HERE), enumerator_65593.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1445)) ;
    enumerator_65593.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1448)) ;
  cEnumerator_syntaxInstructionList enumerator_65924 (constinArgument_inSyntaxInstructionList, EnumerationOrder::up) ;
  while (enumerator_65924.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_65924.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_65247, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1451)) ;
    enumerator_65924.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_65247, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1468)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent?&?????&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (const GALGAS_lstring constinArgument_inSyntaxComponentUsefulnessName,
                                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                        const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                                                                        const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                                                                        const GALGAS_string constinArgument_inSyntaxComponentName,
                                                                                                        const GALGAS_string constinArgument_inLexiqueName,
                                                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                        const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                                                        const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                                                        const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                                                        const GALGAS_bool constinArgument_inHasIndexing,
                                                                                                        const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                        GALGAS_syntaxDeclarationForGeneration & outArgument_outSyntaxDeclarationForGeneration,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSyntaxDeclarationForGeneration.drop () ; // Release 'out' argument
  GALGAS_nonterminalMap var_nonterminalMap_67505 ;
  {
  routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, ioArgument_ioTypeMap, var_nonterminalMap_67505, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1494)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_67602 (constinArgument_inRuleList, EnumerationOrder::up) ;
  while (enumerator_67602.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_67660 = GALGAS_nonterminalLabelMap::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1502)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_67747 (enumerator_67602.current_mLabelList (HERE), EnumerationOrder::up) ;
    while (enumerator_67747.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_67811 = GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1504)) ;
      GALGAS_formalParameterSignature var_signature_67875 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1505)) ;
      cEnumerator_formalParameterListAST enumerator_67988 (enumerator_67747.current_mFormalArguments (HERE), EnumerationOrder::up) ;
      while (enumerator_67988.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_type_68026 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_67988.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1507)) ;
        var_signatureForGeneration_67811.addAssign_operation (enumerator_67988.current_mFormalSelector (HERE), enumerator_67988.current_mFormalArgumentPassingMode (HERE), var_type_68026, enumerator_67988.current_mFormalArgumentName (HERE), GALGAS_string ("argument_").add_operation (enumerator_67988.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1513))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1508)) ;
        var_signature_67875.addAssign_operation (enumerator_67988.current_mFormalSelector (HERE), var_type_68026, enumerator_67988.current_mFormalArgumentPassingMode (HERE), enumerator_67988.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1514)) ;
        enumerator_67988.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_67660.setter_insertKey (enumerator_67747.current_mLabelName (HERE), var_signatureForGeneration_67811, var_signature_67875, enumerator_67747.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1516)) ;
      }
      enumerator_67747.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_67602.current_mNonterminalName (HERE), var_nonterminalLabelMap_67660, var_nonterminalMap_67505, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1518)) ;
    }
    enumerator_67602.gotoNextObject () ;
  }
  GALGAS_analysisContext var_analysisContext_68650 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 1525)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1521)) ;
  GALGAS_uint var_selectMethodCount_68850 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_ruleDeclarationList var_ruleDeclarationList_68899 = GALGAS_ruleDeclarationList::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1531)) ;
  GALGAS_uint var_newRuleIndex_68936 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_syntaxRuleListAST enumerator_68977 (constinArgument_inRuleList, EnumerationOrder::up) ;
  while (enumerator_68977.hasCurrentObject ()) {
    GALGAS_ruleLabelImplementationList var_ruleLabelImplementationList_69050 = GALGAS_ruleLabelImplementationList::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1535)) ;
    GALGAS_uint var_localSelectMethodCount_69097 = var_selectMethodCount_68850 ;
    GALGAS_nonterminalLabelMap joker_69188 ; // Joker input parameter
    var_nonterminalMap_67505.method_searchKey (enumerator_68977.current_mNonterminalName (HERE), joker_69188, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1537)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_69275 (enumerator_68977.current_mLabelList (HERE), EnumerationOrder::up) ;
    while (enumerator_69275.hasCurrentObject ()) {
      var_localSelectMethodCount_69097 = var_selectMethodCount_68850 ;
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_69836 ;
      GALGAS_formalParameterSignature var_signature_69872 ;
      GALGAS_semanticInstructionListForGeneration var_instructionListForGeneration_69895 ;
      {
      routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_69275.current_mFormalArguments (HERE), enumerator_69275.current_mSyntaxInstructionList (HERE), var_analysisContext_68650, ioArgument_ioTypeMap, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1549)), var_nonterminalMap_67505, constinArgument_inSyntaxComponentName, enumerator_69275.current_mEndOfInstructionList (HERE), constinArgument_inIndexNameSet, var_localSelectMethodCount_69097, var_signatureForGeneration_69836, var_signature_69872, var_instructionListForGeneration_69895, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1540)) ;
      }
      var_ruleLabelImplementationList_69050.addAssign_operation (enumerator_69275.current_mLabelName (HERE), var_signatureForGeneration_69836, var_signature_69872, enumerator_69275.current_mEndOfArgumentLocation (HERE), var_instructionListForGeneration_69895  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1559)) ;
      enumerator_69275.gotoNextObject () ;
    }
    var_selectMethodCount_68850 = var_localSelectMethodCount_69097 ;
    GALGAS_nonterminalLabelMap joker_70213 ; // Joker input parameter
    var_nonterminalMap_67505.method_searchKey (enumerator_68977.current_mNonterminalName (HERE), joker_70213, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1567)) ;
    var_ruleDeclarationList_68899.addAssign_operation (enumerator_68977.current_mNonterminalName (HERE).readProperty_string (), var_newRuleIndex_68936, var_ruleLabelImplementationList_69050  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1568)) ;
    var_newRuleIndex_68936.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1572)) ;
    enumerator_68977.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GALGAS_syntaxDeclarationForGeneration::class_func_new (constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_67505, var_ruleDeclarationList_68899, var_selectMethodCount_68850, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1575)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitClassGraphFile??'
//
//--------------------------------------------------------------------------------------------------

void routine_emitClassGraphFile_3F__3F_ (const GALGAS_string constinArgument_inDotDocumentFilePath,
                                         const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  constinArgument_inDotDocumentFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 1589)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1589)) ;
  GALGAS_string var_document_70917 = GALGAS_string ("digraph G {\n") ;
  var_document_70917.plusAssign_operation(GALGAS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1591)) ;
  var_document_70917.plusAssign_operation(GALGAS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1592)) ;
  cEnumerator_unifiedTypeMap enumerator_71061 (constinArgument_inTypeMap, EnumerationOrder::up) ;
  while (enumerator_71061.hasCurrentObject ()) {
    switch (enumerator_71061.current_mElement (HERE).readProperty_mDefinition ().enumValue ()) {
    case GALGAS_typeDefinition::kNotBuilt:
      break ;
    case GALGAS_typeDefinition::kEnum_unsolved:
      {
      }
      break ;
    case GALGAS_typeDefinition::kEnum_solved:
      {
        const cEnumAssociatedValues_typeDefinition_solved * extractPtr_71730 = (const cEnumAssociatedValues_typeDefinition_solved *) (enumerator_71061.current_mElement (HERE).readProperty_mDefinition ().unsafePointer ()) ;
        const GALGAS_unifiedTypeDefinition extractedValue_71173_definition = extractPtr_71730->mAssociatedValue0 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = extractedValue_71173_definition.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("semanticAnalysis.galgas", 1597)).boolEnum () ;
          if (kBoolTrue == test_0) {
            switch (extractedValue_71173_definition.readProperty_superType ().enumValue ()) {
            case GALGAS_unifiedTypeMapEntry::kNotBuilt:
              break ;
            case GALGAS_unifiedTypeMapEntry::kEnum_null:
              {
                var_document_70917.plusAssign_operation(GALGAS_string ("  \"@").add_operation (extractedValue_71173_definition.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1600)).add_operation (GALGAS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1600)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1600)) ;
              }
              break ;
            case GALGAS_unifiedTypeMapEntry::kEnum_element:
              {
                const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_71708 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (extractedValue_71173_definition.readProperty_superType ().unsafePointer ()) ;
                const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_71409_superType = extractPtr_71708->mAssociatedValue0 ;
                enumGalgasBool test_1 = kBoolTrue ;
                if (kBoolTrue == test_1) {
                  GALGAS_unifiedTypeMapElementClass var_t_71439 (dynamic_cast <const cPtr_unifiedTypeMapElementClass *> (extractedValue_71409_superType.ptr ())) ;
                  if (nullptr == var_t_71439.ptr ()) {
                    test_1 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_1) {
                    GALGAS_unifiedTypeDefinition var_superTypeDefinition_71497 ;
                    const bool optionalResult71473 = var_t_71439.readProperty_mDefinition ().optional_solved (var_superTypeDefinition_71497) ;
                    if (!optionalResult71473) {
                      test_1 = kBoolFalse ;
                    }
                    if (kBoolTrue == test_1) {
                      var_document_70917.plusAssign_operation(GALGAS_string ("  \"@").add_operation (extractedValue_71173_definition.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1603)).add_operation (GALGAS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1603)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1603)) ;
                      var_document_70917.plusAssign_operation(GALGAS_string ("  \"@").add_operation (extractedValue_71173_definition.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)).add_operation (GALGAS_string ("\" -> \"@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)).add_operation (var_superTypeDefinition_71497.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)).add_operation (GALGAS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)) ;
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
    enumerator_71061.gotoNextObject () ;
  }
  var_document_70917.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1610)) ;
  GALGAS_bool joker_71836 ; // Joker input parameter
  var_document_70917.method_writeToFileWhenDifferentContents (constinArgument_inDotDocumentFilePath, joker_71836, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1611)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterForGeneration generateActualParameter'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generateActualParameter (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_string & ioArgument_ioImplementation,
                                                                              GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                              GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppName,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputActualParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 34)) ;
  const GALGAS_outputActualParameterForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 35)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterForGeneration generateActualParameter'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generateActualParameter (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                   GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                   GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputActualParameterForGeneration temp_0 = this ;
  cEnumerator_unifiedTypeMapEntryList enumerator_2376 (temp_0.readProperty_mTypeList (), EnumerationOrder::up) ;
  while (enumerator_2376.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_2376.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 49)) ;
    enumerator_2376.gotoNextObject () ;
  }
  const GALGAS_outputInputActualParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mOutputInputVariableCppName () ;
  const GALGAS_outputInputActualParameterForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_2504 (temp_2.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_2504.hasCurrentObject ()) {
    outArgument_outCppName.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_2504.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 53)) ;
    enumerator_2504.gotoNextObject () ;
  }
  {
  const GALGAS_outputInputActualParameterForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mOutputInputVariableCppName () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 55)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualParameterForGeneration generateActualParameter'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generateActualParameter (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_string & /* ioArgument_ioImplementation */,
                                                                             GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                             GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppName,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualParameterForGeneration temp_0 = this ;
  outArgument_outCppName = temp_0.readProperty_mInputActualCppName () ;
  const GALGAS_inputActualParameterForGeneration temp_1 = this ;
  ioArgument_ioOutputVariableList.addAssign_operation (temp_1.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 69)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 70)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerParameterForGeneration generateActualParameter'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generateActualParameter (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GALGAS_string & ioArgument_ioImplementation,
                                                                            GALGAS_stringlist & ioArgument_ioJokerParametersToReleaseList,
                                                                            GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                            GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                            GALGAS_string & outArgument_outCppName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputJokerParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 83)) ;
  const GALGAS_inputJokerParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mInputActualCppName () ;
  const GALGAS_inputJokerParameterForGeneration temp_2 = this ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)).add_operation (GALGAS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)) ;
  const GALGAS_inputJokerParameterForGeneration temp_3 = this ;
  ioArgument_ioJokerParametersToReleaseList.addAssign_operation (temp_3.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 86)) ;
  const GALGAS_inputJokerParameterForGeneration temp_4 = this ;
  ioArgument_ioOutputVariableList.addAssign_operation (temp_4.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 87)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@semanticBlockInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticBlockInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 98)) ;
  {
  const GALGAS_semanticBlockInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 99)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 107)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterForGeneration generatePoisonedVariables'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generatePoisonedVariables (GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterForGeneration generatePoisonedVariables'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generatePoisonedVariables (GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerParameterForGeneration generatePoisonedVariables'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generatePoisonedVariables (GALGAS_string & ioArgument_ioImplementation,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputJokerParameterForGeneration temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas", 129)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputJokerParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)) ;
      const GALGAS_inputJokerParameterForGeneration temp_3 = this ;
      cEnumerator__32_stringlist enumerator_5662 (temp_3.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_5662.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_5662.current_mValue_31_ (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 132)) ;
        }
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_5662.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 133)).add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 133)) ;
        enumerator_5662.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 135)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualParameterForGeneration generatePoisonedVariables'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generatePoisonedVariables (GALGAS_string & ioArgument_ioImplementation,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputActualParameterForGeneration temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas", 144)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 145)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 145)) ;
      const GALGAS_inputActualParameterForGeneration temp_3 = this ;
      cEnumerator__32_stringlist enumerator_6365 (temp_3.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_6365.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_6365.current_mValue_31_ (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147)) ;
        }
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_6365.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 148)).add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 148)) ;
        enumerator_6365.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 150)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                              GALGAS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarForGeneration temp_0 = this ;
  cEnumerator_lstringlist enumerator_1577 (temp_0.readProperty_mSyntaxComponents (), EnumerationOrder::up) ;
  while (enumerator_1577.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (enumerator_1577.current_mValue (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 31))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 31)) ;
    enumerator_1577.gotoNextObject () ;
  }
  const GALGAS_grammarForGeneration temp_1 = this ;
  const GALGAS_grammarForGeneration temp_2 = this ;
  const GALGAS_grammarForGeneration temp_3 = this ;
  const GALGAS_grammarForGeneration temp_4 = this ;
  const GALGAS_grammarForGeneration temp_5 = this ;
  const GALGAS_grammarForGeneration temp_6 = this ;
  const GALGAS_grammarForGeneration temp_7 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 34)), temp_2.readProperty_mNonTerminalMapForGrammarAnalysis (), temp_3.readProperty_mNonTerminalToAddList (), temp_4.readProperty_mStartSymbolName (), temp_5.readProperty_mHasTranslateFeature (), temp_6.readProperty_mGrammarName (), temp_7.readProperty_mSyntaxComponents () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 33))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_string & outArgument_outImplementation,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 52))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 52)) ;
  const GALGAS_grammarForGeneration temp_1 = this ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_2394 (temp_1.readProperty_mNonTerminalMapForGrammarAnalysis (), EnumerationOrder::up) ;
  while (enumerator_2394.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_2442 (enumerator_2394.current (HERE).readProperty_mNonterminalSymbolParametersMap (), EnumerationOrder::up) ;
    while (enumerator_2442.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_2571 (enumerator_2442.current_mFormalParametersList (HERE), EnumerationOrder::up) ;
      while (enumerator_2571.hasCurrentObject ()) {
        switch (enumerator_2571.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            GALGAS_unifiedTypeMapEntry var_t_2754 = extensionGetter_typeMapEntryForLKey (constinArgument_inUnifiedTypeMap, enumerator_2571.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 58)) ;
            extensionMethod_addHeaderFileName (var_t_2754, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 59)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_2571.gotoNextObject () ;
      }
      enumerator_2442.gotoNextObject () ;
    }
    enumerator_2394.gotoNextObject () ;
  }
  const GALGAS_grammarForGeneration temp_2 = this ;
  outArgument_outImplementation = temp_2.readProperty_mCppFileContents () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration implementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarForGeneration::getter_implementationCppFileName (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_grammarForGeneration temp_0 = this ;
  result_result = GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 71)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_grammarForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_grammarForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 83)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_grammarForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration implementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_syntaxDeclarationForGeneration::getter_implementationCppFileName (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_syntaxDeclarationForGeneration temp_0 = this ;
  result_result = GALGAS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 97)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_syntaxDeclarationForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_syntaxDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 109)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_syntaxDeclarationForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 122))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 122)) ;
  GALGAS_uintlist var_selectMethodList_5162 = GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 123)) ;
  GALGAS_uint var_idx_5206 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_syntaxDeclarationForGeneration temp_1 = this ;
  if (temp_1.readProperty_mSelectMethodCount ().add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 125)).isValid ()) {
    uint32_t variant_5216 = temp_1.readProperty_mSelectMethodCount ().add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 125)).uintValue () ;
    bool loop_5216 = true ;
    while (loop_5216) {
      const GALGAS_syntaxDeclarationForGeneration temp_2 = this ;
      loop_5216 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_5206.objectCompare (temp_2.readProperty_mSelectMethodCount ())).isValid () ;
      if (loop_5216) {
        loop_5216 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_5206.objectCompare (temp_2.readProperty_mSelectMethodCount ())).boolValue () ;
      }
      if (loop_5216 && (0 == variant_5216)) {
        loop_5216 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 125)) ;
      }
      if (loop_5216) {
        variant_5216 -- ;
        var_selectMethodList_5162.addAssign_operation (var_idx_5206  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 127)) ;
        var_idx_5206.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 128)) ;
      }
    }
  }
  const GALGAS_syntaxDeclarationForGeneration temp_3 = this ;
  const GALGAS_syntaxDeclarationForGeneration temp_4 = this ;
  const GALGAS_syntaxDeclarationForGeneration temp_5 = this ;
  const GALGAS_syntaxDeclarationForGeneration temp_6 = this ;
  const GALGAS_syntaxDeclarationForGeneration temp_7 = this ;
  const GALGAS_syntaxDeclarationForGeneration temp_8 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 132)), temp_5.readProperty_mNonterminalDeclarationMap (), temp_6.readProperty_mRuleDeclarationList (), var_selectMethodList_5162, temp_7.readProperty_mHasIndexing (), temp_8.readProperty_mHasTranslateFeature () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 130))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 148))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 148)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 150)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 149))) ;
  const GALGAS_syntaxDeclarationForGeneration temp_1 = this ;
  GALGAS_string var_lexiqueCppName_6140 = GALGAS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)) ;
  const GALGAS_syntaxDeclarationForGeneration temp_2 = this ;
  cEnumerator_ruleDeclarationList enumerator_6250 (temp_2.readProperty_mRuleDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_6250.hasCurrentObject ()) {
    cEnumerator_ruleLabelImplementationList enumerator_6398 (enumerator_6250.current_mLabelImplementationList (HERE), EnumerationOrder::up) ;
    while (enumerator_6398.hasCurrentObject ()) {
      const GALGAS_syntaxDeclarationForGeneration temp_3 = this ;
      const GALGAS_syntaxDeclarationForGeneration temp_4 = this ;
      GALGAS_string var_ruleName_6478 = GALGAS_string ("cParser_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 157)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 157)).add_operation (temp_4.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 158)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 158)).add_operation (enumerator_6250.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 158)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 159)).add_operation (enumerator_6250.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 160)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 160)).add_operation (enumerator_6398.current_mLabelName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 160)) ;
      outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 161)) ;
      GALGAS_string var_code_7291 ;
      {
      const GALGAS_syntaxDeclarationForGeneration temp_5 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GALGAS_bool (false), var_ruleName_6478, ioArgument_ioInclusionSet, enumerator_6398.current_mSignatureForGeneration (HERE), enumerator_6398.current_mInstructionListForGeneration (HERE), GALGAS_bool (false), var_lexiqueCppName_6140, GALGAS_bool (false), GALGAS_bool (false), temp_5.readProperty_mHasTranslateFeature (), var_code_7291, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 162)) ;
      }
      outArgument_outImplementation.plusAssign_operation(var_code_7291, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 175)) ;
      enumerator_6398.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_parseInstructionList_7427 ;
    GALGAS_lstring joker_7410 ; // Joker input parameter
    GALGAS_formalParameterListForGeneration joker_7413 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_7416 ; // Joker input parameter
    GALGAS_location joker_7419 ; // Joker input parameter
    enumerator_6250.current_mLabelImplementationList (HERE).method_first (joker_7410, joker_7413, joker_7416, joker_7419, var_parseInstructionList_7427, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 178)) ;
    const GALGAS_syntaxDeclarationForGeneration temp_6 = this ;
    const GALGAS_syntaxDeclarationForGeneration temp_7 = this ;
    GALGAS_string var_parseRuleName_7465 = GALGAS_string ("cParser_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 179)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 179)).add_operation (temp_7.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 180)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 180)).add_operation (enumerator_6250.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 180)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 181)).add_operation (enumerator_6250.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 182)).add_operation (GALGAS_string ("_parse"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 182)) ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 183)) ;
    GALGAS_string var_parseCode_8256 ;
    {
    const GALGAS_syntaxDeclarationForGeneration temp_8 = this ;
    routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GALGAS_bool (false), var_parseRuleName_7465, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 188)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_parseInstructionList_7427, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 189)), GALGAS_bool (false), var_lexiqueCppName_6140, GALGAS_bool (false), GALGAS_bool (true), temp_8.readProperty_mHasTranslateFeature (), var_parseCode_8256, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 184)) ;
    }
    outArgument_outImplementation.plusAssign_operation(var_parseCode_8256, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GALGAS_syntaxDeclarationForGeneration temp_10 = this ;
      test_9 = temp_10.readProperty_mHasIndexing ().boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_semanticInstructionListForGeneration var_instructionList_8422 ;
        GALGAS_lstring joker_8405 ; // Joker input parameter
        GALGAS_formalParameterListForGeneration joker_8408 ; // Joker input parameter
        GALGAS_formalParameterSignature joker_8411 ; // Joker input parameter
        GALGAS_location joker_8414 ; // Joker input parameter
        enumerator_6250.current_mLabelImplementationList (HERE).method_first (joker_8405, joker_8408, joker_8411, joker_8414, var_instructionList_8422, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 200)) ;
        const GALGAS_syntaxDeclarationForGeneration temp_11 = this ;
        const GALGAS_syntaxDeclarationForGeneration temp_12 = this ;
        GALGAS_string var_ruleName_8457 = GALGAS_string ("cParser_").add_operation (temp_11.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 201)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 201)).add_operation (temp_12.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 202)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 202)).add_operation (enumerator_6250.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 202)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 203)).add_operation (enumerator_6250.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 204)).add_operation (GALGAS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 204)) ;
        outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 205)) ;
        GALGAS_string var_code_9318 ;
        {
        routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GALGAS_bool (false), var_ruleName_8457, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 210)), function_syntaxSignatureOfInstructionList (GALGAS_string ("indexing"), var_instructionList_8422, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 211)), GALGAS_bool (false), var_lexiqueCppName_6140, GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), var_code_9318, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 206)) ;
        }
        outArgument_outImplementation.plusAssign_operation(var_code_9318, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 219)) ;
      }
    }
    enumerator_6250.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure?static?&???????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (const GALGAS_bool constinArgument_inGenerateStatic,
                                                                                  const GALGAS_string constinArgument_inProcedureMangledName,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                                  const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                                  const GALGAS_bool constinArgument_inProcedureIsConst,
                                                                                  const GALGAS_string constinArgument_inCompilerTypeName,
                                                                                  const GALGAS_bool constinArgument_inGenerateLocationArgs,
                                                                                  const GALGAS_bool constinArgument_inGenerateResetTemplateString,
                                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GALGAS_string & outArgument_outGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet_10165 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 244)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_unusedVariableCppNameSet_10165.addAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 246))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 246)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inGenerateResetTemplateString.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 248)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_unusedVariableCppNameSet_10165.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 249))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 249)) ;
    }
  }
  cEnumerator_formalParameterListForGeneration enumerator_10470 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_10470.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::notEqual, enumerator_10470.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticGeneration.galgas", 252)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_unusedVariableCppNameSet_10165.addAssign_operation (enumerator_10470.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 253)) ;
      }
    }
    enumerator_10470.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_10709 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_10742 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_10742.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 259)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_10802 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_10802.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_10802.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_10709, var_unusedVariableCppNameSet_10165, constinArgument_inGenerateSyntaxDirectedTranslationString, var_routineBody_10742, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 261)) ;
    enumerator_10802.gotoNextObject () ;
  }
  {
  var_routineBody_10742.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 269)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_11140 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_11140.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11140.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)) ;
    enumerator_11140.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inGenerateStatic.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 277)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("void ").add_operation (constinArgument_inProcedureMangledName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 279)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 279)) ;
  GALGAS_uint var_colRef_11423 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 280)) ;
  cEnumerator_formalParameterListForGeneration enumerator_11528 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_11528.hasCurrentObject ()) {
    switch (enumerator_11528.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11528.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 285)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 285)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11528.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11528.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 289)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 289)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11528.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 291)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 291)) ;
      }
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unusedVariableCppNameSet_10165.getter_hasKey (enumerator_11528.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 293)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_11528.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294)) ;
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_11528.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 298)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11423, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)) ;
    }
    enumerator_11528.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_unusedVariableCppNameSet_10165.getter_hasKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 303)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 303)).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("String & /* ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 304)).add_operation (GALGAS_string (" */,\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 304)) ;
        }
      }
      if (kBoolFalse == test_6) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("String & ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)) ;
      }
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11423, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)) ;
      }
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_unusedVariableCppNameSet_10165.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 312)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 312)).boolEnum () ;
    if (kBoolTrue == test_7) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)) ;
    }
  }
  if (kBoolFalse == test_7) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 315)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = constinArgument_inGenerateLocationArgs.boolEnum () ;
    if (kBoolTrue == test_8) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 318)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11423, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 319)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 320)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 322)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = constinArgument_inProcedureIsConst.boolEnum () ;
    if (kBoolTrue == test_9) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 324)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 326)) ;
  cEnumerator_formalParameterListForGeneration enumerator_13453 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_13453.hasCurrentObject ()) {
    switch (enumerator_13453.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_13453.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 331)).add_operation (GALGAS_string (".drop () ; // Release 'out' argument\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 331)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
      }
      break ;
    }
    enumerator_13453.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_10742, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 336)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = constinArgument_inGenerateResetTemplateString.boolEnum () ;
    if (kBoolTrue == test_10) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 339)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 339)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 342)) ;
}


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
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 362)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_14955 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 364)) ;
  var_unusedVariableCppNameSet_14955.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 365))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 365)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_15158 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_15158.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15158.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 368)) ;
    var_unusedVariableCppNameSet_14955.addAssign_operation (enumerator_15158.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 369)) ;
    enumerator_15158.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_15342 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_15383 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_15383.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 374)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_15443 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_15443.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_15443.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_15342, var_unusedVariableCppNameSet_14955, GALGAS_bool (false), var_routineBody_15383, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 376)) ;
    enumerator_15443.gotoNextObject () ;
  }
  {
  var_routineBody_15383.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 384)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsStatic.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 387)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 389)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 389)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)) ;
  GALGAS_uint var_colRef_15966 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 391)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16067 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_16067.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_16067.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16067.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)) ;
      }
    }
    if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16067.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 397)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_14955.getter_hasKey (enumerator_16067.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 399)).boolEnum () ;
      if (kBoolTrue == test_2) {
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_16067.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 404)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_15966, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)) ;
    }
    enumerator_16067.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 408)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_14955.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 409)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 409)).boolEnum () ;
    if (kBoolTrue == test_3) {
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 414)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_15966, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 416)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsConst.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 422)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 422)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 423)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 422)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_15383, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 425)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 427)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 428)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 428)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 430)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetterNew?&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionGetterNew_3F__26__3F__3F__3F__3F__3F__21_ (const GALGAS_string constinArgument_inFunctionCppRepresentationName,
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
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 444)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_18349 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 446)) ;
  var_unusedVariableCppNameSet_18349.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 447))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 447)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_18552 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_18552.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18552.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 450)) ;
    var_unusedVariableCppNameSet_18349.addAssign_operation (enumerator_18552.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451)) ;
    enumerator_18552.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_18736 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_18777 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_18777.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 456)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_18837 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_18837.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_18837.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_18736, var_unusedVariableCppNameSet_18349, GALGAS_bool (false), var_routineBody_18777, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 458)) ;
    enumerator_18837.gotoNextObject () ;
  }
  {
  var_routineBody_18777.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 466)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 468)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 468)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 469)) ;
  GALGAS_uint var_colRef_19299 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 470)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_19400 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_19400.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_19400.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19400.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)) ;
      }
    }
    if (kBoolFalse == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19400.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 476)) ;
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_unusedVariableCppNameSet_18349.getter_hasKey (enumerator_19400.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 478)).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" /* ").add_operation (enumerator_19400.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 479)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 479)) ;
      }
    }
    if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_19400.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 481)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 483)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19299, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)) ;
    }
    enumerator_19400.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 487)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_unusedVariableCppNameSet_18349.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 488)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 488)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 489)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 489)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 493)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19299, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 494)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS) const {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 495)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 498)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_18777, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 500)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 502)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 503)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 503)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 505)) ;
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
  GALGAS_stringset var_unusedVariableCppNameSet_21401 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 523)) ;
  var_unusedVariableCppNameSet_21401.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 524))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 524)) ;
  var_unusedVariableCppNameSet_21401.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 525)) ;
  cEnumerator_formalParameterListForGeneration enumerator_21536 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_21536.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_21401.addAssign_operation (enumerator_21536.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 527)) ;
    enumerator_21536.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_21680 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_21713 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_21713.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 532)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_21773 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_21773.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_21773.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_21680, var_unusedVariableCppNameSet_21401, GALGAS_bool (false), var_routineBody_21713, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 534)) ;
    enumerator_21773.gotoNextObject () ;
  }
  {
  var_routineBody_21713.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 542)) ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void extensionSetter_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 544)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 544)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 544)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 544)) ;
  GALGAS_uint var_colRef_22242 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 545)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 547)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 547)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 549)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 549)) ;
  }
  GALGAS_bool var_currentObjectIsUnused_22507 = var_unusedVariableCppNameSet_21401.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 551)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_currentObjectIsUnused_22507.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 553)) ;
    }
  }
  if (kBoolFalse == test_1) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 555)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_22759 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_22759.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 559)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22242, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 560)) ;
    }
    switch (enumerator_22759.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_22759.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 563)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 563)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_22759.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_22759.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_22759.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 569)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 569)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_21401.getter_hasKey (enumerator_22759.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 571)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_22759.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_22759.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)) ;
    }
    enumerator_22759.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 578)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22242, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 579)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 580)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_21401.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 581)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 581)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 584)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22242, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 587)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 589)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_currentObjectIsUnused_22507.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 591)).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (ComparisonKind::equal, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 593)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 593)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 593)) ;
        }
      }
      if (kBoolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)).add_operation (GALGAS_string (" * object = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)).add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 597)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 597)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_21713, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 599)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 601)) ;
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
  GALGAS_string var_className_25392 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 616)).readProperty_typeName ().readProperty_string () ;
  GALGAS_stringset var_unusedVariableCppNameSet_25496 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 618)) ;
  var_unusedVariableCppNameSet_25496.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 619))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 619)) ;
  var_unusedVariableCppNameSet_25496.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 620)) ;
  cEnumerator_formalParameterListForGeneration enumerator_25631 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_25631.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_25496.addAssign_operation (enumerator_25631.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 622)) ;
    enumerator_25631.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_25775 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_25816 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_25816.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 627)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_25876 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_25876.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_25876.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_25775, var_unusedVariableCppNameSet_25496, GALGAS_bool (false), var_routineBody_25816, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 629)) ;
    enumerator_25876.gotoNextObject () ;
  }
  {
  var_routineBody_25816.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 637)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_26216 = constinArgument_inReceiverType ;
  GALGAS_bool var_searching_26254 = GALGAS_bool (true) ;
  if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticGeneration.galgas", 641)).isValid ()) {
    uint32_t variant_26273 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticGeneration.galgas", 641)).uintValue () ;
    bool loop_26273 = true ;
    while (loop_26273) {
      loop_26273 = var_searching_26254.isValid () ;
      if (loop_26273) {
        loop_26273 = var_searching_26254.boolValue () ;
      }
      if (loop_26273 && (0 == variant_26273)) {
        loop_26273 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 641)) ;
      }
      if (loop_26273) {
        variant_26273 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = extensionGetter_definition (var_baseType_26216, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 642)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticGeneration.galgas", 642)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 642)).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = extensionGetter_definition (extensionGetter_definition (var_baseType_26216, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 643)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 643)).readProperty_mInstanceMethodMap ().getter_hasKey (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 643)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType_26216 = extensionGetter_definition (var_baseType_26216, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 644)).readProperty_superType () ;
              }
            }
            if (kBoolFalse == test_1) {
              var_searching_26254 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          var_searching_26254 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (var_baseType_26216, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 652)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 652)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 652)).add_operation (constinArgument_inMethodName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 652))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 652)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 653)) ;
  cEnumerator_formalParameterListForGeneration enumerator_26842 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_26842.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_26842.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 655)) ;
    enumerator_26842.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("void cPtr_").add_operation (var_className_25392.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 658)).add_operation (GALGAS_string ("::method_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 658)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 658)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 658)) ;
  GALGAS_uint var_colRef_27108 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 659)) ;
  cEnumerator_formalParameterListForGeneration enumerator_27213 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_27213.hasCurrentObject ()) {
    switch (enumerator_27213.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27213.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27213.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 666)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 666)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 666)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27213.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 668)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 668)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 668)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 668)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27213.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 670)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 670)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 670)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_25496.getter_hasKey (enumerator_27213.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 672)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_27213.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 673)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_27213.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 675)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 677)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_27108, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 678)) ;
    }
    enumerator_27213.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 681)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_25496.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 682)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 682)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 683)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 683)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 685)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 687)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_27108, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 688)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 689)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 690)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_25816, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 692)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 694)) ;
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
                                                                                  const GALGAS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
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
  result.appendString ("//-- Start of type generic part\n\n//--------------------------------- Object cloning\n  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;\n\n//--------------------------------- Object extraction\n  public: static GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" extractObject (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_object & inObject,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_CLASS_5F_FUNC_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 12)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- GALGAS class functions\n") ;
    GALGAS_uint index_578_ (0) ;
    if (in_CLASS_5F_FUNC_5F_MAP.isValid ()) {
      cEnumerator_classFunctionMap enumerator_578 (in_CLASS_5F_FUNC_5F_MAP, EnumerationOrder::up) ;
      while (enumerator_578.hasCurrentObject ()) {
        result.appendString ("  public: static class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_578.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue ()) ;
        result.appendString (" class_func_") ;
        result.appendString (enumerator_578.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_815_IDX (0) ;
        if (enumerator_578.current_mArgumentTypeList (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_815 (enumerator_578.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_815.hasCurrentObject ()) {
            result.appendString ("const class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_815.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_815_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue ()) ;
            if (enumerator_815.hasNextObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_815_IDX.increment () ;
            enumerator_815.gotoNextObject () ;
          }
        }
        const enumGalgasBool test_1 = enumerator_578.current_mHasCompilerArgument (HERE).operator_and (GALGAS_bool (ComparisonKind::greaterThan, enumerator_578.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("class Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = enumerator_578.current_mHasCompilerArgument (HERE).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("Compiler * inCompiler\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case kBoolFalse : {
            const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_578.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
        index_578_.increment () ;
        enumerator_578.gotoNextObject () ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_4 = in_SUPPORTED_5F_OPERATORS.getter_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).boolEnum () ;
  switch (test_4) {
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
  const enumGalgasBool test_5 = in_SUPPORTED_5F_OPERATORS.getter_infixShiftOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)).boolEnum () ;
  switch (test_5) {
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
  const enumGalgasBool test_6 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 56)).boolEnum () ;
  switch (test_6) {
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
  const enumGalgasBool test_7 = in_SUPPORTED_5F_OPERATORS.getter_minusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 63)).boolEnum () ;
  switch (test_7) {
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
  const enumGalgasBool test_8 = in_SUPPORTED_5F_OPERATORS.getter_mulEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)).boolEnum () ;
  switch (test_8) {
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
  const enumGalgasBool test_9 = in_SUPPORTED_5F_OPERATORS.getter_divEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)).boolEnum () ;
  switch (test_9) {
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
  const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::greaterThan, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- += operator (with list of field expressions)\n  public: VIRTUAL_IN_DEBUG void addAssign_operation (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4514_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_functionSignature enumerator_4514 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4514.hasCurrentObject ()) {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_4514.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue ()) ;
        result.appendString (" & inOperand") ;
        result.appendString (index_4514_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue ()) ;
        if (enumerator_4514.hasNextObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4514_IDX.increment () ;
        enumerator_4514.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_11 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)).boolEnum () ;
    switch (test_11) {
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
  const enumGalgasBool test_12 = in_SUPPORTED_5F_OPERATORS.getter_infixAndOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)).boolEnum () ;
  switch (test_12) {
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
  const enumGalgasBool test_13 = in_SUPPORTED_5F_OPERATORS.getter_infixOrOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 104)).boolEnum () ;
  switch (test_13) {
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
  const enumGalgasBool test_14 = in_SUPPORTED_5F_OPERATORS.getter_infixXorOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 110)).boolEnum () ;
  switch (test_14) {
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
  const enumGalgasBool test_15 = in_SUPPORTED_5F_OPERATORS.getter_prefixNotOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 116)).boolEnum () ;
  switch (test_15) {
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
  const enumGalgasBool test_16 = in_SUPPORTED_5F_OPERATORS.getter_prefixTildeOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 121)).boolEnum () ;
  switch (test_16) {
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
  const enumGalgasBool test_17 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)).boolEnum () ;
  switch (test_17) {
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
  const enumGalgasBool test_18 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 133)).boolEnum () ;
  switch (test_18) {
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
  const enumGalgasBool test_19 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 138)).boolEnum () ;
  switch (test_19) {
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
  const enumGalgasBool test_20 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 143)).boolEnum () ;
  switch (test_20) {
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
  const enumGalgasBool test_21 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 150)).boolEnum () ;
  switch (test_21) {
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
  const enumGalgasBool test_22 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 157)).boolEnum () ;
  switch (test_22) {
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
  const enumGalgasBool test_23 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 162)).boolEnum () ;
  switch (test_23) {
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
  const enumGalgasBool test_24 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 169)).boolEnum () ;
  switch (test_24) {
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
  const enumGalgasBool test_25 = in_SUPPORTED_5F_OPERATORS.getter_infixModOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 174)).boolEnum () ;
  switch (test_25) {
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
  const enumGalgasBool test_26 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 181)).boolEnum () ;
  switch (test_26) {
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
  const enumGalgasBool test_27 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 187)).boolEnum () ;
  switch (test_27) {
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
  const enumGalgasBool test_28 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 192)).boolEnum () ;
  switch (test_28) {
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
  const enumGalgasBool test_29 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 199)).boolEnum () ;
  switch (test_29) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- &++, &-- operators\n  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;\n\n  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_30 = in_SUPPORTED_5F_OPERATORS.getter_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 204)).boolEnum () ;
  switch (test_30) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- Implementation of getter 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_31 = in_SUPPORTED_5F_OPERATORS.getter_doNotGenererateObjectCompare (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).boolEnum () ;
  switch (test_31) {
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
  GALGAS_uint index_10307_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    cEnumerator_setterMap enumerator_10307 (in_MODIFIER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_10307.hasCurrentObject ()) {
      const enumGalgasBool test_32 = GALGAS_bool (ComparisonKind::equal, enumerator_10307.current_mKind (HERE).objectCompare (GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 220)))).boolEnum () ;
      switch (test_32) {
      case kBoolTrue : {
        const enumGalgasBool test_33 = GALGAS_bool (ComparisonKind::equal, enumerator_10307.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_10307.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_10307.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_10307.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).boolEnum () ;
        switch (test_33) {
        case kBoolTrue : {
          result.appendString ("  public: VIRTUAL_IN_DEBUG void setter_") ;
          result.appendString (enumerator_10307.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 222)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_10755_IDX (0) ;
          if (enumerator_10307.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_10755 (enumerator_10307.current_mParameterList (HERE), EnumerationOrder::up) ;
            while (enumerator_10755.hasCurrentObject ()) {
              const enumGalgasBool test_34 = GALGAS_bool (ComparisonKind::equal, enumerator_10755.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 224)))).boolEnum () ;
              switch (test_34) {
              case kBoolTrue : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_10755.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_10755_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                const enumGalgasBool test_35 = GALGAS_bool (ComparisonKind::equal, enumerator_10755.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 226)))).boolEnum () ;
                switch (test_35) {
                case kBoolTrue : {
                  result.appendString ("class GALGAS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_10755.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_10755_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_36 = GALGAS_bool (ComparisonKind::equal, enumerator_10755.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 228)))).boolEnum () ;
                  switch (test_36) {
                  case kBoolTrue : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_10755.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_10755_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_10755.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_10755_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue ()) ;
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
              if (enumerator_10755.hasNextObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_10755_IDX.increment () ;
              enumerator_10755.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_37 = GALGAS_bool (ComparisonKind::equal, enumerator_10307.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_37) {
          case kBoolTrue : {
            const enumGalgasBool test_38 = enumerator_10307.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_38) {
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
            const enumGalgasBool test_39 = enumerator_10307.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_39) {
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
      index_10307_.increment () ;
      enumerator_10307.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------- Instance Methods\n") ;
  GALGAS_uint index_12150_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_12150 (in_INSTANCE_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_12150.hasCurrentObject ()) {
      const enumGalgasBool test_40 = GALGAS_bool (ComparisonKind::equal, enumerator_12150.current_mKind (HERE).objectCompare (GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 258)))).boolEnum () ;
      switch (test_40) {
      case kBoolTrue : {
        const enumGalgasBool test_41 = GALGAS_bool (ComparisonKind::equal, enumerator_12150.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_12150.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_12150.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_12150.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).boolEnum () ;
        switch (test_41) {
        case kBoolTrue : {
          result.appendString ("  public: VIRTUAL_IN_DEBUG void method_") ;
          result.appendString (enumerator_12150.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 260)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_12598_IDX (0) ;
          if (enumerator_12150.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_12598 (enumerator_12150.current_mParameterList (HERE), EnumerationOrder::up) ;
            while (enumerator_12598.hasCurrentObject ()) {
              const enumGalgasBool test_42 = GALGAS_bool (ComparisonKind::equal, enumerator_12598.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 262)))).boolEnum () ;
              switch (test_42) {
              case kBoolTrue : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_12598.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_12598_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                const enumGalgasBool test_43 = GALGAS_bool (ComparisonKind::equal, enumerator_12598.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 264)))).boolEnum () ;
                switch (test_43) {
                case kBoolTrue : {
                  result.appendString ("class GALGAS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_12598.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_12598_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_44 = GALGAS_bool (ComparisonKind::equal, enumerator_12598.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 266)))).boolEnum () ;
                  switch (test_44) {
                  case kBoolTrue : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_12598.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_12598_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_12598.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_12598_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue ()) ;
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
              if (enumerator_12598.hasNextObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_12598_IDX.increment () ;
              enumerator_12598.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_45 = GALGAS_bool (ComparisonKind::equal, enumerator_12150.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_45) {
          case kBoolTrue : {
            const enumGalgasBool test_46 = enumerator_12150.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_46) {
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
            const enumGalgasBool test_47 = enumerator_12150.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_47) {
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
      index_12150_.increment () ;
      enumerator_12150.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------- Class Methods\n") ;
  GALGAS_uint index_13940_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_classMethodMap enumerator_13940 (in_CLASS_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_13940.hasCurrentObject ()) {
      result.appendString ("  public: static void class_method_") ;
      result.appendString (enumerator_13940.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_14141_IDX (0) ;
      if (enumerator_13940.current_mParameterList (HERE).isValid ()) {
        cEnumerator_formalParameterSignature enumerator_14141 (enumerator_13940.current_mParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_14141.hasCurrentObject ()) {
          const enumGalgasBool test_48 = GALGAS_bool (ComparisonKind::equal, enumerator_14141.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 297)))).boolEnum () ;
          switch (test_48) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_14141.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue ()) ;
            result.appendString (" constinArgument") ;
            result.appendString (index_14141_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            const enumGalgasBool test_49 = GALGAS_bool (ComparisonKind::equal, enumerator_14141.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 299)))).boolEnum () ;
            switch (test_49) {
            case kBoolTrue : {
              result.appendString ("class GALGAS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_14141.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue ()) ;
              result.appendString (" & ioArgument") ;
              result.appendString (index_14141_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue ()) ;
              } break ;
            case kBoolFalse : {
              const enumGalgasBool test_50 = GALGAS_bool (ComparisonKind::equal, enumerator_14141.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 301)))).boolEnum () ;
              switch (test_50) {
              case kBoolTrue : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_14141.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue ()) ;
                result.appendString (" & outArgument") ;
                result.appendString (index_14141_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_14141.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_14141_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue ()) ;
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
          if (enumerator_14141.hasNextObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_14141_IDX.increment () ;
          enumerator_14141.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_51 = GALGAS_bool (ComparisonKind::equal, enumerator_13940.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 308)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_51) {
      case kBoolTrue : {
        const enumGalgasBool test_52 = enumerator_13940.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_52) {
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
        const enumGalgasBool test_53 = enumerator_13940.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_53) {
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
      index_13940_.increment () ;
      enumerator_13940.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------- Getters\n") ;
  GALGAS_uint index_15393_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_15393 (in_GETTER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_15393.hasCurrentObject ()) {
      const enumGalgasBool test_54 = GALGAS_bool (ComparisonKind::equal, enumerator_15393.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      switch (test_54) {
      case kBoolTrue : {
        switch (enumerator_15393.current_mKind (HERE).enumValue ()) {
        case GALGAS_methodKind::kNotBuilt :
          break ;
        case GALGAS_methodKind::kEnum_definedAsExtension :
          {
          }
          break ;
        case GALGAS_methodKind::kEnum_definedAsMember :
          {
            const enumGalgasBool test_55 = GALGAS_bool (ComparisonKind::equal, enumerator_15393.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)))).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_15393.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)).operator_or (GALGAS_bool (ComparisonKind::equal, enumerator_15393.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)).boolEnum () ;
            switch (test_55) {
            case kBoolTrue : {
              result.appendString ("  public: VIRTUAL_IN_DEBUG class GALGAS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_15393.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 334)).stringValue ()) ;
              result.appendString (" getter_") ;
              result.appendString (enumerator_15393.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 334)).stringValue ()) ;
              result.appendString (" (") ;
              columnMarker = result.currentColumn () ;
              GALGAS_uint index_15917_IDX (0) ;
              if (enumerator_15393.current_mArgumentTypeList (HERE).isValid ()) {
                cEnumerator_functionSignature enumerator_15917 (enumerator_15393.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
                while (enumerator_15917.hasCurrentObject ()) {
                  result.appendString ("const class GALGAS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_15917.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 336)).stringValue ()) ;
                  result.appendString (" & constinOperand") ;
                  result.appendString (index_15917_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 336)).stringValue ()) ;
                  if (enumerator_15917.hasNextObject ()) {
                    result.appendString (",\n") ;
                    result.appendSpacesUntilColumn (columnMarker) ;
                  }
                  index_15917_IDX.increment () ;
                  enumerator_15917.gotoNextObject () ;
                }
              }
              const enumGalgasBool test_56 = GALGAS_bool (ComparisonKind::equal, enumerator_15393.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 339)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
              switch (test_56) {
              case kBoolTrue : {
                const enumGalgasBool test_57 = enumerator_15393.current_mHasCompilerArgument (HERE).boolEnum () ;
                switch (test_57) {
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
                const enumGalgasBool test_58 = enumerator_15393.current_mHasCompilerArgument (HERE).boolEnum () ;
                switch (test_58) {
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
      index_15393_.increment () ;
      enumerator_15393.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------- Optional Methods\n") ;
  GALGAS_uint index_16635_ (0) ;
  if (in_OPTIONAL_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_optionalMethodMap enumerator_16635 (in_OPTIONAL_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_16635.hasCurrentObject ()) {
      result.appendString ("  public: VIRTUAL_IN_DEBUG bool optional_") ;
      result.appendString (enumerator_16635.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 362)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_16840_IDX (0) ;
      if (enumerator_16635.current_mArgumentTypeList (HERE).isValid ()) {
        cEnumerator_optionalMethodSignature enumerator_16840 (enumerator_16635.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
        while (enumerator_16840.hasCurrentObject ()) {
          const enumGalgasBool test_59 = enumerator_16840.current_mInputArgument (HERE).boolEnum () ;
          switch (test_59) {
          case kBoolTrue : {
            result.appendString ("const class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_16840.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 366)).stringValue ()) ;
            result.appendString (" & constinOperand") ;
            result.appendString (index_16840_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 366)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_16840.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 368)).stringValue ()) ;
            result.appendString (" & outOperand") ;
            result.appendString (index_16840_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 368)).stringValue ()) ;
            } break ;
          default :
            break ;
          }
          if (enumerator_16840.hasNextObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_16840_IDX.increment () ;
          enumerator_16840.gotoNextObject () ;
        }
      }
      result.appendString (") const ;\n\n") ;
      index_16635_.increment () ;
      enumerator_16635.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------- Introspection\n  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;\n") ;
  const enumGalgasBool test_60 = in_SUPPORTED_5F_OPERATORS.getter_generateEnumerationHelperMethods (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 380)).boolEnum () ;
  switch (test_60) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- Enumeration helper methods\n  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_61 = in_SUPPORTED_5F_OPERATORS.getter_supportWithAccessor (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 386)).boolEnum () ;
  switch (test_61) {
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
  const enumGalgasBool test_62 = GALGAS_bool (ComparisonKind::greaterThan, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 392)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_62) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------- Friend\n\n  friend class cEnumerator_") ;
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
  const enumGalgasBool test_63 = GALGAS_bool (ComparisonKind::greaterThan, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 399)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_63) {
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
    GALGAS_uint index_18694_ (0) ;
    if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
      cEnumerator_enumerationDescriptorList enumerator_18694 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_18694.hasCurrentObject ()) {
        result.appendString ("  public: class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_18694.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 410)).stringValue ()) ;
        result.appendString (" current_") ;
        result.appendString (enumerator_18694.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 410)).stringValue ()) ;
        result.appendString (" (LOCATION_ARGS) const ;\n") ;
        index_18694_.increment () ;
        enumerator_18694.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_64 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 412)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 412)).boolEnum () ;
    switch (test_64) {
    case kBoolTrue : {
      result.appendString ("//--- Current element access\n  public: class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 414)).stringValue ()) ;
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
        GALGAS_uint index_457_IDX (0) ;
        if (enumerator_220.current_mArgumentTypeList (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_457 (enumerator_220.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_457.hasCurrentObject ()) {
            result.appendString ("const class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_457.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 9)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_457_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 9)).stringValue ()) ;
            if (enumerator_457.hasNextObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_457_IDX.increment () ;
            enumerator_457.gotoNextObject () ;
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
  GALGAS_uint index_1113_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_classMethodMap enumerator_1113 (in_CLASS_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1113.hasCurrentObject ()) {
      result.appendString ("  public: static void class_method_") ;
      result.appendString (enumerator_1113.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_1314_IDX (0) ;
      if (enumerator_1113.current_mParameterList (HERE).isValid ()) {
        cEnumerator_formalParameterSignature enumerator_1314 (enumerator_1113.current_mParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_1314.hasCurrentObject ()) {
          const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_1314.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 31)))).boolEnum () ;
          switch (test_4) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1314.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 32)).stringValue ()) ;
            result.appendString (" constinArgument") ;
            result.appendString (index_1314_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 32)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_1314.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 33)))).boolEnum () ;
            switch (test_5) {
            case kBoolTrue : {
              result.appendString ("class GALGAS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_1314.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 34)).stringValue ()) ;
              result.appendString (" & ioArgument") ;
              result.appendString (index_1314_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 34)).stringValue ()) ;
              } break ;
            case kBoolFalse : {
              const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_1314.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 35)))).boolEnum () ;
              switch (test_6) {
              case kBoolTrue : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_1314.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 36)).stringValue ()) ;
                result.appendString (" & outArgument") ;
                result.appendString (index_1314_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 36)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                result.appendString ("class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_1314.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 38)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_1314_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 38)).stringValue ()) ;
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
          if (enumerator_1314.hasNextObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_1314_IDX.increment () ;
          enumerator_1314.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_1113.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 42)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_7) {
      case kBoolTrue : {
        const enumGalgasBool test_8 = enumerator_1113.current_mHasCompilerArgument (HERE).boolEnum () ;
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
        const enumGalgasBool test_9 = enumerator_1113.current_mHasCompilerArgument (HERE).boolEnum () ;
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
      index_1113_.increment () ;
      enumerator_1113.gotoNextObject () ;
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
  result.appendString (" result ;\n  result.makeNewEmptyGraph (THERE) ;\n  return result ;\n}\n\n") ;
  GALGAS_uint index_696_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    cEnumerator_graphInsertModifierList enumerator_696 (in_INSERT_5F_MODIFIER_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_696.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_696.current_mInsertModifierName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_1051_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).readProperty_mAddAssignOperatorArguments ().isValid ()) {
        cEnumerator_functionSignature enumerator_1051 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).readProperty_mAddAssignOperatorArguments (), EnumerationOrder::up) ;
        while (enumerator_1051.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_1051.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue ()) ;
          result.appendString (" inArgument_") ;
          result.appendString (index_1051_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue ()) ;
          index_1051_IDX.increment () ;
          enumerator_1051.gotoNextObject () ;
        }
      }
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 29)).stringValue ()) ;
      result.appendString ("::makeAttributesFromObjects (attributes") ;
      GALGAS_uint index_1491_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).readProperty_mAddAssignOperatorArguments ().isValid ()) {
        cEnumerator_functionSignature enumerator_1491 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).readProperty_mAddAssignOperatorArguments (), EnumerationOrder::up) ;
        while (enumerator_1491.hasCurrentObject ()) {
          result.appendString (", inArgument_") ;
          result.appendString (index_1491_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).stringValue ()) ;
          index_1491_IDX.increment () ;
          enumerator_1491.gotoNextObject () ;
        }
      }
      result.appendString (" COMMA_THERE) ;\n  const char * kErrorMessage = ") ;
      result.appendString (enumerator_696.current_mInsertErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 34)).stringValue ()) ;
      result.appendString (" ;\n  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;\n}\n\n") ;
      index_696_.increment () ;
      enumerator_696.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_topologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 43)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray sortedList ;\n  capCollectionElementArray unsortedList ;\n  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_depthFirstTopologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 58)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 60)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray sortedList ;\n  capCollectionElementArray unsortedList ;\n  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 67)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 68)).stringValue ()) ;
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
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 87)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoSuccessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 92)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 97)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoPredecessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 102)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GALGAS_lstringlist & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElementArray infoList ;\n  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 107)).stringValue ()) ;
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
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 123)).stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_nodeList (UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 124)).stringValue ()) ;
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
//Filewrapper template 'typeGenerationTemplate listmapTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (Compiler * inCompiler,
                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_listmap {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_listmap () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyMap (LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyListMap (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_string & inKey") ;
  GALGAS_uint index_727_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_727 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_727.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_727.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_727_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue ()) ;
      index_727_IDX.increment () ;
      enumerator_727.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()") ;
  GALGAS_uint index_948_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_948 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_948.hasCurrentObject ()) {
      result.appendString (" && inOperand") ;
      result.appendString (index_948_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      index_948_IDX.increment () ;
      enumerator_948.gotoNextObject () ;
    }
  }
  result.appendString (") {\n    capCollectionElement attributes ;\n    GALGAS_") ;
  result.appendString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (attributes") ;
  GALGAS_uint index_1236_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1236 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1236.hasCurrentObject ()) {
      result.appendString (", inOperand") ;
      result.appendString (index_1236_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 30)).stringValue ()) ;
      index_1236_IDX.increment () ;
      enumerator_1236.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE) ;\n    addObjectInListMap (inKey.stringValue (), attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_string inKey") ;
  GALGAS_uint index_1603_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1603 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1603.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1603.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 41)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_1603_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 41)).stringValue ()) ;
      index_1603_IDX.increment () ;
      enumerator_1603.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()") ;
  GALGAS_uint index_1911_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1911 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1911.hasCurrentObject ()) {
      result.appendString (" && inOperand") ;
      result.appendString (index_1911_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      index_1911_IDX.increment () ;
      enumerator_1911.gotoNextObject () ;
    }
  }
  result.appendString (") {\n    capCollectionElement attributes ;\n    GALGAS_") ;
  result.appendString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (attributes") ;
  GALGAS_uint index_2145_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2145 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2145.hasCurrentObject ()) {
      result.appendString (", inOperand") ;
      result.appendString (index_2145_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 53)).stringValue ()) ;
      index_2145_IDX.increment () ;
      enumerator_2145.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE) ;\n    addObjectInListMap (inKey.stringValue (), attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_listForKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_string & inKey\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  return GALGAS_") ;
  result.appendString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (listForKey (inKey)) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
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
  result.appendString ("::current (LOCATION_ARGS) const {\n  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cListMapElement) ;\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element (p->mKey, p->mSharedListMapList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_string cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_key (LOCATION_ARGS) const {\n  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cListMapElement) ;\n  return GALGAS_string (p->mKey) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_mList (LOCATION_ARGS) const {\n  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cListMapElement) ;\n  return GALGAS_") ;
  result.appendString (in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (p->mSharedListMapList) ;\n}\n\n") ;
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
                                                                            const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 2: class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cMapElement {\n//--- Map attributes\n") ;
  GALGAS_uint index_453_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_453 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_453.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_453.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_453.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_453_.increment () ;
      enumerator_453.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--- Constructor\n  public: cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_780_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_780 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_780.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_780.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_780.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue ()) ;
      index_780_.increment () ;
      enumerator_780.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cMapElement * copy (void) ;\n\n//--- Description\n public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n} ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\ncMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_287_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_287 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_287.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_287.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_287.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue ()) ;
      index_287_.increment () ;
      enumerator_287.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncMapElement (inKey COMMA_THERE)") ;
  GALGAS_uint index_561_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_561 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_561.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_561.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" (in_") ;
      result.appendString (enumerator_561.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (")") ;
      index_561_.increment () ;
      enumerator_561.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mProperty_lkey.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement * cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cMapElement * result = nullptr ;\n  macroMyNew (result, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mProperty_lkey") ;
  GALGAS_uint index_1209_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1209 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1209.hasCurrentObject ()) {
      result.appendString (", mProperty_") ;
      result.appendString (enumerator_1209.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 28)).stringValue ()) ;
      index_1209_.increment () ;
      enumerator_1209.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 36)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
    GALGAS_uint index_1779_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1779 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_1779.hasCurrentObject ()) {
        result.appendString ("  ioString.appendNewLine () ;\n  ioString.appendStringMultiple (\"| \", inIndentation) ;\n  ioString.appendCString (") ;
        result.appendString (enumerator_1779.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (" \":\") ;\n  mProperty_") ;
        result.appendString (enumerator_1779.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 44)).stringValue ()) ;
        result.appendString (".description (ioString, inIndentation) ;\n") ;
        index_1779_.increment () ;
        enumerator_1779.gotoNextObject () ;
      }
    }
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::compare (const cCollectionElement * inOperand) const {\n  cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * operand = (cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inOperand ;\n  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;\n") ;
  GALGAS_uint index_2568_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2568 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2568.hasCurrentObject ()) {
      result.appendString ("  if (ComparisonResult::operandEqual == result) {\n    result = mProperty_") ;
      result.appendString (enumerator_2568.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (".objectCompare (operand->mProperty_") ;
      result.appendString (enumerator_2568.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (") ;\n  }\n") ;
      index_2568_.increment () ;
      enumerator_2568.gotoNextObject () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
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
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_4896_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4896 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4896.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4896.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 111)).stringValue ()) ;
      result.appendString (" & inArgument") ;
      result.appendString (index_4896_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 111)).stringValue ()) ;
      index_4896_IDX.increment () ;
      enumerator_4896.gotoNextObject () ;
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
  GALGAS_uint index_5265_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5265 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5265.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_5265_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 118)).stringValue ()) ;
      index_5265_IDX.increment () ;
      enumerator_5265.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n") ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).uintValue ())) ;
  }
  result.appendString ("const char * kInsertErrorMessage = \"@") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" insert error: '%K' already in map\" ;\nconst char * kShadowErrorMessage = \"\" ;\nperformInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n") ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).uintValue ())) ;
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
  GALGAS_uint index_6303_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6303 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6303.hasCurrentObject ()) {
      result.appendString (", enumerator.current_") ;
      result.appendString (enumerator_6303.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 141)).stringValue ()) ;
      result.appendString (" (HERE)") ;
      index_6303_.increment () ;
      enumerator_6303.gotoNextObject () ;
    }
  }
  result.appendString (", inCompiler COMMA_THERE) ;\n    enumerator.gotoNextObject () ;\n  }\n  return result ;\n}\n\n") ;
  GALGAS_uint index_6551_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_6551 (in_INSERT_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6551.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_6551.current_mInsertMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 151)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_6841_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6841 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_6841.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_6841.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue ()) ;
          result.appendString (" inArgument") ;
          result.appendString (index_6841_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue ()) ;
          index_6841_IDX.increment () ;
          enumerator_6841.gotoNextObject () ;
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
      GALGAS_uint index_7225_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_7225 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_7225.hasCurrentObject ()) {
          result.appendString (", inArgument") ;
          result.appendString (index_7225_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 160)).stringValue ()) ;
          index_7225_IDX.increment () ;
          enumerator_7225.gotoNextObject () ;
        }
      }
      result.appendString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n") ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).isValid ()) {
        result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).uintValue ())) ;
      }
      result.appendString ("const char * kInsertErrorMessage = ") ;
      result.appendString (enumerator_6551.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 167)).stringValue ()) ;
      result.appendString (" ;\nconst char * kShadowErrorMessage = ") ;
      result.appendString (enumerator_6551.current_mShadowErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (" ;\nperformInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n") ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).isValid ()) {
        result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).uintValue ())) ;
      }
      result.appendString ("}\n\n") ;
      index_6551_.increment () ;
      enumerator_6551.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7808_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_7808 (in_SEARCH_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7808.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nconst char * kSearchErrorMessage_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_7808.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_7808.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::method_") ;
      result.appendString (enumerator_7808.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 178)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_8407_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8407 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_8407.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_8407.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 180)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_8407_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 180)).stringValue ()) ;
          index_8407_IDX.increment () ;
          enumerator_8407.gotoNextObject () ;
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
      result.appendString (enumerator_7808.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 186)).stringValue ()) ;
      result.appendString ("\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_THERE) ;\n  if (nullptr == p) {\n") ;
      GALGAS_uint index_8996_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8996 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_8996.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_8996_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 190)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          index_8996_IDX.increment () ;
          enumerator_8996.gotoNextObject () ;
        }
      }
      result.appendString ("  }else{\n    macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n") ;
      GALGAS_uint index_9229_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9229 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_9229.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_9229_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 195)).stringValue ()) ;
          result.appendString (" = p->mProperty_") ;
          result.appendString (enumerator_9229.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 195)).stringValue ()) ;
          result.appendString (" ;\n") ;
          index_9229_IDX.increment () ;
          enumerator_9229.gotoNextObject () ;
        }
      }
      result.appendString ("  }\n}\n\n") ;
      index_7808_.increment () ;
      enumerator_7808.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9420_ (0) ;
  if (in_REMOVE_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapRemoveMethodListAST enumerator_9420 (in_REMOVE_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9420.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_9420.current_mMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 204)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_9734_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9734 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_9734.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_9734.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 206)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_9734_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 206)).stringValue ()) ;
          index_9734_IDX.increment () ;
          enumerator_9734.gotoNextObject () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  const char * kRemoveErrorMessage = ") ;
      result.appendString (enumerator_9420.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (" ;\n  capCollectionElement attributes ;\n  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;\n  cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
      GALGAS_uint index_10356_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10356 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_10356.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_10356_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 216)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          index_10356_IDX.increment () ;
          enumerator_10356.gotoNextObject () ;
        }
      }
      result.appendString ("  }else{\n    macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n") ;
      GALGAS_uint index_10591_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10591 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_10591.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_10591_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 221)).stringValue ()) ;
          result.appendString (" = p->mProperty_") ;
          result.appendString (enumerator_10591.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 221)).stringValue ()) ;
          result.appendString (" ;\n") ;
          index_10591_IDX.increment () ;
          enumerator_10591.gotoNextObject () ;
        }
      }
      result.appendString ("  }\n}\n\n") ;
      index_9420_.increment () ;
      enumerator_9420.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::setter_insertOrReplace (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("GALGAS_lstring inKey") ;
    GALGAS_uint index_11043_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_11043 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_11043.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_11043.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 232)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_11043_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 232)).stringValue ()) ;
        index_11043_IDX.increment () ;
        enumerator_11043.gotoNextObject () ;
      }
    }
    result.appendString ("\n ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inKey") ;
    GALGAS_uint index_11391_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_11391 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_11391.hasCurrentObject ()) {
        result.appendString (", inArgument") ;
        result.appendString (index_11391_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 238)).stringValue ()) ;
        index_11391_IDX.increment () ;
        enumerator_11391.gotoNextObject () ;
      }
    }
    result.appendString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  performInsertOrReplace (attributes) ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_11714_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11714 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11714.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11714.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 250)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_11714.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 250)).stringValue ()) ;
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
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11714.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 255)).stringValue ()) ;
      result.appendString (" result ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    result = p->mProperty_") ;
      result.appendString (enumerator_11714.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 258)).stringValue ()) ;
      result.appendString (" ;\n  }\n  return result ;\n}\n\n") ;
      index_11714_IDX.increment () ;
      enumerator_11714.gotoNextObject () ;
    }
  }
  GALGAS_uint index_12771_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12771 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12771.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_set") ;
      result.appendString (enumerator_12771.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 266)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 266)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_12771.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 266)).stringValue ()) ;
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
      result.appendString (enumerator_12771.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 274)).stringValue ()) ;
      result.appendString (" = inAttributeValue ;\n  }\n}\n\n") ;
      index_12771_IDX.increment () ;
      enumerator_12771.gotoNextObject () ;
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
  GALGAS_uint index_15174_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15174 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_15174.hasCurrentObject ()) {
      result.appendString (", p->mProperty_") ;
      result.appendString (enumerator_15174.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 306)).stringValue ()) ;
      index_15174_.increment () ;
      enumerator_15174.gotoNextObject () ;
    }
  }
  result.appendString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_lstring cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_lkey (LOCATION_ARGS) const {\n  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement) ;\n  return p->mProperty_lkey ;\n}\n\n") ;
  GALGAS_uint index_15673_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15673 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_15673.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_15673.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 321)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_15673.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 321)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mProperty_") ;
      result.appendString (enumerator_15673.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_15673_IDX.increment () ;
      enumerator_15673.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::optional_searchKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_string & inKey") ;
  GALGAS_uint index_16514_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16514 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_16514.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_16514.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 331)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_16514_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 331)).stringValue ()) ;
      index_16514_IDX.increment () ;
      enumerator_16514.gotoNextObject () ;
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
  GALGAS_uint index_16961_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16961 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_16961.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_16961_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 339)).stringValue ()) ;
      result.appendString (" = p->mProperty_") ;
      result.appendString (enumerator_16961.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 339)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_16961_IDX.increment () ;
      enumerator_16961.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n") ;
  GALGAS_uint index_17166_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17166 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_17166.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_17166_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 343)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_17166_IDX.increment () ;
      enumerator_17166.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n  return result ;\n}\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" dict"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Attributes\n  private: cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mSharedDict ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--- isValid\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedDict != nullptr ; }\n\n//--- drop\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--- Implementation of reader 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n\n//--- Insulate\n  private: void insulate (LOCATION_ARGS) ;\n\n//--- Object compare\n  public: VIRTUAL_IN_DEBUG ComparisonResult objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const ;\n\n//--- Enumeration\n  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nclass cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element {\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mInfPtr ;\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mSupPtr ;\n  public: int32_t mBalance ;\n\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & in_key") ;
  GALGAS_uint index_458_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_458 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_458.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_458.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" & inProperty_") ;
      result.appendString (enumerator_458.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue ()) ;
      index_458_.increment () ;
      enumerator_458.gotoNextObject () ;
    }
  }
  result.appendString (") :\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element (in_key") ;
  GALGAS_uint index_693_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_693 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_693.hasCurrentObject ()) {
      result.appendString (", inProperty_") ;
      result.appendString (enumerator_693.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 15)).stringValue ()) ;
      index_693_.increment () ;
      enumerator_693.gotoNextObject () ;
    }
  }
  result.appendString ("),\n  mInfPtr (nullptr),\n  mSupPtr (nullptr),\n  mBalance (0) {\n  }\n\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) ;\n\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("& operator = (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n  public: virtual ~ cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n    macroMyDelete (mInfPtr) ;\n    macroMyDelete (mSupPtr) ;\n  }\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public SharedObject {\n//--------------------------------- Attributes\n  private: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mRoot ;\n  private: uint32_t mCount ;\n\n//--------------------------------- Constructor\n  protected: cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (LOCATION_ARGS) :\n  SharedObject (THERE),\n  mRoot (nullptr),\n  mCount (0) {\n  }\n\n//--------------------------------- Virtual destructor\n  protected: virtual ~ cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n    macroMyDelete (mRoot) ;\n  }\n\n//--------------------------------- No copy\n  private: cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) ;\n  private: cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) ;\n\n//--------------------------------- Copy a map\n  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) ;\n\n//--------------------------------- Insert\n  protected: VIRTUAL_IN_DEBUG void performInsert (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element & inNewNode,\n                                                  const bool inEntryOverrideAllowed) {\n    macroUniqueSharedObject (this) ;\n    bool extension = false ;\n    bool entryAlreadyInDict = false ;\n    recursiveAddEntry (mRoot, inNewNode, entryAlreadyInDict, extension, inEntryOverrideAllowed) ;\n    if (!entryAlreadyInDict) {\n      mCount ++ ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      checkDict (HERE) ;\n    #endif\n  }\n\n  protected: static void rotateLeft (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr) {\n    cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = ioRootPtr->mSupPtr ;\n    ioRootPtr->mSupPtr = ptr->mInfPtr ;\n    ptr->mInfPtr = ioRootPtr;\n\n    if (ptr->mBalance >= 0) {\n      ioRootPtr->mBalance ++ ;\n    }else{\n      ioRootPtr->mBalance += 1 - ptr->mBalance ;\n    }\n\n    if (ioRootPtr->mBalance > 0) {\n      ptr->mBalance += ioRootPtr->mBalance + 1 ;\n    }else{\n      ptr->mBalance ++ ;\n    }\n    ioRootPtr = ptr ;\n  }\n\n  protected: static void rotateRight (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr) {\n    cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = ioRootPtr->mInfPtr ;\n    ioRootPtr->mInfPtr = ptr->mSupPtr ;\n    ptr->mSupPtr = ioRootPtr ;\n   \n    if (ptr->mBalance > 0) {\n      ioRootPtr->mBalance += -ptr->mBalance - 1 ;\n    }else{\n      ioRootPtr->mBalance -- ;\n    }\n    if (ioRootPtr->mBalance >= 0) {\n      ptr->mBalance -- ;\n    }else{\n      ptr->mBalance += ioRootPtr->mBalance - 1 ;\n    }\n    ioRootPtr = ptr ;\n  }\n\n  protected: static void recursiveAddEntry (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr,\n                                            const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element & inNewNode,\n                                            bool & outEntryAlreadyPresent,\n                                            bool & ioExtension,\n                                            const bool inEntryOverrideAllowed) {\n    if (ioRootPtr == nullptr) {\n      macroMyNew (ioRootPtr, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNewNode.mProperty_key") ;
  GALGAS_uint index_4321_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4321 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4321.hasCurrentObject ()) {
      result.appendString (", inNewNode.mProperty_") ;
      result.appendString (enumerator_4321.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 121)).stringValue ()) ;
      index_4321_.increment () ;
      enumerator_4321.gotoNextObject () ;
    }
  }
  result.appendString (")) ;\n      ioExtension = true ;\n      outEntryAlreadyPresent = false ;\n    }else{\n      macroValidPointer (ioRootPtr) ;\n      const ComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;\n      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {\n        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;\n        if (ioExtension) {\n          ioRootPtr->mBalance++;\n          if (ioRootPtr->mBalance == 0) {\n            ioExtension = false;\n          }else if (ioRootPtr->mBalance == 2) {\n            if (ioRootPtr->mInfPtr->mBalance == -1) {\n              rotateLeft (ioRootPtr->mInfPtr) ;\n            }\n            rotateRight (ioRootPtr) ;\n            ioExtension = false;\n          }\n        }\n      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {\n        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;\n        if (ioExtension) {\n          ioRootPtr->mBalance-- ;\n          if (ioRootPtr->mBalance == 0) {\n            ioExtension = false ;\n          }else if (ioRootPtr->mBalance == -2) {\n            if (ioRootPtr->mSupPtr->mBalance == 1) {\n              rotateRight (ioRootPtr->mSupPtr) ;\n            }\n            rotateLeft (ioRootPtr) ;\n            ioExtension = false;\n          }\n        }\n      }else{  // Found\n        ioExtension = false ;\n        outEntryAlreadyPresent = true ;\n        if (inEntryOverrideAllowed) {\n") ;
  GALGAS_uint index_5998_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5998 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5998.hasCurrentObject ()) {
      result.appendString ("          ioRootPtr->mProperty_") ;
      result.appendString (enumerator_5998.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 163)).stringValue ()) ;
      result.appendString (" = inNewNode.mProperty_") ;
      result.appendString (enumerator_5998.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 163)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_5998_.increment () ;
      enumerator_5998.gotoNextObject () ;
    }
  }
  result.appendString ("        }\n      }\n    }\n  }\n\n//--------------------------------- Search\n  private: VIRTUAL_IN_DEBUG cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * findEntryInDict (const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey) const {\n    cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * result = nullptr ;\n    cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * currentNode = mRoot ;\n    while ((currentNode != nullptr) && (nullptr == result)) {\n      macroValidPointer (currentNode) ;\n      const ComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;\n      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {\n        currentNode = currentNode->mInfPtr ;\n      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {\n        currentNode = currentNode->mSupPtr ;\n      }else{ // Found\n        result = currentNode ;\n      }\n    }\n    return result ;\n  }\n\n//--------------------------------- Remove\n  protected: VIRTUAL_IN_DEBUG void performRemove (const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & outRemovedNodePtr) {\n    bool branchHasBeenRemoved = false ; // Unused here\n    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;\n    if (nullptr != outRemovedNodePtr) {\n      mCount -- ;\n    }\n  }\n\n  protected: static void supBranchDecreased (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRoot,\n                                              bool & ioBranchHasBeenRemoved) {\n    ioRoot->mBalance ++ ;\n    switch (ioRoot->mBalance) {\n    case 0:\n      break;\n    case 1:\n      ioBranchHasBeenRemoved = false;\n      break;\n    case 2:\n      switch (ioRoot->mInfPtr->mBalance) {\n      case -1:\n        rotateLeft (ioRoot->mInfPtr) ;\n        rotateRight (ioRoot) ;\n        break;\n      case 0:\n        rotateRight (ioRoot) ;\n        ioBranchHasBeenRemoved = false;\n        break;\n      case 1:\n        rotateRight (ioRoot) ;\n        break;\n      }\n      break;\n    }\n  }\n\n  protected: static void infBranchDecreased (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRoot,\n                                              bool & ioBranchHasBeenRemoved) {\n    ioRoot->mBalance -- ;\n    switch (ioRoot->mBalance) {\n    case 0:\n      break;\n    case -1:\n      ioBranchHasBeenRemoved = false;\n      break;\n    case -2:\n      switch (ioRoot->mSupPtr->mBalance) {\n      case 1:\n        rotateRight (ioRoot->mSupPtr) ;\n        rotateLeft (ioRoot) ;\n        break;\n      case 0:\n        rotateLeft (ioRoot) ;\n        ioBranchHasBeenRemoved = false;\n        break;\n      case -1:\n        rotateLeft (ioRoot) ;\n        break;\n      }\n      break;\n    }\n  }\n\n  protected: static void getPreviousElement (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRoot,\n                                             cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioElement,\n                                             bool & ioBranchHasBeenRemoved) {\n    if (ioRoot->mSupPtr == nullptr) {\n      ioElement = ioRoot ;\n      ioRoot = ioRoot->mInfPtr ;\n      ioBranchHasBeenRemoved = true ;\n    }else{\n      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;\n      if (ioBranchHasBeenRemoved) {\n        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n      }\n    }\n  }\n\n  protected: static void internalRemoveRecursively (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRoot,\n                                                     const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKeyToRemove,\n                                                     cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & outRemovedNode,\n                                                     bool & ioBranchHasBeenRemoved) {\n    if (ioRoot != nullptr) {\n      const ComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;\n      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {\n        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n        if (ioBranchHasBeenRemoved) {\n          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n        }\n      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {\n        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n        if (ioBranchHasBeenRemoved) {\n          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);\n        }\n      }else{\n        cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = ioRoot ;\n        if (p->mInfPtr == nullptr) {\n          ioRoot = p->mSupPtr;\n          p->mSupPtr = nullptr;\n          ioBranchHasBeenRemoved = true;\n        }else if (p->mSupPtr == nullptr) {\n          ioRoot = p->mInfPtr;\n          p->mInfPtr = nullptr;\n          ioBranchHasBeenRemoved = true;\n        }else{\n          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;\n          ioRoot->mSupPtr = p->mSupPtr;\n          p->mSupPtr = nullptr;\n          ioRoot->mInfPtr = p->mInfPtr;\n          p->mInfPtr = nullptr;\n          ioRoot->mBalance = p->mBalance;\n          p->mBalance = 0;\n          if (ioBranchHasBeenRemoved) {\n            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n          }\n        }\n        outRemovedNode = p ;\n      }\n    }\n  }\n\n//--------------------------------- Internal method for enumeration\n  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n\n//--------------------------------- Check Dictionary\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n      private: VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {\n      uint32_t n = 0 ;\n      checkNode (mRoot, n) ;\n      macroAssertThere (n == mCount, \"n (%lld) != mCount (%lld)\", n, mCount) ;\n    }\n  #endif\n\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    private: static void checkNode (const cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                                     uint32_t & ioCount) {\n      if (nullptr != inNode) {\n        checkNode (inNode->mInfPtr, ioCount) ;\n        ioCount ++ ;\n        checkNode (inNode->mSupPtr, ioCount) ;\n      }\n    }\n  #endif\n\n//--------------------------------- Compare Dictionaries\n  public: ComparisonResult compare (const cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inOperand) const {\n    ComparisonResult result = ComparisonResult::operandEqual ;\n    if (mCount < inOperand->mCount) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mCount > inOperand->mCount) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      capCollectionElementArray enumerationArray ;\n      populateEnumerationArray (enumerationArray) ;\n      capCollectionElementArray operandEnumerationArray ;\n      inOperand->populateEnumerationArray (operandEnumerationArray) ;\n      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;\n    }\n    return result ;\n  }\n\n//--------------------------------- Friend\n  friend class GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n} ;\n\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmSharedDict (nullptr) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n  macroDetachSharedObject (mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmSharedDict (nullptr) {\n  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  macroDetachSharedObject (mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyDict (LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  macroMyNew (result.mSharedDict, cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Description\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void internalDescription_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                                 String & ioString,\n                                 const int32_t inIndentation) {\n  if (nullptr != inNode) {\n    internalDescription_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mInfPtr, ioString, inIndentation) ;\n    ioString.appendNewLine () ;\n    inNode->description (ioString, inIndentation) ;\n    internalDescription_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mSupPtr, ioString, inIndentation) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                             const int32_t inIndentation) const {\n  ioString.appendCString (\"<dict @\") ;\n  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\":\") ;\n  if (isValid ()) {\n    internalDescription_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mSharedDict->mRoot, ioString, inIndentation) ;\n  }else{\n    ioString.appendCString (\" not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_uint GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GALGAS_uint result ;\n  if (isValid ()) {\n    result = GALGAS_uint (mSharedDict->mCount) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Insulate\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\ncNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) :\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element (inNode->mProperty_key") ;
  GALGAS_uint index_16619_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16619 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_16619.hasCurrentObject ()) {
      result.appendString (", inNode->mProperty_") ;
      result.appendString (enumerator_16619.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 452)).stringValue ()) ;
      index_16619_.increment () ;
      enumerator_16619.gotoNextObject () ;
    }
  }
  result.appendString ("),\nmInfPtr (nullptr),\nmSupPtr (nullptr),\nmBalance (inNode->mBalance) {\n  if (inNode->mInfPtr != nullptr) {\n    macroMyNew (mInfPtr, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mInfPtr)) ;\n  }\n  if (inNode->mSupPtr != nullptr) {\n    macroMyNew (mSupPtr, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mSupPtr)) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copyFrom (const cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) {\n  macroUniqueSharedObject (this) ;\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    inSource->checkDict (HERE) ;\n  #endif\n  macroValidSharedObject (inSource, cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  mCount = inSource->mCount ;\n  if (nullptr != inSource->mRoot) {\n    macroMyNew (mRoot, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inSource->mRoot)) ;\n  }\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkDict (HERE) ;\n  #endif\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::insulate (LOCATION_ARGS) {\n  if ((nullptr != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {\n    cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n    macroMyNew (p, cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n    p->copyFrom (mSharedDict) ;\n    macroAssignSharedObject (mSharedDict, p) ;\n    macroDetachSharedObject (p) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Insert\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey") ;
  GALGAS_uint index_18488_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18488 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_18488.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_18488.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 505)).stringValue ()) ;
      result.appendString (" & inArgument") ;
      result.appendString (index_18488_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 505)).stringValue ()) ;
      index_18488_IDX.increment () ;
      enumerator_18488.gotoNextObject () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element newElement (inKey") ;
  GALGAS_uint index_18764_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18764 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_18764.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_18764_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 511)).stringValue ()) ;
      index_18764_IDX.increment () ;
      enumerator_18764.gotoNextObject () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && newElement.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    const bool entryOverrideAllowed = true ;\n    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GALGAS_uint index_19292_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19292 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_19292.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_19292.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 526)).stringValue ()) ;
      result.appendString (" inArgument") ;
      result.appendString (index_19292_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 526)).stringValue ()) ;
      index_19292_IDX.increment () ;
      enumerator_19292.gotoNextObject () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element newElement (inKey") ;
  GALGAS_uint index_19566_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19566 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_19566.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_19566_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 532)).stringValue ()) ;
      index_19566_IDX.increment () ;
      enumerator_19566.gotoNextObject () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && newElement.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    const bool entryOverrideAllowed = true ;\n    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_hasKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    const cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mSharedDict->findEntryInDict (inKey) ;\n    result = GALGAS_bool (p != nullptr) ;\n   }\n   return result ;\n }\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_searchKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GALGAS_uint index_20553_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20553 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_20553.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_20553.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 559)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_20553_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 559)).stringValue ()) ;
      index_20553_IDX.increment () ;
      enumerator_20553.gotoNextObject () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  const cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  if (isValid () && inKey.isValid ()) {\n    p = mSharedDict->findEntryInDict (inKey) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot search in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_21150_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21150 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_21150.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_21150_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 576)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_21150_IDX.increment () ;
      enumerator_21150.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_21330_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21330 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_21330.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_21330_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 582)).stringValue ()) ;
      result.appendString (" = p->mProperty_") ;
      result.appendString (enumerator_21330.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 582)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_21330_IDX.increment () ;
      enumerator_21330.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GALGAS_uint index_21700_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21700 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_21700.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_21700.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 590)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_21700_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 590)).stringValue ()) ;
      index_21700_IDX.increment () ;
      enumerator_21700.gotoNextObject () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  if (isValid () && inKey.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    mSharedDict->performRemove (inKey, p) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot remove in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_22349_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22349 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_22349.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_22349_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 609)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_22349_IDX.increment () ;
      enumerator_22349.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_22529_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22529 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_22529.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_22529_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 615)).stringValue ()) ;
      result.appendString (" = p->mProperty_") ;
      result.appendString (enumerator_22529.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 615)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_22529_IDX.increment () ;
      enumerator_22529.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n") ;
  GALGAS_uint index_22709_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22709 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_22709.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_22709.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 622)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_22709.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 622)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GALGAS_") ;
      result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" & inKey,\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_22709.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 625)).stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n  const cNode_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = mSharedDict->findEntryInDict (inKey) ;\n   if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot get ") ;
      result.appendString (enumerator_22709.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 630)).stringValue ()) ;
      result.appendString (" ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      macroValidSharedObject (p, cNode_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n      result = p->mProperty_") ;
      result.appendString (enumerator_22709.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 635)).stringValue ()) ;
      result.appendString ("  ;\n    }\n  }\n  return result ;\n}\n\n") ;
      index_22709_.increment () ;
      enumerator_22709.gotoNextObject () ;
    }
  }
  GALGAS_uint index_23970_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_23970 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_23970.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_set") ;
      result.appendString (enumerator_23970.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 645)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 645)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_23970.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 645)).stringValue ()) ;
      result.appendString (" inPropertyValue,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GALGAS_") ;
      result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" inKey,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    cNode_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = mSharedDict->findEntryInDict (inKey) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot set") ;
      result.appendString (enumerator_23970.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 655)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 655)).stringValue ()) ;
      result.appendString ("ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      p->mProperty_") ;
      result.appendString (enumerator_23970.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 659)).stringValue ()) ;
      result.appendString (" = inPropertyValue ;\n    }\n  }\n}\n\n") ;
      index_23970_.increment () ;
      enumerator_23970.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Object compare\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    result = mSharedDict->compare (inOperand.mSharedDict) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark map Enumeration\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nclass cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cCollectionElement {\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element mElement ;\n\n//--- Constructor\n  public: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element & inElement) :\n  cCollectionElement (HERE),\n  mElement (inElement) {\n  }\n\n//--- No copy\n  private: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) ;\n  private: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const { return mElement.isValid () ; }\n\n//--- Virtual method for comparing elements\n  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const {\n    const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inOperand ;\n    return mElement.objectCompare (p->mElement) ;\n  }\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mElement)) ;\n    return p ;\n  }\n\n//--- Description\n  public: virtual void description (String & ioString, const int32_t inIndentation) const {\n    mElement.description (ioString, inIndentation) ;\n  }\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void enterAscendingEnumeration_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                                                       capCollectionElementArray & ioEnumerationArray) {\n  if (inNode != nullptr) {\n    enterAscendingEnumeration_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mInfPtr, ioEnumerationArray) ;\n    cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (*inNode)) ;\n    capCollectionElement element ;\n    element.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    ioEnumerationArray.appendObject (element) ;\n    enterAscendingEnumeration_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mSupPtr, ioEnumerationArray) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkDict (HERE) ;\n  #endif\n  ioEnumerationArray.setCapacity (mCount) ;\n  enterAscendingEnumeration_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mRoot, ioEnumerationArray) ;\n  macroAssert (mCount == ioEnumerationArray.count (), \"mCount (%lld) != ioEnumerationArray.count () (%lld)\", mCount, ioEnumerationArray.count ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n  if (nullptr != mSharedDict) {\n    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject,\n                                                        const EnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("* p = dynamic_cast  <const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element (p->mElement) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_key (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("* p = dynamic_cast  <const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return p->mElement.mProperty_key ;\n}\n\n") ;
  GALGAS_uint index_30497_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_30497 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_30497.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_30497.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 785)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_30497.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 785)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("* p = dynamic_cast  <const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mElement.mProperty_") ;
      result.appendString (enumerator_30497.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 788)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_30497_IDX.increment () ;
      enumerator_30497.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::optional_searchKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey") ;
  GALGAS_uint index_31366_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31366 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_31366.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_31366.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 794)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_31366_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 794)).stringValue ()) ;
      index_31366_IDX.increment () ;
      enumerator_31366.gotoNextObject () ;
    }
  }
  result.appendString (") const {\n  const cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  if ((mSharedDict != nullptr) && inKey.isValid ()) {\n    p = (const cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) mSharedDict->findEntryInDict (inKey) ;\n  }\n  const bool result = nullptr != p ;\n  if (result) {\n    macroValidSharedObject (p, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_31897_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31897 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_31897.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_31897_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 805)).stringValue ()) ;
      result.appendString (" = p->mProperty_") ;
      result.appendString (enumerator_31897.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 805)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_31897_IDX.increment () ;
      enumerator_31897.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n") ;
  GALGAS_uint index_32104_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_32104 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_32104.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_32104_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 809)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_32104_IDX.increment () ;
      enumerator_32104.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n  return result ;\n}\n\n") ;
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
  GALGAS_uint index_1006_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1006 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1006.hasCurrentObject ()) {
      result.appendString ("  public: class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1006.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_1006.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (void) const ;\n\n") ;
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
  result.appendString ("//--- Properties\n") ;
  GALGAS_uint index_109_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_109 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_109.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_109.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_109.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_109_.increment () ;
      enumerator_109.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--- Constructor\n  public: cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_397_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_397 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_397.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_397.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_397.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      if (enumerator_397.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_397_.increment () ;
      enumerator_397.gotoNextObject () ;
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
  GALGAS_uint index_892_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_892 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_892.hasCurrentObject ()) {
      result.appendString ("  public: VIRTUAL_IN_DEBUG GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_892.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue ()) ;
      result.appendString (" getter_") ;
      result.appendString (enumerator_892.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      const enumGalgasBool test_2 = enumerator_892.current_hasSetter (HERE).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("  public: VIRTUAL_IN_DEBUG void setter_set") ;
        result.appendString (enumerator_892.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue ()) ;
        result.appendString (" (GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_892.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue ()) ;
        result.appendString (" inValue COMMA_LOCATION_ARGS) ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_892_.increment () ;
      enumerator_892.gotoNextObject () ;
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
    GALGAS_uint index_1086_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1086 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_1086.hasCurrentObject ()) {
        result.appendString ("  if (ComparisonResult::operandEqual == result) {\n    result = mProperty_") ;
        result.appendString (enumerator_1086.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue ()) ;
        result.appendString (".objectCompare (p->mProperty_") ;
        result.appendString (enumerator_1086.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        index_1086_.increment () ;
        enumerator_1086.gotoNextObject () ;
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
    GALGAS_uint index_3564_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3564 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3564.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3564.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (" & inAttribute_") ;
        result.appendString (enumerator_3564.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        if (enumerator_3564.hasNextObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_3564_.increment () ;
        enumerator_3564.gotoNextObject () ;
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
    GALGAS_uint index_3967_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3967 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3967.hasCurrentObject ()) {
        result.appendString ("inAttribute_") ;
        result.appendString (enumerator_3967.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 90)).stringValue ()) ;
        result.appendString (".isValid ()") ;
        if (enumerator_3967.hasNextObject ()) {
          result.appendString (" && ") ;
        }
        index_3967_.increment () ;
        enumerator_3967.gotoNextObject () ;
      }
    }
    result.appendString (") {\n    macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_4231_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4231 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4231.hasCurrentObject ()) {
        result.appendString ("inAttribute_") ;
        result.appendString (enumerator_4231.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 96)).stringValue ()) ;
        if (enumerator_4231.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_4231_.increment () ;
        enumerator_4231.gotoNextObject () ;
      }
    }
    result.appendString (" COMMA_THERE)) ;\n  }\n  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_4479_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4479 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4479.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4479.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::readProperty_") ;
      result.appendString (enumerator_4479.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" (void) const {\n  if (nullptr == mObjectPtr) {\n    return GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4479.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 109)).stringValue ()) ;
      result.appendString (" () ;\n  }else{\n    const cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    return p->mProperty_") ;
      result.appendString (enumerator_4479.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (" ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4479.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (" cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_4479.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mProperty_") ;
      result.appendString (enumerator_4479.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 118)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_4479_.increment () ;
      enumerator_4479.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5587_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5587 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5587.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_5587.current_hasSetter (HERE).boolEnum () ;
      switch (test_7) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_5587.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5587.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).stringValue ()) ;
        result.appendString (" inValue\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) {\n  if (nullptr != mObjectPtr) {\n    insulate (THERE) ;\n    cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    p->mProperty_") ;
        result.appendString (enumerator_5587.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 131)).stringValue ()) ;
        result.appendString (" = inValue ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_5587.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5587.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.appendString (" inValue\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  mProperty_") ;
        result.appendString (enumerator_5587.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 137)).stringValue ()) ;
        result.appendString (" = inValue ;\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_5587_.increment () ;
      enumerator_5587.gotoNextObject () ;
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
  GALGAS_uint index_7161_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7161 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7161.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7161.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_7161.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue ()) ;
      if (enumerator_7161.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7161_.increment () ;
      enumerator_7161.gotoNextObject () ;
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
  GALGAS_uint index_7602_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7602 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7602.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_7602.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 159)).stringValue ()) ;
      if (enumerator_7602.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7602_.increment () ;
      enumerator_7602.gotoNextObject () ;
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
  GALGAS_uint index_7864_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7864 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7864.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_7864.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (" (in_") ;
      result.appendString (enumerator_7864.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (")") ;
      index_7864_.increment () ;
      enumerator_7864.gotoNextObject () ;
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
      GALGAS_uint index_8858_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8858 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_8858.hasCurrentObject ()) {
          result.appendString ("  mProperty_") ;
          result.appendString (enumerator_8858.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 190)).stringValue ()) ;
          result.appendString (".description (ioString, inIndentation+1) ;\n") ;
          if (enumerator_8858.hasNextObject ()) {
            result.appendString ("  ioString.appendCString (\", \") ;\n") ;
          }
          index_8858_.increment () ;
          enumerator_8858.gotoNextObject () ;
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
    GALGAS_uint index_9453_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9453 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      const bool nonEmpty_enumerator_9453 = enumerator_9453.hasCurrentObject () ;
      while (enumerator_9453.hasCurrentObject ()) {
        result.appendString ("mProperty_") ;
        result.appendString (enumerator_9453.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 205)).stringValue ()) ;
        if (enumerator_9453.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_9453_.increment () ;
        enumerator_9453.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9453) {
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
  result.appendString (" * inSourcePtr) ;\n\n//--------------------------------- Property read access\n") ;
  GALGAS_uint index_822_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_822 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_822.hasCurrentObject ()) {
      result.appendString ("  public: class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_822.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_822.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" (void) const ;\n\n") ;
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
  result.appendString (" {\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (void) const override ;\n  #endif\n") ;
  GALGAS_uint index_647_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_647 (in_GETTER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_647.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_647.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString (function_generateClassGetterDeclaration (enumerator_647.current_lkey (HERE), enumerator_647.current_mArgumentTypeList (HERE), enumerator_647.current_mHasCompilerArgument (HERE), enumerator_647.current_mReturnedType (HERE), enumerator_647.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 15)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_647_.increment () ;
      enumerator_647.gotoNextObject () ;
    }
  }
  GALGAS_uint index_889_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_889 (in_INSTANCE_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_889.hasCurrentObject ()) {
      result.appendString (function_generateClassInstanceMethodDeclaration (enumerator_889.current_lkey (HERE), enumerator_889.current_mParameterList (HERE), enumerator_889.current_mHasCompilerArgument (HERE), enumerator_889.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 19)).stringValue ()) ;
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
  result.appendString ("//--- Properties\n") ;
  GALGAS_uint index_109_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_109 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_109.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_109.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_109.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_109_.increment () ;
      enumerator_109.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--- Constructor\n  public: cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_397_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_397 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_397.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_397.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_397.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      if (enumerator_397.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_397_.increment () ;
      enumerator_397.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GALGAS_string (" @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString (" reference class\n//--------------------------------------------------------------------------------------------------\n\n#ifndef DO_NOT_GENERATE_CHECKINGS\n  void cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::printNonNullClassInstanceProperties (void) const {\n  ") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
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
  GALGAS_uint index_621_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_621 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_621.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_621.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (".printNonNullClassInstanceProperties (\"") ;
      result.appendString (enumerator_621.current_mPropertyName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n") ;
      index_621_.increment () ;
      enumerator_621.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 20)).operator_and (GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 20)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 20)).boolEnum () ;
  switch (test_1) {
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
  const enumGalgasBool test_2 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 28)).operator_and (GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 28)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 28)).boolEnum () ;
  switch (test_2) {
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
    GALGAS_uint index_1659_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1659 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_1659.hasCurrentObject ()) {
        result.appendString ("  if (ComparisonResult::operandEqual == result) {\n    result = mProperty_") ;
        result.appendString (enumerator_1659.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (".objectCompare (p->mProperty_") ;
        result.appendString (enumerator_1659.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        index_1659_.increment () ;
        enumerator_1659.gotoNextObject () ;
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
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_3) {
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
  result.appendString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) :\n") ;
  const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_4) {
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
  const enumGalgasBool test_5 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 79)).operator_and (GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 79)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 79)).boolEnum () ;
  switch (test_5) {
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
  const enumGalgasBool test_6 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 88)).operator_and (GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 88)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 88)).boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4108_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4108 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4108.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_4108.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 92)).stringValue ()) ;
        result.appendString (" & inAttribute_") ;
        result.appendString (enumerator_4108.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 92)).stringValue ()) ;
        if (enumerator_4108.hasNextObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4108_.increment () ;
        enumerator_4108.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 95)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_7) {
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
    GALGAS_uint index_4511_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4511 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4511.hasCurrentObject ()) {
        result.appendString ("inAttribute_") ;
        result.appendString (enumerator_4511.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 104)).stringValue ()) ;
        result.appendString (".isValid ()") ;
        if (enumerator_4511.hasNextObject ()) {
          result.appendString (" && ") ;
        }
        index_4511_.increment () ;
        enumerator_4511.gotoNextObject () ;
      }
    }
    result.appendString (") {\n    macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_4775_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4775 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4775.hasCurrentObject ()) {
        result.appendString ("inAttribute_") ;
        result.appendString (enumerator_4775.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 110)).stringValue ()) ;
        if (enumerator_4775.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_4775_.increment () ;
        enumerator_4775.gotoNextObject () ;
      }
    }
    result.appendString (" COMMA_THERE)) ;\n  }\n  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_5024_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5024 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5024.hasCurrentObject ()) {
      const enumGalgasBool test_8 = enumerator_5024.current_hasSetter (HERE).boolEnum () ;
      switch (test_8) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_5024.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 122)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 122)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5024.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 122)).stringValue ()) ;
        result.appendString (" inValue\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (nullptr != mObjectPtr) {\n    cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    p->mProperty_") ;
        result.appendString (enumerator_5024.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 127)).stringValue ()) ;
        result.appendString (" = inValue ;\n  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_5024_.increment () ;
      enumerator_5024.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5806_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5806 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5806.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5806.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 136)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::readProperty_") ;
      result.appendString (enumerator_5806.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 136)).stringValue ()) ;
      result.appendString (" (void) const {\n  if (nullptr == mObjectPtr) {\n    return GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5806.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (" () ;\n  }else{\n    cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    return p->mProperty_") ;
      result.appendString (enumerator_5806.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 142)).stringValue ()) ;
      result.appendString (" ;\n  }\n}\n\n") ;
      index_5806_.increment () ;
      enumerator_5806.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 148)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 148)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6865_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6865 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6865.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6865.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 153)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_6865.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 153)).stringValue ()) ;
      if (enumerator_6865.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6865_.increment () ;
      enumerator_6865.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_9) {
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
  const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_10) {
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
  GALGAS_uint index_7312_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7312 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7312.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_7312.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 164)).stringValue ()) ;
      if (enumerator_7312.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7312_.increment () ;
      enumerator_7312.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_11 = GALGAS_bool (ComparisonKind::greaterThan, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 167)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_11) {
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
  GALGAS_uint index_7574_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7574 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7574.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_7574.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (" (in_") ;
      result.appendString (enumerator_7574.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (")") ;
      index_7574_.increment () ;
      enumerator_7574.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n") ;
  const enumGalgasBool test_12 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 180)).boolEnum () ;
  switch (test_12) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n}\n\n") ;
    const enumGalgasBool test_13 = GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 185)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_13) {
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
      GALGAS_uint index_8568_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8568 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_8568.hasCurrentObject ()) {
          result.appendString ("  mProperty_") ;
          result.appendString (enumerator_8568.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 195)).stringValue ()) ;
          result.appendString (".description (ioString, inIndentation+1) ;\n") ;
          if (enumerator_8568.hasNextObject ()) {
            result.appendString ("  ioString.appendCString (\", \") ;\n") ;
          }
          index_8568_.increment () ;
          enumerator_8568.gotoNextObject () ;
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
  const enumGalgasBool test_14 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 203)).boolEnum () ;
  switch (test_14) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nacPtr_class * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::duplicate (LOCATION_ARGS) const {\n  acPtr_class * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_9163_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9163 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      const bool nonEmpty_enumerator_9163 = enumerator_9163.hasCurrentObject () ;
      while (enumerator_9163.hasCurrentObject ()) {
        result.appendString ("mProperty_") ;
        result.appendString (enumerator_9163.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 210)).stringValue ()) ;
        if (enumerator_9163.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_9163_.increment () ;
        enumerator_9163.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9163) {
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
//Filewrapper template 'typeGenerationTemplate weakReferenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (Compiler * inCompiler,
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
//Filewrapper template 'typeGenerationTemplate typeAliasTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_typeAliasTypeHeader_31_ (Compiler * inCompiler,
                                                                                  const GALGAS_string & in_ALIAS_5F_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_string & in_REFERENCED_5F_TYPE_5F_IDENTIFIER
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_ALIAS_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_type_alias.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString (" type alias\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef GALGAS_") ;
  result.appendString (in_REFERENCED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_ALIAS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n") ;
  return GALGAS_string (result) ;
}

